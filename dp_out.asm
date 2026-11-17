; ------------------------------------------------------------------
; DP_OUT_U_CODE  (Intel Thunderbolt NVM image)
; file 0x06254-0x0A14B, logical 0x0000-0x3EF7, entry 0x0200
; recovered: 7266 instructions, 14382 bytes, 0 conflicts, 265 branch targets
; ------------------------------------------------------------------

; --- 0x000-0x1FF image header ---------------------------------------
; 0000: 02 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0010: 44 50 5F 4F 55 54 5F 55 5F 43 4F 44 45 00 00 00 |DP_OUT_U_CODE...|
; 0020: 00 00 00 07 00 00 04 00 03 01 00 06 05 00 00 03 |................|
; 0030: 00 02 00 00 05 03 00 00 00 00 03 00 00 00 00 00 |................|
; 0040: 31 00 43 4F 4E 46 49 47 35 00 00 41 00 00 00 00 |1.CONFIG5..A....|
; 0050: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0060: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0070: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0080: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0090: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00A0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00B0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00C0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00D0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00E0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 00F0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0100: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0110: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0120: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0130: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0140: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0150: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0160: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0170: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0180: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0190: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01A0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01B0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01C0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01D0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01E0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 01F0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; ------------------------------------------------------------------


IMAGE_ENTRY:
    0200: 02 02 08    LJMP 0x0208                      ; -> loc_0208

loc_0203:
    0203: 12 3E B9    LCALL 0x3EB9                     ; -> sub_3EB9
    0206: 80 FE       SJMP 0x0206                      ; -> 0x0206

loc_0208:
    0208: 75 81 92    MOV SP(0x81),#0x92            
    020B: 12 3E F1    LCALL 0x3EF1                     ; -> sub_3EF1
    020E: E5 82       MOV A,DPL(0x82)               
    0210: 60 03       JZ 0x0215                        ; -> loc_0215
    0212: 02 02 03    LJMP 0x0203                      ; -> loc_0203

loc_0215:
    0215: 79 00       MOV R1,#0x00                  
    0217: E9          MOV A,R1                      
    0218: 44 00       ORL A,#0x00                   
    021A: 60 1B       JZ 0x0237                        ; -> 0x0237
    021C: 7A 00       MOV R2,#0x00                  
    021E: 90 3E F7    MOV DPTR,#0x3EF7              
    0221: 78 00       MOV R0,#0x00                  
    0223: 75 A0 00    MOV P2(0xA0),#0x00            
    0226: E4          CLR A                         
    0227: 93          MOVC A,@A+DPTR                
    0228: F2          MOVX @R0,A                    
    0229: A3          INC DPTR                      
    022A: 08          INC R0                        
    022B: B8 00 02    CJNE R0,#0x00,0x0230             ; -> 0x0230
    022E: 05 A0       INC P2(0xA0)                  
    0230: D9 F4       DJNZ R1,0x0226                   ; -> 0x0226
    0232: DA F2       DJNZ R2,0x0226                   ; -> 0x0226
    0234: 75 A0 FF    MOV P2(0xA0),#0xFF            
    0237: 78 83       MOV R0,#0x83                  
    0239: 76 00       MOV @R0,#0x00                 
    023B: 78 84       MOV R0,#0x84                  
    023D: 76 00       MOV @R0,#0x00                 
    023F: 78 85       MOV R0,#0x85                  
    0241: 76 00       MOV @R0,#0x00                 
    0243: 78 86       MOV R0,#0x86                  
    0245: 76 00       MOV @R0,#0x00                 
    0247: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    024A: E4          CLR A                         
    024B: F0          MOVX @DPTR,A                  
    024C: 90 4F B4    MOV DPTR,#0x4FB4                 ; mailbox / host-interface register block
    024F: E4          CLR A                         
    0250: F0          MOVX @DPTR,A                  
    0251: 90 4F B5    MOV DPTR,#0x4FB5                 ; mailbox / host-interface register block
    0254: E4          CLR A                         
    0255: F0          MOVX @DPTR,A                  
    0256: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    0259: E4          CLR A                         
    025A: F0          MOVX @DPTR,A                  
    025B: A3          INC DPTR                      
    025C: F0          MOVX @DPTR,A                  
    025D: A3          INC DPTR                      
    025E: F0          MOVX @DPTR,A                  
    025F: A3          INC DPTR                      
    0260: F0          MOVX @DPTR,A                  
    0261: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    0264: E4          CLR A                         
    0265: F0          MOVX @DPTR,A                  
    0266: A3          INC DPTR                      
    0267: F0          MOVX @DPTR,A                  
    0268: 90 4F BF    MOV DPTR,#0x4FBF                 ; mailbox / host-interface register block
    026B: E4          CLR A                         
    026C: F0          MOVX @DPTR,A                  
    026D: 02 02 03    LJMP 0x0203                      ; -> loc_0203

sub_0270:
    0270: AA 82       MOV R2,0x82                   
    0272: 90 00 4B    MOV DPTR,#0x004B              
    0275: E4          CLR A                         
    0276: 93          MOVC A,@A+DPTR                
    0277: FB          MOV R3,A                      
    0278: E5 7A       MOV A,0x7A                    
    027A: 5B          ANL A,R3                      
    027B: 70 01       JNZ 0x027E                       ; -> loc_027E
    027D: 22          RET                           

loc_027E:
    027E: EA          MOV A,R2                      
    027F: 70 09       JNZ 0x028A                       ; -> loc_028A
    0281: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0284: E0          MOVX A,@DPTR                  
    0285: FA          MOV R2,A                      
    0286: B5 7B 01    CJNE A,0x7B,0x028A               ; -> loc_028A
    0289: 22          RET                           

loc_028A:
    028A: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    028D: E5 7B       MOV A,0x7B                    
    028F: F0          MOVX @DPTR,A                  
    0290: 90 00 48    MOV DPTR,#0x0048              
    0293: E4          CLR A                         
    0294: 93          MOVC A,@A+DPTR                
    0295: FA          MOV R2,A                      
    0296: 30 E0 57    JNB ACC.0,0x02F0                 ; -> 0x02F0
    0299: 90 00 49    MOV DPTR,#0x0049              
    029C: E4          CLR A                         
    029D: 93          MOVC A,@A+DPTR                
    029E: FA          MOV R2,A                      
    029F: 20 E0 28    JB ACC.0,0x02CA                  ; -> loc_02CA
    02A2: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02A5: E0          MOVX A,@DPTR                  
    02A6: FA          MOV R2,A                      
    02A7: BA 80 00    CJNE R2,#0x80,0x02AA             ; -> 0x02AA
    02AA: 50 44       JNC 0x02F0                       ; -> 0x02F0
    02AC: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02AF: E0          MOVX A,@DPTR                  
    02B0: FA          MOV R2,A                      
    02B1: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02B4: E0          MOVX A,@DPTR                  
    02B5: 24 01       ADD A,#0x01                   
    02B7: F0          MOVX @DPTR,A                  
    02B8: EA          MOV A,R2                      
    02B9: 24 27       ADD A,#0x27                   
    02BB: FA          MOV R2,A                      
    02BC: E4          CLR A                         
    02BD: 34 01       ADDC A,#0x01                  
    02BF: FB          MOV R3,A                      
    02C0: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    02C3: E0          MOVX A,@DPTR                  
    02C4: 8A 82       MOV 0x82,R2                   
    02C6: 8B 83       MOV 0x83,R3                   
    02C8: F0          MOVX @DPTR,A                  
    02C9: 22          RET                           

loc_02CA:
    02CA: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02CD: E0          MOVX A,@DPTR                  
    02CE: FA          MOV R2,A                      
    02CF: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02D2: E0          MOVX A,@DPTR                  
    02D3: 24 01       ADD A,#0x01                   
    02D5: F0          MOVX @DPTR,A                  
    02D6: EA          MOV A,R2                      
    02D7: 24 27       ADD A,#0x27                   
    02D9: FA          MOV R2,A                      
    02DA: E4          CLR A                         
    02DB: 34 01       ADDC A,#0x01                  
    02DD: FB          MOV R3,A                      
    02DE: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    02E1: E0          MOVX A,@DPTR                  
    02E2: FC          MOV R4,A                      
    02E3: 8A 82       MOV 0x82,R2                   
    02E5: 8B 83       MOV 0x83,R3                   
    02E7: F0          MOVX @DPTR,A                  
    02E8: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    02EB: E0          MOVX A,@DPTR                  
    02EC: FA          MOV R2,A                      
    02ED: 54 7F       ANL A,#0x7F                   
    02EF: F0          MOVX @DPTR,A                  
    02F0: 22          RET                           

sub_02F1:
    02F1: AA 82       MOV R2,0x82                   
    02F3: AB 83       MOV R3,0x83                   
    02F5: AC F0       MOV R4,0xF0                   
    02F7: AD 7A       MOV R5,0x7A                   
    02F9: AE 7B       MOV R6,0x7B                   
    02FB: AF 7C       MOV R7,0x7C                   
    02FD: A8 7D       MOV R0,0x7D                   
    02FF: 88 01       MOV 0x01,R0                   
    0301: 18          DEC R0                        
    0302: E9          MOV A,R1                      
    0303: 60 20       JZ 0x0325                        ; -> loc_0325
    0305: 8D 82       MOV 0x82,R5                   
    0307: 8E 83       MOV 0x83,R6                   
    0309: 8F F0       MOV 0xF0,R7                   
    030B: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    030E: F9          MOV R1,A                      
    030F: A3          INC DPTR                      
    0310: AD 82       MOV R5,0x82                   
    0312: AE 83       MOV R6,0x83                   
    0314: 8A 82       MOV 0x82,R2                   
    0316: 8B 83       MOV 0x83,R3                   
    0318: 8C F0       MOV 0xF0,R4                   
    031A: E9          MOV A,R1                      
    031B: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    031E: A3          INC DPTR                      
    031F: AA 82       MOV R2,0x82                   
    0321: AB 83       MOV R3,0x83                   
    0323: 80 DA       SJMP 0x02FF                      ; -> 0x02FF

loc_0325:
    0325: 22          RET                           

sub_0326:
    0326: 90 4F B4    MOV DPTR,#0x4FB4                 ; mailbox / host-interface register block
    0329: E4          CLR A                         
    032A: F0          MOVX @DPTR,A                  
    032B: 90 4F B5    MOV DPTR,#0x4FB5                 ; mailbox / host-interface register block
    032E: 74 02       MOV A,#0x02                   
    0330: F0          MOVX @DPTR,A                  
    0331: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    0334: E0          MOVX A,@DPTR                  
    0335: FA          MOV R2,A                      
    0336: 70 0F       JNZ 0x0347                       ; -> loc_0347
    0338: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    033B: 74 FF       MOV A,#0xFF                   
    033D: F0          MOVX @DPTR,A                  
    033E: A3          INC DPTR                      
    033F: E4          CLR A                         
    0340: F0          MOVX @DPTR,A                  
    0341: A3          INC DPTR                      
    0342: F0          MOVX @DPTR,A                  
    0343: A3          INC DPTR                      
    0344: F0          MOVX @DPTR,A                  
    0345: 80 0B       SJMP 0x0352                      ; -> 0x0352

loc_0347:
    0347: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    034A: E4          CLR A                         
    034B: F0          MOVX @DPTR,A                  
    034C: A3          INC DPTR                      
    034D: F0          MOVX @DPTR,A                  
    034E: A3          INC DPTR                      
    034F: F0          MOVX @DPTR,A                  
    0350: A3          INC DPTR                      
    0351: F0          MOVX @DPTR,A                  
    0352: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    0355: E0          MOVX A,@DPTR                  
    0356: FA          MOV R2,A                      
    0357: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    035A: 74 3F       MOV A,#0x3F                   
    035C: 5A          ANL A,R2                      
    035D: F0          MOVX @DPTR,A                  
    035E: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    0361: E0          MOVX A,@DPTR                  
    0362: FA          MOV R2,A                      
    0363: BA 05 02    CJNE R2,#0x05,0x0368             ; -> loc_0368
    0366: 80 1B       SJMP 0x0383                      ; -> loc_0383

loc_0368:
    0368: BA 08 02    CJNE R2,#0x08,0x036D             ; -> loc_036D
    036B: 80 0A       SJMP 0x0377                      ; -> loc_0377

loc_036D:
    036D: BA 09 02    CJNE R2,#0x09,0x0372             ; -> loc_0372
    0370: 80 11       SJMP 0x0383                      ; -> loc_0383

loc_0372:
    0372: BA 0A 26    CJNE R2,#0x0A,0x039B             ; -> loc_039B
    0375: 80 18       SJMP 0x038F                      ; -> loc_038F

loc_0377:
    0377: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    037A: 74 C6       MOV A,#0xC6                   
    037C: F0          MOVX @DPTR,A                  
    037D: A3          INC DPTR                      
    037E: 74 01       MOV A,#0x01                   
    0380: F0          MOVX @DPTR,A                  
    0381: 80 19       SJMP 0x039C                      ; -> loc_039C

loc_0383:
    0383: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    0386: 74 D0       MOV A,#0xD0                   
    0388: F0          MOVX @DPTR,A                  
    0389: A3          INC DPTR                      
    038A: 74 01       MOV A,#0x01                   
    038C: F0          MOVX @DPTR,A                  
    038D: 80 0D       SJMP 0x039C                      ; -> loc_039C

loc_038F:
    038F: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    0392: 74 D0       MOV A,#0xD0                   
    0394: F0          MOVX @DPTR,A                  
    0395: A3          INC DPTR                      
    0396: 74 02       MOV A,#0x02                   
    0398: F0          MOVX @DPTR,A                  
    0399: 80 01       SJMP 0x039C                      ; -> loc_039C

loc_039B:
    039B: 22          RET                           

loc_039C:
    039C: 02 03 9F    LJMP 0x039F                      ; -> loc_039F

loc_039F:
    039F: 75 7A 20    MOV 0x7A,#0x20                
    03A2: 75 7B 26    MOV 0x7B,#0x26                
    03A5: 75 82 00    MOV DPL(0x82),#0x00           
    03A8: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    03AB: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    03AE: E0          MOVX A,@DPTR                  
    03AF: FA          MOV R2,A                      
    03B0: A3          INC DPTR                      
    03B1: E0          MOVX A,@DPTR                  
    03B2: 90 C8 10    MOV DPTR,#0xC810                 ; control + status register block
    03B5: EA          MOV A,R2                      
    03B6: F0          MOVX @DPTR,A                  
    03B7: 90 4F BA    MOV DPTR,#0x4FBA                 ; mailbox / host-interface register block
    03BA: E0          MOVX A,@DPTR                  
    03BB: A3          INC DPTR                      
    03BC: E0          MOVX A,@DPTR                  
    03BD: FA          MOV R2,A                      
    03BE: 90 C8 11    MOV DPTR,#0xC811                 ; control + status register block
    03C1: EA          MOV A,R2                      
    03C2: F0          MOVX @DPTR,A                  
    03C3: 90 4F B5    MOV DPTR,#0x4FB5                 ; mailbox / host-interface register block
    03C6: E0          MOVX A,@DPTR                  
    03C7: 03          RR A                          
    03C8: 03          RR A                          
    03C9: 54 C0       ANL A,#0xC0                   
    03CB: FA          MOV R2,A                      
    03CC: 90 4F B4    MOV DPTR,#0x4FB4                 ; mailbox / host-interface register block
    03CF: E0          MOVX A,@DPTR                  
    03D0: 42 02       ORL 0x02,A                    
    03D2: 90 C8 12    MOV DPTR,#0xC812                 ; control + status register block
    03D5: EA          MOV A,R2                      
    03D6: F0          MOVX @DPTR,A                  
    03D7: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    03DA: E0          MOVX A,@DPTR                  
    03DB: FA          MOV R2,A                      
    03DC: A3          INC DPTR                      
    03DD: E0          MOVX A,@DPTR                  
    03DE: A3          INC DPTR                      
    03DF: E0          MOVX A,@DPTR                  
    03E0: A3          INC DPTR                      
    03E1: E0          MOVX A,@DPTR                  
    03E2: 90 C8 14    MOV DPTR,#0xC814                 ; control + status register block
    03E5: EA          MOV A,R2                      
    03E6: F0          MOVX @DPTR,A                  
    03E7: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    03EA: E0          MOVX A,@DPTR                  
    03EB: A3          INC DPTR                      
    03EC: E0          MOVX A,@DPTR                  
    03ED: FB          MOV R3,A                      
    03EE: A3          INC DPTR                      
    03EF: E0          MOVX A,@DPTR                  
    03F0: A3          INC DPTR                      
    03F1: E0          MOVX A,@DPTR                  
    03F2: 8B 02       MOV 0x02,R3                   
    03F4: 90 C8 15    MOV DPTR,#0xC815                 ; control + status register block
    03F7: EA          MOV A,R2                      
    03F8: F0          MOVX @DPTR,A                  
    03F9: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    03FC: E0          MOVX A,@DPTR                  
    03FD: A3          INC DPTR                      
    03FE: E0          MOVX A,@DPTR                  
    03FF: A3          INC DPTR                      
    0400: E0          MOVX A,@DPTR                  
    0401: FC          MOV R4,A                      
    0402: A3          INC DPTR                      
    0403: E0          MOVX A,@DPTR                  
    0404: 8C 02       MOV 0x02,R4                   
    0406: 90 C8 16    MOV DPTR,#0xC816                 ; control + status register block
    0409: EA          MOV A,R2                      
    040A: F0          MOVX @DPTR,A                  
    040B: 90 4F B6    MOV DPTR,#0x4FB6                 ; mailbox / host-interface register block
    040E: E0          MOVX A,@DPTR                  
    040F: A3          INC DPTR                      
    0410: E0          MOVX A,@DPTR                  
    0411: FB          MOV R3,A                      
    0412: A3          INC DPTR                      
    0413: E0          MOVX A,@DPTR                  
    0414: FC          MOV R4,A                      
    0415: A3          INC DPTR                      
    0416: E0          MOVX A,@DPTR                  
    0417: FD          MOV R5,A                      
    0418: FA          MOV R2,A                      
    0419: 90 C8 17    MOV DPTR,#0xC817                 ; control + status register block
    041C: EA          MOV A,R2                      
    041D: F0          MOVX @DPTR,A                  
    041E: 90 C8 13    MOV DPTR,#0xC813                 ; control + status register block
    0421: 74 81       MOV A,#0x81                   
    0423: F0          MOVX @DPTR,A                  
    0424: 90 C8 13    MOV DPTR,#0xC813                 ; control + status register block
    0427: E0          MOVX A,@DPTR                  
    0428: FA          MOV R2,A                      
    0429: 20 E7 F8    JB ACC.7,0x0424                  ; -> 0x0424
    042C: 75 7A 20    MOV 0x7A,#0x20                
    042F: 75 7B 27    MOV 0x7B,#0x27                
    0432: 75 82 00    MOV DPL(0x82),#0x00           
    0435: 02 02 70    LJMP 0x0270                      ; -> sub_0270

sub_0438:
    0438: AA 82       MOV R2,0x82                   
    043A: AB 83       MOV R3,0x83                   
    043C: A8 7A       MOV R0,0x7A                   
    043E: AC 7B       MOV R4,0x7B                   
    0440: 8C 05       MOV 0x05,R4                   
    0442: 1C          DEC R4                        
    0443: ED          MOV A,R5                      
    0444: 60 10       JZ 0x0456                        ; -> loc_0456
    0446: 86 05       MOV 0x05,@R0                  
    0448: 08          INC R0                        
    0449: 8A 82       MOV 0x82,R2                   
    044B: 8B 83       MOV 0x83,R3                   
    044D: ED          MOV A,R5                      
    044E: F0          MOVX @DPTR,A                  
    044F: A3          INC DPTR                      
    0450: AA 82       MOV R2,0x82                   
    0452: AB 83       MOV R3,0x83                   
    0454: 80 EA       SJMP 0x0440                      ; -> 0x0440

loc_0456:
    0456: 22          RET                           
    0457: AA          DB 0xAA                       ; data
    0458: 82          DB 0x82                       ; data
    0459: AB          DB 0xAB                       ; data
    045A: 7A          DB 0x7A                       ; data
    045B: AC          DB 0xAC                       ; data
    045C: 7B          DB 0x7B                       ; data
    045D: 8A          DB 0x8A                       ; data
    045E: 00          DB 0x00                       ; data
    045F: AA          DB 0xAA                       ; data
    0460: 7C          DB 0x7C                       ; data
    0461: 8A          DB 0x8A                       ; data
    0462: 05          DB 0x05                       ; data
    0463: 1A          DB 0x1A                       ; data
    0464: ED          DB 0xED                       ; data
    0465: 60          DB 0x60                       ; data
    0466: 10          DB 0x10                       ; data
    0467: 8B          DB 0x8B                       ; data
    0468: 82          DB 0x82                       ; data
    0469: 8C          DB 0x8C                       ; data
    046A: 83          DB 0x83                       ; data
    046B: E0          DB 0xE0                       ; data
    046C: FD          DB 0xFD                       ; data
    046D: A3          DB 0xA3                       ; data
    046E: AB          DB 0xAB                       ; data
    046F: 82          DB 0x82                       ; data
    0470: AC          DB 0xAC                       ; data
    0471: 83          DB 0x83                       ; data
    0472: A6          DB 0xA6                       ; data
    0473: 05          DB 0x05                       ; data
    0474: 08          DB 0x08                       ; data
    0475: 80          DB 0x80                       ; data
    0476: EA          DB 0xEA                       ; data
    0477: 22          DB 0x22                       ; data

sub_0478:
    0478: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    047B: E0          MOVX A,@DPTR                  
    047C: FA          MOV R2,A                      
    047D: 53 02 10    ANL 0x02,#0x10                
    0480: BA 10 53    CJNE R2,#0x10,0x04D6             ; -> 0x04D6
    0483: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0486: E4          CLR A                         
    0487: F0          MOVX @DPTR,A                  
    0488: 90 4F D2    MOV DPTR,#0x4FD2                 ; mailbox / host-interface register block
    048B: F0          MOVX @DPTR,A                  
    048C: 90 4F C3    MOV DPTR,#0x4FC3                 ; mailbox / host-interface register block
    048F: F0          MOVX @DPTR,A                  
    0490: 90 4F CF    MOV DPTR,#0x4FCF                 ; mailbox / host-interface register block
    0493: F0          MOVX @DPTR,A                  
    0494: 90 4F C0    MOV DPTR,#0x4FC0                 ; mailbox / host-interface register block
    0497: E4          CLR A                         
    0498: F0          MOVX @DPTR,A                  
    0499: 90 4F B2    MOV DPTR,#0x4FB2                 ; mailbox / host-interface register block
    049C: F0          MOVX @DPTR,A                  
    049D: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    04A0: E0          MOVX A,@DPTR                  
    04A1: FA          MOV R2,A                      
    04A2: 53 02 40    ANL 0x02,#0x40                
    04A5: BA 40 06    CJNE R2,#0x40,0x04AE             ; -> 0x04AE
    04A8: 90 4F C3    MOV DPTR,#0x4FC3                 ; mailbox / host-interface register block
    04AB: 74 01       MOV A,#0x01                   
    04AD: F0          MOVX @DPTR,A                  
    04AE: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    04B1: E0          MOVX A,@DPTR                  
    04B2: FA          MOV R2,A                      
    04B3: 53 02 80    ANL 0x02,#0x80                
    04B6: BA 80 06    CJNE R2,#0x80,0x04BF             ; -> 0x04BF
    04B9: 90 4F B2    MOV DPTR,#0x4FB2                 ; mailbox / host-interface register block
    04BC: 74 01       MOV A,#0x01                   
    04BE: F0          MOVX @DPTR,A                  
    04BF: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    04C2: E0          MOVX A,@DPTR                  
    04C3: FA          MOV R2,A                      
    04C4: 53 02 20    ANL 0x02,#0x20                
    04C7: BA 20 06    CJNE R2,#0x20,0x04D0             ; -> 0x04D0
    04CA: 90 4F C0    MOV DPTR,#0x4FC0                 ; mailbox / host-interface register block
    04CD: 74 01       MOV A,#0x01                   
    04CF: F0          MOVX @DPTR,A                  
    04D0: 90 D4 31    MOV DPTR,#0xD431                 ; register block D403
    04D3: 74 0F       MOV A,#0x0F                   
    04D5: F0          MOVX @DPTR,A                  
    04D6: 22          RET                           

sub_04D7:
    04D7: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    04DA: E4          CLR A                         
    04DB: F0          MOVX @DPTR,A                  
    04DC: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    04DF: F0          MOVX @DPTR,A                  
    04E0: 90 4F C6    MOV DPTR,#0x4FC6                 ; mailbox / host-interface register block
    04E3: F0          MOVX @DPTR,A                  
    04E4: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    04E7: F0          MOVX @DPTR,A                  
    04E8: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    04EB: E4          CLR A                         
    04EC: F0          MOVX @DPTR,A                  
    04ED: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    04F0: F0          MOVX @DPTR,A                  
    04F1: A3          INC DPTR                      
    04F2: F0          MOVX @DPTR,A                  
    04F3: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    04F6: E4          CLR A                         
    04F7: F0          MOVX @DPTR,A                  
    04F8: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    04FB: F0          MOVX @DPTR,A                  
    04FC: 90 4F B3    MOV DPTR,#0x4FB3                 ; mailbox / host-interface register block
    04FF: F0          MOVX @DPTR,A                  
    0500: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    0503: F0          MOVX @DPTR,A                  
    0504: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    0507: E4          CLR A                         
    0508: F0          MOVX @DPTR,A                  
    0509: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    050C: F0          MOVX @DPTR,A                  
    050D: 90 4F C1    MOV DPTR,#0x4FC1                 ; mailbox / host-interface register block
    0510: F0          MOVX @DPTR,A                  
    0511: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0514: F0          MOVX @DPTR,A                  
    0515: 90 4F CB    MOV DPTR,#0x4FCB                 ; mailbox / host-interface register block
    0518: E4          CLR A                         
    0519: F0          MOVX @DPTR,A                  
    051A: 22          RET                           

sub_051B:
    051B: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    051E: E4          CLR A                         
    051F: F0          MOVX @DPTR,A                  
    0520: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    0523: F0          MOVX @DPTR,A                  
    0524: 22          RET                           

sub_0525:
    0525: 90 00 02    MOV DPTR,#0x0002              
    0528: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    052B: 90 D4 09    MOV DPTR,#0xD409                 ; register block D403
    052E: E0          MOVX A,@DPTR                  
    052F: FA          MOV R2,A                      
    0530: 74 02       MOV A,#0x02                   
    0532: 5A          ANL A,R2                      
    0533: C3          CLR C                         
    0534: 13          RRC A                         
    0535: FB          MOV R3,A                      
    0536: BB 01 1C    CJNE R3,#0x01,0x0555             ; -> loc_0555
    0539: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    053C: 74 01       MOV A,#0x01                   
    053E: F0          MOVX @DPTR,A                  
    053F: 90 4F C6    MOV DPTR,#0x4FC6                 ; mailbox / host-interface register block
    0542: 74 01       MOV A,#0x01                   
    0544: F0          MOVX @DPTR,A                  
    0545: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    0548: 74 01       MOV A,#0x01                   
    054A: F0          MOVX @DPTR,A                  
    054B: 74 01       MOV A,#0x01                   
    054D: 5A          ANL A,R2                      
    054E: FB          MOV R3,A                      
    054F: 90 4F D0    MOV DPTR,#0x4FD0                 ; mailbox / host-interface register block
    0552: F0          MOVX @DPTR,A                  
    0553: 80 2C       SJMP 0x0581                      ; -> 0x0581

loc_0555:
    0555: 90 4F D0    MOV DPTR,#0x4FD0                 ; mailbox / host-interface register block
    0558: E0          MOVX A,@DPTR                  
    0559: FB          MOV R3,A                      
    055A: BB 01 0B    CJNE R3,#0x01,0x0568             ; -> 0x0568
    055D: 90 4F D0    MOV DPTR,#0x4FD0                 ; mailbox / host-interface register block
    0560: E4          CLR A                         
    0561: F0          MOVX @DPTR,A                  
    0562: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    0565: 74 01       MOV A,#0x01                   
    0567: F0          MOVX @DPTR,A                  
    0568: 74 01       MOV A,#0x01                   
    056A: 5A          ANL A,R2                      
    056B: FB          MOV R3,A                      
    056C: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    056F: E0          MOVX A,@DPTR                  
    0570: 4B          ORL A,R3                      
    0571: F0          MOVX @DPTR,A                  
    0572: 74 04       MOV A,#0x04                   
    0574: 5A          ANL A,R2                      
    0575: 03          RR A                          
    0576: 03          RR A                          
    0577: 54 3F       ANL A,#0x3F                   
    0579: FB          MOV R3,A                      
    057A: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    057D: E0          MOVX A,@DPTR                  
    057E: FC          MOV R4,A                      
    057F: 4B          ORL A,R3                      
    0580: F0          MOVX @DPTR,A                  
    0581: 90 D4 08    MOV DPTR,#0xD408                 ; register block D403
    0584: E0          MOVX A,@DPTR                  
    0585: 54 08       ANL A,#0x08                   
    0587: C4          SWAP A                        
    0588: 23          RL A                          
    0589: 54 1F       ANL A,#0x1F                   
    058B: FA          MOV R2,A                      
    058C: BA 01 26    CJNE R2,#0x01,0x05B5             ; -> 0x05B5
    058F: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0592: 74 01       MOV A,#0x01                   
    0594: F0          MOVX @DPTR,A                  
    0595: 90 D4 07    MOV DPTR,#0xD407                 ; register block D403
    0598: E0          MOVX A,@DPTR                  
    0599: 54 40       ANL A,#0x40                   
    059B: 23          RL A                          
    059C: 23          RL A                          
    059D: 54 03       ANL A,#0x03                   
    059F: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    05A2: F0          MOVX @DPTR,A                  
    05A3: 90 D4 09    MOV DPTR,#0xD409                 ; register block D403
    05A6: E0          MOVX A,@DPTR                  
    05A7: 54 04       ANL A,#0x04                   
    05A9: 03          RR A                          
    05AA: 03          RR A                          
    05AB: 54 3F       ANL A,#0x3F                   
    05AD: FA          MOV R2,A                      
    05AE: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    05B1: E0          MOVX A,@DPTR                  
    05B2: FB          MOV R3,A                      
    05B3: 4A          ORL A,R2                      
    05B4: F0          MOVX @DPTR,A                  
    05B5: 22          RET                           

sub_05B6:
    05B6: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    05B9: E0          MOVX A,@DPTR                  
    05BA: FA          MOV R2,A                      
    05BB: 60 03       JZ 0x05C0                        ; -> loc_05C0
    05BD: 02 06 A8    LJMP 0x06A8                      ; -> 0x06A8

loc_05C0:
    05C0: 90 4F B2    MOV DPTR,#0x4FB2                 ; mailbox / host-interface register block
    05C3: E0          MOVX A,@DPTR                  
    05C4: FA          MOV R2,A                      
    05C5: BA 01 3D    CJNE R2,#0x01,0x0605             ; -> loc_0605
    05C8: 90 D4 03    MOV DPTR,#0xD403                 ; register block D403
    05CB: E0          MOVX A,@DPTR                  
    05CC: FA          MOV R2,A                      
    05CD: B4 01 00    CJNE A,#0x01,0x05D0              ; -> 0x05D0
    05D0: E4          CLR A                         
    05D1: 33          RLC A                         
    05D2: FB          MOV R3,A                      
    05D3: E4          CLR A                         
    05D4: BA 02 01    CJNE R2,#0x02,0x05D8             ; -> 0x05D8
    05D7: 04          INC A                         
    05D8: 4B          ORL A,R3                      
    05D9: 60 09       JZ 0x05E4                        ; -> loc_05E4
    05DB: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    05DE: 74 01       MOV A,#0x01                   
    05E0: F0          MOVX @DPTR,A                  
    05E1: 02 06 A8    LJMP 0x06A8                      ; -> 0x06A8

loc_05E4:
    05E4: 74 01       MOV A,#0x01                   
    05E6: 5A          ANL A,R2                      
    05E7: 90 4F B3    MOV DPTR,#0x4FB3                 ; mailbox / host-interface register block
    05EA: F0          MOVX @DPTR,A                  
    05EB: 74 04       MOV A,#0x04                   
    05ED: 5A          ANL A,R2                      
    05EE: 03          RR A                          
    05EF: 03          RR A                          
    05F0: 54 3F       ANL A,#0x3F                   
    05F2: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    05F5: F0          MOVX @DPTR,A                  
    05F6: 74 08       MOV A,#0x08                   
    05F8: 5A          ANL A,R2                      
    05F9: C4          SWAP A                        
    05FA: 23          RL A                          
    05FB: 54 1F       ANL A,#0x1F                   
    05FD: FB          MOV R3,A                      
    05FE: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    0601: F0          MOVX @DPTR,A                  
    0602: 02 06 A8    LJMP 0x06A8                      ; -> 0x06A8

loc_0605:
    0605: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    0608: E0          MOVX A,@DPTR                  
    0609: FA          MOV R2,A                      
    060A: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    060D: E4          CLR A                         
    060E: F0          MOVX @DPTR,A                  
    060F: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    0612: F0          MOVX @DPTR,A                  
    0613: 90 4F C1    MOV DPTR,#0x4FC1                 ; mailbox / host-interface register block
    0616: F0          MOVX @DPTR,A                  
    0617: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    061A: F0          MOVX @DPTR,A                  
    061B: BA 80 02    CJNE R2,#0x80,0x0620             ; -> loc_0620
    061E: 80 03       SJMP 0x0623                      ; -> 0x0623

loc_0620:
    0620: BA 81 14    CJNE R2,#0x81,0x0637             ; -> loc_0637
    0623: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    0626: 74 01       MOV A,#0x01                   
    0628: F0          MOVX @DPTR,A                  
    0629: 90 D4 5E    MOV DPTR,#0xD45E                 ; register block D403
    062C: E0          MOVX A,@DPTR                  
    062D: FB          MOV R3,A                      
    062E: 0B          INC R3                        
    062F: 90 D4 5E    MOV DPTR,#0xD45E                 ; register block D403
    0632: EB          MOV A,R3                      
    0633: F0          MOVX @DPTR,A                  
    0634: 02 06 A8    LJMP 0x06A8                      ; -> 0x06A8

loc_0637:
    0637: BA A0 02    CJNE R2,#0xA0,0x063C             ; -> loc_063C
    063A: 80 03       SJMP 0x063F                      ; -> 0x063F

loc_063C:
    063C: BA A1 13    CJNE R2,#0xA1,0x0652             ; -> loc_0652
    063F: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    0642: 74 01       MOV A,#0x01                   
    0644: F0          MOVX @DPTR,A                  
    0645: 90 D4 5F    MOV DPTR,#0xD45F                 ; register block D403
    0648: E0          MOVX A,@DPTR                  
    0649: FB          MOV R3,A                      
    064A: 0B          INC R3                        
    064B: 90 D4 5F    MOV DPTR,#0xD45F                 ; register block D403
    064E: EB          MOV A,R3                      
    064F: F0          MOVX @DPTR,A                  
    0650: 80 56       SJMP 0x06A8                      ; -> 0x06A8

loc_0652:
    0652: BA 74 02    CJNE R2,#0x74,0x0657             ; -> loc_0657
    0655: 80 03       SJMP 0x065A                      ; -> 0x065A

loc_0657:
    0657: BA 75 13    CJNE R2,#0x75,0x066D             ; -> loc_066D
    065A: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    065D: 74 01       MOV A,#0x01                   
    065F: F0          MOVX @DPTR,A                  
    0660: 90 D4 60    MOV DPTR,#0xD460                 ; register block D403
    0663: E0          MOVX A,@DPTR                  
    0664: FB          MOV R3,A                      
    0665: 0B          INC R3                        
    0666: 90 D4 60    MOV DPTR,#0xD460                 ; register block D403
    0669: EB          MOV A,R3                      
    066A: F0          MOVX @DPTR,A                  
    066B: 80 3B       SJMP 0x06A8                      ; -> 0x06A8

loc_066D:
    066D: BA A8 02    CJNE R2,#0xA8,0x0672             ; -> loc_0672
    0670: 80 03       SJMP 0x0675                      ; -> 0x0675

loc_0672:
    0672: BA A9 0D    CJNE R2,#0xA9,0x0682             ; -> loc_0682
    0675: 90 D4 61    MOV DPTR,#0xD461                 ; register block D403
    0678: E0          MOVX A,@DPTR                  
    0679: FB          MOV R3,A                      
    067A: 0B          INC R3                        
    067B: 90 D4 61    MOV DPTR,#0xD461                 ; register block D403
    067E: EB          MOV A,R3                      
    067F: F0          MOVX @DPTR,A                  
    0680: 80 26       SJMP 0x06A8                      ; -> 0x06A8

loc_0682:
    0682: BA 60 13    CJNE R2,#0x60,0x0698             ; -> loc_0698
    0685: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    0688: 74 01       MOV A,#0x01                   
    068A: F0          MOVX @DPTR,A                  
    068B: 90 D4 62    MOV DPTR,#0xD462                 ; register block D403
    068E: E0          MOVX A,@DPTR                  
    068F: FB          MOV R3,A                      
    0690: 0B          INC R3                        
    0691: 90 D4 62    MOV DPTR,#0xD462                 ; register block D403
    0694: EB          MOV A,R3                      
    0695: F0          MOVX @DPTR,A                  
    0696: 80 10       SJMP 0x06A8                      ; -> 0x06A8

loc_0698:
    0698: 90 D4 63    MOV DPTR,#0xD463                 ; register block D403
    069B: E0          MOVX A,@DPTR                  
    069C: FB          MOV R3,A                      
    069D: 0B          INC R3                        
    069E: 90 D4 63    MOV DPTR,#0xD463                 ; register block D403
    06A1: EB          MOV A,R3                      
    06A2: F0          MOVX @DPTR,A                  
    06A3: 90 D4 64    MOV DPTR,#0xD464                 ; register block D403
    06A6: EA          MOV A,R2                      
    06A7: F0          MOVX @DPTR,A                  
    06A8: 90 D4 0B    MOV DPTR,#0xD40B                 ; register block D403
    06AB: E0          MOVX A,@DPTR                  
    06AC: FA          MOV R2,A                      
    06AD: 90 4F B2    MOV DPTR,#0x4FB2                 ; mailbox / host-interface register block
    06B0: E0          MOVX A,@DPTR                  
    06B1: FB          MOV R3,A                      
    06B2: BB 01 02    CJNE R3,#0x01,0x06B7             ; -> loc_06B7
    06B5: 80 03       SJMP 0x06BA                      ; -> loc_06BA

loc_06B7:
    06B7: 02 07 E1    LJMP 0x07E1                      ; -> loc_07E1

loc_06BA:
    06BA: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    06BD: E0          MOVX A,@DPTR                  
    06BE: FB          MOV R3,A                      
    06BF: BB 01 33    CJNE R3,#0x01,0x06F5             ; -> loc_06F5
    06C2: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    06C5: E0          MOVX A,@DPTR                  
    06C6: FB          MOV R3,A                      
    06C7: 60 0D       JZ 0x06D6                        ; -> loc_06D6
    06C9: BB 01 02    CJNE R3,#0x01,0x06CE             ; -> loc_06CE
    06CC: 80 1A       SJMP 0x06E8                      ; -> loc_06E8

loc_06CE:
    06CE: BB 02 02    CJNE R3,#0x02,0x06D3             ; -> loc_06D3
    06D1: 80 1D       SJMP 0x06F0                      ; -> loc_06F0

loc_06D3:
    06D3: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_06D6:
    06D6: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    06D9: E0          MOVX A,@DPTR                  
    06DA: FB          MOV R3,A                      
    06DB: BB 01 05    CJNE R3,#0x01,0x06E3             ; -> loc_06E3
    06DE: 7A A1       MOV R2,#0xA1                  
    06E0: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_06E3:
    06E3: 7A A0       MOV R2,#0xA0                  
    06E5: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_06E8:
    06E8: 90 D4 05    MOV DPTR,#0xD405                 ; register block D403
    06EB: E0          MOVX A,@DPTR                  
    06EC: FA          MOV R2,A                      
    06ED: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_06F0:
    06F0: 7A A1       MOV R2,#0xA1                  
    06F2: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_06F5:
    06F5: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    06F8: E0          MOVX A,@DPTR                  
    06F9: FB          MOV R3,A                      
    06FA: BB 01 48    CJNE R3,#0x01,0x0745             ; -> loc_0745
    06FD: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0700: E0          MOVX A,@DPTR                  
    0701: FB          MOV R3,A                      
    0702: 60 0A       JZ 0x070E                        ; -> loc_070E
    0704: BB 01 02    CJNE R3,#0x01,0x0709             ; -> loc_0709
    0707: 80 17       SJMP 0x0720                      ; -> loc_0720

loc_0709:
    0709: BB 02 31    CJNE R3,#0x02,0x073D             ; -> loc_073D
    070C: 80 1A       SJMP 0x0728                      ; -> loc_0728

loc_070E:
    070E: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    0711: E0          MOVX A,@DPTR                  
    0712: FB          MOV R3,A                      
    0713: BB 01 05    CJNE R3,#0x01,0x071B             ; -> loc_071B
    0716: 7A 75       MOV R2,#0x75                  
    0718: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_071B:
    071B: 7A 74       MOV R2,#0x74                  
    071D: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0720:
    0720: 90 D4 05    MOV DPTR,#0xD405                 ; register block D403
    0723: E0          MOVX A,@DPTR                  
    0724: FA          MOV R2,A                      
    0725: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0728:
    0728: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    072B: E0          MOVX A,@DPTR                  
    072C: FB          MOV R3,A                      
    072D: BB 01 05    CJNE R3,#0x01,0x0735             ; -> loc_0735
    0730: 7A 75       MOV R2,#0x75                  
    0732: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0735:
    0735: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    0738: E0          MOVX A,@DPTR                  
    0739: FA          MOV R2,A                      
    073A: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_073D:
    073D: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    0740: E0          MOVX A,@DPTR                  
    0741: FA          MOV R2,A                      
    0742: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0745:
    0745: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    0748: E0          MOVX A,@DPTR                  
    0749: FB          MOV R3,A                      
    074A: BB 01 4A    CJNE R3,#0x01,0x0797             ; -> loc_0797
    074D: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0750: E0          MOVX A,@DPTR                  
    0751: FB          MOV R3,A                      
    0752: 60 0A       JZ 0x075E                        ; -> loc_075E
    0754: BB 01 02    CJNE R3,#0x01,0x0759             ; -> loc_0759
    0757: 80 17       SJMP 0x0770                      ; -> loc_0770

loc_0759:
    0759: BB 02 34    CJNE R3,#0x02,0x0790             ; -> loc_0790
    075C: 80 1E       SJMP 0x077C                      ; -> loc_077C

loc_075E:
    075E: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    0761: E0          MOVX A,@DPTR                  
    0762: FB          MOV R3,A                      
    0763: BB 01 05    CJNE R3,#0x01,0x076B             ; -> loc_076B
    0766: 7A 81       MOV R2,#0x81                  
    0768: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_076B:
    076B: 7A 80       MOV R2,#0x80                  
    076D: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0770:
    0770: 90 D4 05    MOV DPTR,#0xD405                 ; register block D403
    0773: E0          MOVX A,@DPTR                  
    0774: FA          MOV R2,A                      
    0775: 90 4F C1    MOV DPTR,#0x4FC1                 ; mailbox / host-interface register block
    0778: F0          MOVX @DPTR,A                  
    0779: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_077C:
    077C: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    077F: E0          MOVX A,@DPTR                  
    0780: FB          MOV R3,A                      
    0781: BB 01 05    CJNE R3,#0x01,0x0789             ; -> loc_0789
    0784: 7A 81       MOV R2,#0x81                  
    0786: 02 07 E6    LJMP 0x07E6                      ; -> 0x07E6

loc_0789:
    0789: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    078C: E0          MOVX A,@DPTR                  
    078D: FA          MOV R2,A                      
    078E: 80 56       SJMP 0x07E6                      ; -> 0x07E6

loc_0790:
    0790: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    0793: E0          MOVX A,@DPTR                  
    0794: FA          MOV R2,A                      
    0795: 80 4F       SJMP 0x07E6                      ; -> 0x07E6

loc_0797:
    0797: 90 4F B3    MOV DPTR,#0x4FB3                 ; mailbox / host-interface register block
    079A: E0          MOVX A,@DPTR                  
    079B: FB          MOV R3,A                      
    079C: BB 01 47    CJNE R3,#0x01,0x07E6             ; -> 0x07E6
    079F: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    07A2: E0          MOVX A,@DPTR                  
    07A3: FB          MOV R3,A                      
    07A4: 60 0A       JZ 0x07B0                        ; -> loc_07B0
    07A6: BB 01 02    CJNE R3,#0x01,0x07AB             ; -> loc_07AB
    07A9: 80 15       SJMP 0x07C0                      ; -> loc_07C0

loc_07AB:
    07AB: BB 02 2C    CJNE R3,#0x02,0x07DA             ; -> loc_07DA
    07AE: 80 17       SJMP 0x07C7                      ; -> loc_07C7

loc_07B0:
    07B0: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    07B3: E0          MOVX A,@DPTR                  
    07B4: FB          MOV R3,A                      
    07B5: BB 01 04    CJNE R3,#0x01,0x07BC             ; -> loc_07BC
    07B8: 7A A9       MOV R2,#0xA9                  
    07BA: 80 2A       SJMP 0x07E6                      ; -> 0x07E6

loc_07BC:
    07BC: 7A A8       MOV R2,#0xA8                  
    07BE: 80 26       SJMP 0x07E6                      ; -> 0x07E6

loc_07C0:
    07C0: 90 D4 05    MOV DPTR,#0xD405                 ; register block D403
    07C3: E0          MOVX A,@DPTR                  
    07C4: FA          MOV R2,A                      
    07C5: 80 1F       SJMP 0x07E6                      ; -> 0x07E6

loc_07C7:
    07C7: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    07CA: E0          MOVX A,@DPTR                  
    07CB: FB          MOV R3,A                      
    07CC: BB 01 04    CJNE R3,#0x01,0x07D3             ; -> loc_07D3
    07CF: 7A A9       MOV R2,#0xA9                  
    07D1: 80 13       SJMP 0x07E6                      ; -> 0x07E6

loc_07D3:
    07D3: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    07D6: E0          MOVX A,@DPTR                  
    07D7: FA          MOV R2,A                      
    07D8: 80 0C       SJMP 0x07E6                      ; -> 0x07E6

loc_07DA:
    07DA: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    07DD: E0          MOVX A,@DPTR                  
    07DE: FA          MOV R2,A                      
    07DF: 80 05       SJMP 0x07E6                      ; -> 0x07E6

loc_07E1:
    07E1: 90 D4 0A    MOV DPTR,#0xD40A                 ; register block D403
    07E4: E0          MOVX A,@DPTR                  
    07E5: FA          MOV R2,A                      
    07E6: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    07E9: E0          MOVX A,@DPTR                  
    07EA: FB          MOV R3,A                      
    07EB: BB 01 1F    CJNE R3,#0x01,0x080D             ; -> 0x080D
    07EE: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    07F1: E0          MOVX A,@DPTR                  
    07F2: FB          MOV R3,A                      
    07F3: BB 01 17    CJNE R3,#0x01,0x080D             ; -> 0x080D
    07F6: 90 D4 67    MOV DPTR,#0xD467                 ; register block D403
    07F9: EA          MOV A,R2                      
    07FA: F0          MOVX @DPTR,A                  
    07FB: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    07FE: E0          MOVX A,@DPTR                  
    07FF: FB          MOV R3,A                      
    0800: A3          INC DPTR                      
    0801: E0          MOVX A,@DPTR                  
    0802: FC          MOV R4,A                      
    0803: 90 D4 68    MOV DPTR,#0xD468                 ; register block D403
    0806: EB          MOV A,R3                      
    0807: F0          MOVX @DPTR,A                  
    0808: 90 4F C1    MOV DPTR,#0x4FC1                 ; mailbox / host-interface register block
    080B: EA          MOV A,R2                      
    080C: F0          MOVX @DPTR,A                  
    080D: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    0810: E0          MOVX A,@DPTR                  
    0811: FB          MOV R3,A                      
    0812: BB 01 0D    CJNE R3,#0x01,0x0822             ; -> 0x0822
    0815: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0818: E0          MOVX A,@DPTR                  
    0819: FB          MOV R3,A                      
    081A: BB 01 05    CJNE R3,#0x01,0x0822             ; -> 0x0822
    081D: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0820: EA          MOV A,R2                      
    0821: F0          MOVX @DPTR,A                  
    0822: 90 D4 48    MOV DPTR,#0xD448                 ; register block D403
    0825: EA          MOV A,R2                      
    0826: F0          MOVX @DPTR,A                  
    0827: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    082A: E0          MOVX A,@DPTR                  
    082B: 25 E0       ADD A,ACC(0xE0)               
    082D: 25 E0       ADD A,ACC(0xE0)               
    082F: FB          MOV R3,A                      
    0830: 74 11       MOV A,#0x11                   
    0832: 4B          ORL A,R3                      
    0833: FA          MOV R2,A                      
    0834: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    0837: F0          MOVX @DPTR,A                  
    0838: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    083B: E0          MOVX A,@DPTR                  
    083C: FB          MOV R3,A                      
    083D: BB 01 08    CJNE R3,#0x01,0x0848             ; -> 0x0848
    0840: 53 02 FB    ANL 0x02,#0xFB                
    0843: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    0846: EA          MOV A,R2                      
    0847: F0          MOVX @DPTR,A                  
    0848: 22          RET                           

sub_0849:
    0849: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    084C: E0          MOVX A,@DPTR                  
    084D: 70 13       JNZ 0x0862                       ; -> 0x0862
    084F: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0852: 74 01       MOV A,#0x01                   
    0854: F0          MOVX @DPTR,A                  
    0855: 90 D4 0B    MOV DPTR,#0xD40B                 ; register block D403
    0858: E0          MOVX A,@DPTR                  
    0859: 54 02       ANL A,#0x02                   
    085B: C3          CLR C                         
    085C: 13          RRC A                         
    085D: FA          MOV R2,A                      
    085E: 90 4F CB    MOV DPTR,#0x4FCB                 ; mailbox / host-interface register block
    0861: F0          MOVX @DPTR,A                  
    0862: 22          RET                           

sub_0863:
    0863: 90 D4 0B    MOV DPTR,#0xD40B                 ; register block D403
    0866: E0          MOVX A,@DPTR                  
    0867: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    086A: 74 08       MOV A,#0x08                   
    086C: F0          MOVX @DPTR,A                  
    086D: 22          RET                           

sub_086E:
    086E: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    0871: E0          MOVX A,@DPTR                  
    0872: 70 06       JNZ 0x087A                       ; -> 0x087A
    0874: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0877: 74 01       MOV A,#0x01                   
    0879: F0          MOVX @DPTR,A                  
    087A: 22          RET                           

sub_087B:
    087B: 90 D4 0B    MOV DPTR,#0xD40B                 ; register block D403
    087E: E0          MOVX A,@DPTR                  
    087F: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0882: E0          MOVX A,@DPTR                  
    0883: FA          MOV R2,A                      
    0884: 43 02 02    ORL 0x02,#0x02                
    0887: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    088A: EA          MOV A,R2                      
    088B: F0          MOVX @DPTR,A                  
    088C: 22          RET                           

sub_088D:
    088D: 90 D4 33    MOV DPTR,#0xD433                 ; register block D403
    0890: E0          MOVX A,@DPTR                  
    0891: 60 01       JZ 0x0894                        ; -> loc_0894
    0893: 22          RET                           

loc_0894:
    0894: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0897: 74 01       MOV A,#0x01                   
    0899: F0          MOVX @DPTR,A                  
    089A: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    089D: E0          MOVX A,@DPTR                  
    089E: FA          MOV R2,A                      
    089F: B4 01 00    CJNE A,#0x01,0x08A2              ; -> 0x08A2
    08A2: E4          CLR A                         
    08A3: 33          RLC A                         
    08A4: FA          MOV R2,A                      
    08A5: 90 4F C0    MOV DPTR,#0x4FC0                 ; mailbox / host-interface register block
    08A8: E0          MOVX A,@DPTR                  
    08A9: FB          MOV R3,A                      
    08AA: B4 01 00    CJNE A,#0x01,0x08AD              ; -> 0x08AD
    08AD: E4          CLR A                         
    08AE: 33          RLC A                         
    08AF: FB          MOV R3,A                      
    08B0: 4A          ORL A,R2                      
    08B1: 70 03       JNZ 0x08B6                       ; -> loc_08B6
    08B3: 02 09 5C    LJMP 0x095C                      ; -> loc_095C

loc_08B6:
    08B6: 90 D4 0D    MOV DPTR,#0xD40D                 ; register block D403
    08B9: E0          MOVX A,@DPTR                  
    08BA: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    08BD: F0          MOVX @DPTR,A                  
    08BE: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    08C1: E0          MOVX A,@DPTR                  
    08C2: FA          MOV R2,A                      
    08C3: 70 01       JNZ 0x08C6                       ; -> loc_08C6
    08C5: 22          RET                           

loc_08C6:
    08C6: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    08C9: E0          MOVX A,@DPTR                  
    08CA: FA          MOV R2,A                      
    08CB: 7B 00       MOV R3,#0x00                  
    08CD: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    08D0: E0          MOVX A,@DPTR                  
    08D1: FC          MOV R4,A                      
    08D2: A3          INC DPTR                      
    08D3: E0          MOVX A,@DPTR                  
    08D4: FD          MOV R5,A                      
    08D5: EA          MOV A,R2                      
    08D6: 2C          ADD A,R4                      
    08D7: FA          MOV R2,A                      
    08D8: EB          MOV A,R3                      
    08D9: 3D          ADDC A,R5                     
    08DA: FB          MOV R3,A                      
    08DB: BA 41 14    CJNE R2,#0x41,0x08F2             ; -> loc_08F2
    08DE: BB 00 11    CJNE R3,#0x00,0x08F2             ; -> loc_08F2
    08E1: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    08E4: E0          MOVX A,@DPTR                  
    08E5: 90 4F CF    MOV DPTR,#0x4FCF                 ; mailbox / host-interface register block
    08E8: F0          MOVX @DPTR,A                  
    08E9: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    08EC: E0          MOVX A,@DPTR                  
    08ED: 90 D4 66    MOV DPTR,#0xD466                 ; register block D403
    08F0: F0          MOVX @DPTR,A                  
    08F1: 22          RET                           

loc_08F2:
    08F2: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    08F5: E0          MOVX A,@DPTR                  
    08F6: FA          MOV R2,A                      
    08F7: 7B 00       MOV R3,#0x00                  
    08F9: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    08FC: E0          MOVX A,@DPTR                  
    08FD: FC          MOV R4,A                      
    08FE: A3          INC DPTR                      
    08FF: E0          MOVX A,@DPTR                  
    0900: FD          MOV R5,A                      
    0901: EA          MOV A,R2                      
    0902: 2C          ADD A,R4                      
    0903: FA          MOV R2,A                      
    0904: EB          MOV A,R3                      
    0905: 3D          ADDC A,R5                     
    0906: FB          MOV R3,A                      
    0907: BA 70 16    CJNE R2,#0x70,0x0920             ; -> loc_0920
    090A: BB 00 13    CJNE R3,#0x00,0x0920             ; -> loc_0920
    090D: 90 4F BC    MOV DPTR,#0x4FBC                 ; mailbox / host-interface register block
    0910: E4          CLR A                         
    0911: F0          MOVX @DPTR,A                  
    0912: A3          INC DPTR                      
    0913: F0          MOVX @DPTR,A                  
    0914: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    0917: E0          MOVX A,@DPTR                  
    0918: 90 4F BC    MOV DPTR,#0x4FBC                 ; mailbox / host-interface register block
    091B: F0          MOVX @DPTR,A                  
    091C: A3          INC DPTR                      
    091D: E4          CLR A                         
    091E: F0          MOVX @DPTR,A                  
    091F: 22          RET                           

loc_0920:
    0920: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0923: E0          MOVX A,@DPTR                  
    0924: FA          MOV R2,A                      
    0925: 7B 00       MOV R3,#0x00                  
    0927: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    092A: E0          MOVX A,@DPTR                  
    092B: FC          MOV R4,A                      
    092C: A3          INC DPTR                      
    092D: E0          MOVX A,@DPTR                  
    092E: FD          MOV R5,A                      
    092F: EA          MOV A,R2                      
    0930: 2C          ADD A,R4                      
    0931: FA          MOV R2,A                      
    0932: EB          MOV A,R3                      
    0933: 3D          ADDC A,R5                     
    0934: FB          MOV R3,A                      
    0935: BA 71 05    CJNE R2,#0x71,0x093D             ; -> loc_093D
    0938: BB 00 02    CJNE R3,#0x00,0x093D             ; -> loc_093D
    093B: 80 01       SJMP 0x093E                      ; -> loc_093E

loc_093D:
    093D: 22          RET                           

loc_093E:
    093E: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    0941: E0          MOVX A,@DPTR                  
    0942: FA          MOV R2,A                      
    0943: 74 03       MOV A,#0x03                   
    0945: 5A          ANL A,R2                      
    0946: FD          MOV R5,A                      
    0947: 7C 00       MOV R4,#0x00                  
    0949: 90 4F BC    MOV DPTR,#0x4FBC                 ; mailbox / host-interface register block
    094C: E0          MOVX A,@DPTR                  
    094D: FE          MOV R6,A                      
    094E: A3          INC DPTR                      
    094F: E0          MOVX A,@DPTR                  
    0950: FF          MOV R7,A                      
    0951: 90 4F BC    MOV DPTR,#0x4FBC                 ; mailbox / host-interface register block
    0954: EC          MOV A,R4                      
    0955: 4E          ORL A,R6                      
    0956: F0          MOVX @DPTR,A                  
    0957: ED          MOV A,R5                      
    0958: 4F          ORL A,R7                      
    0959: A3          INC DPTR                      
    095A: F0          MOVX @DPTR,A                  
    095B: 22          RET                           

loc_095C:
    095C: 90 4F C1    MOV DPTR,#0x4FC1                 ; mailbox / host-interface register block
    095F: E0          MOVX A,@DPTR                  
    0960: FC          MOV R4,A                      
    0961: 7D 00       MOV R5,#0x00                  
    0963: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0966: E0          MOVX A,@DPTR                  
    0967: FE          MOV R6,A                      
    0968: A3          INC DPTR                      
    0969: E0          MOVX A,@DPTR                  
    096A: FF          MOV R7,A                      
    096B: EC          MOV A,R4                      
    096C: 2E          ADD A,R6                      
    096D: FA          MOV R2,A                      
    096E: ED          MOV A,R5                      
    096F: 3F          ADDC A,R7                     
    0970: FB          MOV R3,A                      
    0971: C3          CLR C                         
    0972: 74 1F       MOV A,#0x1F                   
    0974: 9A          SUBB A,R2                     
    0975: E4          CLR A                         
    0976: 9B          SUBB A,R3                     
    0977: 50 03       JNC 0x097C                       ; -> loc_097C
    0979: 02 0A 9F    LJMP 0x0A9F                      ; -> 0x0A9F

loc_097C:
    097C: EA          MOV A,R2                      
    097D: 24 09       ADD A,#0x09                   
    097F: 83          MOVC A,@A+PC                  
    0980: C0 E0       PUSH ACC(0xE0)                
    0982: EA          MOV A,R2                      
    0983: 24 23       ADD A,#0x23                   
    0985: 83          MOVC A,@A+PC                  
    0986: C0 E0       PUSH ACC(0xE0)                
    0988: 22          RET                           
    0989: C9          DB 0xC9                       ; data
    098A: D0          DB 0xD0                       ; data
    098B: D7          DB 0xD7                       ; data
    098C: DE          DB 0xDE                       ; data
    098D: E5          DB 0xE5                       ; data
    098E: EC          DB 0xEC                       ; data
    098F: F3          DB 0xF3                       ; data
    0990: FA          DB 0xFA                       ; data
    0991: 01          DB 0x01                       ; data
    0992: 08          DB 0x08                       ; data
    0993: 0F          DB 0x0F                       ; data
    0994: 16          DB 0x16                       ; data
    0995: 1D          DB 0x1D                       ; data
    0996: 24          DB 0x24                       ; data
    0997: 2B          DB 0x2B                       ; data
    0998: 32          DB 0x32                       ; data
    0999: 39          DB 0x39                       ; data
    099A: 40          DB 0x40                       ; data
    099B: 46          DB 0x46                       ; data
    099C: 4C          DB 0x4C                       ; data
    099D: 52          DB 0x52                       ; data
    099E: 58          DB 0x58                       ; data
    099F: 5E          DB 0x5E                       ; data
    09A0: 64          DB 0x64                       ; data
    09A1: 6A          DB 0x6A                       ; data
    09A2: 70          DB 0x70                       ; data
    09A3: 76          DB 0x76                       ; data
    09A4: 7D          DB 0x7D                       ; data
    09A5: 84          DB 0x84                       ; data
    09A6: 8A          DB 0x8A                       ; data
    09A7: 91          DB 0x91                       ; data
    09A8: 98          DB 0x98                       ; data
    09A9: 09          DB 0x09                       ; data
    09AA: 09          DB 0x09                       ; data
    09AB: 09          DB 0x09                       ; data
    09AC: 09          DB 0x09                       ; data
    09AD: 09          DB 0x09                       ; data
    09AE: 09          DB 0x09                       ; data
    09AF: 09          DB 0x09                       ; data
    09B0: 09          DB 0x09                       ; data
    09B1: 0A          DB 0x0A                       ; data
    09B2: 0A          DB 0x0A                       ; data
    09B3: 0A          DB 0x0A                       ; data
    09B4: 0A          DB 0x0A                       ; data
    09B5: 0A          DB 0x0A                       ; data
    09B6: 0A          DB 0x0A                       ; data
    09B7: 0A          DB 0x0A                       ; data
    09B8: 0A          DB 0x0A                       ; data
    09B9: 0A          DB 0x0A                       ; data
    09BA: 0A          DB 0x0A                       ; data
    09BB: 0A          DB 0x0A                       ; data
    09BC: 0A          DB 0x0A                       ; data
    09BD: 0A          DB 0x0A                       ; data
    09BE: 0A          DB 0x0A                       ; data
    09BF: 0A          DB 0x0A                       ; data
    09C0: 0A          DB 0x0A                       ; data
    09C1: 0A          DB 0x0A                       ; data
    09C2: 0A          DB 0x0A                       ; data
    09C3: 0A          DB 0x0A                       ; data
    09C4: 0A          DB 0x0A                       ; data
    09C5: 0A          DB 0x0A                       ; data
    09C6: 0A          DB 0x0A                       ; data
    09C7: 0A          DB 0x0A                       ; data
    09C8: 0A          DB 0x0A                       ; data
    09C9: 90          DB 0x90                       ; data
    09CA: 4F          DB 0x4F                       ; data
    09CB: C9          DB 0xC9                       ; data
    09CC: 74          DB 0x74                       ; data
    09CD: 44          DB 0x44                       ; data
    09CE: F0          DB 0xF0                       ; data
    09CF: 22          DB 0x22                       ; data
    09D0: 90          DB 0x90                       ; data
    09D1: 4F          DB 0x4F                       ; data
    09D2: C9          DB 0xC9                       ; data
    09D3: 74          DB 0x74                       ; data
    09D4: 50          DB 0x50                       ; data
    09D5: F0          DB 0xF0                       ; data
    09D6: 22          DB 0x22                       ; data
    09D7: 90          DB 0x90                       ; data
    09D8: 4F          DB 0x4F                       ; data
    09D9: C9          DB 0xC9                       ; data
    09DA: 74          DB 0x74                       ; data
    09DB: 2D          DB 0x2D                       ; data
    09DC: F0          DB 0xF0                       ; data
    09DD: 22          DB 0x22                       ; data
    09DE: 90          DB 0x90                       ; data
    09DF: 4F          DB 0x4F                       ; data
    09E0: C9          DB 0xC9                       ; data
    09E1: 74          DB 0x74                       ; data
    09E2: 48          DB 0x48                       ; data
    09E3: F0          DB 0xF0                       ; data
    09E4: 22          DB 0x22                       ; data
    09E5: 90          DB 0x90                       ; data
    09E6: 4F          DB 0x4F                       ; data
    09E7: C9          DB 0xC9                       ; data
    09E8: 74          DB 0x74                       ; data
    09E9: 44          DB 0x44                       ; data
    09EA: F0          DB 0xF0                       ; data
    09EB: 22          DB 0x22                       ; data
    09EC: 90          DB 0x90                       ; data
    09ED: 4F          DB 0x4F                       ; data
    09EE: C9          DB 0xC9                       ; data
    09EF: 74          DB 0x74                       ; data
    09F0: 4D          DB 0x4D                       ; data
    09F1: F0          DB 0xF0                       ; data
    09F2: 22          DB 0x22                       ; data
    09F3: 90          DB 0x90                       ; data
    09F4: 4F          DB 0x4F                       ; data
    09F5: C9          DB 0xC9                       ; data
    09F6: 74          DB 0x74                       ; data
    09F7: 49          DB 0x49                       ; data
    09F8: F0          DB 0xF0                       ; data
    09F9: 22          DB 0x22                       ; data
    09FA: 90          DB 0x90                       ; data
    09FB: 4F          DB 0x4F                       ; data
    09FC: C9          DB 0xC9                       ; data
    09FD: 74          DB 0x74                       ; data
    09FE: 20          DB 0x20                       ; data
    09FF: F0          DB 0xF0                       ; data
    0A00: 22          DB 0x22                       ; data
    0A01: 90          DB 0x90                       ; data
    0A02: 4F          DB 0x4F                       ; data
    0A03: C9          DB 0xC9                       ; data
    0A04: 74          DB 0x74                       ; data
    0A05: 41          DB 0x41                       ; data
    0A06: F0          DB 0xF0                       ; data
    0A07: 22          DB 0x22                       ; data
    0A08: 90          DB 0x90                       ; data
    0A09: 4F          DB 0x4F                       ; data
    0A0A: C9          DB 0xC9                       ; data
    0A0B: 74          DB 0x74                       ; data
    0A0C: 44          DB 0x44                       ; data
    0A0D: F0          DB 0xF0                       ; data
    0A0E: 22          DB 0x22                       ; data
    0A0F: 90          DB 0x90                       ; data
    0A10: 4F          DB 0x4F                       ; data
    0A11: C9          DB 0xC9                       ; data
    0A12: 74          DB 0x74                       ; data
    0A13: 41          DB 0x41                       ; data
    0A14: F0          DB 0xF0                       ; data
    0A15: 22          DB 0x22                       ; data
    0A16: 90          DB 0x90                       ; data
    0A17: 4F          DB 0x4F                       ; data
    0A18: C9          DB 0xC9                       ; data
    0A19: 74          DB 0x74                       ; data
    0A1A: 50          DB 0x50                       ; data
    0A1B: F0          DB 0xF0                       ; data
    0A1C: 22          DB 0x22                       ; data
    0A1D: 90          DB 0x90                       ; data
    0A1E: 4F          DB 0x4F                       ; data
    0A1F: C9          DB 0xC9                       ; data
    0A20: 74          DB 0x74                       ; data
    0A21: 54          DB 0x54                       ; data
    0A22: F0          DB 0xF0                       ; data
    0A23: 22          DB 0x22                       ; data
    0A24: 90          DB 0x90                       ; data
    0A25: 4F          DB 0x4F                       ; data
    0A26: C9          DB 0xC9                       ; data
    0A27: 74          DB 0x74                       ; data
    0A28: 4F          DB 0x4F                       ; data
    0A29: F0          DB 0xF0                       ; data
    0A2A: 22          DB 0x22                       ; data
    0A2B: 90          DB 0x90                       ; data
    0A2C: 4F          DB 0x4F                       ; data
    0A2D: C9          DB 0xC9                       ; data
    0A2E: 74          DB 0x74                       ; data
    0A2F: 52          DB 0x52                       ; data
    0A30: F0          DB 0xF0                       ; data
    0A31: 22          DB 0x22                       ; data
    0A32: 90          DB 0x90                       ; data
    0A33: 4F          DB 0x4F                       ; data
    0A34: C9          DB 0xC9                       ; data
    0A35: 74          DB 0x74                       ; data
    0A36: 04          DB 0x04                       ; data
    0A37: F0          DB 0xF0                       ; data
    0A38: 22          DB 0x22                       ; data
    0A39: 90          DB 0x90                       ; data
    0A3A: 4F          DB 0x4F                       ; data
    0A3B: C9          DB 0xC9                       ; data
    0A3C: 74          DB 0x74                       ; data
    0A3D: A0          DB 0xA0                       ; data
    0A3E: F0          DB 0xF0                       ; data
    0A3F: 22          DB 0x22                       ; data
    0A40: 90          DB 0x90                       ; data
    0A41: 4F          DB 0x4F                       ; data
    0A42: C9          DB 0xC9                       ; data
    0A43: E4          DB 0xE4                       ; data
    0A44: F0          DB 0xF0                       ; data
    0A45: 22          DB 0x22                       ; data
    0A46: 90          DB 0x90                       ; data
    0A47: 4F          DB 0x4F                       ; data
    0A48: C9          DB 0xC9                       ; data
    0A49: E4          DB 0xE4                       ; data
    0A4A: F0          DB 0xF0                       ; data
    0A4B: 22          DB 0x22                       ; data
    0A4C: 90          DB 0x90                       ; data
    0A4D: 4F          DB 0x4F                       ; data
    0A4E: C9          DB 0xC9                       ; data
    0A4F: E4          DB 0xE4                       ; data
    0A50: F0          DB 0xF0                       ; data
    0A51: 22          DB 0x22                       ; data
    0A52: 90          DB 0x90                       ; data
    0A53: 4F          DB 0x4F                       ; data
    0A54: C9          DB 0xC9                       ; data
    0A55: E4          DB 0xE4                       ; data
    0A56: F0          DB 0xF0                       ; data
    0A57: 22          DB 0x22                       ; data
    0A58: 90          DB 0x90                       ; data
    0A59: 4F          DB 0x4F                       ; data
    0A5A: C9          DB 0xC9                       ; data
    0A5B: E4          DB 0xE4                       ; data
    0A5C: F0          DB 0xF0                       ; data
    0A5D: 22          DB 0x22                       ; data
    0A5E: 90          DB 0x90                       ; data
    0A5F: 4F          DB 0x4F                       ; data
    0A60: C9          DB 0xC9                       ; data
    0A61: E4          DB 0xE4                       ; data
    0A62: F0          DB 0xF0                       ; data
    0A63: 22          DB 0x22                       ; data
    0A64: 90          DB 0x90                       ; data
    0A65: 4F          DB 0x4F                       ; data
    0A66: C9          DB 0xC9                       ; data
    0A67: E4          DB 0xE4                       ; data
    0A68: F0          DB 0xF0                       ; data
    0A69: 22          DB 0x22                       ; data
    0A6A: 90          DB 0x90                       ; data
    0A6B: 4F          DB 0x4F                       ; data
    0A6C: C9          DB 0xC9                       ; data
    0A6D: E4          DB 0xE4                       ; data
    0A6E: F0          DB 0xF0                       ; data
    0A6F: 22          DB 0x22                       ; data
    0A70: 90          DB 0x90                       ; data
    0A71: 4F          DB 0x4F                       ; data
    0A72: C9          DB 0xC9                       ; data
    0A73: E4          DB 0xE4                       ; data
    0A74: F0          DB 0xF0                       ; data
    0A75: 22          DB 0x22                       ; data
    0A76: 90          DB 0x90                       ; data
    0A77: 4F          DB 0x4F                       ; data
    0A78: C9          DB 0xC9                       ; data
    0A79: 74          DB 0x74                       ; data
    0A7A: 20          DB 0x20                       ; data
    0A7B: F0          DB 0xF0                       ; data
    0A7C: 22          DB 0x22                       ; data
    0A7D: 90          DB 0x90                       ; data
    0A7E: 4F          DB 0x4F                       ; data
    0A7F: C9          DB 0xC9                       ; data
    0A80: 74          DB 0x74                       ; data
    0A81: 02          DB 0x02                       ; data
    0A82: F0          DB 0xF0                       ; data
    0A83: 22          DB 0x22                       ; data
    0A84: 90          DB 0x90                       ; data
    0A85: 4F          DB 0x4F                       ; data
    0A86: C9          DB 0xC9                       ; data
    0A87: E4          DB 0xE4                       ; data
    0A88: F0          DB 0xF0                       ; data
    0A89: 22          DB 0x22                       ; data
    0A8A: 90          DB 0x90                       ; data
    0A8B: 4F          DB 0x4F                       ; data
    0A8C: C9          DB 0xC9                       ; data
    0A8D: 74          DB 0x74                       ; data
    0A8E: 78          DB 0x78                       ; data
    0A8F: F0          DB 0xF0                       ; data
    0A90: 22          DB 0x22                       ; data
    0A91: 90          DB 0x90                       ; data
    0A92: 4F          DB 0x4F                       ; data
    0A93: C9          DB 0xC9                       ; data
    0A94: 74          DB 0x74                       ; data
    0A95: 0F          DB 0x0F                       ; data
    0A96: F0          DB 0xF0                       ; data
    0A97: 22          DB 0x22                       ; data
    0A98: 90          DB 0x90                       ; data
    0A99: 4F          DB 0x4F                       ; data
    0A9A: C9          DB 0xC9                       ; data
    0A9B: 74          DB 0x74                       ; data
    0A9C: FF          DB 0xFF                       ; data
    0A9D: F0          DB 0xF0                       ; data
    0A9E: 22          DB 0x22                       ; data
    0A9F: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    0AA2: 74 FF       MOV A,#0xFF                   
    0AA4: F0          MOVX @DPTR,A                  
    0AA5: 22          RET                           

sub_0AA6:
    0AA6: 90 4F C9    MOV DPTR,#0x4FC9                 ; mailbox / host-interface register block
    0AA9: E0          MOVX A,@DPTR                  
    0AAA: 90 D4 44    MOV DPTR,#0xD444                 ; register block D403
    0AAD: F0          MOVX @DPTR,A                  
    0AAE: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0AB1: 74 03       MOV A,#0x03                   
    0AB3: F0          MOVX @DPTR,A                  
    0AB4: 90 00 32    MOV DPTR,#0x0032              
    0AB7: 02 1D A2    LJMP 0x1DA2                      ; -> sub_1DA2

sub_0ABA:
    0ABA: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    0ABD: E0          MOVX A,@DPTR                  
    0ABE: FA          MOV R2,A                      
    0ABF: 20 E4 01    JB ACC.4,0x0AC3                  ; -> loc_0AC3
    0AC2: 22          RET                           

loc_0AC3:
    0AC3: 90 4F D2    MOV DPTR,#0x4FD2                 ; mailbox / host-interface register block
    0AC6: E0          MOVX A,@DPTR                  
    0AC7: FA          MOV R2,A                      
    0AC8: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0ACB: E0          MOVX A,@DPTR                  
    0ACC: FB          MOV R3,A                      
    0ACD: EA          MOV A,R2                      
    0ACE: B5 03 02    CJNE A,0x03,0x0AD3               ; -> loc_0AD3
    0AD1: 80 2C       SJMP 0x0AFF                      ; -> 0x0AFF

loc_0AD3:
    0AD3: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0AD6: E0          MOVX A,@DPTR                  
    0AD7: FA          MOV R2,A                      
    0AD8: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0ADB: 74 30       MOV A,#0x30                   
    0ADD: F0          MOVX @DPTR,A                  
    0ADE: 90 4F D2    MOV DPTR,#0x4FD2                 ; mailbox / host-interface register block
    0AE1: E0          MOVX A,@DPTR                  
    0AE2: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0AE5: F0          MOVX @DPTR,A                  
    0AE6: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0AE9: E0          MOVX A,@DPTR                  
    0AEA: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0AED: F0          MOVX @DPTR,A                  
    0AEE: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0AF1: 74 30       MOV A,#0x30                   
    0AF3: F0          MOVX @DPTR,A                  
    0AF4: EA          MOV A,R2                      
    0AF5: F0          MOVX @DPTR,A                  
    0AF6: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0AF9: E0          MOVX A,@DPTR                  
    0AFA: FB          MOV R3,A                      
    0AFB: 90 4F D2    MOV DPTR,#0x4FD2                 ; mailbox / host-interface register block
    0AFE: F0          MOVX @DPTR,A                  
    0AFF: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0B02: E0          MOVX A,@DPTR                  
    0B03: FB          MOV R3,A                      
    0B04: 60 4D       JZ 0x0B53                        ; -> loc_0B53
    0B06: BB 01 02    CJNE R3,#0x01,0x0B0B             ; -> loc_0B0B
    0B09: 80 58       SJMP 0x0B63                      ; -> loc_0B63

loc_0B0B:
    0B0B: BB 02 02    CJNE R3,#0x02,0x0B10             ; -> loc_0B10
    0B0E: 80 5D       SJMP 0x0B6D                      ; -> loc_0B6D

loc_0B10:
    0B10: BB 0A 03    CJNE R3,#0x0A,0x0B16             ; -> loc_0B16
    0B13: 02 0B DC    LJMP 0x0BDC                      ; -> loc_0BDC

loc_0B16:
    0B16: BB 14 03    CJNE R3,#0x14,0x0B1C             ; -> loc_0B1C
    0B19: 02 0B F4    LJMP 0x0BF4                      ; -> loc_0BF4

loc_0B1C:
    0B1C: BB 1E 03    CJNE R3,#0x1E,0x0B22             ; -> loc_0B22
    0B1F: 02 0C 0E    LJMP 0x0C0E                      ; -> loc_0C0E

loc_0B22:
    0B22: BB 1F 03    CJNE R3,#0x1F,0x0B28             ; -> loc_0B28
    0B25: 02 0C F4    LJMP 0x0CF4                      ; -> loc_0CF4

loc_0B28:
    0B28: BB 20 03    CJNE R3,#0x20,0x0B2E             ; -> loc_0B2E
    0B2B: 02 0D 40    LJMP 0x0D40                      ; -> loc_0D40

loc_0B2E:
    0B2E: BB 21 03    CJNE R3,#0x21,0x0B34             ; -> loc_0B34
    0B31: 02 0D 78    LJMP 0x0D78                      ; -> loc_0D78

loc_0B34:
    0B34: BB 22 03    CJNE R3,#0x22,0x0B3A             ; -> loc_0B3A
    0B37: 02 0D AD    LJMP 0x0DAD                      ; -> loc_0DAD

loc_0B3A:
    0B3A: BB 23 03    CJNE R3,#0x23,0x0B40             ; -> loc_0B40
    0B3D: 02 0D CA    LJMP 0x0DCA                      ; -> loc_0DCA

loc_0B40:
    0B40: BB 25 03    CJNE R3,#0x25,0x0B46             ; -> loc_0B46
    0B43: 02 0D 24    LJMP 0x0D24                      ; -> loc_0D24

loc_0B46:
    0B46: BB 28 03    CJNE R3,#0x28,0x0B4C             ; -> loc_0B4C
    0B49: 02 0D E2    LJMP 0x0DE2                      ; -> loc_0DE2

loc_0B4C:
    0B4C: BB 29 03    CJNE R3,#0x29,0x0B52             ; -> loc_0B52
    0B4F: 02 0E 49    LJMP 0x0E49                      ; -> loc_0E49

loc_0B52:
    0B52: 22          RET                           

loc_0B53:
    0B53: 12 04 D7    LCALL 0x04D7                     ; -> sub_04D7
    0B56: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0B59: 74 01       MOV A,#0x01                   
    0B5B: F0          MOVX @DPTR,A                  
    0B5C: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0B5F: 74 01       MOV A,#0x01                   
    0B61: F0          MOVX @DPTR,A                  
    0B62: 22          RET                           

loc_0B63:
    0B63: 12 05 1B    LCALL 0x051B                     ; -> sub_051B
    0B66: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0B69: 74 02       MOV A,#0x02                   
    0B6B: F0          MOVX @DPTR,A                  
    0B6C: 22          RET                           

loc_0B6D:
    0B6D: 12 05 25    LCALL 0x0525                     ; -> sub_0525
    0B70: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0B73: E0          MOVX A,@DPTR                  
    0B74: FB          MOV R3,A                      
    0B75: BB 01 02    CJNE R3,#0x01,0x0B7A             ; -> loc_0B7A
    0B78: 80 01       SJMP 0x0B7B                      ; -> loc_0B7B

loc_0B7A:
    0B7A: 22          RET                           

loc_0B7B:
    0B7B: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0B7E: E4          CLR A                         
    0B7F: F0          MOVX @DPTR,A                  
    0B80: 90 4F C6    MOV DPTR,#0x4FC6                 ; mailbox / host-interface register block
    0B83: E0          MOVX A,@DPTR                  
    0B84: FB          MOV R3,A                      
    0B85: BB 01 29    CJNE R3,#0x01,0x0BB1             ; -> loc_0BB1
    0B88: 90 4F C3    MOV DPTR,#0x4FC3                 ; mailbox / host-interface register block
    0B8B: E0          MOVX A,@DPTR                  
    0B8C: FB          MOV R3,A                      
    0B8D: E4          CLR A                         
    0B8E: BB 01 01    CJNE R3,#0x01,0x0B92             ; -> 0x0B92
    0B91: 04          INC A                         
    0B92: FB          MOV R3,A                      
    0B93: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0B96: E0          MOVX A,@DPTR                  
    0B97: FC          MOV R4,A                      
    0B98: B4 01 00    CJNE A,#0x01,0x0B9B              ; -> 0x0B9B
    0B9B: E4          CLR A                         
    0B9C: 33          RLC A                         
    0B9D: FC          MOV R4,A                      
    0B9E: 5B          ANL A,R3                      
    0B9F: 60 06       JZ 0x0BA7                        ; -> loc_0BA7
    0BA1: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BA4: E4          CLR A                         
    0BA5: F0          MOVX @DPTR,A                  
    0BA6: 22          RET                           

loc_0BA7:
    0BA7: 12 08 63    LCALL 0x0863                     ; -> sub_0863
    0BAA: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BAD: 74 0A       MOV A,#0x0A                   
    0BAF: F0          MOVX @DPTR,A                  
    0BB0: 22          RET                           

loc_0BB1:
    0BB1: 90 4F C4    MOV DPTR,#0x4FC4                 ; mailbox / host-interface register block
    0BB4: E0          MOVX A,@DPTR                  
    0BB5: FB          MOV R3,A                      
    0BB6: BB 01 19    CJNE R3,#0x01,0x0BD2             ; -> loc_0BD2
    0BB9: 90 4F C5    MOV DPTR,#0x4FC5                 ; mailbox / host-interface register block
    0BBC: E0          MOVX A,@DPTR                  
    0BBD: FB          MOV R3,A                      
    0BBE: BB 01 0A    CJNE R3,#0x01,0x0BCB             ; -> loc_0BCB
    0BC1: 12 05 B6    LCALL 0x05B6                     ; -> sub_05B6
    0BC4: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BC7: 74 14       MOV A,#0x14                   
    0BC9: F0          MOVX @DPTR,A                  
    0BCA: 22          RET                           

loc_0BCB:
    0BCB: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BCE: 74 1E       MOV A,#0x1E                   
    0BD0: F0          MOVX @DPTR,A                  
    0BD1: 22          RET                           

loc_0BD2:
    0BD2: 12 05 B6    LCALL 0x05B6                     ; -> sub_05B6
    0BD5: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BD8: 74 28       MOV A,#0x28                   
    0BDA: F0          MOVX @DPTR,A                  
    0BDB: 22          RET                           

loc_0BDC:
    0BDC: 12 08 6E    LCALL 0x086E                     ; -> sub_086E
    0BDF: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0BE2: E0          MOVX A,@DPTR                  
    0BE3: FB          MOV R3,A                      
    0BE4: BB 01 02    CJNE R3,#0x01,0x0BE9             ; -> loc_0BE9
    0BE7: 80 01       SJMP 0x0BEA                      ; -> loc_0BEA

loc_0BE9:
    0BE9: 22          RET                           

loc_0BEA:
    0BEA: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0BED: E4          CLR A                         
    0BEE: F0          MOVX @DPTR,A                  
    0BEF: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0BF2: F0          MOVX @DPTR,A                  
    0BF3: 22          RET                           

loc_0BF4:
    0BF4: 12 08 49    LCALL 0x0849                     ; -> sub_0849
    0BF7: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0BFA: E0          MOVX A,@DPTR                  
    0BFB: FB          MOV R3,A                      
    0BFC: BB 01 02    CJNE R3,#0x01,0x0C01             ; -> loc_0C01
    0BFF: 80 01       SJMP 0x0C02                      ; -> loc_0C02

loc_0C01:
    0C01: 22          RET                           

loc_0C02:
    0C02: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0C05: E4          CLR A                         
    0C06: F0          MOVX @DPTR,A                  
    0C07: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0C0A: 74 1E       MOV A,#0x1E                   
    0C0C: F0          MOVX @DPTR,A                  
    0C0D: 22          RET                           

loc_0C0E:
    0C0E: 90 4F CD    MOV DPTR,#0x4FCD                 ; mailbox / host-interface register block
    0C11: E0          MOVX A,@DPTR                  
    0C12: FB          MOV R3,A                      
    0C13: 70 03       JNZ 0x0C18                       ; -> loc_0C18
    0C15: 02 0C CE    LJMP 0x0CCE                      ; -> 0x0CCE

loc_0C18:
    0C18: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0C1B: E0          MOVX A,@DPTR                  
    0C1C: FB          MOV R3,A                      
    0C1D: 7C 00       MOV R4,#0x00                  
    0C1F: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0C22: E0          MOVX A,@DPTR                  
    0C23: FD          MOV R5,A                      
    0C24: A3          INC DPTR                      
    0C25: E0          MOVX A,@DPTR                  
    0C26: FE          MOV R6,A                      
    0C27: EB          MOV A,R3                      
    0C28: 2D          ADD A,R5                      
    0C29: FB          MOV R3,A                      
    0C2A: EC          MOV A,R4                      
    0C2B: 3E          ADDC A,R6                     
    0C2C: FC          MOV R4,A                      
    0C2D: BB 42 09    CJNE R3,#0x42,0x0C39             ; -> 0x0C39
    0C30: BC 00 06    CJNE R4,#0x00,0x0C39             ; -> 0x0C39
    0C33: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C36: 74 01       MOV A,#0x01                   
    0C38: F0          MOVX @DPTR,A                  
    0C39: BB 04 09    CJNE R3,#0x04,0x0C45             ; -> 0x0C45
    0C3C: BC 00 06    CJNE R4,#0x00,0x0C45             ; -> 0x0C45
    0C3F: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C42: 74 01       MOV A,#0x01                   
    0C44: F0          MOVX @DPTR,A                  
    0C45: BB 40 09    CJNE R3,#0x40,0x0C51             ; -> 0x0C51
    0C48: BC 00 06    CJNE R4,#0x00,0x0C51             ; -> 0x0C51
    0C4B: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C4E: 74 01       MOV A,#0x01                   
    0C50: F0          MOVX @DPTR,A                  
    0C51: BB 09 09    CJNE R3,#0x09,0x0C5D             ; -> 0x0C5D
    0C54: BC 00 06    CJNE R4,#0x00,0x0C5D             ; -> 0x0C5D
    0C57: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C5A: 74 01       MOV A,#0x01                   
    0C5C: F0          MOVX @DPTR,A                  
    0C5D: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0C60: E0          MOVX A,@DPTR                  
    0C61: FD          MOV R5,A                      
    0C62: BD 43 26    CJNE R5,#0x43,0x0C8B             ; -> 0x0C8B
    0C65: 90 4F CF    MOV DPTR,#0x4FCF                 ; mailbox / host-interface register block
    0C68: E0          MOVX A,@DPTR                  
    0C69: 75 F0 05    MOV B(0xF0),#0x05             
    0C6C: A4          MUL AB                        
    0C6D: 24 FF       ADD A,#0xFF                   
    0C6F: FD          MOV R5,A                      
    0C70: E5 F0       MOV A,B(0xF0)                 
    0C72: 34 FF       ADDC A,#0xFF                  
    0C74: FE          MOV R6,A                      
    0C75: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0C78: E0          MOVX A,@DPTR                  
    0C79: FF          MOV R7,A                      
    0C7A: A3          INC DPTR                      
    0C7B: E0          MOVX A,@DPTR                  
    0C7C: F8          MOV R0,A                      
    0C7D: EF          MOV A,R7                      
    0C7E: B5 05 0A    CJNE A,0x05,0x0C8B               ; -> 0x0C8B
    0C81: E8          MOV A,R0                      
    0C82: B5 06 06    CJNE A,0x06,0x0C8B               ; -> 0x0C8B
    0C85: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C88: 74 01       MOV A,#0x01                   
    0C8A: F0          MOVX @DPTR,A                  
    0C8B: BB 50 09    CJNE R3,#0x50,0x0C97             ; -> 0x0C97
    0C8E: BC 00 06    CJNE R4,#0x00,0x0C97             ; -> 0x0C97
    0C91: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0C94: 74 01       MOV A,#0x01                   
    0C96: F0          MOVX @DPTR,A                  
    0C97: BB 71 09    CJNE R3,#0x71,0x0CA3             ; -> 0x0CA3
    0C9A: BC 00 06    CJNE R4,#0x00,0x0CA3             ; -> 0x0CA3
    0C9D: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0CA0: 74 01       MOV A,#0x01                   
    0CA2: F0          MOVX @DPTR,A                  
    0CA3: 90 4F C2    MOV DPTR,#0x4FC2                 ; mailbox / host-interface register block
    0CA6: E0          MOVX A,@DPTR                  
    0CA7: FB          MOV R3,A                      
    0CA8: BB 80 23    CJNE R3,#0x80,0x0CCE             ; -> 0x0CCE
    0CAB: 90 4F BC    MOV DPTR,#0x4FBC                 ; mailbox / host-interface register block
    0CAE: E0          MOVX A,@DPTR                  
    0CAF: FB          MOV R3,A                      
    0CB0: A3          INC DPTR                      
    0CB1: E0          MOVX A,@DPTR                  
    0CB2: FC          MOV R4,A                      
    0CB3: 1B          DEC R3                        
    0CB4: BB FF 01    CJNE R3,#0xFF,0x0CB8             ; -> 0x0CB8
    0CB7: 1C          DEC R4                        
    0CB8: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0CBB: E0          MOVX A,@DPTR                  
    0CBC: FD          MOV R5,A                      
    0CBD: A3          INC DPTR                      
    0CBE: E0          MOVX A,@DPTR                  
    0CBF: FE          MOV R6,A                      
    0CC0: EB          MOV A,R3                      
    0CC1: B5 05 0A    CJNE A,0x05,0x0CCE               ; -> 0x0CCE
    0CC4: EC          MOV A,R4                      
    0CC5: B5 06 06    CJNE A,0x06,0x0CCE               ; -> 0x0CCE
    0CC8: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0CCB: 74 01       MOV A,#0x01                   
    0CCD: F0          MOVX @DPTR,A                  
    0CCE: 90 4F CC    MOV DPTR,#0x4FCC                 ; mailbox / host-interface register block
    0CD1: E0          MOVX A,@DPTR                  
    0CD2: FB          MOV R3,A                      
    0CD3: BB 01 14    CJNE R3,#0x01,0x0CEA             ; -> 0x0CEA
    0CD6: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0CD9: E0          MOVX A,@DPTR                  
    0CDA: FB          MOV R3,A                      
    0CDB: A3          INC DPTR                      
    0CDC: E0          MOVX A,@DPTR                  
    0CDD: FC          MOV R4,A                      
    0CDE: BB 7F 09    CJNE R3,#0x7F,0x0CEA             ; -> 0x0CEA
    0CE1: BC 00 06    CJNE R4,#0x00,0x0CEA             ; -> 0x0CEA
    0CE4: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0CE7: 74 01       MOV A,#0x01                   
    0CE9: F0          MOVX @DPTR,A                  
    0CEA: 12 08 7B    LCALL 0x087B                     ; -> sub_087B
    0CED: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0CF0: 74 1F       MOV A,#0x1F                   
    0CF2: F0          MOVX @DPTR,A                  
    0CF3: 22          RET                           

loc_0CF4:
    0CF4: 12 08 8D    LCALL 0x088D                     ; -> sub_088D
    0CF7: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0CFA: E0          MOVX A,@DPTR                  
    0CFB: FB          MOV R3,A                      
    0CFC: BB 01 02    CJNE R3,#0x01,0x0D01             ; -> loc_0D01
    0CFF: 80 01       SJMP 0x0D02                      ; -> loc_0D02

loc_0D01:
    0D01: 22          RET                           

loc_0D02:
    0D02: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0D05: E4          CLR A                         
    0D06: F0          MOVX @DPTR,A                  
    0D07: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0D0A: E0          MOVX A,@DPTR                  
    0D0B: FB          MOV R3,A                      
    0D0C: A3          INC DPTR                      
    0D0D: E0          MOVX A,@DPTR                  
    0D0E: FC          MOV R4,A                      
    0D0F: 90 4F AF    MOV DPTR,#0x4FAF                 ; mailbox / host-interface register block
    0D12: 74 01       MOV A,#0x01                   
    0D14: 2B          ADD A,R3                      
    0D15: F0          MOVX @DPTR,A                  
    0D16: E4          CLR A                         
    0D17: 3C          ADDC A,R4                     
    0D18: A3          INC DPTR                      
    0D19: F0          MOVX @DPTR,A                  
    0D1A: 12 0A A6    LCALL 0x0AA6                     ; -> sub_0AA6
    0D1D: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0D20: 74 25       MOV A,#0x25                   
    0D22: F0          MOVX @DPTR,A                  
    0D23: 22          RET                           

loc_0D24:
    0D24: 90 D4 07    MOV DPTR,#0xD407                 ; register block D403
    0D27: E0          MOVX A,@DPTR                  
    0D28: FB          MOV R3,A                      
    0D29: 74 01       MOV A,#0x01                   
    0D2B: 5B          ANL A,R3                      
    0D2C: FA          MOV R2,A                      
    0D2D: 60 01       JZ 0x0D30                        ; -> loc_0D30
    0D2F: 22          RET                           

loc_0D30:
    0D30: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0D33: 74 01       MOV A,#0x01                   
    0D35: F0          MOVX @DPTR,A                  
    0D36: 12 05 1B    LCALL 0x051B                     ; -> sub_051B
    0D39: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0D3C: 74 20       MOV A,#0x20                   
    0D3E: F0          MOVX @DPTR,A                  
    0D3F: 22          RET                           

loc_0D40:
    0D40: 12 05 25    LCALL 0x0525                     ; -> sub_0525
    0D43: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0D46: E0          MOVX A,@DPTR                  
    0D47: FB          MOV R3,A                      
    0D48: BB 01 02    CJNE R3,#0x01,0x0D4D             ; -> loc_0D4D
    0D4B: 80 01       SJMP 0x0D4E                      ; -> loc_0D4E

loc_0D4D:
    0D4D: 22          RET                           

loc_0D4E:
    0D4E: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0D51: E4          CLR A                         
    0D52: F0          MOVX @DPTR,A                  
    0D53: 90 4F C7    MOV DPTR,#0x4FC7                 ; mailbox / host-interface register block
    0D56: E0          MOVX A,@DPTR                  
    0D57: FB          MOV R3,A                      
    0D58: BB 01 16    CJNE R3,#0x01,0x0D71             ; -> loc_0D71
    0D5B: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0D5E: 74 03       MOV A,#0x03                   
    0D60: F0          MOVX @DPTR,A                  
    0D61: 90 00 0A    MOV DPTR,#0x000A              
    0D64: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    0D67: 12 05 1B    LCALL 0x051B                     ; -> sub_051B
    0D6A: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0D6D: 74 21       MOV A,#0x21                   
    0D6F: F0          MOVX @DPTR,A                  
    0D70: 22          RET                           

loc_0D71:
    0D71: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0D74: 74 1E       MOV A,#0x1E                   
    0D76: F0          MOVX @DPTR,A                  
    0D77: 22          RET                           

loc_0D78:
    0D78: 12 05 25    LCALL 0x0525                     ; -> sub_0525
    0D7B: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0D7E: E0          MOVX A,@DPTR                  
    0D7F: FB          MOV R3,A                      
    0D80: BB 01 02    CJNE R3,#0x01,0x0D85             ; -> loc_0D85
    0D83: 80 01       SJMP 0x0D86                      ; -> loc_0D86

loc_0D85:
    0D85: 22          RET                           

loc_0D86:
    0D86: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0D89: E4          CLR A                         
    0D8A: F0          MOVX @DPTR,A                  
    0D8B: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0D8E: E0          MOVX A,@DPTR                  
    0D8F: FB          MOV R3,A                      
    0D90: BB 01 0A    CJNE R3,#0x01,0x0D9D             ; -> loc_0D9D
    0D93: 12 08 63    LCALL 0x0863                     ; -> sub_0863
    0D96: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0D99: 74 23       MOV A,#0x23                   
    0D9B: F0          MOVX @DPTR,A                  
    0D9C: 22          RET                           

loc_0D9D:
    0D9D: 90 4F CA    MOV DPTR,#0x4FCA                 ; mailbox / host-interface register block
    0DA0: 74 01       MOV A,#0x01                   
    0DA2: F0          MOVX @DPTR,A                  
    0DA3: 12 08 7B    LCALL 0x087B                     ; -> sub_087B
    0DA6: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0DA9: 74 22       MOV A,#0x22                   
    0DAB: F0          MOVX @DPTR,A                  
    0DAC: 22          RET                           

loc_0DAD:
    0DAD: 12 08 8D    LCALL 0x088D                     ; -> sub_088D
    0DB0: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DB3: E0          MOVX A,@DPTR                  
    0DB4: FB          MOV R3,A                      
    0DB5: BB 01 02    CJNE R3,#0x01,0x0DBA             ; -> loc_0DBA
    0DB8: 80 01       SJMP 0x0DBB                      ; -> loc_0DBB

loc_0DBA:
    0DBA: 22          RET                           

loc_0DBB:
    0DBB: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DBE: E4          CLR A                         
    0DBF: F0          MOVX @DPTR,A                  
    0DC0: 12 08 63    LCALL 0x0863                     ; -> sub_0863
    0DC3: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0DC6: 74 23       MOV A,#0x23                   
    0DC8: F0          MOVX @DPTR,A                  
    0DC9: 22          RET                           

loc_0DCA:
    0DCA: 12 08 6E    LCALL 0x086E                     ; -> sub_086E
    0DCD: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DD0: E0          MOVX A,@DPTR                  
    0DD1: FB          MOV R3,A                      
    0DD2: BB 01 02    CJNE R3,#0x01,0x0DD7             ; -> loc_0DD7
    0DD5: 80 01       SJMP 0x0DD8                      ; -> loc_0DD8

loc_0DD7:
    0DD7: 22          RET                           

loc_0DD8:
    0DD8: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DDB: E4          CLR A                         
    0DDC: F0          MOVX @DPTR,A                  
    0DDD: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0DE0: F0          MOVX @DPTR,A                  
    0DE1: 22          RET                           

loc_0DE2:
    0DE2: 12 08 49    LCALL 0x0849                     ; -> sub_0849
    0DE5: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DE8: E0          MOVX A,@DPTR                  
    0DE9: FB          MOV R3,A                      
    0DEA: BB 01 02    CJNE R3,#0x01,0x0DEF             ; -> loc_0DEF
    0DED: 80 01       SJMP 0x0DF0                      ; -> loc_0DF0

loc_0DEF:
    0DEF: 22          RET                           

loc_0DF0:
    0DF0: 90 4F D3    MOV DPTR,#0x4FD3                 ; mailbox / host-interface register block
    0DF3: E4          CLR A                         
    0DF4: F0          MOVX @DPTR,A                  
    0DF5: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0DF8: E0          MOVX A,@DPTR                  
    0DF9: 90 4F C8    MOV DPTR,#0x4FC8                 ; mailbox / host-interface register block
    0DFC: 04          INC A                         
    0DFD: F0          MOVX @DPTR,A                  
    0DFE: 90 4F CB    MOV DPTR,#0x4FCB                 ; mailbox / host-interface register block
    0E01: E0          MOVX A,@DPTR                  
    0E02: FB          MOV R3,A                      
    0E03: E4          CLR A                         
    0E04: BB 01 01    CJNE R3,#0x01,0x0E08             ; -> 0x0E08
    0E07: 04          INC A                         
    0E08: FB          MOV R3,A                      
    0E09: 90 4F CE    MOV DPTR,#0x4FCE                 ; mailbox / host-interface register block
    0E0C: E0          MOVX A,@DPTR                  
    0E0D: FC          MOV R4,A                      
    0E0E: B4 01 00    CJNE A,#0x01,0x0E11              ; -> 0x0E11
    0E11: E4          CLR A                         
    0E12: 33          RLC A                         
    0E13: FC          MOV R4,A                      
    0E14: 90 4F C0    MOV DPTR,#0x4FC0                 ; mailbox / host-interface register block
    0E17: E0          MOVX A,@DPTR                  
    0E18: FD          MOV R5,A                      
    0E19: B4 01 00    CJNE A,#0x01,0x0E1C              ; -> 0x0E1C
    0E1C: E4          CLR A                         
    0E1D: 33          RLC A                         
    0E1E: FD          MOV R5,A                      
    0E1F: 4C          ORL A,R4                      
    0E20: 5B          ANL A,R3                      
    0E21: 60 13       JZ 0x0E36                        ; -> loc_0E36
    0E23: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0E26: 74 07       MOV A,#0x07                   
    0E28: F0          MOVX @DPTR,A                  
    0E29: 90 D4 65    MOV DPTR,#0xD465                 ; register block D403
    0E2C: E0          MOVX A,@DPTR                  
    0E2D: FB          MOV R3,A                      
    0E2E: 0B          INC R3                        
    0E2F: 90 D4 65    MOV DPTR,#0xD465                 ; register block D403
    0E32: EB          MOV A,R3                      
    0E33: F0          MOVX @DPTR,A                  
    0E34: 80 06       SJMP 0x0E3C                      ; -> 0x0E3C

loc_0E36:
    0E36: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0E39: 74 03       MOV A,#0x03                   
    0E3B: F0          MOVX @DPTR,A                  
    0E3C: 90 00 32    MOV DPTR,#0x0032              
    0E3F: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    0E42: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0E45: 74 29       MOV A,#0x29                   
    0E47: F0          MOVX @DPTR,A                  
    0E48: 22          RET                           

loc_0E49:
    0E49: 90 D4 07    MOV DPTR,#0xD407                 ; register block D403
    0E4C: E0          MOVX A,@DPTR                  
    0E4D: FB          MOV R3,A                      
    0E4E: 74 01       MOV A,#0x01                   
    0E50: 5B          ANL A,R3                      
    0E51: FA          MOV R2,A                      
    0E52: 70 0C       JNZ 0x0E60                       ; -> 0x0E60
    0E54: 90 D4 43    MOV DPTR,#0xD443                 ; register block D403
    0E57: 74 01       MOV A,#0x01                   
    0E59: F0          MOVX @DPTR,A                  
    0E5A: 90 4F D1    MOV DPTR,#0x4FD1                 ; mailbox / host-interface register block
    0E5D: 74 01       MOV A,#0x01                   
    0E5F: F0          MOVX @DPTR,A                  
    0E60: 22          RET                           

sub_0E61:
    0E61: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    0E64: 74 01       MOV A,#0x01                   
    0E66: F0          MOVX @DPTR,A                  
    0E67: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    0E6A: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    0E6D: E0          MOVX A,@DPTR                  
    0E6E: FA          MOV R2,A                      
    0E6F: 53 02 FE    ANL 0x02,#0xFE                
    0E72: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    0E75: EA          MOV A,R2                      
    0E76: F0          MOVX @DPTR,A                  
    0E77: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0E7A: E0          MOVX A,@DPTR                  
    0E7B: FA          MOV R2,A                      
    0E7C: 43 02 01    ORL 0x02,#0x01                
    0E7F: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0E82: EA          MOV A,R2                      
    0E83: F0          MOVX @DPTR,A                  
    0E84: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    0E87: E4          CLR A                         
    0E88: F0          MOVX @DPTR,A                  
    0E89: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    0E8C: F0          MOVX @DPTR,A                  
    0E8D: 90 D7 67    MOV DPTR,#0xD767                 ; register block D766
    0E90: 74 3F       MOV A,#0x3F                   
    0E92: F0          MOVX @DPTR,A                  
    0E93: 22          RET                           

sub_0E94:
    0E94: AA 82       MOV R2,0x82                   
    0E96: BA 03 02    CJNE R2,#0x03,0x0E9B             ; -> 0x0E9B
    0E99: 7A 02       MOV R2,#0x02                  
    0E9B: 74 03       MOV A,#0x03                   
    0E9D: B5 7A 03    CJNE A,0x7A,0x0EA3               ; -> 0x0EA3
    0EA0: 75 7A 02    MOV 0x7A,#0x02                
    0EA3: E4          CLR A                         
    0EA4: BA 02 01    CJNE R2,#0x02,0x0EA8             ; -> 0x0EA8
    0EA7: 04          INC A                         
    0EA8: FB          MOV R3,A                      
    0EA9: 74 02       MOV A,#0x02                   
    0EAB: B5 7A 04    CJNE A,0x7A,0x0EB2               ; -> loc_0EB2
    0EAE: 74 01       MOV A,#0x01                   
    0EB0: 80 01       SJMP 0x0EB3                      ; -> 0x0EB3

loc_0EB2:
    0EB2: E4          CLR A                         
    0EB3: 5B          ANL A,R3                      
    0EB4: 60 03       JZ 0x0EB9                        ; -> 0x0EB9
    0EB6: 75 7A 01    MOV 0x7A,#0x01                
    0EB9: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0EBC: E0          MOVX A,@DPTR                  
    0EBD: FC          MOV R4,A                      
    0EBE: 30 E0 07    JNB ACC.0,0x0EC8                 ; -> loc_0EC8
    0EC1: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0EC4: E4          CLR A                         
    0EC5: F0          MOVX @DPTR,A                  
    0EC6: 80 1F       SJMP 0x0EE7                      ; -> 0x0EE7

loc_0EC8:
    0EC8: EA          MOV A,R2                      
    0EC9: 70 08       JNZ 0x0ED3                       ; -> loc_0ED3
    0ECB: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0ECE: 74 03       MOV A,#0x03                   
    0ED0: F0          MOVX @DPTR,A                  
    0ED1: 80 14       SJMP 0x0EE7                      ; -> 0x0EE7

loc_0ED3:
    0ED3: BA 01 08    CJNE R2,#0x01,0x0EDE             ; -> loc_0EDE
    0ED6: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0ED9: 74 0C       MOV A,#0x0C                   
    0EDB: F0          MOVX @DPTR,A                  
    0EDC: 80 09       SJMP 0x0EE7                      ; -> 0x0EE7

loc_0EDE:
    0EDE: EB          MOV A,R3                      
    0EDF: 60 06       JZ 0x0EE7                        ; -> 0x0EE7
    0EE1: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0EE4: 74 15       MOV A,#0x15                   
    0EE6: F0          MOVX @DPTR,A                  
    0EE7: E5 7B       MOV A,0x7B                    
    0EE9: 75 F0 80    MOV B(0xF0),#0x80             
    0EEC: A4          MUL AB                        
    0EED: FA          MOV R2,A                      
    0EEE: AB F0       MOV R3,0xF0                   
    0EF0: 8A 04       MOV 0x04,R2                   
    0EF2: 74 D6       MOV A,#0xD6                   
    0EF4: 2B          ADD A,R3                      
    0EF5: FD          MOV R5,A                      
    0EF6: E5 7A       MOV A,0x7A                    
    0EF8: 75 F0 03    MOV B(0xF0),#0x03             
    0EFB: A4          MUL AB                        
    0EFC: FE          MOV R6,A                      
    0EFD: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0F00: E0          MOVX A,@DPTR                  
    0F01: 2E          ADD A,R6                      
    0F02: 90 00 20    MOV DPTR,#0x0020              
    0F05: 93          MOVC A,@A+DPTR                
    0F06: 8C 82       MOV 0x82,R4                   
    0F08: 8D 83       MOV 0x83,R5                   
    0F0A: F0          MOVX @DPTR,A                  
    0F0B: 74 01       MOV A,#0x01                   
    0F0D: 2A          ADD A,R2                      
    0F0E: FC          MOV R4,A                      
    0F0F: E4          CLR A                         
    0F10: 3B          ADDC A,R3                     
    0F11: 24 D6       ADD A,#0xD6                   
    0F13: FD          MOV R5,A                      
    0F14: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0F17: E0          MOVX A,@DPTR                  
    0F18: 2E          ADD A,R6                      
    0F19: 04          INC A                         
    0F1A: 90 00 20    MOV DPTR,#0x0020              
    0F1D: 93          MOVC A,@A+DPTR                
    0F1E: 8C 82       MOV 0x82,R4                   
    0F20: 8D 83       MOV 0x83,R5                   
    0F22: F0          MOVX @DPTR,A                  
    0F23: 74 02       MOV A,#0x02                   
    0F25: 2A          ADD A,R2                      
    0F26: FA          MOV R2,A                      
    0F27: E4          CLR A                         
    0F28: 3B          ADDC A,R3                     
    0F29: 24 D6       ADD A,#0xD6                   
    0F2B: FB          MOV R3,A                      
    0F2C: 90 4F BE    MOV DPTR,#0x4FBE                 ; mailbox / host-interface register block
    0F2F: E0          MOVX A,@DPTR                  
    0F30: 2E          ADD A,R6                      
    0F31: 24 02       ADD A,#0x02                   
    0F33: 90 00 20    MOV DPTR,#0x0020              
    0F36: 93          MOVC A,@A+DPTR                
    0F37: 8A 82       MOV 0x82,R2                   
    0F39: 8B 83       MOV 0x83,R3                   
    0F3B: F0          MOVX @DPTR,A                  
    0F3C: 22          RET                           

sub_0F3D:
    0F3D: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0F40: E0          MOVX A,@DPTR                  
    0F41: FA          MOV R2,A                      
    0F42: 20 E0 05    JB ACC.0,0x0F4A                  ; -> 0x0F4A
    0F45: 90 D7 67    MOV DPTR,#0xD767                 ; register block D766
    0F48: E4          CLR A                         
    0F49: F0          MOVX @DPTR,A                  
    0F4A: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0F4D: E0          MOVX A,@DPTR                  
    0F4E: FA          MOV R2,A                      
    0F4F: 53 02 04    ANL 0x02,#0x04                
    0F52: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0F55: EA          MOV A,R2                      
    0F56: F0          MOVX @DPTR,A                  
    0F57: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0F5A: E0          MOVX A,@DPTR                  
    0F5B: FA          MOV R2,A                      
    0F5C: 53 02 FC    ANL 0x02,#0xFC                
    0F5F: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0F62: EA          MOV A,R2                      
    0F63: F0          MOVX @DPTR,A                  
    0F64: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0F67: E0          MOVX A,@DPTR                  
    0F68: FA          MOV R2,A                      
    0F69: 53 02 FE    ANL 0x02,#0xFE                
    0F6C: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0F6F: EA          MOV A,R2                      
    0F70: F0          MOVX @DPTR,A                  
    0F71: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0F74: E0          MOVX A,@DPTR                  
    0F75: FA          MOV R2,A                      
    0F76: 30 E0 0F    JNB ACC.0,0x0F88                 ; -> loc_0F88
    0F79: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0F7C: E0          MOVX A,@DPTR                  
    0F7D: FA          MOV R2,A                      
    0F7E: 43 02 02    ORL 0x02,#0x02                
    0F81: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0F84: EA          MOV A,R2                      
    0F85: F0          MOVX @DPTR,A                  
    0F86: 80 03       SJMP 0x0F8B                      ; -> 0x0F8B

loc_0F88:
    0F88: 12 10 76    LCALL 0x1076                     ; -> sub_1076
    0F8B: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    0F8E: E0          MOVX A,@DPTR                  
    0F8F: FA          MOV R2,A                      
    0F90: 43 02 01    ORL 0x02,#0x01                
    0F93: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    0F96: EA          MOV A,R2                      
    0F97: F0          MOVX @DPTR,A                  
    0F98: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0F9B: E0          MOVX A,@DPTR                  
    0F9C: FA          MOV R2,A                      
    0F9D: 43 02 04    ORL 0x02,#0x04                
    0FA0: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0FA3: EA          MOV A,R2                      
    0FA4: F0          MOVX @DPTR,A                  
    0FA5: E0          MOVX A,@DPTR                  
    0FA6: FA          MOV R2,A                      
    0FA7: 74 FB       MOV A,#0xFB                   
    0FA9: 5A          ANL A,R2                      
    0FAA: 44 02       ORL A,#0x02                   
    0FAC: FA          MOV R2,A                      
    0FAD: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0FB0: F0          MOVX @DPTR,A                  
    0FB1: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    0FB4: E4          CLR A                         
    0FB5: F0          MOVX @DPTR,A                  
    0FB6: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    0FB9: E0          MOVX A,@DPTR                  
    0FBA: FA          MOV R2,A                      
    0FBB: BA 03 00    CJNE R2,#0x03,0x0FBE             ; -> 0x0FBE
    0FBE: 50 09       JNC 0x0FC9                       ; -> loc_0FC9
    0FC0: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    0FC3: E0          MOVX A,@DPTR                  
    0FC4: 24 01       ADD A,#0x01                   
    0FC6: F0          MOVX @DPTR,A                  
    0FC7: 80 ED       SJMP 0x0FB6                      ; -> 0x0FB6

loc_0FC9:
    0FC9: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0FCC: E0          MOVX A,@DPTR                  
    0FCD: FA          MOV R2,A                      
    0FCE: 53 02 F9    ANL 0x02,#0xF9                
    0FD1: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    0FD4: EA          MOV A,R2                      
    0FD5: F0          MOVX @DPTR,A                  
    0FD6: 75 7A 04    MOV 0x7A,#0x04                
    0FD9: 75 7B 1D    MOV 0x7B,#0x1D                
    0FDC: 75 82 00    MOV DPL(0x82),#0x00           
    0FDF: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    0FE2: 12 10 10    LCALL 0x1010                     ; -> sub_1010
    0FE5: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0FE8: E0          MOVX A,@DPTR                  
    0FE9: FA          MOV R2,A                      
    0FEA: 43 02 01    ORL 0x02,#0x01                
    0FED: 90 D7 7C    MOV DPTR,#0xD77C                 ; register block D766
    0FF0: EA          MOV A,R2                      
    0FF1: F0          MOVX @DPTR,A                  
    0FF2: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0FF5: E0          MOVX A,@DPTR                  
    0FF6: FA          MOV R2,A                      
    0FF7: 30 E0 08    JNB ACC.0,0x1002                 ; -> loc_1002
    0FFA: 90 D7 67    MOV DPTR,#0xD767                 ; register block D766
    0FFD: 74 BF       MOV A,#0xBF                   
    0FFF: F0          MOVX @DPTR,A                  
    1000: 80 0A       SJMP 0x100C                      ; -> 0x100C

loc_1002:
    1002: E5 08       MOV A,0x08                    
    1004: 70 06       JNZ 0x100C                       ; -> 0x100C
    1006: 90 D7 67    MOV DPTR,#0xD767                 ; register block D766
    1009: 74 81       MOV A,#0x81                   
    100B: F0          MOVX @DPTR,A                  
    100C: 75 82 00    MOV DPL(0x82),#0x00           
    100F: 22          RET                           

sub_1010:
    1010: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    1013: E0          MOVX A,@DPTR                  
    1014: FA          MOV R2,A                      
    1015: 53 02 01    ANL 0x02,#0x01                
    1018: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    101B: E0          MOVX A,@DPTR                  
    101C: FB          MOV R3,A                      
    101D: B4 01 00    CJNE A,#0x01,0x1020              ; -> 0x1020
    1020: E4          CLR A                         
    1021: 33          RLC A                         
    1022: FB          MOV R3,A                      
    1023: 5A          ANL A,R2                      
    1024: 60 14       JZ 0x103A                        ; -> loc_103A
    1026: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    1029: E0          MOVX A,@DPTR                  
    102A: FA          MOV R2,A                      
    102B: 20 E7 14    JB ACC.7,0x1042                  ; -> 0x1042
    102E: 12 0A BA    LCALL 0x0ABA                     ; -> sub_0ABA
    1031: 90 C8 02    MOV DPTR,#0xC802                 ; control + status register block
    1034: E0          MOVX A,@DPTR                  
    1035: FA          MOV R2,A                      
    1036: 20 E0 ED    JB ACC.0,0x1026                  ; -> 0x1026
    1039: 22          RET                           

loc_103A:
    103A: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    103D: E0          MOVX A,@DPTR                  
    103E: FA          MOV R2,A                      
    103F: 30 E7 F8    JNB ACC.7,0x103A                 ; -> loc_103A
    1042: 22          RET                           

sub_1043:
    1043: 85 09 F0    MOV B(0xF0),0x09              
    1046: 05 F0       INC B(0xF0)                   
    1048: 74 01       MOV A,#0x01                   
    104A: 80 02       SJMP 0x104E                      ; -> 0x104E

loc_104C:
    104C: 25 E0       ADD A,ACC(0xE0)               
    104E: D5 F0 FB    DJNZ B(0xF0),0x104C              ; -> loc_104C
    1051: 14          DEC A                         
    1052: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1055: F0          MOVX @DPTR,A                  
    1056: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1059: E0          MOVX A,@DPTR                  
    105A: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    105D: F0          MOVX @DPTR,A                  
    105E: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1061: E0          MOVX A,@DPTR                  
    1062: FA          MOV R2,A                      
    1063: 53 02 0F    ANL 0x02,#0x0F                
    1066: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    1069: EA          MOV A,R2                      
    106A: F0          MOVX @DPTR,A                  
    106B: E0          MOVX A,@DPTR                  
    106C: FA          MOV R2,A                      
    106D: 43 02 80    ORL 0x02,#0x80                
    1070: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    1073: EA          MOV A,R2                      
    1074: F0          MOVX @DPTR,A                  
    1075: 22          RET                           

sub_1076:
    1076: 90 D7 7E    MOV DPTR,#0xD77E                 ; register block D766
    1079: 74 0A       MOV A,#0x0A                   
    107B: F0          MOVX @DPTR,A                  
    107C: 74 10       MOV A,#0x10                   
    107E: B5 0A 04    CJNE A,0x0A,0x1085               ; -> loc_1085
    1081: 74 01       MOV A,#0x01                   
    1083: 80 01       SJMP 0x1086                      ; -> 0x1086

loc_1085:
    1085: E4          CLR A                         
    1086: FA          MOV R2,A                      
    1087: 60 04       JZ 0x108D                        ; -> loc_108D
    1089: 7B 58       MOV R3,#0x58                  
    108B: 80 0D       SJMP 0x109A                      ; -> 0x109A

loc_108D:
    108D: 74 08       MOV A,#0x08                   
    108F: B5 0A 04    CJNE A,0x0A,0x1096               ; -> loc_1096
    1092: 7C 58       MOV R4,#0x58                  
    1094: 80 02       SJMP 0x1098                      ; -> 0x1098

loc_1096:
    1096: 7C 42       MOV R4,#0x42                  
    1098: 8C 03       MOV 0x03,R4                   
    109A: 90 D7 71    MOV DPTR,#0xD771                 ; register block D766
    109D: EB          MOV A,R3                      
    109E: F0          MOVX @DPTR,A                  
    109F: EA          MOV A,R2                      
    10A0: 60 04       JZ 0x10A6                        ; -> loc_10A6
    10A2: 7B 00       MOV R3,#0x00                  
    10A4: 80 0D       SJMP 0x10B3                      ; -> 0x10B3

loc_10A6:
    10A6: 74 08       MOV A,#0x08                   
    10A8: B5 0A 04    CJNE A,0x0A,0x10AF               ; -> loc_10AF
    10AB: 7C 02       MOV R4,#0x02                  
    10AD: 80 02       SJMP 0x10B1                      ; -> 0x10B1

loc_10AF:
    10AF: 7C 03       MOV R4,#0x03                  
    10B1: 8C 03       MOV 0x03,R4                   
    10B3: 90 D7 7D    MOV DPTR,#0xD77D                 ; register block D766
    10B6: EB          MOV A,R3                      
    10B7: F0          MOVX @DPTR,A                  
    10B8: E4          CLR A                         
    10B9: B5 0A 04    CJNE A,0x0A,0x10C0               ; -> loc_10C0
    10BC: 74 01       MOV A,#0x01                   
    10BE: 80 01       SJMP 0x10C1                      ; -> 0x10C1

loc_10C0:
    10C0: E4          CLR A                         
    10C1: FB          MOV R3,A                      
    10C2: 70 28       JNZ 0x10EC                       ; -> loc_10EC
    10C4: 74 08       MOV A,#0x08                   
    10C6: B5 0A 02    CJNE A,0x0A,0x10CB               ; -> loc_10CB
    10C9: 80 12       SJMP 0x10DD                      ; -> loc_10DD

loc_10CB:
    10CB: EA          MOV A,R2                      
    10CC: 60 30       JZ 0x10FE                        ; -> 0x10FE
    10CE: 90 D7 70    MOV DPTR,#0xD770                 ; register block D766
    10D1: E4          CLR A                         
    10D2: F0          MOVX @DPTR,A                  
    10D3: 90 D7 6F    MOV DPTR,#0xD76F                 ; register block D766
    10D6: F0          MOVX @DPTR,A                  
    10D7: 90 D7 6E    MOV DPTR,#0xD76E                 ; register block D766
    10DA: F0          MOVX @DPTR,A                  
    10DB: 80 21       SJMP 0x10FE                      ; -> 0x10FE

loc_10DD:
    10DD: 90 D7 70    MOV DPTR,#0xD770                 ; register block D766
    10E0: E4          CLR A                         
    10E1: F0          MOVX @DPTR,A                  
    10E2: 90 D7 6F    MOV DPTR,#0xD76F                 ; register block D766
    10E5: F0          MOVX @DPTR,A                  
    10E6: 90 D7 6E    MOV DPTR,#0xD76E                 ; register block D766
    10E9: F0          MOVX @DPTR,A                  
    10EA: 80 12       SJMP 0x10FE                      ; -> 0x10FE

loc_10EC:
    10EC: 90 D7 70    MOV DPTR,#0xD770                 ; register block D766
    10EF: 74 9A       MOV A,#0x9A                   
    10F1: F0          MOVX @DPTR,A                  
    10F2: 90 D7 6F    MOV DPTR,#0xD76F                 ; register block D766
    10F5: 74 99       MOV A,#0x99                   
    10F7: F0          MOVX @DPTR,A                  
    10F8: 90 D7 6E    MOV DPTR,#0xD76E                 ; register block D766
    10FB: 74 01       MOV A,#0x01                   
    10FD: F0          MOVX @DPTR,A                  
    10FE: E5 08       MOV A,0x08                    
    1100: 60 59       JZ 0x115B                        ; -> loc_115B
    1102: 90 D7 77    MOV DPTR,#0xD777                 ; register block D766
    1105: 74 FC       MOV A,#0xFC                   
    1107: F0          MOVX @DPTR,A                  
    1108: 90 D7 76    MOV DPTR,#0xD776                 ; register block D766
    110B: 74 FF       MOV A,#0xFF                   
    110D: F0          MOVX @DPTR,A                  
    110E: 90 D7 75    MOV DPTR,#0xD775                 ; register block D766
    1111: 74 3F       MOV A,#0x3F                   
    1113: F0          MOVX @DPTR,A                  
    1114: EB          MOV A,R3                      
    1115: 70 31       JNZ 0x1148                       ; -> loc_1148
    1117: 74 08       MOV A,#0x08                   
    1119: B5 0A 02    CJNE A,0x0A,0x111E               ; -> loc_111E
    111C: 80 17       SJMP 0x1135                      ; -> loc_1135

loc_111E:
    111E: EA          MOV A,R2                      
    111F: 70 01       JNZ 0x1122                       ; -> loc_1122
    1121: 22          RET                           

loc_1122:
    1122: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    1125: 74 30       MOV A,#0x30                   
    1127: F0          MOVX @DPTR,A                  
    1128: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    112B: 74 33       MOV A,#0x33                   
    112D: F0          MOVX @DPTR,A                  
    112E: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    1131: 74 33       MOV A,#0x33                   
    1133: F0          MOVX @DPTR,A                  
    1134: 22          RET                           

loc_1135:
    1135: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    1138: 74 98       MOV A,#0x98                   
    113A: F0          MOVX @DPTR,A                  
    113B: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    113E: 74 99       MOV A,#0x99                   
    1140: F0          MOVX @DPTR,A                  
    1141: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    1144: 74 19       MOV A,#0x19                   
    1146: F0          MOVX @DPTR,A                  
    1147: 22          RET                           

loc_1148:
    1148: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    114B: 74 10       MOV A,#0x10                   
    114D: F0          MOVX @DPTR,A                  
    114E: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    1151: 74 11       MOV A,#0x11                   
    1153: F0          MOVX @DPTR,A                  
    1154: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    1157: 74 11       MOV A,#0x11                   
    1159: F0          MOVX @DPTR,A                  
    115A: 22          RET                           

loc_115B:
    115B: EB          MOV A,R3                      
    115C: 70 54       JNZ 0x11B2                       ; -> loc_11B2
    115E: 74 08       MOV A,#0x08                   
    1160: B5 0A 02    CJNE A,0x0A,0x1165               ; -> loc_1165
    1163: 80 28       SJMP 0x118D                      ; -> loc_118D

loc_1165:
    1165: EA          MOV A,R2                      
    1166: 60 6E       JZ 0x11D6                        ; -> 0x11D6
    1168: 90 D7 77    MOV DPTR,#0xD777                 ; register block D766
    116B: 74 FC       MOV A,#0xFC                   
    116D: F0          MOVX @DPTR,A                  
    116E: 90 D7 76    MOV DPTR,#0xD776                 ; register block D766
    1171: 74 FF       MOV A,#0xFF                   
    1173: F0          MOVX @DPTR,A                  
    1174: 90 D7 75    MOV DPTR,#0xD775                 ; register block D766
    1177: 74 0F       MOV A,#0x0F                   
    1179: F0          MOVX @DPTR,A                  
    117A: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    117D: 74 A0       MOV A,#0xA0                   
    117F: F0          MOVX @DPTR,A                  
    1180: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    1183: 74 BD       MOV A,#0xBD                   
    1185: F0          MOVX @DPTR,A                  
    1186: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    1189: 74 04       MOV A,#0x04                   
    118B: F0          MOVX @DPTR,A                  
    118C: 22          RET                           

loc_118D:
    118D: 90 D7 77    MOV DPTR,#0xD777                 ; register block D766
    1190: 74 FC       MOV A,#0xFC                   
    1192: F0          MOVX @DPTR,A                  
    1193: 90 D7 76    MOV DPTR,#0xD776                 ; register block D766
    1196: 74 FF       MOV A,#0xFF                   
    1198: F0          MOVX @DPTR,A                  
    1199: 90 D7 75    MOV DPTR,#0xD775                 ; register block D766
    119C: 74 0F       MOV A,#0x0F                   
    119E: F0          MOVX @DPTR,A                  
    119F: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    11A2: 74 A0       MOV A,#0xA0                   
    11A4: F0          MOVX @DPTR,A                  
    11A5: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    11A8: 74 BD       MOV A,#0xBD                   
    11AA: F0          MOVX @DPTR,A                  
    11AB: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    11AE: 74 04       MOV A,#0x04                   
    11B0: F0          MOVX @DPTR,A                  
    11B1: 22          RET                           

loc_11B2:
    11B2: 90 D7 77    MOV DPTR,#0xD777                 ; register block D766
    11B5: 74 E1       MOV A,#0xE1                   
    11B7: F0          MOVX @DPTR,A                  
    11B8: 90 D7 76    MOV DPTR,#0xD776                 ; register block D766
    11BB: 74 FF       MOV A,#0xFF                   
    11BD: F0          MOVX @DPTR,A                  
    11BE: 90 D7 75    MOV DPTR,#0xD775                 ; register block D766
    11C1: 74 0F       MOV A,#0x0F                   
    11C3: F0          MOVX @DPTR,A                  
    11C4: 90 D7 74    MOV DPTR,#0xD774                 ; register block D766
    11C7: 74 70       MOV A,#0x70                   
    11C9: F0          MOVX @DPTR,A                  
    11CA: 90 D7 73    MOV DPTR,#0xD773                 ; register block D766
    11CD: 74 44       MOV A,#0x44                   
    11CF: F0          MOVX @DPTR,A                  
    11D0: 90 D7 72    MOV DPTR,#0xD772                 ; register block D766
    11D3: 74 05       MOV A,#0x05                   
    11D5: F0          MOVX @DPTR,A                  
    11D6: 22          RET                           

sub_11D7:
    11D7: E5 08       MOV A,0x08                    
    11D9: 70 0F       JNZ 0x11EA                       ; -> 0x11EA
    11DB: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    11DE: E0          MOVX A,@DPTR                  
    11DF: FA          MOV R2,A                      
    11E0: 74 20       MOV A,#0x20                   
    11E2: 4A          ORL A,R2                      
    11E3: 54 EF       ANL A,#0xEF                   
    11E5: FA          MOV R2,A                      
    11E6: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    11E9: F0          MOVX @DPTR,A                  
    11EA: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    11ED: E0          MOVX A,@DPTR                  
    11EE: FA          MOV R2,A                      
    11EF: 74 02       MOV A,#0x02                   
    11F1: 4A          ORL A,R2                      
    11F2: 54 FE       ANL A,#0xFE                   
    11F4: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    11F7: F0          MOVX @DPTR,A                  
    11F8: 22          RET                           

sub_11F9:
    11F9: AA 82       MOV R2,0x82                   
    11FB: E5 7B       MOV A,0x7B                    
    11FD: 45 7A       ORL A,0x7A                    
    11FF: 45 7C       ORL A,0x7C                    
    1201: 90 CC 31    MOV DPTR,#0xCC31                 ; register block CC00
    1204: F0          MOVX @DPTR,A                  
    1205: 90 CC 32    MOV DPTR,#0xCC32                 ; register block CC00
    1208: EA          MOV A,R2                      
    1209: F0          MOVX @DPTR,A                  
    120A: 90 CC 33    MOV DPTR,#0xCC33                 ; register block CC00
    120D: E5 7D       MOV A,0x7D                    
    120F: F0          MOVX @DPTR,A                  
    1210: 90 CC 30    MOV DPTR,#0xCC30                 ; register block CC00
    1213: 74 01       MOV A,#0x01                   
    1215: F0          MOVX @DPTR,A                  
    1216: 22          RET                           

sub_1217:
    1217: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    121A: E0          MOVX A,@DPTR                  
    121B: FA          MOV R2,A                      
    121C: BA 02 01    CJNE R2,#0x02,0x1220             ; -> loc_1220
    121F: 22          RET                           

loc_1220:
    1220: 90 4F E1    MOV DPTR,#0x4FE1                 ; mailbox / host-interface register block
    1223: E0          MOVX A,@DPTR                  
    1224: FA          MOV R2,A                      
    1225: BA 08 02    CJNE R2,#0x08,0x122A             ; -> loc_122A
    1228: 80 03       SJMP 0x122D                      ; -> loc_122D

loc_122A:
    122A: 02 15 0A    LJMP 0x150A                      ; -> loc_150A

loc_122D:
    122D: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    1230: E0          MOVX A,@DPTR                  
    1231: FA          MOV R2,A                      
    1232: BA 01 0B    CJNE R2,#0x01,0x1240             ; -> loc_1240
    1235: 90 CA 63    MOV DPTR,#0xCA63                 ; register block CA00
    1238: E0          MOVX A,@DPTR                  
    1239: FA          MOV R2,A                      
    123A: 90 4F FF    MOV DPTR,#0x4FFF                 ; mailbox / host-interface register block
    123D: F0          MOVX @DPTR,A                  
    123E: 80 09       SJMP 0x1249                      ; -> 0x1249

loc_1240:
    1240: 90 4F DC    MOV DPTR,#0x4FDC                 ; mailbox / host-interface register block
    1243: E0          MOVX A,@DPTR                  
    1244: FA          MOV R2,A                      
    1245: 90 4F FF    MOV DPTR,#0x4FFF                 ; mailbox / host-interface register block
    1248: F0          MOVX @DPTR,A                  
    1249: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    124C: E0          MOVX A,@DPTR                  
    124D: FA          MOV R2,A                      
    124E: 53 02 F0    ANL 0x02,#0xF0                
    1251: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1254: EA          MOV A,R2                      
    1255: F0          MOVX @DPTR,A                  
    1256: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1259: E4          CLR A                         
    125A: F0          MOVX @DPTR,A                  
    125B: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    125E: E0          MOVX A,@DPTR                  
    125F: FA          MOV R2,A                      
    1260: 90 4F FF    MOV DPTR,#0x4FFF                 ; mailbox / host-interface register block
    1263: E0          MOVX A,@DPTR                  
    1264: FB          MOV R3,A                      
    1265: EA          MOV A,R2                      
    1266: B5 03 00    CJNE A,0x03,0x1269               ; -> 0x1269
    1269: 40 03       JC 0x126E                        ; -> loc_126E
    126B: 02 17 18    LJMP 0x1718                      ; -> loc_1718

loc_126E:
    126E: 90 4F E3    MOV DPTR,#0x4FE3                 ; mailbox / host-interface register block
    1271: E0          MOVX A,@DPTR                  
    1272: FA          MOV R2,A                      
    1273: BA 01 02    CJNE R2,#0x01,0x1278             ; -> loc_1278
    1276: 80 03       SJMP 0x127B                      ; -> loc_127B

loc_1278:
    1278: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_127B:
    127B: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    127E: E0          MOVX A,@DPTR                  
    127F: FA          MOV R2,A                      
    1280: BA 0B 00    CJNE R2,#0x0B,0x1283             ; -> 0x1283
    1283: 50 03       JNC 0x1288                       ; -> loc_1288
    1285: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_1288:
    1288: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    128B: E0          MOVX A,@DPTR                  
    128C: FA          MOV R2,A                      
    128D: 74 0E       MOV A,#0x0E                   
    128F: B5 02 00    CJNE A,0x02,0x1292               ; -> 0x1292
    1292: 50 03       JNC 0x1297                       ; -> loc_1297
    1294: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_1297:
    1297: 90 4F E6    MOV DPTR,#0x4FE6                 ; mailbox / host-interface register block
    129A: 74 01       MOV A,#0x01                   
    129C: F0          MOVX @DPTR,A                  
    129D: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    12A0: E0          MOVX A,@DPTR                  
    12A1: 24 F5       ADD A,#0xF5                   
    12A3: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    12A6: F0          MOVX @DPTR,A                  
    12A7: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    12AA: E0          MOVX A,@DPTR                  
    12AB: 24 DD       ADD A,#0xDD                   
    12AD: F5 82       MOV DPL(0x82),A               
    12AF: E4          CLR A                         
    12B0: 34 4F       ADDC A,#0x4F                  
    12B2: F5 83       MOV DPH(0x83),A               
    12B4: E0          MOVX A,@DPTR                  
    12B5: FA          MOV R2,A                      
    12B6: 74 05       MOV A,#0x05                   
    12B8: B5 02 00    CJNE A,0x02,0x12BB               ; -> 0x12BB
    12BB: 50 03       JNC 0x12C0                       ; -> loc_12C0
    12BD: 02 14 E2    LJMP 0x14E2                      ; -> loc_14E2

loc_12C0:
    12C0: EA          MOV A,R2                      
    12C1: 2A          ADD A,R2                      
    12C2: 2A          ADD A,R2                      
    12C3: 90 12 C7    MOV DPTR,#0x12C7              
    12C6: 73          JMP @A+DPTR                   
    12C7: 02 14 E2    LJMP 0x14E2                      ; -> loc_14E2

loc_12CA:
    12CA: 02 12 D9    LJMP 0x12D9                      ; -> 0x12D9
    12CD: 02          DB 0x02                       ; data
    12CE: 13          DB 0x13                       ; data
    12CF: 0C          DB 0x0C                       ; data
    12D0: 02          DB 0x02                       ; data
    12D1: 13          DB 0x13                       ; data
    12D2: 9B          DB 0x9B                       ; data
    12D3: 02          DB 0x02                       ; data
    12D4: 14          DB 0x14                       ; data
    12D5: 01          DB 0x01                       ; data
    12D6: 02          DB 0x02                       ; data
    12D7: 14          DB 0x14                       ; data
    12D8: 67          DB 0x67                       ; data
    12D9: 90 C2 00    MOV DPTR,#0xC200              
    12DC: E0          MOVX A,@DPTR                  
    12DD: FA          MOV R2,A                      
    12DE: 74 F1       MOV A,#0xF1                   
    12E0: 5A          ANL A,R2                      
    12E1: 44 02       ORL A,#0x02                   
    12E3: 90 C2 00    MOV DPTR,#0xC200              
    12E6: F0          MOVX @DPTR,A                  
    12E7: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    12EA: E0          MOVX A,@DPTR                  
    12EB: FA          MOV R2,A                      
    12EC: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    12EF: E0          MOVX A,@DPTR                  
    12F0: FB          MOV R3,A                      
    12F1: 8B F0       MOV 0xF0,R3                   
    12F3: 05 F0       INC B(0xF0)                   
    12F5: 74 01       MOV A,#0x01                   
    12F7: 80 02       SJMP 0x12FB                      ; -> 0x12FB

loc_12F9:
    12F9: 25 E0       ADD A,ACC(0xE0)               
    12FB: D5 F0 FB    DJNZ B(0xF0),0x12F9              ; -> loc_12F9
    12FE: 54 0F       ANL A,#0x0F                   
    1300: F4          CPL A                         
    1301: FB          MOV R3,A                      
    1302: 52 02       ANL 0x02,A                    
    1304: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1307: EA          MOV A,R2                      
    1308: F0          MOVX @DPTR,A                  
    1309: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_130C:
    130C: E5 14       MOV A,0x14                    
    130E: 30 E5 0D    JNB ACC.5,0x131E                 ; -> 0x131E
    1311: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    1314: E0          MOVX A,@DPTR                  
    1315: FA          MOV R2,A                      
    1316: 43 02 01    ORL 0x02,#0x01                
    1319: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    131C: EA          MOV A,R2                      
    131D: F0          MOVX @DPTR,A                  
    131E: 90 C8 7C    MOV DPTR,#0xC87C                 ; control + status register block
    1321: E4          CLR A                         
    1322: F0          MOVX @DPTR,A                  
    1323: 90 C8 7D    MOV DPTR,#0xC87D                 ; control + status register block
    1326: 74 20       MOV A,#0x20                   
    1328: F0          MOVX @DPTR,A                  
    1329: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    132C: 74 FF       MOV A,#0xFF                   
    132E: F0          MOVX @DPTR,A                  
    132F: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    1332: 74 01       MOV A,#0x01                   
    1334: F0          MOVX @DPTR,A                  
    1335: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1338: E0          MOVX A,@DPTR                  
    1339: FA          MOV R2,A                      
    133A: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    133D: E0          MOVX A,@DPTR                  
    133E: FB          MOV R3,A                      
    133F: 8B F0       MOV 0xF0,R3                   
    1341: 05 F0       INC B(0xF0)                   
    1343: 74 01       MOV A,#0x01                   
    1345: 80 02       SJMP 0x1349                      ; -> 0x1349

loc_1347:
    1347: 25 E0       ADD A,ACC(0xE0)               
    1349: D5 F0 FB    DJNZ B(0xF0),0x1347              ; -> loc_1347
    134C: 54 0F       ANL A,#0x0F                   
    134E: 42 02       ORL 0x02,A                    
    1350: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1353: EA          MOV A,R2                      
    1354: F0          MOVX @DPTR,A                  
    1355: E0          MOVX A,@DPTR                  
    1356: FA          MOV R2,A                      
    1357: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    135A: E0          MOVX A,@DPTR                  
    135B: FB          MOV R3,A                      
    135C: 8B F0       MOV 0xF0,R3                   
    135E: 05 F0       INC B(0xF0)                   
    1360: 74 01       MOV A,#0x01                   
    1362: 80 02       SJMP 0x1366                      ; -> 0x1366

loc_1364:
    1364: 25 E0       ADD A,ACC(0xE0)               
    1366: D5 F0 FB    DJNZ B(0xF0),0x1364              ; -> loc_1364
    1369: 54 0F       ANL A,#0x0F                   
    136B: C4          SWAP A                        
    136C: 54 F0       ANL A,#0xF0                   
    136E: F4          CPL A                         
    136F: 52 02       ANL 0x02,A                    
    1371: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1374: EA          MOV A,R2                      
    1375: F0          MOVX @DPTR,A                  
    1376: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    1379: E0          MOVX A,@DPTR                  
    137A: FA          MOV R2,A                      
    137B: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    137E: E0          MOVX A,@DPTR                  
    137F: FB          MOV R3,A                      
    1380: 8B F0       MOV 0xF0,R3                   
    1382: 05 F0       INC B(0xF0)                   
    1384: 74 01       MOV A,#0x01                   
    1386: 80 02       SJMP 0x138A                      ; -> 0x138A

loc_1388:
    1388: 25 E0       ADD A,ACC(0xE0)               
    138A: D5 F0 FB    DJNZ B(0xF0),0x1388              ; -> loc_1388
    138D: 54 0F       ANL A,#0x0F                   
    138F: F4          CPL A                         
    1390: FB          MOV R3,A                      
    1391: 52 02       ANL 0x02,A                    
    1393: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    1396: EA          MOV A,R2                      
    1397: F0          MOVX @DPTR,A                  
    1398: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_139B:
    139B: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    139E: E0          MOVX A,@DPTR                  
    139F: FA          MOV R2,A                      
    13A0: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    13A3: E0          MOVX A,@DPTR                  
    13A4: FB          MOV R3,A                      
    13A5: 8B F0       MOV 0xF0,R3                   
    13A7: 05 F0       INC B(0xF0)                   
    13A9: 74 01       MOV A,#0x01                   
    13AB: 80 02       SJMP 0x13AF                      ; -> 0x13AF

loc_13AD:
    13AD: 25 E0       ADD A,ACC(0xE0)               
    13AF: D5 F0 FB    DJNZ B(0xF0),0x13AD              ; -> loc_13AD
    13B2: 54 0F       ANL A,#0x0F                   
    13B4: F4          CPL A                         
    13B5: 52 02       ANL 0x02,A                    
    13B7: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    13BA: EA          MOV A,R2                      
    13BB: F0          MOVX @DPTR,A                  
    13BC: E0          MOVX A,@DPTR                  
    13BD: FA          MOV R2,A                      
    13BE: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    13C1: E0          MOVX A,@DPTR                  
    13C2: FB          MOV R3,A                      
    13C3: 8B F0       MOV 0xF0,R3                   
    13C5: 05 F0       INC B(0xF0)                   
    13C7: 74 01       MOV A,#0x01                   
    13C9: 80 02       SJMP 0x13CD                      ; -> 0x13CD

loc_13CB:
    13CB: 25 E0       ADD A,ACC(0xE0)               
    13CD: D5 F0 FB    DJNZ B(0xF0),0x13CB              ; -> loc_13CB
    13D0: 54 0F       ANL A,#0x0F                   
    13D2: C4          SWAP A                        
    13D3: 54 F0       ANL A,#0xF0                   
    13D5: 42 02       ORL 0x02,A                    
    13D7: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    13DA: EA          MOV A,R2                      
    13DB: F0          MOVX @DPTR,A                  
    13DC: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    13DF: E0          MOVX A,@DPTR                  
    13E0: FA          MOV R2,A                      
    13E1: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    13E4: E0          MOVX A,@DPTR                  
    13E5: FB          MOV R3,A                      
    13E6: 8B F0       MOV 0xF0,R3                   
    13E8: 05 F0       INC B(0xF0)                   
    13EA: 74 01       MOV A,#0x01                   
    13EC: 80 02       SJMP 0x13F0                      ; -> 0x13F0

loc_13EE:
    13EE: 25 E0       ADD A,ACC(0xE0)               
    13F0: D5 F0 FB    DJNZ B(0xF0),0x13EE              ; -> loc_13EE
    13F3: 54 0F       ANL A,#0x0F                   
    13F5: F4          CPL A                         
    13F6: FB          MOV R3,A                      
    13F7: 52 02       ANL 0x02,A                    
    13F9: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    13FC: EA          MOV A,R2                      
    13FD: F0          MOVX @DPTR,A                  
    13FE: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_1401:
    1401: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1404: E0          MOVX A,@DPTR                  
    1405: FA          MOV R2,A                      
    1406: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1409: E0          MOVX A,@DPTR                  
    140A: FB          MOV R3,A                      
    140B: 8B F0       MOV 0xF0,R3                   
    140D: 05 F0       INC B(0xF0)                   
    140F: 74 01       MOV A,#0x01                   
    1411: 80 02       SJMP 0x1415                      ; -> 0x1415

loc_1413:
    1413: 25 E0       ADD A,ACC(0xE0)               
    1415: D5 F0 FB    DJNZ B(0xF0),0x1413              ; -> loc_1413
    1418: 54 0F       ANL A,#0x0F                   
    141A: F4          CPL A                         
    141B: 52 02       ANL 0x02,A                    
    141D: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1420: EA          MOV A,R2                      
    1421: F0          MOVX @DPTR,A                  
    1422: E0          MOVX A,@DPTR                  
    1423: FA          MOV R2,A                      
    1424: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1427: E0          MOVX A,@DPTR                  
    1428: FB          MOV R3,A                      
    1429: 8B F0       MOV 0xF0,R3                   
    142B: 05 F0       INC B(0xF0)                   
    142D: 74 01       MOV A,#0x01                   
    142F: 80 02       SJMP 0x1433                      ; -> 0x1433

loc_1431:
    1431: 25 E0       ADD A,ACC(0xE0)               
    1433: D5 F0 FB    DJNZ B(0xF0),0x1431              ; -> loc_1431
    1436: 54 0F       ANL A,#0x0F                   
    1438: C4          SWAP A                        
    1439: 54 F0       ANL A,#0xF0                   
    143B: F4          CPL A                         
    143C: 52 02       ANL 0x02,A                    
    143E: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1441: EA          MOV A,R2                      
    1442: F0          MOVX @DPTR,A                  
    1443: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    1446: E0          MOVX A,@DPTR                  
    1447: FA          MOV R2,A                      
    1448: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    144B: E0          MOVX A,@DPTR                  
    144C: FB          MOV R3,A                      
    144D: 8B F0       MOV 0xF0,R3                   
    144F: 05 F0       INC B(0xF0)                   
    1451: 74 01       MOV A,#0x01                   
    1453: 80 02       SJMP 0x1457                      ; -> 0x1457

loc_1455:
    1455: 25 E0       ADD A,ACC(0xE0)               
    1457: D5 F0 FB    DJNZ B(0xF0),0x1455              ; -> loc_1455
    145A: 54 0F       ANL A,#0x0F                   
    145C: FB          MOV R3,A                      
    145D: 42 02       ORL 0x02,A                    
    145F: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    1462: EA          MOV A,R2                      
    1463: F0          MOVX @DPTR,A                  
    1464: 02 14 EB    LJMP 0x14EB                      ; -> 0x14EB

loc_1467:
    1467: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    146A: E4          CLR A                         
    146B: F0          MOVX @DPTR,A                  
    146C: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    146F: F0          MOVX @DPTR,A                  
    1470: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    1473: E0          MOVX A,@DPTR                  
    1474: FA          MOV R2,A                      
    1475: 43 02 01    ORL 0x02,#0x01                
    1478: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    147B: EA          MOV A,R2                      
    147C: F0          MOVX @DPTR,A                  
    147D: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1480: E0          MOVX A,@DPTR                  
    1481: FA          MOV R2,A                      
    1482: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    1485: E0          MOVX A,@DPTR                  
    1486: FB          MOV R3,A                      
    1487: 8B F0       MOV 0xF0,R3                   
    1489: 05 F0       INC B(0xF0)                   
    148B: 74 01       MOV A,#0x01                   
    148D: 80 02       SJMP 0x1491                      ; -> 0x1491

loc_148F:
    148F: 25 E0       ADD A,ACC(0xE0)               
    1491: D5 F0 FB    DJNZ B(0xF0),0x148F              ; -> loc_148F
    1494: 54 0F       ANL A,#0x0F                   
    1496: 42 02       ORL 0x02,A                    
    1498: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    149B: EA          MOV A,R2                      
    149C: F0          MOVX @DPTR,A                  
    149D: E0          MOVX A,@DPTR                  
    149E: FA          MOV R2,A                      
    149F: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    14A2: E0          MOVX A,@DPTR                  
    14A3: FB          MOV R3,A                      
    14A4: 8B F0       MOV 0xF0,R3                   
    14A6: 05 F0       INC B(0xF0)                   
    14A8: 74 01       MOV A,#0x01                   
    14AA: 80 02       SJMP 0x14AE                      ; -> 0x14AE

loc_14AC:
    14AC: 25 E0       ADD A,ACC(0xE0)               
    14AE: D5 F0 FB    DJNZ B(0xF0),0x14AC              ; -> loc_14AC
    14B1: 54 0F       ANL A,#0x0F                   
    14B3: C4          SWAP A                        
    14B4: 54 F0       ANL A,#0xF0                   
    14B6: F4          CPL A                         
    14B7: 52 02       ANL 0x02,A                    
    14B9: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    14BC: EA          MOV A,R2                      
    14BD: F0          MOVX @DPTR,A                  
    14BE: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    14C1: E0          MOVX A,@DPTR                  
    14C2: FA          MOV R2,A                      
    14C3: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    14C6: E0          MOVX A,@DPTR                  
    14C7: FB          MOV R3,A                      
    14C8: 8B F0       MOV 0xF0,R3                   
    14CA: 05 F0       INC B(0xF0)                   
    14CC: 74 01       MOV A,#0x01                   
    14CE: 80 02       SJMP 0x14D2                      ; -> 0x14D2

loc_14D0:
    14D0: 25 E0       ADD A,ACC(0xE0)               
    14D2: D5 F0 FB    DJNZ B(0xF0),0x14D0              ; -> loc_14D0
    14D5: 54 0F       ANL A,#0x0F                   
    14D7: F4          CPL A                         
    14D8: FB          MOV R3,A                      
    14D9: 52 02       ANL 0x02,A                    
    14DB: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    14DE: EA          MOV A,R2                      
    14DF: F0          MOVX @DPTR,A                  
    14E0: 80 09       SJMP 0x14EB                      ; -> 0x14EB

loc_14E2:
    14E2: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    14E5: E4          CLR A                         
    14E6: F0          MOVX @DPTR,A                  
    14E7: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    14EA: F0          MOVX @DPTR,A                  
    14EB: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    14EE: E0          MOVX A,@DPTR                  
    14EF: 24 01       ADD A,#0x01                   
    14F1: F0          MOVX @DPTR,A                  
    14F2: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    14F5: E0          MOVX A,@DPTR                  
    14F6: FA          MOV R2,A                      
    14F7: 70 07       JNZ 0x1500                       ; -> 0x1500
    14F9: 90 4F E3    MOV DPTR,#0x4FE3                 ; mailbox / host-interface register block
    14FC: E0          MOVX A,@DPTR                  
    14FD: 24 01       ADD A,#0x01                   
    14FF: F0          MOVX @DPTR,A                  
    1500: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1503: E0          MOVX A,@DPTR                  
    1504: 24 01       ADD A,#0x01                   
    1506: F0          MOVX @DPTR,A                  
    1507: 02 12 5B    LJMP 0x125B                      ; -> 0x125B

loc_150A:
    150A: 90 CA 60    MOV DPTR,#0xCA60                 ; register block CA00
    150D: E0          MOVX A,@DPTR                  
    150E: FA          MOV R2,A                      
    150F: 14          DEC A                         
    1510: 90 4F FF    MOV DPTR,#0x4FFF                 ; mailbox / host-interface register block
    1513: F0          MOVX @DPTR,A                  
    1514: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1517: E4          CLR A                         
    1518: F0          MOVX @DPTR,A                  
    1519: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    151C: E0          MOVX A,@DPTR                  
    151D: FA          MOV R2,A                      
    151E: 90 4F FF    MOV DPTR,#0x4FFF                 ; mailbox / host-interface register block
    1521: E0          MOVX A,@DPTR                  
    1522: FB          MOV R3,A                      
    1523: EA          MOV A,R2                      
    1524: B5 03 00    CJNE A,0x03,0x1527               ; -> 0x1527
    1527: 40 03       JC 0x152C                        ; -> loc_152C
    1529: 02 17 18    LJMP 0x1718                      ; -> loc_1718

loc_152C:
    152C: 90 4F E3    MOV DPTR,#0x4FE3                 ; mailbox / host-interface register block
    152F: E0          MOVX A,@DPTR                  
    1530: FA          MOV R2,A                      
    1531: BA 02 02    CJNE R2,#0x02,0x1536             ; -> loc_1536
    1534: 80 03       SJMP 0x1539                      ; -> loc_1539

loc_1536:
    1536: 02 16 F9    LJMP 0x16F9                      ; -> 0x16F9

loc_1539:
    1539: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    153C: E0          MOVX A,@DPTR                  
    153D: FA          MOV R2,A                      
    153E: BA 4A 00    CJNE R2,#0x4A,0x1541             ; -> 0x1541
    1541: 50 03       JNC 0x1546                       ; -> loc_1546
    1543: 02 16 F9    LJMP 0x16F9                      ; -> 0x16F9

loc_1546:
    1546: 74 59       MOV A,#0x59                   
    1548: B5 02 00    CJNE A,0x02,0x154B               ; -> 0x154B
    154B: 50 03       JNC 0x1550                       ; -> loc_1550
    154D: 02 16 F9    LJMP 0x16F9                      ; -> 0x16F9

loc_1550:
    1550: EA          MOV A,R2                      
    1551: 24 B6       ADD A,#0xB6                   
    1553: FA          MOV R2,A                      
    1554: 25 E0       ADD A,ACC(0xE0)               
    1556: 2A          ADD A,R2                      
    1557: 90 15 5B    MOV DPTR,#0x155B              
    155A: 73          JMP @A+DPTR                   
    155B: 02 15 8B    LJMP 0x158B                      ; -> 0x158B
    155E: 02          DB 0x02                       ; data
    155F: 15          DB 0x15                       ; data
    1560: AF          DB 0xAF                       ; data
    1561: 02          DB 0x02                       ; data
    1562: 16          DB 0x16                       ; data
    1563: F9          DB 0xF9                       ; data
    1564: 02          DB 0x02                       ; data
    1565: 16          DB 0x16                       ; data
    1566: F9          DB 0xF9                       ; data
    1567: 02          DB 0x02                       ; data
    1568: 16          DB 0x16                       ; data
    1569: F9          DB 0xF9                       ; data
    156A: 02          DB 0x02                       ; data
    156B: 16          DB 0x16                       ; data
    156C: F9          DB 0xF9                       ; data
    156D: 02          DB 0x02                       ; data
    156E: 15          DB 0x15                       ; data
    156F: D3          DB 0xD3                       ; data
    1570: 02          DB 0x02                       ; data
    1571: 15          DB 0x15                       ; data
    1572: F1          DB 0xF1                       ; data
    1573: 02          DB 0x02                       ; data
    1574: 16          DB 0x16                       ; data
    1575: 0F          DB 0x0F                       ; data
    1576: 02          DB 0x02                       ; data
    1577: 16          DB 0x16                       ; data
    1578: 2D          DB 0x2D                       ; data
    1579: 02          DB 0x02                       ; data
    157A: 16          DB 0x16                       ; data
    157B: 4B          DB 0x4B                       ; data
    157C: 02          DB 0x02                       ; data
    157D: 16          DB 0x16                       ; data
    157E: 69          DB 0x69                       ; data
    157F: 02          DB 0x02                       ; data
    1580: 16          DB 0x16                       ; data
    1581: 87          DB 0x87                       ; data
    1582: 02          DB 0x02                       ; data
    1583: 16          DB 0x16                       ; data
    1584: A4          DB 0xA4                       ; data
    1585: 02          DB 0x02                       ; data
    1586: 16          DB 0x16                       ; data
    1587: C1          DB 0xC1                       ; data
    1588: 02          DB 0x02                       ; data
    1589: 16          DB 0x16                       ; data
    158A: DE          DB 0xDE                       ; data
    158B: 90 4F E9    MOV DPTR,#0x4FE9                 ; mailbox / host-interface register block
    158E: 74 01       MOV A,#0x01                   
    1590: F0          MOVX @DPTR,A                  
    1591: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1594: E0          MOVX A,@DPTR                  
    1595: FA          MOV R2,A                      
    1596: 7B 00       MOV R3,#0x00                  
    1598: 74 63       MOV A,#0x63                   
    159A: 2A          ADD A,R2                      
    159B: FA          MOV R2,A                      
    159C: E4          CLR A                         
    159D: 3B          ADDC A,R3                     
    159E: FB          MOV R3,A                      
    159F: 8A 82       MOV 0x82,R2                   
    15A1: 74 CA       MOV A,#0xCA                   
    15A3: 2B          ADD A,R3                      
    15A4: F5 83       MOV DPH(0x83),A               
    15A6: E0          MOVX A,@DPTR                  
    15A7: FA          MOV R2,A                      
    15A8: 90 C8 7C    MOV DPTR,#0xC87C                 ; control + status register block
    15AB: F0          MOVX @DPTR,A                  
    15AC: 02 16 F9    LJMP 0x16F9                      ; -> 0x16F9
    15AF: 90          DB 0x90                       ; data
    15B0: 4F          DB 0x4F                       ; data
    15B1: E9          DB 0xE9                       ; data
    15B2: 74          DB 0x74                       ; data
    15B3: 01          DB 0x01                       ; data
    15B4: F0          DB 0xF0                       ; data
    15B5: 90          DB 0x90                       ; data
    15B6: 4F          DB 0x4F                       ; data
    15B7: F0          DB 0xF0                       ; data
    15B8: E0          DB 0xE0                       ; data
    15B9: FA          DB 0xFA                       ; data
    15BA: 7B          DB 0x7B                       ; data
    15BB: 00          DB 0x00                       ; data
    15BC: 74          DB 0x74                       ; data
    15BD: 63          DB 0x63                       ; data
    15BE: 2A          DB 0x2A                       ; data
    15BF: FA          DB 0xFA                       ; data
    15C0: E4          DB 0xE4                       ; data
    15C1: 3B          DB 0x3B                       ; data
    15C2: FB          DB 0xFB                       ; data
    15C3: 8A          DB 0x8A                       ; data
    15C4: 82          DB 0x82                       ; data
    15C5: 74          DB 0x74                       ; data
    15C6: CA          DB 0xCA                       ; data
    15C7: 2B          DB 0x2B                       ; data
    15C8: F5          DB 0xF5                       ; data
    15C9: 83          DB 0x83                       ; data
    15CA: E0          DB 0xE0                       ; data
    15CB: FA          DB 0xFA                       ; data
    15CC: 90          DB 0x90                       ; data
    15CD: C8          DB 0xC8                       ; data
    15CE: 7D          DB 0x7D                       ; data
    15CF: F0          DB 0xF0                       ; data
    15D0: 02          DB 0x02                       ; data
    15D1: 16          DB 0x16                       ; data
    15D2: F9          DB 0xF9                       ; data
    15D3: 90          DB 0x90                       ; data
    15D4: 4F          DB 0x4F                       ; data
    15D5: F0          DB 0xF0                       ; data
    15D6: E0          DB 0xE0                       ; data
    15D7: FA          DB 0xFA                       ; data
    15D8: 7B          DB 0x7B                       ; data
    15D9: 00          DB 0x00                       ; data
    15DA: 74          DB 0x74                       ; data
    15DB: 63          DB 0x63                       ; data
    15DC: 2A          DB 0x2A                       ; data
    15DD: FA          DB 0xFA                       ; data
    15DE: E4          DB 0xE4                       ; data
    15DF: 3B          DB 0x3B                       ; data
    15E0: FB          DB 0xFB                       ; data
    15E1: 8A          DB 0x8A                       ; data
    15E2: 82          DB 0x82                       ; data
    15E3: 74          DB 0x74                       ; data
    15E4: CA          DB 0xCA                       ; data
    15E5: 2B          DB 0x2B                       ; data
    15E6: F5          DB 0xF5                       ; data
    15E7: 83          DB 0x83                       ; data
    15E8: E0          DB 0xE0                       ; data
    15E9: FA          DB 0xFA                       ; data
    15EA: 90          DB 0x90                       ; data
    15EB: CE          DB 0xCE                       ; data
    15EC: 89          DB 0x89                       ; data
    15ED: F0          DB 0xF0                       ; data
    15EE: 02          DB 0x02                       ; data
    15EF: 16          DB 0x16                       ; data
    15F0: F9          DB 0xF9                       ; data
    15F1: 90          DB 0x90                       ; data
    15F2: 4F          DB 0x4F                       ; data
    15F3: F0          DB 0xF0                       ; data
    15F4: E0          DB 0xE0                       ; data
    15F5: FA          DB 0xFA                       ; data
    15F6: 7B          DB 0x7B                       ; data
    15F7: 00          DB 0x00                       ; data
    15F8: 74          DB 0x74                       ; data
    15F9: 63          DB 0x63                       ; data
    15FA: 2A          DB 0x2A                       ; data
    15FB: FA          DB 0xFA                       ; data
    15FC: E4          DB 0xE4                       ; data
    15FD: 3B          DB 0x3B                       ; data
    15FE: FB          DB 0xFB                       ; data
    15FF: 8A          DB 0x8A                       ; data
    1600: 82          DB 0x82                       ; data
    1601: 74          DB 0x74                       ; data
    1602: CA          DB 0xCA                       ; data
    1603: 2B          DB 0x2B                       ; data
    1604: F5          DB 0xF5                       ; data
    1605: 83          DB 0x83                       ; data
    1606: E0          DB 0xE0                       ; data
    1607: FA          DB 0xFA                       ; data
    1608: 90          DB 0x90                       ; data
    1609: CE          DB 0xCE                       ; data
    160A: 88          DB 0x88                       ; data
    160B: F0          DB 0xF0                       ; data
    160C: 02          DB 0x02                       ; data
    160D: 16          DB 0x16                       ; data
    160E: F9          DB 0xF9                       ; data
    160F: 90          DB 0x90                       ; data
    1610: 4F          DB 0x4F                       ; data
    1611: F0          DB 0xF0                       ; data
    1612: E0          DB 0xE0                       ; data
    1613: FA          DB 0xFA                       ; data
    1614: 7B          DB 0x7B                       ; data
    1615: 00          DB 0x00                       ; data
    1616: 74          DB 0x74                       ; data
    1617: 63          DB 0x63                       ; data
    1618: 2A          DB 0x2A                       ; data
    1619: FA          DB 0xFA                       ; data
    161A: E4          DB 0xE4                       ; data
    161B: 3B          DB 0x3B                       ; data
    161C: FB          DB 0xFB                       ; data
    161D: 8A          DB 0x8A                       ; data
    161E: 82          DB 0x82                       ; data
    161F: 74          DB 0x74                       ; data
    1620: CA          DB 0xCA                       ; data
    1621: 2B          DB 0x2B                       ; data
    1622: F5          DB 0xF5                       ; data
    1623: 83          DB 0x83                       ; data
    1624: E0          DB 0xE0                       ; data
    1625: FA          DB 0xFA                       ; data
    1626: 90          DB 0x90                       ; data
    1627: CE          DB 0xCE                       ; data
    1628: 87          DB 0x87                       ; data
    1629: F0          DB 0xF0                       ; data
    162A: 02          DB 0x02                       ; data
    162B: 16          DB 0x16                       ; data
    162C: F9          DB 0xF9                       ; data
    162D: 90          DB 0x90                       ; data
    162E: 4F          DB 0x4F                       ; data
    162F: F0          DB 0xF0                       ; data
    1630: E0          DB 0xE0                       ; data
    1631: FA          DB 0xFA                       ; data
    1632: 7B          DB 0x7B                       ; data
    1633: 00          DB 0x00                       ; data
    1634: 74          DB 0x74                       ; data
    1635: 63          DB 0x63                       ; data
    1636: 2A          DB 0x2A                       ; data
    1637: FA          DB 0xFA                       ; data
    1638: E4          DB 0xE4                       ; data
    1639: 3B          DB 0x3B                       ; data
    163A: FB          DB 0xFB                       ; data
    163B: 8A          DB 0x8A                       ; data
    163C: 82          DB 0x82                       ; data
    163D: 74          DB 0x74                       ; data
    163E: CA          DB 0xCA                       ; data
    163F: 2B          DB 0x2B                       ; data
    1640: F5          DB 0xF5                       ; data
    1641: 83          DB 0x83                       ; data
    1642: E0          DB 0xE0                       ; data
    1643: FA          DB 0xFA                       ; data
    1644: 90          DB 0x90                       ; data
    1645: CE          DB 0xCE                       ; data
    1646: 86          DB 0x86                       ; data
    1647: F0          DB 0xF0                       ; data
    1648: 02          DB 0x02                       ; data
    1649: 16          DB 0x16                       ; data
    164A: F9          DB 0xF9                       ; data
    164B: 90          DB 0x90                       ; data
    164C: 4F          DB 0x4F                       ; data
    164D: F0          DB 0xF0                       ; data
    164E: E0          DB 0xE0                       ; data
    164F: FA          DB 0xFA                       ; data
    1650: 7B          DB 0x7B                       ; data
    1651: 00          DB 0x00                       ; data
    1652: 74          DB 0x74                       ; data
    1653: 63          DB 0x63                       ; data
    1654: 2A          DB 0x2A                       ; data
    1655: FA          DB 0xFA                       ; data
    1656: E4          DB 0xE4                       ; data
    1657: 3B          DB 0x3B                       ; data
    1658: FB          DB 0xFB                       ; data
    1659: 8A          DB 0x8A                       ; data
    165A: 82          DB 0x82                       ; data
    165B: 74          DB 0x74                       ; data
    165C: CA          DB 0xCA                       ; data
    165D: 2B          DB 0x2B                       ; data
    165E: F5          DB 0xF5                       ; data
    165F: 83          DB 0x83                       ; data
    1660: E0          DB 0xE0                       ; data
    1661: FA          DB 0xFA                       ; data
    1662: 90          DB 0x90                       ; data
    1663: CE          DB 0xCE                       ; data
    1664: 85          DB 0x85                       ; data
    1665: F0          DB 0xF0                       ; data
    1666: 02          DB 0x02                       ; data
    1667: 16          DB 0x16                       ; data
    1668: F9          DB 0xF9                       ; data
    1669: 90          DB 0x90                       ; data
    166A: 4F          DB 0x4F                       ; data
    166B: F0          DB 0xF0                       ; data
    166C: E0          DB 0xE0                       ; data
    166D: FA          DB 0xFA                       ; data
    166E: 7B          DB 0x7B                       ; data
    166F: 00          DB 0x00                       ; data
    1670: 74          DB 0x74                       ; data
    1671: 63          DB 0x63                       ; data
    1672: 2A          DB 0x2A                       ; data
    1673: FA          DB 0xFA                       ; data
    1674: E4          DB 0xE4                       ; data
    1675: 3B          DB 0x3B                       ; data
    1676: FB          DB 0xFB                       ; data
    1677: 8A          DB 0x8A                       ; data
    1678: 82          DB 0x82                       ; data
    1679: 74          DB 0x74                       ; data
    167A: CA          DB 0xCA                       ; data
    167B: 2B          DB 0x2B                       ; data
    167C: F5          DB 0xF5                       ; data
    167D: 83          DB 0x83                       ; data
    167E: E0          DB 0xE0                       ; data
    167F: FA          DB 0xFA                       ; data
    1680: 90          DB 0x90                       ; data
    1681: CE          DB 0xCE                       ; data
    1682: 84          DB 0x84                       ; data
    1683: F0          DB 0xF0                       ; data
    1684: 02          DB 0x02                       ; data
    1685: 16          DB 0x16                       ; data
    1686: F9          DB 0xF9                       ; data
    1687: 90          DB 0x90                       ; data
    1688: 4F          DB 0x4F                       ; data
    1689: F0          DB 0xF0                       ; data
    168A: E0          DB 0xE0                       ; data
    168B: FA          DB 0xFA                       ; data
    168C: 7B          DB 0x7B                       ; data
    168D: 00          DB 0x00                       ; data
    168E: 74          DB 0x74                       ; data
    168F: 63          DB 0x63                       ; data
    1690: 2A          DB 0x2A                       ; data
    1691: FA          DB 0xFA                       ; data
    1692: E4          DB 0xE4                       ; data
    1693: 3B          DB 0x3B                       ; data
    1694: FB          DB 0xFB                       ; data
    1695: 8A          DB 0x8A                       ; data
    1696: 82          DB 0x82                       ; data
    1697: 74          DB 0x74                       ; data
    1698: CA          DB 0xCA                       ; data
    1699: 2B          DB 0x2B                       ; data
    169A: F5          DB 0xF5                       ; data
    169B: 83          DB 0x83                       ; data
    169C: E0          DB 0xE0                       ; data
    169D: FA          DB 0xFA                       ; data
    169E: 90          DB 0x90                       ; data
    169F: CE          DB 0xCE                       ; data
    16A0: 83          DB 0x83                       ; data
    16A1: F0          DB 0xF0                       ; data
    16A2: 80          DB 0x80                       ; data
    16A3: 55          DB 0x55                       ; data
    16A4: 90          DB 0x90                       ; data
    16A5: 4F          DB 0x4F                       ; data
    16A6: F0          DB 0xF0                       ; data
    16A7: E0          DB 0xE0                       ; data
    16A8: FA          DB 0xFA                       ; data
    16A9: 7B          DB 0x7B                       ; data
    16AA: 00          DB 0x00                       ; data
    16AB: 74          DB 0x74                       ; data
    16AC: 63          DB 0x63                       ; data
    16AD: 2A          DB 0x2A                       ; data
    16AE: FA          DB 0xFA                       ; data
    16AF: E4          DB 0xE4                       ; data
    16B0: 3B          DB 0x3B                       ; data
    16B1: FB          DB 0xFB                       ; data
    16B2: 8A          DB 0x8A                       ; data
    16B3: 82          DB 0x82                       ; data
    16B4: 74          DB 0x74                       ; data
    16B5: CA          DB 0xCA                       ; data
    16B6: 2B          DB 0x2B                       ; data
    16B7: F5          DB 0xF5                       ; data
    16B8: 83          DB 0x83                       ; data
    16B9: E0          DB 0xE0                       ; data
    16BA: FA          DB 0xFA                       ; data
    16BB: 90          DB 0x90                       ; data
    16BC: CE          DB 0xCE                       ; data
    16BD: 82          DB 0x82                       ; data
    16BE: F0          DB 0xF0                       ; data
    16BF: 80          DB 0x80                       ; data
    16C0: 38          DB 0x38                       ; data
    16C1: 90          DB 0x90                       ; data
    16C2: 4F          DB 0x4F                       ; data
    16C3: F0          DB 0xF0                       ; data
    16C4: E0          DB 0xE0                       ; data
    16C5: FA          DB 0xFA                       ; data
    16C6: 7B          DB 0x7B                       ; data
    16C7: 00          DB 0x00                       ; data
    16C8: 74          DB 0x74                       ; data
    16C9: 63          DB 0x63                       ; data
    16CA: 2A          DB 0x2A                       ; data
    16CB: FA          DB 0xFA                       ; data
    16CC: E4          DB 0xE4                       ; data
    16CD: 3B          DB 0x3B                       ; data
    16CE: FB          DB 0xFB                       ; data
    16CF: 8A          DB 0x8A                       ; data
    16D0: 82          DB 0x82                       ; data
    16D1: 74          DB 0x74                       ; data
    16D2: CA          DB 0xCA                       ; data
    16D3: 2B          DB 0x2B                       ; data
    16D4: F5          DB 0xF5                       ; data
    16D5: 83          DB 0x83                       ; data
    16D6: E0          DB 0xE0                       ; data
    16D7: FA          DB 0xFA                       ; data
    16D8: 90          DB 0x90                       ; data
    16D9: CE          DB 0xCE                       ; data
    16DA: 81          DB 0x81                       ; data
    16DB: F0          DB 0xF0                       ; data
    16DC: 80          DB 0x80                       ; data
    16DD: 1B          DB 0x1B                       ; data
    16DE: 90          DB 0x90                       ; data
    16DF: 4F          DB 0x4F                       ; data
    16E0: F0          DB 0xF0                       ; data
    16E1: E0          DB 0xE0                       ; data
    16E2: FA          DB 0xFA                       ; data
    16E3: 7B          DB 0x7B                       ; data
    16E4: 00          DB 0x00                       ; data
    16E5: 74          DB 0x74                       ; data
    16E6: 63          DB 0x63                       ; data
    16E7: 2A          DB 0x2A                       ; data
    16E8: FA          DB 0xFA                       ; data
    16E9: E4          DB 0xE4                       ; data
    16EA: 3B          DB 0x3B                       ; data
    16EB: FB          DB 0xFB                       ; data
    16EC: 8A          DB 0x8A                       ; data
    16ED: 82          DB 0x82                       ; data
    16EE: 74          DB 0x74                       ; data
    16EF: CA          DB 0xCA                       ; data
    16F0: 2B          DB 0x2B                       ; data
    16F1: F5          DB 0xF5                       ; data
    16F2: 83          DB 0x83                       ; data
    16F3: E0          DB 0xE0                       ; data
    16F4: FA          DB 0xFA                       ; data
    16F5: 90          DB 0x90                       ; data
    16F6: CE          DB 0xCE                       ; data
    16F7: 80          DB 0x80                       ; data
    16F8: F0          DB 0xF0                       ; data
    16F9: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    16FC: E0          MOVX A,@DPTR                  
    16FD: 24 01       ADD A,#0x01                   
    16FF: F0          MOVX @DPTR,A                  
    1700: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    1703: E0          MOVX A,@DPTR                  
    1704: FA          MOV R2,A                      
    1705: 70 07       JNZ 0x170E                       ; -> 0x170E
    1707: 90 4F E3    MOV DPTR,#0x4FE3                 ; mailbox / host-interface register block
    170A: E0          MOVX A,@DPTR                  
    170B: 24 01       ADD A,#0x01                   
    170D: F0          MOVX @DPTR,A                  
    170E: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1711: E0          MOVX A,@DPTR                  
    1712: 24 01       ADD A,#0x01                   
    1714: F0          MOVX @DPTR,A                  
    1715: 02 15 19    LJMP 0x1519                      ; -> 0x1519

loc_1718:
    1718: 22          RET                           

sub_1719:
    1719: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    171C: E0          MOVX A,@DPTR                  
    171D: 90 4F FD    MOV DPTR,#0x4FFD                 ; mailbox / host-interface register block
    1720: F0          MOVX @DPTR,A                  
    1721: 90 CA 82    MOV DPTR,#0xCA82                 ; register block CA00
    1724: E0          MOVX A,@DPTR                  
    1725: 90 4F FC    MOV DPTR,#0x4FFC                 ; mailbox / host-interface register block
    1728: F0          MOVX @DPTR,A                  
    1729: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    172C: E0          MOVX A,@DPTR                  
    172D: 90 4F FB    MOV DPTR,#0x4FFB                 ; mailbox / host-interface register block
    1730: F0          MOVX @DPTR,A                  
    1731: 90 CA 84    MOV DPTR,#0xCA84                 ; register block CA00
    1734: E0          MOVX A,@DPTR                  
    1735: 90 4F FA    MOV DPTR,#0x4FFA                 ; mailbox / host-interface register block
    1738: F0          MOVX @DPTR,A                  
    1739: 90 CA 85    MOV DPTR,#0xCA85                 ; register block CA00
    173C: E0          MOVX A,@DPTR                  
    173D: 90 4F FE    MOV DPTR,#0x4FFE                 ; mailbox / host-interface register block
    1740: 04          INC A                         
    1741: F0          MOVX @DPTR,A                  
    1742: 90 4F FC    MOV DPTR,#0x4FFC                 ; mailbox / host-interface register block
    1745: E0          MOVX A,@DPTR                  
    1746: FA          MOV R2,A                      
    1747: 60 01       JZ 0x174A                        ; -> loc_174A
    1749: 22          RET                           

loc_174A:
    174A: 90 4F FD    MOV DPTR,#0x4FFD                 ; mailbox / host-interface register block
    174D: E0          MOVX A,@DPTR                  
    174E: FA          MOV R2,A                      
    174F: BA 08 02    CJNE R2,#0x08,0x1754             ; -> loc_1754
    1752: 80 03       SJMP 0x1757                      ; -> loc_1757

loc_1754:
    1754: 02 17 D3    LJMP 0x17D3                      ; -> loc_17D3

loc_1757:
    1757: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    175A: E4          CLR A                         
    175B: F0          MOVX @DPTR,A                  
    175C: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    175F: E0          MOVX A,@DPTR                  
    1760: FA          MOV R2,A                      
    1761: 90 4F FE    MOV DPTR,#0x4FFE                 ; mailbox / host-interface register block
    1764: E0          MOVX A,@DPTR                  
    1765: FB          MOV R3,A                      
    1766: EA          MOV A,R2                      
    1767: B5 03 00    CJNE A,0x03,0x176A               ; -> 0x176A
    176A: 50 67       JNC 0x17D3                       ; -> loc_17D3
    176C: 90 4F FB    MOV DPTR,#0x4FFB                 ; mailbox / host-interface register block
    176F: E0          MOVX A,@DPTR                  
    1770: FA          MOV R2,A                      
    1771: BA 01 41    CJNE R2,#0x01,0x17B5             ; -> 0x17B5
    1774: 90 4F FA    MOV DPTR,#0x4FFA                 ; mailbox / host-interface register block
    1777: E0          MOVX A,@DPTR                  
    1778: FA          MOV R2,A                      
    1779: BA 0B 00    CJNE R2,#0x0B,0x177C             ; -> 0x177C
    177C: 40 37       JC 0x17B5                        ; -> 0x17B5
    177E: 90 4F FA    MOV DPTR,#0x4FFA                 ; mailbox / host-interface register block
    1781: E0          MOVX A,@DPTR                  
    1782: FA          MOV R2,A                      
    1783: 74 0E       MOV A,#0x0E                   
    1785: B5 02 00    CJNE A,0x02,0x1788               ; -> 0x1788
    1788: 40 2B       JC 0x17B5                        ; -> 0x17B5
    178A: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    178D: E0          MOVX A,@DPTR                  
    178E: 24 DD       ADD A,#0xDD                   
    1790: FA          MOV R2,A                      
    1791: E4          CLR A                         
    1792: 34 4F       ADDC A,#0x4F                  
    1794: FB          MOV R3,A                      
    1795: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    1798: E0          MOVX A,@DPTR                  
    1799: FC          MOV R4,A                      
    179A: 7D 00       MOV R5,#0x00                  
    179C: 74 86       MOV A,#0x86                   
    179E: 2C          ADD A,R4                      
    179F: FC          MOV R4,A                      
    17A0: E4          CLR A                         
    17A1: 3D          ADDC A,R5                     
    17A2: FD          MOV R5,A                      
    17A3: 8C 82       MOV 0x82,R4                   
    17A5: 74 CA       MOV A,#0xCA                   
    17A7: 2D          ADD A,R5                      
    17A8: F5 83       MOV DPH(0x83),A               
    17AA: E0          MOVX A,@DPTR                  
    17AB: FC          MOV R4,A                      
    17AC: 53 04 07    ANL 0x04,#0x07                
    17AF: 8A 82       MOV 0x82,R2                   
    17B1: 8B 83       MOV 0x83,R3                   
    17B3: EC          MOV A,R4                      
    17B4: F0          MOVX @DPTR,A                  
    17B5: 90 4F FA    MOV DPTR,#0x4FFA                 ; mailbox / host-interface register block
    17B8: E0          MOVX A,@DPTR                  
    17B9: 24 01       ADD A,#0x01                   
    17BB: F0          MOVX @DPTR,A                  
    17BC: 90 4F FA    MOV DPTR,#0x4FFA                 ; mailbox / host-interface register block
    17BF: E0          MOVX A,@DPTR                  
    17C0: FA          MOV R2,A                      
    17C1: 70 07       JNZ 0x17CA                       ; -> 0x17CA
    17C3: 90 4F FB    MOV DPTR,#0x4FFB                 ; mailbox / host-interface register block
    17C6: E0          MOVX A,@DPTR                  
    17C7: 24 01       ADD A,#0x01                   
    17C9: F0          MOVX @DPTR,A                  
    17CA: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    17CD: E0          MOVX A,@DPTR                  
    17CE: 24 01       ADD A,#0x01                   
    17D0: F0          MOVX @DPTR,A                  
    17D1: 80 89       SJMP 0x175C                      ; -> 0x175C

loc_17D3:
    17D3: 90 CA 84    MOV DPTR,#0xCA84                 ; register block CA00
    17D6: E0          MOVX A,@DPTR                  
    17D7: 90 4F E2    MOV DPTR,#0x4FE2                 ; mailbox / host-interface register block
    17DA: F0          MOVX @DPTR,A                  
    17DB: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    17DE: E0          MOVX A,@DPTR                  
    17DF: 90 4F E3    MOV DPTR,#0x4FE3                 ; mailbox / host-interface register block
    17E2: F0          MOVX @DPTR,A                  
    17E3: 90 4F FD    MOV DPTR,#0x4FFD                 ; mailbox / host-interface register block
    17E6: E0          MOVX A,@DPTR                  
    17E7: 90 4F E1    MOV DPTR,#0x4FE1                 ; mailbox / host-interface register block
    17EA: F0          MOVX @DPTR,A                  
    17EB: 90 4F FE    MOV DPTR,#0x4FFE                 ; mailbox / host-interface register block
    17EE: E0          MOVX A,@DPTR                  
    17EF: 90 4F DC    MOV DPTR,#0x4FDC                 ; mailbox / host-interface register block
    17F2: F0          MOVX @DPTR,A                  
    17F3: 22          RET                           

sub_17F4:
    17F4: 85 82 28    MOV 0x28,DPL(0x82)            
    17F7: 75 0B 00    MOV 0x0B,#0x00                
    17FA: 75 0C 00    MOV 0x0C,#0x00                
    17FD: 75 7A 20    MOV 0x7A,#0x20                
    1800: 75 7B 0D    MOV 0x7B,#0x0D                
    1803: 75 82 00    MOV DPL(0x82),#0x00           
    1806: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    1809: 74 02       MOV A,#0x02                   
    180B: 55 1E       ANL A,0x1E                    
    180D: FB          MOV R3,A                      
    180E: E5 08       MOV A,0x08                    
    1810: 70 2C       JNZ 0x183E                       ; -> 0x183E
    1812: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    1815: E0          MOVX A,@DPTR                  
    1816: FC          MOV R4,A                      
    1817: 20 E5 24    JB ACC.5,0x183E                  ; -> 0x183E
    181A: 90 D2 18    MOV DPTR,#0xD218                 ; register block D200
    181D: E0          MOVX A,@DPTR                  
    181E: FC          MOV R4,A                      
    181F: 30 E0 1C    JNB ACC.0,0x183E                 ; -> 0x183E
    1822: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    1825: E0          MOVX A,@DPTR                  
    1826: FC          MOV R4,A                      
    1827: 53 04 0F    ANL 0x04,#0x0F                
    182A: 74 01       MOV A,#0x01                   
    182C: B5 04 00    CJNE A,0x04,0x182F               ; -> 0x182F
    182F: 50 0D       JNC 0x183E                       ; -> 0x183E
    1831: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    1834: E0          MOVX A,@DPTR                  
    1835: FC          MOV R4,A                      
    1836: 53 04 FB    ANL 0x04,#0xFB                
    1839: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    183C: EC          MOV A,R4                      
    183D: F0          MOVX @DPTR,A                  
    183E: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    1841: E0          MOVX A,@DPTR                  
    1842: FC          MOV R4,A                      
    1843: BC 02 02    CJNE R4,#0x02,0x1848             ; -> loc_1848
    1846: 80 08       SJMP 0x1850                      ; -> 0x1850

loc_1848:
    1848: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    184B: E0          MOVX A,@DPTR                  
    184C: FC          MOV R4,A                      
    184D: 30 E0 12    JNB ACC.0,0x1862                 ; -> loc_1862
    1850: 75 7A 20    MOV 0x7A,#0x20                
    1853: 75 7B 22    MOV 0x7B,#0x22                
    1856: 75 82 00    MOV DPL(0x82),#0x00           
    1859: C0 03       PUSH 0x03                     
    185B: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    185E: D0 03       POP 0x03                      
    1860: 80 DC       SJMP 0x183E                      ; -> 0x183E

loc_1862:
    1862: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    1865: E0          MOVX A,@DPTR                  
    1866: FC          MOV R4,A                      
    1867: 90 C8 02    MOV DPTR,#0xC802                 ; control + status register block
    186A: E0          MOVX A,@DPTR                  
    186B: FD          MOV R5,A                      
    186C: 74 80       MOV A,#0x80                   
    186E: 5D          ANL A,R5                      
    186F: 4C          ORL A,R4                      
    1870: F5 29       MOV 0x29,A                    
    1872: 90 CA 40    MOV DPTR,#0xCA40                 ; register block CA00
    1875: E0          MOVX A,@DPTR                  
    1876: FD          MOV R5,A                      
    1877: E5 29       MOV A,0x29                    
    1879: 70 06       JNZ 0x1881                       ; -> loc_1881
    187B: ED          MOV A,R5                      
    187C: 70 03       JNZ 0x1881                       ; -> loc_1881
    187E: 02 1A 8B    LJMP 0x1A8B                      ; -> loc_1A8B

loc_1881:
    1881: E5 29       MOV A,0x29                    
    1883: 30 E0 3E    JNB ACC.0,0x18C4                 ; -> loc_18C4
    1886: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    1889: 74 01       MOV A,#0x01                   
    188B: F0          MOVX @DPTR,A                  
    188C: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    188F: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    1892: E0          MOVX A,@DPTR                  
    1893: FE          MOV R6,A                      
    1894: 53 06 FE    ANL 0x06,#0xFE                
    1897: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    189A: EE          MOV A,R6                      
    189B: F0          MOVX @DPTR,A                  
    189C: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    189F: E0          MOVX A,@DPTR                  
    18A0: FE          MOV R6,A                      
    18A1: 43 06 01    ORL 0x06,#0x01                
    18A4: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    18A7: EE          MOV A,R6                      
    18A8: F0          MOVX @DPTR,A                  
    18A9: 90 C2 00    MOV DPTR,#0xC200              
    18AC: E0          MOVX A,@DPTR                  
    18AD: FE          MOV R6,A                      
    18AE: 74 F1       MOV A,#0xF1                   
    18B0: 5E          ANL A,R6                      
    18B1: 44 03       ORL A,#0x03                   
    18B3: 90 C2 00    MOV DPTR,#0xC200              
    18B6: F0          MOVX @DPTR,A                  
    18B7: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    18BA: E4          CLR A                         
    18BB: F0          MOVX @DPTR,A                  
    18BC: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    18BF: F0          MOVX @DPTR,A                  
    18C0: 75 82 01    MOV DPL(0x82),#0x01           
    18C3: 22          RET                           

loc_18C4:
    18C4: E5 29       MOV A,0x29                    
    18C6: 30 E1 3A    JNB ACC.1,0x1903                 ; -> 0x1903
    18C9: 90 4F B1    MOV DPTR,#0x4FB1                 ; mailbox / host-interface register block
    18CC: E0          MOVX A,@DPTR                  
    18CD: FE          MOV R6,A                      
    18CE: 60 16       JZ 0x18E6                        ; -> loc_18E6
    18D0: 75 7A 20    MOV 0x7A,#0x20                
    18D3: 75 7B 28    MOV 0x7B,#0x28                
    18D6: 75 82 00    MOV DPL(0x82),#0x00           
    18D9: C0 03       PUSH 0x03                     
    18DB: C0 05       PUSH 0x05                     
    18DD: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    18E0: D0 05       POP 0x05                      
    18E2: D0 03       POP 0x03                      
    18E4: 80 E3       SJMP 0x18C9                      ; -> 0x18C9

loc_18E6:
    18E6: 75 0D 01    MOV 0x0D,#0x01                
    18E9: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    18EC: 74 02       MOV A,#0x02                   
    18EE: F0          MOVX @DPTR,A                  
    18EF: 75 7A 04    MOV 0x7A,#0x04                
    18F2: 75 7B 1B    MOV 0x7B,#0x1B                
    18F5: 75 82 00    MOV DPL(0x82),#0x00           
    18F8: C0 03       PUSH 0x03                     
    18FA: C0 05       PUSH 0x05                     
    18FC: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    18FF: D0 05       POP 0x05                      
    1901: D0 03       POP 0x03                      
    1903: E5 29       MOV A,0x29                    
    1905: 30 E5 09    JNB ACC.5,0x1911                 ; -> 0x1911
    1908: 75 0E 01    MOV 0x0E,#0x01                
    190B: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    190E: 74 08       MOV A,#0x08                   
    1910: F0          MOVX @DPTR,A                  
    1911: ED          MOV A,R5                      
    1912: 30 E5 0F    JNB ACC.5,0x1924                 ; -> 0x1924
    1915: 75 0B 01    MOV 0x0B,#0x01                
    1918: 90 CA 0E    MOV DPTR,#0xCA0E                 ; register block CA00
    191B: 74 01       MOV A,#0x01                   
    191D: F0          MOVX @DPTR,A                  
    191E: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    1921: 74 05       MOV A,#0x05                   
    1923: F0          MOVX @DPTR,A                  
    1924: ED          MOV A,R5                      
    1925: 30 E1 67    JNB ACC.1,0x198F                 ; -> 0x198F
    1928: EB          MOV A,R3                      
    1929: 60 5E       JZ 0x1989                        ; -> loc_1989
    192B: AE 22       MOV R6,0x22                   
    192D: AF 23       MOV R7,0x23                   
    192F: AA 24       MOV R2,0x24                   
    1931: 90 CA 60    MOV DPTR,#0xCA60                 ; register block CA00
    1934: E0          MOVX A,@DPTR                  
    1935: 8E 82       MOV 0x82,R6                   
    1937: 8F 83       MOV 0x83,R7                   
    1939: 8A F0       MOV 0xF0,R2                   
    193B: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    193E: AA 1F       MOV R2,0x1F                   
    1940: AC 20       MOV R4,0x20                   
    1942: AE 21       MOV R6,0x21                   
    1944: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    1947: E0          MOVX A,@DPTR                  
    1948: 8A 82       MOV 0x82,R2                   
    194A: 8C 83       MOV 0x83,R4                   
    194C: 8E F0       MOV 0xF0,R6                   
    194E: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1951: AA 25       MOV R2,0x25                   
    1953: AC 26       MOV R4,0x26                   
    1955: AE 27       MOV R6,0x27                   
    1957: 8A 82       MOV 0x82,R2                   
    1959: 8C 83       MOV 0x83,R4                   
    195B: 8E F0       MOV 0xF0,R6                   
    195D: 74 61       MOV A,#0x61                   
    195F: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1962: A3          INC DPTR                      
    1963: 74 CA       MOV A,#0xCA                   
    1965: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1968: A3          INC DPTR                      
    1969: E4          CLR A                         
    196A: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    196D: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    1970: 74 03       MOV A,#0x03                   
    1972: F0          MOVX @DPTR,A                  
    1973: 75 7A 20    MOV 0x7A,#0x20                
    1976: 75 7B 0E    MOV 0x7B,#0x0E                
    1979: 75 82 00    MOV DPL(0x82),#0x00           
    197C: C0 03       PUSH 0x03                     
    197E: C0 05       PUSH 0x05                     
    1980: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    1983: D0 05       POP 0x05                      
    1985: D0 03       POP 0x03                      
    1987: 80 06       SJMP 0x198F                      ; -> 0x198F

loc_1989:
    1989: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    198C: 74 01       MOV A,#0x01                   
    198E: F0          MOVX @DPTR,A                  
    198F: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    1992: E0          MOVX A,@DPTR                  
    1993: FA          MOV R2,A                      
    1994: 20 E2 49    JB ACC.2,0x19E0                  ; -> 0x19E0
    1997: ED          MOV A,R5                      
    1998: 30 E6 23    JNB ACC.6,0x19BE                 ; -> 0x19BE
    199B: 75 0C 01    MOV 0x0C,#0x01                
    199E: 90 CA 0E    MOV DPTR,#0xCA0E                 ; register block CA00
    19A1: 74 01       MOV A,#0x01                   
    19A3: F0          MOVX @DPTR,A                  
    19A4: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    19A7: 74 05       MOV A,#0x05                   
    19A9: F0          MOVX @DPTR,A                  
    19AA: 75 7A 20    MOV 0x7A,#0x20                
    19AD: 75 7B 1A    MOV 0x7B,#0x1A                
    19B0: 75 82 00    MOV DPL(0x82),#0x00           
    19B3: C0 03       PUSH 0x03                     
    19B5: C0 05       PUSH 0x05                     
    19B7: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    19BA: D0 05       POP 0x05                      
    19BC: D0 03       POP 0x03                      
    19BE: ED          MOV A,R5                      
    19BF: 30 E2 1E    JNB ACC.2,0x19E0                 ; -> 0x19E0
    19C2: 90 CA 0B    MOV DPTR,#0xCA0B                 ; register block CA00
    19C5: 74 01       MOV A,#0x01                   
    19C7: F0          MOVX @DPTR,A                  
    19C8: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    19CB: E0          MOVX A,@DPTR                  
    19CC: FA          MOV R2,A                      
    19CD: 43 02 04    ORL 0x02,#0x04                
    19D0: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    19D3: EA          MOV A,R2                      
    19D4: F0          MOVX @DPTR,A                  
    19D5: C0 03       PUSH 0x03                     
    19D7: C0 05       PUSH 0x05                     
    19D9: 12 12 17    LCALL 0x1217                     ; -> sub_1217
    19DC: D0 05       POP 0x05                      
    19DE: D0 03       POP 0x03                      
    19E0: ED          MOV A,R5                      
    19E1: 30 E3 2B    JNB ACC.3,0x1A0F                 ; -> 0x1A0F
    19E4: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    19E7: E0          MOVX A,@DPTR                  
    19E8: FA          MOV R2,A                      
    19E9: 20 E2 23    JB ACC.2,0x1A0F                  ; -> 0x1A0F
    19EC: 90 CA 09    MOV DPTR,#0xCA09                 ; register block CA00
    19EF: 74 01       MOV A,#0x01                   
    19F1: F0          MOVX @DPTR,A                  
    19F2: C0 03       PUSH 0x03                     
    19F4: C0 05       PUSH 0x05                     
    19F6: 12 17 19    LCALL 0x1719                     ; -> sub_1719
    19F9: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    19FC: 74 04       MOV A,#0x04                   
    19FE: F0          MOVX @DPTR,A                  
    19FF: 75 7A 20    MOV 0x7A,#0x20                
    1A02: 75 7B 0F    MOV 0x7B,#0x0F                
    1A05: 75 82 00    MOV DPL(0x82),#0x00           
    1A08: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    1A0B: D0 05       POP 0x05                      
    1A0D: D0 03       POP 0x03                      
    1A0F: E5 29       MOV A,0x29                    
    1A11: 30 E2 77    JNB ACC.2,0x1A8B                 ; -> loc_1A8B
    1A14: 75 16 01    MOV 0x16,#0x01                
    1A17: 90 CC 35    MOV DPTR,#0xCC35                 ; register block CC00
    1A1A: E0          MOVX A,@DPTR                  
    1A1B: FA          MOV R2,A                      
    1A1C: 78 7E       MOV R0,#0x7E                  
    1A1E: A6 02       MOV @R0,0x02                  
    1A20: 90 CC 36    MOV DPTR,#0xCC36                 ; register block CC00
    1A23: E0          MOVX A,@DPTR                  
    1A24: FA          MOV R2,A                      
    1A25: 78 7F       MOV R0,#0x7F                  
    1A27: A6 02       MOV @R0,0x02                  
    1A29: 90 CC 37    MOV DPTR,#0xCC37                 ; register block CC00
    1A2C: E0          MOVX A,@DPTR                  
    1A2D: FA          MOV R2,A                      
    1A2E: 78 80       MOV R0,#0x80                  
    1A30: A6 02       MOV @R0,0x02                  
    1A32: 78 7F       MOV R0,#0x7F                  
    1A34: 86 02       MOV 0x02,@R0                  
    1A36: BA 01 02    CJNE R2,#0x01,0x1A3B             ; -> loc_1A3B
    1A39: 80 03       SJMP 0x1A3E                      ; -> 0x1A3E

loc_1A3B:
    1A3B: BA 05 0C    CJNE R2,#0x05,0x1A4A             ; -> 0x1A4A
    1A3E: 78 80       MOV R0,#0x80                  
    1A40: 86 02       MOV 0x02,@R0                  
    1A42: 53 02 DF    ANL 0x02,#0xDF                
    1A45: 90 CC 94    MOV DPTR,#0xCC94                 ; register block CC00
    1A48: EA          MOV A,R2                      
    1A49: F0          MOVX @DPTR,A                  
    1A4A: 78 7E       MOV R0,#0x7E                  
    1A4C: 86 02       MOV 0x02,@R0                  
    1A4E: 74 07       MOV A,#0x07                   
    1A50: 5A          ANL A,R2                      
    1A51: FC          MOV R4,A                      
    1A52: 53 02 18    ANL 0x02,#0x18                
    1A55: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    1A58: E0          MOVX A,@DPTR                  
    1A59: FE          MOV R6,A                      
    1A5A: 60 0D       JZ 0x1A69                        ; -> 0x1A69
    1A5C: EA          MOV A,R2                      
    1A5D: B5 0A 06    CJNE A,0x0A,0x1A66               ; -> loc_1A66
    1A60: EC          MOV A,R4                      
    1A61: B5 09 02    CJNE A,0x09,0x1A66               ; -> loc_1A66
    1A64: 80 03       SJMP 0x1A69                      ; -> 0x1A69

loc_1A66:
    1A66: 75 15 01    MOV 0x15,#0x01                
    1A69: 90 4F DA    MOV DPTR,#0x4FDA                 ; mailbox / host-interface register block
    1A6C: 74 06       MOV A,#0x06                   
    1A6E: F0          MOVX @DPTR,A                  
    1A6F: 75 7A 20    MOV 0x7A,#0x20                
    1A72: 75 7B 07    MOV 0x7B,#0x07                
    1A75: 75 82 00    MOV DPL(0x82),#0x00           
    1A78: C0 03       PUSH 0x03                     
    1A7A: C0 05       PUSH 0x05                     
    1A7C: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    1A7F: D0 05       POP 0x05                      
    1A81: D0 03       POP 0x03                      
    1A83: E5 15       MOV A,0x15                    
    1A85: 60 04       JZ 0x1A8B                        ; -> loc_1A8B
    1A87: 75 82 09    MOV DPL(0x82),#0x09           
    1A8A: 22          RET                           

loc_1A8B:
    1A8B: E5 28       MOV A,0x28                    
    1A8D: 55 29       ANL A,0x29                    
    1A8F: 70 08       JNZ 0x1A99                       ; -> loc_1A99
    1A91: E5 1E       MOV A,0x1E                    
    1A93: 5D          ANL A,R5                      
    1A94: 70 03       JNZ 0x1A99                       ; -> loc_1A99
    1A96: 02 18 0E    LJMP 0x180E                      ; -> 0x180E

loc_1A99:
    1A99: 75 7A 20    MOV 0x7A,#0x20                
    1A9C: 75 7B 10    MOV 0x7B,#0x10                
    1A9F: 75 82 00    MOV DPL(0x82),#0x00           
    1AA2: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    1AA5: 75 82 00    MOV DPL(0x82),#0x00           
    1AA8: 22          RET                           

sub_1AA9:
    1AA9: 85 82 36    MOV 0x36,DPL(0x82)            
    1AAC: 75 37 00    MOV 0x37,#0x00                
    1AAF: 75 38 00    MOV 0x38,#0x00                
    1AB2: 85 2E 3A    MOV 0x3A,0x2E                 
    1AB5: 90 CC 91    MOV DPTR,#0xCC91                 ; register block CC00
    1AB8: E4          CLR A                         
    1AB9: F0          MOVX @DPTR,A                  
    1ABA: 85 33 51    MOV 0x51,0x33                 
    1ABD: 85 34 52    MOV 0x52,0x34                 
    1AC0: 85 35 53    MOV 0x53,0x35                 
    1AC3: 74 08       MOV A,#0x08                   
    1AC5: B5 36 04    CJNE A,0x36,0x1ACC               ; -> loc_1ACC
    1AC8: 74 01       MOV A,#0x01                   
    1ACA: 80 01       SJMP 0x1ACD                      ; -> 0x1ACD

loc_1ACC:
    1ACC: E4          CLR A                         
    1ACD: F9          MOV R1,A                      
    1ACE: 75 3B 00    MOV 0x3B,#0x00                
    1AD1: 85 2A 3C    MOV 0x3C,0x2A                 
    1AD4: 85 2B 3D    MOV 0x3D,0x2B                 
    1AD7: 85 2C 3E    MOV 0x3E,0x2C                 
    1ADA: 85 2D 3F    MOV 0x3F,0x2D                 
    1ADD: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    1AE0: E5 36       MOV A,0x36                    
    1AE2: F0          MOVX @DPTR,A                  
    1AE3: AA 3C       MOV R2,0x3C                   
    1AE5: 90 CA 24    MOV DPTR,#0xCA24                 ; register block CA00
    1AE8: EA          MOV A,R2                      
    1AE9: F0          MOVX @DPTR,A                  
    1AEA: 85 3D 3C    MOV 0x3C,0x3D                 
    1AED: 85 3E 3D    MOV 0x3D,0x3E                 
    1AF0: 85 3F 3E    MOV 0x3E,0x3F                 
    1AF3: 75 3F 00    MOV 0x3F,#0x00                
    1AF6: AA 3C       MOV R2,0x3C                   
    1AF8: 7B 00       MOV R3,#0x00                  
    1AFA: 7C 00       MOV R4,#0x00                  
    1AFC: 7D 00       MOV R5,#0x00                  
    1AFE: 90 CA 23    MOV DPTR,#0xCA23                 ; register block CA00
    1B01: EA          MOV A,R2                      
    1B02: F0          MOVX @DPTR,A                  
    1B03: 90 CA 22    MOV DPTR,#0xCA22                 ; register block CA00
    1B06: E4          CLR A                         
    1B07: F0          MOVX @DPTR,A                  
    1B08: E5 2E       MOV A,0x2E                    
    1B0A: 14          DEC A                         
    1B0B: FA          MOV R2,A                      
    1B0C: 90 CA 25    MOV DPTR,#0xCA25                 ; register block CA00
    1B0F: F0          MOVX @DPTR,A                  
    1B10: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    1B13: 74 04       MOV A,#0x04                   
    1B15: F0          MOVX @DPTR,A                  
    1B16: E9          MOV A,R1                      
    1B17: 60 1A       JZ 0x1B33                        ; -> 0x1B33
    1B19: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    1B1C: E0          MOVX A,@DPTR                  
    1B1D: 25 2E       ADD A,0x2E                    
    1B1F: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    1B22: F0          MOVX @DPTR,A                  
    1B23: 85 2F 7A    MOV 0x7A,0x2F                 
    1B26: 85 2E 7B    MOV 0x7B,0x2E                 
    1B29: 90 CA 26    MOV DPTR,#0xCA26                 ; register block CA00
    1B2C: C0 01       PUSH 0x01                     
    1B2E: 12 04 38    LCALL 0x0438                     ; -> sub_0438
    1B31: D0 01       POP 0x01                      
    1B33: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    1B36: 74 01       MOV A,#0x01                   
    1B38: F0          MOVX @DPTR,A                  
    1B39: 75 1F 39    MOV 0x1F,#0x39                
    1B3C: 75 20 00    MOV 0x20,#0x00                
    1B3F: 75 21 40    MOV 0x21,#0x40                
    1B42: 75 1E 22    MOV 0x1E,#0x22                
    1B45: 85 30 22    MOV 0x22,0x30                 
    1B48: 85 31 23    MOV 0x23,0x31                 
    1B4B: 85 32 24    MOV 0x24,0x32                 
    1B4E: 85 51 25    MOV 0x25,0x51                 
    1B51: 85 52 26    MOV 0x26,0x52                 
    1B54: 85 53 27    MOV 0x27,0x53                 
    1B57: 75 82 00    MOV DPL(0x82),#0x00           
    1B5A: C0 01       PUSH 0x01                     
    1B5C: 12 17 F4    LCALL 0x17F4                     ; -> sub_17F4
    1B5F: AA 82       MOV R2,0x82                   
    1B61: D0 01       POP 0x01                      
    1B63: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1B66: EA          MOV A,R2                      
    1B67: F0          MOVX @DPTR,A                  
    1B68: EA          MOV A,R2                      
    1B69: 60 07       JZ 0x1B72                        ; -> loc_1B72
    1B6B: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1B6E: E0          MOVX A,@DPTR                  
    1B6F: F5 82       MOV DPL(0x82),A               
    1B71: 22          RET                           

loc_1B72:
    1B72: E5 0B       MOV A,0x0B                    
    1B74: 70 24       JNZ 0x1B9A                       ; -> 0x1B9A
    1B76: 85 51 82    MOV DPL(0x82),0x51            
    1B79: 85 52 83    MOV DPH(0x83),0x52            
    1B7C: 85 53 F0    MOV B(0xF0),0x53              
    1B7F: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1B82: FA          MOV R2,A                      
    1B83: A3          INC DPTR                      
    1B84: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1B87: FB          MOV R3,A                      
    1B88: A3          INC DPTR                      
    1B89: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1B8C: FC          MOV R4,A                      
    1B8D: 8A 82       MOV 0x82,R2                   
    1B8F: 8B 83       MOV 0x83,R3                   
    1B91: 8C F0       MOV 0xF0,R4                   
    1B93: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1B96: FA          MOV R2,A                      
    1B97: BA 02 10    CJNE R2,#0x02,0x1BAA             ; -> 0x1BAA
    1B9A: 90 CC 91    MOV DPTR,#0xCC91                 ; register block CC00
    1B9D: E0          MOVX A,@DPTR                  
    1B9E: FA          MOV R2,A                      
    1B9F: 90 CC 92    MOV DPTR,#0xCC92                 ; register block CC00
    1BA2: E0          MOVX A,@DPTR                  
    1BA3: FB          MOV R3,A                      
    1BA4: EA          MOV A,R2                      
    1BA5: B5 03 00    CJNE A,0x03,0x1BA8               ; -> 0x1BA8
    1BA8: 40 08       JC 0x1BB2                        ; -> 0x1BB2
    1BAA: 90 CA 41    MOV DPTR,#0xCA41                 ; register block CA00
    1BAD: E0          MOVX A,@DPTR                  
    1BAE: FA          MOV R2,A                      
    1BAF: 30 E0 26    JNB ACC.0,0x1BD8                 ; -> loc_1BD8
    1BB2: 90 CA 41    MOV DPTR,#0xCA41                 ; register block CA00
    1BB5: E0          MOVX A,@DPTR                  
    1BB6: FA          MOV R2,A                      
    1BB7: 30 E0 0A    JNB ACC.0,0x1BC4                 ; -> 0x1BC4
    1BBA: 90 01 A4    MOV DPTR,#0x01A4              
    1BBD: C0 01       PUSH 0x01                     
    1BBF: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    1BC2: D0 01       POP 0x01                      
    1BC4: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    1BC7: 74 01       MOV A,#0x01                   
    1BC9: F0          MOVX @DPTR,A                  
    1BCA: 90 CC 91    MOV DPTR,#0xCC91                 ; register block CC00
    1BCD: E0          MOVX A,@DPTR                  
    1BCE: FA          MOV R2,A                      
    1BCF: 0A          INC R2                        
    1BD0: 90 CC 91    MOV DPTR,#0xCC91                 ; register block CC00
    1BD3: EA          MOV A,R2                      
    1BD4: F0          MOVX @DPTR,A                  
    1BD5: 02 1A D1    LJMP 0x1AD1                      ; -> 0x1AD1

loc_1BD8:
    1BD8: AA 30       MOV R2,0x30                   
    1BDA: AB 31       MOV R3,0x31                   
    1BDC: AC 32       MOV R4,0x32                   
    1BDE: 8A 82       MOV 0x82,R2                   
    1BE0: 8B 83       MOV 0x83,R3                   
    1BE2: 8C F0       MOV 0xF0,R4                   
    1BE4: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1BE7: FD          MOV R5,A                      
    1BE8: 1D          DEC R5                        
    1BE9: 8A 82       MOV 0x82,R2                   
    1BEB: 8B 83       MOV 0x83,R3                   
    1BED: 8C F0       MOV 0xF0,R4                   
    1BEF: ED          MOV A,R5                      
    1BF0: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1BF3: B5 2E 02    CJNE A,0x2E,0x1BF8               ; -> loc_1BF8
    1BF6: 80 03       SJMP 0x1BFB                      ; -> 0x1BFB

loc_1BF8:
    1BF8: 75 38 01    MOV 0x38,#0x01                
    1BFB: 74 09       MOV A,#0x09                   
    1BFD: B5 36 04    CJNE A,0x36,0x1C04               ; -> loc_1C04
    1C00: 74 01       MOV A,#0x01                   
    1C02: 80 01       SJMP 0x1C05                      ; -> 0x1C05

loc_1C04:
    1C04: E4          CLR A                         
    1C05: F5 50       MOV 0x50,A                    
    1C07: 60 04       JZ 0x1C0D                        ; -> 0x1C0D
    1C09: E5 38       MOV A,0x38                    
    1C0B: 70 35       JNZ 0x1C42                       ; -> 0x1C42
    1C0D: E9          MOV A,R1                      
    1C0E: 70 03       JNZ 0x1C13                       ; -> loc_1C13
    1C10: 02 1D 0D    LJMP 0x1D0D                      ; -> loc_1D0D

loc_1C13:
    1C13: C0 01       PUSH 0x01                     
    1C15: 85 51 82    MOV DPL(0x82),0x51            
    1C18: 85 52 83    MOV DPH(0x83),0x52            
    1C1B: 85 53 F0    MOV B(0xF0),0x53              
    1C1E: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C21: F9          MOV R1,A                      
    1C22: A3          INC DPTR                      
    1C23: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C26: FD          MOV R5,A                      
    1C27: A3          INC DPTR                      
    1C28: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C2B: FE          MOV R6,A                      
    1C2C: 89 82       MOV 0x82,R1                   
    1C2E: 8D 83       MOV 0x83,R5                   
    1C30: 8E F0       MOV 0xF0,R6                   
    1C32: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C35: F9          MOV R1,A                      
    1C36: B9 01 02    CJNE R1,#0x01,0x1C3B             ; -> loc_1C3B
    1C39: 80 05       SJMP 0x1C40                      ; -> loc_1C40

loc_1C3B:
    1C3B: D0 01       POP 0x01                      
    1C3D: 02 1D 0D    LJMP 0x1D0D                      ; -> loc_1D0D

loc_1C40:
    1C40: D0 01       POP 0x01                      
    1C42: E5 50       MOV A,0x50                    
    1C44: 60 3A       JZ 0x1C80                        ; -> loc_1C80
    1C46: E5 37       MOV A,0x37                    
    1C48: 24 9E       ADD A,#0x9E                   
    1C4A: FD          MOV R5,A                      
    1C4B: E4          CLR A                         
    1C4C: 34 4F       ADDC A,#0x4F                  
    1C4E: FE          MOV R6,A                      
    1C4F: 7F 00       MOV R7,#0x00                  
    1C51: 75 7A 63    MOV 0x7A,#0x63                
    1C54: 75 7B CA    MOV 0x7B,#0xCA                
    1C57: 75 7C 00    MOV 0x7C,#0x00                
    1C5A: 8A 82       MOV 0x82,R2                   
    1C5C: 8B 83       MOV 0x83,R3                   
    1C5E: 8C F0       MOV 0xF0,R4                   
    1C60: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C63: F5 7D       MOV 0x7D,A                    
    1C65: 8D 82       MOV 0x82,R5                   
    1C67: 8E 83       MOV 0x83,R6                   
    1C69: 8F F0       MOV 0xF0,R7                   
    1C6B: C0 02       PUSH 0x02                     
    1C6D: C0 03       PUSH 0x03                     
    1C6F: C0 04       PUSH 0x04                     
    1C71: C0 01       PUSH 0x01                     
    1C73: 12 02 F1    LCALL 0x02F1                     ; -> sub_02F1
    1C76: D0 01       POP 0x01                      
    1C78: D0 04       POP 0x04                      
    1C7A: D0 03       POP 0x03                      
    1C7C: D0 02       POP 0x02                      
    1C7E: 80 36       SJMP 0x1CB6                      ; -> 0x1CB6

loc_1C80:
    1C80: 85 51 82    MOV DPL(0x82),0x51            
    1C83: 85 52 83    MOV DPH(0x83),0x52            
    1C86: 85 53 F0    MOV B(0xF0),0x53              
    1C89: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C8C: FD          MOV R5,A                      
    1C8D: A3          INC DPTR                      
    1C8E: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C91: FE          MOV R6,A                      
    1C92: A3          INC DPTR                      
    1C93: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1C96: FF          MOV R7,A                      
    1C97: 74 02       MOV A,#0x02                   
    1C99: 2D          ADD A,R5                      
    1C9A: FD          MOV R5,A                      
    1C9B: E4          CLR A                         
    1C9C: 3E          ADDC A,R6                     
    1C9D: FE          MOV R6,A                      
    1C9E: 8D 82       MOV 0x82,R5                   
    1CA0: 8E 83       MOV 0x83,R6                   
    1CA2: 8F F0       MOV 0xF0,R7                   
    1CA4: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1CA7: FD          MOV R5,A                      
    1CA8: 8A 82       MOV 0x82,R2                   
    1CAA: 8B 83       MOV 0x83,R3                   
    1CAC: 8C F0       MOV 0xF0,R4                   
    1CAE: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1CB1: ED          MOV A,R5                      
    1CB2: 25 2F       ADD A,0x2F                    
    1CB4: F5 2F       MOV 0x2F,A                    
    1CB6: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    1CB9: 74 01       MOV A,#0x01                   
    1CBB: F0          MOVX @DPTR,A                  
    1CBC: 8A 82       MOV 0x82,R2                   
    1CBE: 8B 83       MOV 0x83,R3                   
    1CC0: 8C F0       MOV 0xF0,R4                   
    1CC2: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1CC5: 25 37       ADD A,0x37                    
    1CC7: F5 37       MOV 0x37,A                    
    1CC9: 8A 82       MOV 0x82,R2                   
    1CCB: 8B 83       MOV 0x83,R3                   
    1CCD: 8C F0       MOV 0xF0,R4                   
    1CCF: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1CD2: FD          MOV R5,A                      
    1CD3: E5 2E       MOV A,0x2E                    
    1CD5: C3          CLR C                         
    1CD6: 9D          SUBB A,R5                     
    1CD7: F5 2E       MOV 0x2E,A                    
    1CD9: 8A 82       MOV 0x82,R2                   
    1CDB: 8B 83       MOV 0x83,R3                   
    1CDD: 8C F0       MOV 0xF0,R4                   
    1CDF: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1CE2: FD          MOV R5,A                      
    1CE3: E4          CLR A                         
    1CE4: FE          MOV R6,A                      
    1CE5: FF          MOV R7,A                      
    1CE6: F8          MOV R0,A                      
    1CE7: ED          MOV A,R5                      
    1CE8: 25 2A       ADD A,0x2A                    
    1CEA: F5 2A       MOV 0x2A,A                    
    1CEC: EE          MOV A,R6                      
    1CED: 35 2B       ADDC A,0x2B                   
    1CEF: F5 2B       MOV 0x2B,A                    
    1CF1: EF          MOV A,R7                      
    1CF2: 35 2C       ADDC A,0x2C                   
    1CF4: F5 2C       MOV 0x2C,A                    
    1CF6: E8          MOV A,R0                      
    1CF7: 35 2D       ADDC A,0x2D                   
    1CF9: F5 2D       MOV 0x2D,A                    
    1CFB: E5 37       MOV A,0x37                    
    1CFD: B5 3A 00    CJNE A,0x3A,0x1D00               ; -> 0x1D00
    1D00: 50 0B       JNC 0x1D0D                       ; -> loc_1D0D
    1D02: 05 3B       INC 0x3B                      
    1D04: 74 CE       MOV A,#0xCE                   
    1D06: 25 3B       ADD A,0x3B                    
    1D08: 40 03       JC 0x1D0D                        ; -> loc_1D0D
    1D0A: 02 1A D1    LJMP 0x1AD1                      ; -> 0x1AD1

loc_1D0D:
    1D0D: E5 38       MOV A,0x38                    
    1D0F: 60 52       JZ 0x1D63                        ; -> 0x1D63
    1D11: E5 50       MOV A,0x50                    
    1D13: 60 27       JZ 0x1D3C                        ; -> loc_1D3C
    1D15: 8A 82       MOV 0x82,R2                   
    1D17: 8B 83       MOV 0x83,R3                   
    1D19: 8C F0       MOV 0xF0,R4                   
    1D1B: E5 37       MOV A,0x37                    
    1D1D: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1D20: 04          INC A                         
    1D21: 90 CA 60    MOV DPTR,#0xCA60                 ; register block CA00
    1D24: F0          MOVX @DPTR,A                  
    1D25: 75 7A 9E    MOV 0x7A,#0x9E                
    1D28: 75 7B 4F    MOV 0x7B,#0x4F                
    1D2B: 75 7C 00    MOV 0x7C,#0x00                
    1D2E: 85 37 7D    MOV 0x7D,0x37                 
    1D31: 90 CA 63    MOV DPTR,#0xCA63                 ; register block CA00
    1D34: 75 F0 00    MOV B(0xF0),#0x00             
    1D37: 12 02 F1    LCALL 0x02F1                     ; -> sub_02F1
    1D3A: 80 27       SJMP 0x1D63                      ; -> 0x1D63

loc_1D3C:
    1D3C: E5 3A       MOV A,0x3A                    
    1D3E: B5 37 04    CJNE A,0x37,0x1D45               ; -> loc_1D45
    1D41: 74 01       MOV A,#0x01                   
    1D43: 80 01       SJMP 0x1D46                      ; -> 0x1D46

loc_1D45:
    1D45: E4          CLR A                         
    1D46: FA          MOV R2,A                      
    1D47: B4 01 00    CJNE A,#0x01,0x1D4A              ; -> 0x1D4A
    1D4A: E4          CLR A                         
    1D4B: 33          RLC A                         
    1D4C: FA          MOV R2,A                      
    1D4D: 04          INC A                         
    1D4E: FB          MOV R3,A                      
    1D4F: 90 CA 60    MOV DPTR,#0xCA60                 ; register block CA00
    1D52: F0          MOVX @DPTR,A                  
    1D53: EA          MOV A,R2                      
    1D54: 90 3E F5    MOV DPTR,#0x3EF5              
    1D57: 93          MOVC A,@A+DPTR                
    1D58: FA          MOV R2,A                      
    1D59: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    1D5C: F0          MOVX @DPTR,A                  
    1D5D: 90 CA 63    MOV DPTR,#0xCA63                 ; register block CA00
    1D60: E5 37       MOV A,0x37                    
    1D62: F0          MOVX @DPTR,A                  
    1D63: 85 51 82    MOV DPL(0x82),0x51            
    1D66: 85 52 83    MOV DPH(0x83),0x52            
    1D69: 85 53 F0    MOV B(0xF0),0x53              
    1D6C: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1D6F: FA          MOV R2,A                      
    1D70: A3          INC DPTR                      
    1D71: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1D74: FB          MOV R3,A                      
    1D75: A3          INC DPTR                      
    1D76: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1D79: FC          MOV R4,A                      
    1D7A: 74 02       MOV A,#0x02                   
    1D7C: 2A          ADD A,R2                      
    1D7D: FA          MOV R2,A                      
    1D7E: E4          CLR A                         
    1D7F: 3B          ADDC A,R3                     
    1D80: FB          MOV R3,A                      
    1D81: 85 51 82    MOV DPL(0x82),0x51            
    1D84: 85 52 83    MOV DPH(0x83),0x52            
    1D87: 85 53 F0    MOV B(0xF0),0x53              
    1D8A: EA          MOV A,R2                      
    1D8B: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1D8E: A3          INC DPTR                      
    1D8F: EB          MOV A,R3                      
    1D90: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1D93: A3          INC DPTR                      
    1D94: EC          MOV A,R4                      
    1D95: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    1D98: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    1D9B: 74 01       MOV A,#0x01                   
    1D9D: F0          MOVX @DPTR,A                  
    1D9E: 75 82 00    MOV DPL(0x82),#0x00           
    1DA1: 22          RET                           

sub_1DA2:
    1DA2: AA 82       MOV R2,0x82                   
    1DA4: AB 83       MOV R3,0x83                   
    1DA6: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    1DA9: E4          CLR A                         
    1DAA: F0          MOVX @DPTR,A                  
    1DAB: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    1DAE: E0          MOVX A,@DPTR                  
    1DAF: FD          MOV R5,A                      
    1DB0: 7C 00       MOV R4,#0x00                  
    1DB2: 90 CC 08    MOV DPTR,#0xCC08                 ; register block CC00
    1DB5: E0          MOVX A,@DPTR                  
    1DB6: FE          MOV R6,A                      
    1DB7: 7F 00       MOV R7,#0x00                  
    1DB9: 42 04       ORL 0x04,A                    
    1DBB: EF          MOV A,R7                      
    1DBC: 42 05       ORL 0x05,A                    
    1DBE: C3          CLR C                         
    1DBF: EC          MOV A,R4                      
    1DC0: 9A          SUBB A,R2                     
    1DC1: ED          MOV A,R5                      
    1DC2: 9B          SUBB A,R3                     
    1DC3: 40 E6       JC 0x1DAB                        ; -> 0x1DAB
    1DC5: 22          RET                           

sub_1DC6:
    1DC6: AA 82       MOV R2,0x82                   
    1DC8: 74 0C       MOV A,#0x0C                   
    1DCA: 5A          ANL A,R2                      
    1DCB: 03          RR A                          
    1DCC: 03          RR A                          
    1DCD: 54 3F       ANL A,#0x3F                   
    1DCF: FB          MOV R3,A                      
    1DD0: FC          MOV R4,A                      
    1DD1: 8B 18       MOV 0x18,R3                   
    1DD3: 74 03       MOV A,#0x03                   
    1DD5: B5 03 00    CJNE A,0x03,0x1DD8               ; -> 0x1DD8
    1DD8: 50 03       JNC 0x1DDD                       ; -> loc_1DDD
    1DDA: 02 1F 0A    LJMP 0x1F0A                      ; -> 0x1F0A

loc_1DDD:
    1DDD: EC          MOV A,R4                      
    1DDE: 2C          ADD A,R4                      
    1DDF: 2C          ADD A,R4                      
    1DE0: 90 1D E4    MOV DPTR,#0x1DE4              
    1DE3: 73          JMP @A+DPTR                   
    1DE4: 02 1D F0    LJMP 0x1DF0                      ; -> 0x1DF0
    1DE7: 02          DB 0x02                       ; data
    1DE8: 1E          DB 0x1E                       ; data
    1DE9: 2C          DB 0x2C                       ; data
    1DEA: 02          DB 0x02                       ; data
    1DEB: 1E          DB 0x1E                       ; data
    1DEC: 4B          DB 0x4B                       ; data
    1DED: 02          DB 0x02                       ; data
    1DEE: 1E          DB 0x1E                       ; data
    1DEF: B7          DB 0xB7                       ; data
    1DF0: 90 C2 00    MOV DPTR,#0xC200              
    1DF3: E0          MOVX A,@DPTR                  
    1DF4: FB          MOV R3,A                      
    1DF5: 53 03 F1    ANL 0x03,#0xF1                
    1DF8: 74 03       MOV A,#0x03                   
    1DFA: 5A          ANL A,R2                      
    1DFB: 25 E0       ADD A,ACC(0xE0)               
    1DFD: FC          MOV R4,A                      
    1DFE: 4B          ORL A,R3                      
    1DFF: 44 01       ORL A,#0x01                   
    1E01: 90 C2 00    MOV DPTR,#0xC200              
    1E04: F0          MOVX @DPTR,A                  
    1E05: 90 CE 8D    MOV DPTR,#0xCE8D              
    1E08: 74 F8       MOV A,#0xF8                   
    1E0A: F0          MOVX @DPTR,A                  
    1E0B: 90 C2 0C    MOV DPTR,#0xC20C              
    1E0E: 74 09       MOV A,#0x09                   
    1E10: F0          MOVX @DPTR,A                  
    1E11: 90 4F E6    MOV DPTR,#0x4FE6                 ; mailbox / host-interface register block
    1E14: E0          MOVX A,@DPTR                  
    1E15: FB          MOV R3,A                      
    1E16: 60 03       JZ 0x1E1B                        ; -> loc_1E1B
    1E18: 02 1F 0A    LJMP 0x1F0A                      ; -> 0x1F0A

loc_1E1B:
    1E1B: EA          MOV A,R2                      
    1E1C: 30 E0 05    JNB ACC.0,0x1E24                 ; -> 0x1E24
    1E1F: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    1E22: E4          CLR A                         
    1E23: F0          MOVX @DPTR,A                  
    1E24: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    1E27: E4          CLR A                         
    1E28: F0          MOVX @DPTR,A                  
    1E29: 02 1F 0A    LJMP 0x1F0A                      ; -> 0x1F0A
    1E2C: 90          DB 0x90                       ; data
    1E2D: C8          DB 0xC8                       ; data
    1E2E: 70          DB 0x70                       ; data
    1E2F: E0          DB 0xE0                       ; data
    1E30: FA          DB 0xFA                       ; data
    1E31: 53          DB 0x53                       ; data
    1E32: 02          DB 0x02                       ; data
    1E33: F0          DB 0xF0                       ; data
    1E34: 90          DB 0x90                       ; data
    1E35: C8          DB 0xC8                       ; data
    1E36: 70          DB 0x70                       ; data
    1E37: EA          DB 0xEA                       ; data
    1E38: F0          DB 0xF0                       ; data
    1E39: 90          DB 0x90                       ; data
    1E3A: C2          DB 0xC2                       ; data
    1E3B: 00          DB 0x00                       ; data
    1E3C: E0          DB 0xE0                       ; data
    1E3D: FA          DB 0xFA                       ; data
    1E3E: 74          DB 0x74                       ; data
    1E3F: F1          DB 0xF1                       ; data
    1E40: 5A          DB 0x5A                       ; data
    1E41: 44          DB 0x44                       ; data
    1E42: 02          DB 0x02                       ; data
    1E43: FA          DB 0xFA                       ; data
    1E44: 90          DB 0x90                       ; data
    1E45: C2          DB 0xC2                       ; data
    1E46: 00          DB 0x00                       ; data
    1E47: F0          DB 0xF0                       ; data
    1E48: 02          DB 0x02                       ; data
    1E49: 1F          DB 0x1F                       ; data
    1E4A: 0A          DB 0x0A                       ; data
    1E4B: 90          DB 0x90                       ; data
    1E4C: C8          DB 0xC8                       ; data
    1E4D: 70          DB 0x70                       ; data
    1E4E: E0          DB 0xE0                       ; data
    1E4F: FA          DB 0xFA                       ; data
    1E50: 53          DB 0x53                       ; data
    1E51: 02          DB 0x02                       ; data
    1E52: F0          DB 0xF0                       ; data
    1E53: 90          DB 0x90                       ; data
    1E54: C8          DB 0xC8                       ; data
    1E55: 70          DB 0x70                       ; data
    1E56: EA          DB 0xEA                       ; data
    1E57: F0          DB 0xF0                       ; data
    1E58: 90          DB 0x90                       ; data
    1E59: C8          DB 0xC8                       ; data
    1E5A: 06          DB 0x06                       ; data
    1E5B: E0          DB 0xE0                       ; data
    1E5C: FA          DB 0xFA                       ; data
    1E5D: 30          DB 0x30                       ; data
    1E5E: E0          DB 0xE0                       ; data
    1E5F: 15          DB 0x15                       ; data
    1E60: 90          DB 0x90                       ; data
    1E61: C2          DB 0xC2                       ; data
    1E62: 00          DB 0x00                       ; data
    1E63: E0          DB 0xE0                       ; data
    1E64: FA          DB 0xFA                       ; data
    1E65: 53          DB 0x53                       ; data
    1E66: 02          DB 0x02                       ; data
    1E67: F1          DB 0xF1                       ; data
    1E68: 90          DB 0x90                       ; data
    1E69: C2          DB 0xC2                       ; data
    1E6A: 00          DB 0x00                       ; data
    1E6B: EA          DB 0xEA                       ; data
    1E6C: F0          DB 0xF0                       ; data
    1E6D: 90          DB 0x90                       ; data
    1E6E: C2          DB 0xC2                       ; data
    1E6F: 0C          DB 0x0C                       ; data
    1E70: E4          DB 0xE4                       ; data
    1E71: F0          DB 0xF0                       ; data
    1E72: 02          DB 0x02                       ; data
    1E73: 1F          DB 0x1F                       ; data
    1E74: 0A          DB 0x0A                       ; data
    1E75: 90          DB 0x90                       ; data
    1E76: 4F          DB 0x4F                       ; data
    1E77: E6          DB 0xE6                       ; data
    1E78: E0          DB 0xE0                       ; data
    1E79: FA          DB 0xFA                       ; data
    1E7A: 60          DB 0x60                       ; data
    1E7B: 03          DB 0x03                       ; data
    1E7C: 02          DB 0x02                       ; data
    1E7D: 1F          DB 0x1F                       ; data
    1E7E: 0A          DB 0x0A                       ; data
    1E7F: 90          DB 0x90                       ; data
    1E80: C8          DB 0xC8                       ; data
    1E81: 7C          DB 0x7C                       ; data
    1E82: E4          DB 0xE4                       ; data
    1E83: F0          DB 0xF0                       ; data
    1E84: 90          DB 0x90                       ; data
    1E85: C8          DB 0xC8                       ; data
    1E86: 7D          DB 0x7D                       ; data
    1E87: 74          DB 0x74                       ; data
    1E88: 20          DB 0x20                       ; data
    1E89: F0          DB 0xF0                       ; data
    1E8A: 90          DB 0x90                       ; data
    1E8B: C8          DB 0xC8                       ; data
    1E8C: 7E          DB 0x7E                       ; data
    1E8D: 74          DB 0x74                       ; data
    1E8E: FF          DB 0xFF                       ; data
    1E8F: F0          DB 0xF0                       ; data
    1E90: 90          DB 0x90                       ; data
    1E91: C8          DB 0xC8                       ; data
    1E92: 7F          DB 0x7F                       ; data
    1E93: 74          DB 0x74                       ; data
    1E94: 01          DB 0x01                       ; data
    1E95: F0          DB 0xF0                       ; data
    1E96: 90          DB 0x90                       ; data
    1E97: C8          DB 0xC8                       ; data
    1E98: 71          DB 0x71                       ; data
    1E99: E4          DB 0xE4                       ; data
    1E9A: F0          DB 0xF0                       ; data
    1E9B: 90          DB 0x90                       ; data
    1E9C: C8          DB 0xC8                       ; data
    1E9D: 70          DB 0x70                       ; data
    1E9E: E0          DB 0xE0                       ; data
    1E9F: FA          DB 0xFA                       ; data
    1EA0: 53          DB 0x53                       ; data
    1EA1: 02          DB 0x02                       ; data
    1EA2: F0          DB 0xF0                       ; data
    1EA3: 90          DB 0x90                       ; data
    1EA4: C8          DB 0xC8                       ; data
    1EA5: 70          DB 0x70                       ; data
    1EA6: EA          DB 0xEA                       ; data
    1EA7: F0          DB 0xF0                       ; data
    1EA8: 90          DB 0x90                       ; data
    1EA9: D6          DB 0xD6                       ; data
    1EAA: 7E          DB 0x7E                       ; data
    1EAB: E0          DB 0xE0                       ; data
    1EAC: FA          DB 0xFA                       ; data
    1EAD: 53          DB 0x53                       ; data
    1EAE: 02          DB 0x02                       ; data
    1EAF: 0F          DB 0x0F                       ; data
    1EB0: 90          DB 0x90                       ; data
    1EB1: C8          DB 0xC8                       ; data
    1EB2: 70          DB 0x70                       ; data
    1EB3: EA          DB 0xEA                       ; data
    1EB4: F0          DB 0xF0                       ; data
    1EB5: 80          DB 0x80                       ; data
    1EB6: 53          DB 0x53                       ; data
    1EB7: 90          DB 0x90                       ; data
    1EB8: C8          DB 0xC8                       ; data
    1EB9: 70          DB 0x70                       ; data
    1EBA: E0          DB 0xE0                       ; data
    1EBB: FA          DB 0xFA                       ; data
    1EBC: 53          DB 0x53                       ; data
    1EBD: 02          DB 0x02                       ; data
    1EBE: F0          DB 0xF0                       ; data
    1EBF: 90          DB 0x90                       ; data
    1EC0: C8          DB 0xC8                       ; data
    1EC1: 70          DB 0x70                       ; data
    1EC2: EA          DB 0xEA                       ; data
    1EC3: F0          DB 0xF0                       ; data
    1EC4: 90          DB 0x90                       ; data
    1EC5: C8          DB 0xC8                       ; data
    1EC6: 06          DB 0x06                       ; data
    1EC7: E0          DB 0xE0                       ; data
    1EC8: FA          DB 0xFA                       ; data
    1EC9: 30          DB 0x30                       ; data
    1ECA: E0          DB 0xE0                       ; data
    1ECB: 20          DB 0x20                       ; data
    1ECC: 90          DB 0x90                       ; data
    1ECD: CE          DB 0xCE                       ; data
    1ECE: 18          DB 0x18                       ; data
    1ECF: 74          DB 0x74                       ; data
    1ED0: E0          DB 0xE0                       ; data
    1ED1: F0          DB 0xF0                       ; data
    1ED2: 90          DB 0x90                       ; data
    1ED3: CE          DB 0xCE                       ; data
    1ED4: 19          DB 0x19                       ; data
    1ED5: 74          DB 0x74                       ; data
    1ED6: E0          DB 0xE0                       ; data
    1ED7: F0          DB 0xF0                       ; data
    1ED8: 90          DB 0x90                       ; data
    1ED9: CE          DB 0xCE                       ; data
    1EDA: 1A          DB 0x1A                       ; data
    1EDB: 74          DB 0x74                       ; data
    1EDC: E0          DB 0xE0                       ; data
    1EDD: F0          DB 0xF0                       ; data
    1EDE: 90          DB 0x90                       ; data
    1EDF: CE          DB 0xCE                       ; data
    1EE0: 1B          DB 0x1B                       ; data
    1EE1: 74          DB 0x74                       ; data
    1EE2: E0          DB 0xE0                       ; data
    1EE3: F0          DB 0xF0                       ; data
    1EE4: 90          DB 0x90                       ; data
    1EE5: CE          DB 0xCE                       ; data
    1EE6: 8D          DB 0x8D                       ; data
    1EE7: 74          DB 0x74                       ; data
    1EE8: 02          DB 0x02                       ; data
    1EE9: F0          DB 0xF0                       ; data
    1EEA: 80          DB 0x80                       ; data
    1EEB: 1E          DB 0x1E                       ; data
    1EEC: 90          DB 0x90                       ; data
    1EED: 4F          DB 0x4F                       ; data
    1EEE: E6          DB 0xE6                       ; data
    1EEF: E0          DB 0xE0                       ; data
    1EF0: FA          DB 0xFA                       ; data
    1EF1: 70          DB 0x70                       ; data
    1EF2: 17          DB 0x17                       ; data
    1EF3: 90          DB 0x90                       ; data
    1EF4: C8          DB 0xC8                       ; data
    1EF5: 71          DB 0x71                       ; data
    1EF6: E4          DB 0xE4                       ; data
    1EF7: F0          DB 0xF0                       ; data
    1EF8: 90          DB 0x90                       ; data
    1EF9: D6          DB 0xD6                       ; data
    1EFA: 7E          DB 0x7E                       ; data
    1EFB: E0          DB 0xE0                       ; data
    1EFC: 54          DB 0x54                       ; data
    1EFD: 0F          DB 0x0F                       ; data
    1EFE: C4          DB 0xC4                       ; data
    1EFF: 54          DB 0x54                       ; data
    1F00: F0          DB 0xF0                       ; data
    1F01: FA          DB 0xFA                       ; data
    1F02: 53          DB 0x53                       ; data
    1F03: 02          DB 0x02                       ; data
    1F04: F0          DB 0xF0                       ; data
    1F05: 90          DB 0x90                       ; data
    1F06: C8          DB 0xC8                       ; data
    1F07: 70          DB 0x70                       ; data
    1F08: EA          DB 0xEA                       ; data
    1F09: F0          DB 0xF0                       ; data
    1F0A: 22          RET                           

sub_1F0B:
    1F0B: AA 82       MOV R2,0x82                   
    1F0D: E4          CLR A                         
    1F0E: BA 02 01    CJNE R2,#0x02,0x1F12             ; -> 0x1F12
    1F11: 04          INC A                         
    1F12: FB          MOV R3,A                      
    1F13: 60 44       JZ 0x1F59                        ; -> loc_1F59
    1F15: 75 30 0F    MOV 0x30,#0x0F                
    1F18: 75 31 00    MOV 0x31,#0x00                
    1F1B: 75 32 40    MOV 0x32,#0x40                
    1F1E: 75 33 10    MOV 0x33,#0x10                
    1F21: 75 34 00    MOV 0x34,#0x00                
    1F24: 75 35 40    MOV 0x35,#0x40                
    1F27: E4          CLR A                         
    1F28: F5 2A       MOV 0x2A,A                    
    1F2A: 75 2B 02    MOV 0x2B,#0x02                
    1F2D: F5 2C       MOV 0x2C,A                    
    1F2F: F5 2D       MOV 0x2D,A                    
    1F31: 75 2E 06    MOV 0x2E,#0x06                
    1F34: 75 2F 00    MOV 0x2F,#0x00                
    1F37: 75 82 09    MOV DPL(0x82),#0x09           
    1F3A: C0 02       PUSH 0x02                     
    1F3C: C0 03       PUSH 0x03                     
    1F3E: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    1F41: AC 82       MOV R4,0x82                   
    1F43: D0 03       POP 0x03                      
    1F45: D0 02       POP 0x02                      
    1F47: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1F4A: EC          MOV A,R4                      
    1F4B: F0          MOVX @DPTR,A                  
    1F4C: EC          MOV A,R4                      
    1F4D: 70 03       JNZ 0x1F52                       ; -> loc_1F52
    1F4F: 02 1F E0    LJMP 0x1FE0                      ; -> loc_1FE0

loc_1F52:
    1F52: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1F55: E0          MOVX A,@DPTR                  
    1F56: F5 82       MOV DPL(0x82),A               
    1F58: 22          RET                           

loc_1F59:
    1F59: BA 01 42    CJNE R2,#0x01,0x1F9E             ; -> loc_1F9E
    1F5C: 75 30 0F    MOV 0x30,#0x0F                
    1F5F: 75 31 00    MOV 0x31,#0x00                
    1F62: 75 32 40    MOV 0x32,#0x40                
    1F65: 75 33 10    MOV 0x33,#0x10                
    1F68: 75 34 00    MOV 0x34,#0x00                
    1F6B: 75 35 40    MOV 0x35,#0x40                
    1F6E: 75 2A 02    MOV 0x2A,#0x02                
    1F71: 75 2B 02    MOV 0x2B,#0x02                
    1F74: E4          CLR A                         
    1F75: F5 2C       MOV 0x2C,A                    
    1F77: F5 2D       MOV 0x2D,A                    
    1F79: 75 2E 06    MOV 0x2E,#0x06                
    1F7C: 75 2F 00    MOV 0x2F,#0x00                
    1F7F: 75 82 09    MOV DPL(0x82),#0x09           
    1F82: C0 02       PUSH 0x02                     
    1F84: C0 03       PUSH 0x03                     
    1F86: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    1F89: AC 82       MOV R4,0x82                   
    1F8B: D0 03       POP 0x03                      
    1F8D: D0 02       POP 0x02                      
    1F8F: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1F92: EC          MOV A,R4                      
    1F93: F0          MOVX @DPTR,A                  
    1F94: EC          MOV A,R4                      
    1F95: 60 49       JZ 0x1FE0                        ; -> loc_1FE0
    1F97: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1F9A: E0          MOVX A,@DPTR                  
    1F9B: F5 82       MOV DPL(0x82),A               
    1F9D: 22          RET                           

loc_1F9E:
    1F9E: 75 30 0F    MOV 0x30,#0x0F                
    1FA1: 75 31 00    MOV 0x31,#0x00                
    1FA4: 75 32 40    MOV 0x32,#0x40                
    1FA7: 75 33 10    MOV 0x33,#0x10                
    1FAA: 75 34 00    MOV 0x34,#0x00                
    1FAD: 75 35 40    MOV 0x35,#0x40                
    1FB0: 75 2A 02    MOV 0x2A,#0x02                
    1FB3: 75 2B 02    MOV 0x2B,#0x02                
    1FB6: E4          CLR A                         
    1FB7: F5 2C       MOV 0x2C,A                    
    1FB9: F5 2D       MOV 0x2D,A                    
    1FBB: 75 2E 03    MOV 0x2E,#0x03                
    1FBE: 75 2F 00    MOV 0x2F,#0x00                
    1FC1: 75 82 09    MOV DPL(0x82),#0x09           
    1FC4: C0 02       PUSH 0x02                     
    1FC6: C0 03       PUSH 0x03                     
    1FC8: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    1FCB: AC 82       MOV R4,0x82                   
    1FCD: D0 03       POP 0x03                      
    1FCF: D0 02       POP 0x02                      
    1FD1: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1FD4: EC          MOV A,R4                      
    1FD5: F0          MOVX @DPTR,A                  
    1FD6: EC          MOV A,R4                      
    1FD7: 60 07       JZ 0x1FE0                        ; -> loc_1FE0
    1FD9: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    1FDC: E0          MOVX A,@DPTR                  
    1FDD: F5 82       MOV DPL(0x82),A               
    1FDF: 22          RET                           

loc_1FE0:
    1FE0: EB          MOV A,R3                      
    1FE1: 70 03       JNZ 0x1FE6                       ; -> loc_1FE6
    1FE3: 02 20 69    LJMP 0x2069                      ; -> loc_2069

loc_1FE6:
    1FE6: AB 10       MOV R3,0x10                   
    1FE8: AC 11       MOV R4,0x11                   
    1FEA: AD 12       MOV R5,0x12                   
    1FEC: 8B 82       MOV 0x82,R3                   
    1FEE: 8C 83       MOV 0x83,R4                   
    1FF0: 8D F0       MOV 0xF0,R5                   
    1FF2: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    1FF5: FB          MOV R3,A                      
    1FF6: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    1FF9: 74 1F       MOV A,#0x1F                   
    1FFB: 5B          ANL A,R3                      
    1FFC: F0          MOVX @DPTR,A                  
    1FFD: 74 02       MOV A,#0x02                   
    1FFF: 25 10       ADD A,0x10                    
    2001: FB          MOV R3,A                      
    2002: E4          CLR A                         
    2003: 35 11       ADDC A,0x11                   
    2005: FC          MOV R4,A                      
    2006: AD 12       MOV R5,0x12                   
    2008: 8B 82       MOV 0x82,R3                   
    200A: 8C 83       MOV 0x83,R4                   
    200C: 8D F0       MOV 0xF0,R5                   
    200E: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    2011: FB          MOV R3,A                      
    2012: 78 81       MOV R0,#0x81                  
    2014: A6 03       MOV @R0,0x03                  
    2016: 74 03       MOV A,#0x03                   
    2018: 25 10       ADD A,0x10                    
    201A: FC          MOV R4,A                      
    201B: E4          CLR A                         
    201C: 35 11       ADDC A,0x11                   
    201E: FD          MOV R5,A                      
    201F: AE 12       MOV R6,0x12                   
    2021: 8C 82       MOV 0x82,R4                   
    2023: 8D 83       MOV 0x83,R5                   
    2025: 8E F0       MOV 0xF0,R6                   
    2027: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    202A: FC          MOV R4,A                      
    202B: 78 82       MOV R0,#0x82                  
    202D: A6 04       MOV @R0,0x04                  
    202F: 74 01       MOV A,#0x01                   
    2031: 5B          ANL A,R3                      
    2032: 78 87       MOV R0,#0x87                  
    2034: F6          MOV @R0,A                     
    2035: 74 10       MOV A,#0x10                   
    2037: 5B          ANL A,R3                      
    2038: 78 88       MOV R0,#0x88                  
    203A: F6          MOV @R0,A                     
    203B: 74 01       MOV A,#0x01                   
    203D: 5C          ANL A,R4                      
    203E: 78 89       MOV R0,#0x89                  
    2040: F6          MOV @R0,A                     
    2041: 74 10       MOV A,#0x10                   
    2043: 5C          ANL A,R4                      
    2044: 78 8A       MOV R0,#0x8A                  
    2046: F6          MOV @R0,A                     
    2047: 74 04       MOV A,#0x04                   
    2049: 25 10       ADD A,0x10                    
    204B: FB          MOV R3,A                      
    204C: E4          CLR A                         
    204D: 35 11       ADDC A,0x11                   
    204F: FC          MOV R4,A                      
    2050: AD 12       MOV R5,0x12                   
    2052: 8B 82       MOV 0x82,R3                   
    2054: 8C 83       MOV 0x83,R4                   
    2056: 8D F0       MOV 0xF0,R5                   
    2058: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    205B: F5 13       MOV 0x13,A                    
    205D: 74 C0       MOV A,#0xC0                   
    205F: 55 13       ANL A,0x13                    
    2061: F5 17       MOV 0x17,A                    
    2063: 53 13 01    ANL 0x13,#0x01                
    2066: 02 21 69    LJMP 0x2169                      ; -> loc_2169

loc_2069:
    2069: AB 10       MOV R3,0x10                   
    206B: AC 11       MOV R4,0x11                   
    206D: AD 12       MOV R5,0x12                   
    206F: 8B 82       MOV 0x82,R3                   
    2071: 8C 83       MOV 0x83,R4                   
    2073: 8D F0       MOV 0xF0,R5                   
    2075: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    2078: FB          MOV R3,A                      
    2079: 78 81       MOV R0,#0x81                  
    207B: A6 03       MOV @R0,0x03                  
    207D: 74 01       MOV A,#0x01                   
    207F: 25 10       ADD A,0x10                    
    2081: FC          MOV R4,A                      
    2082: E4          CLR A                         
    2083: 35 11       ADDC A,0x11                   
    2085: FD          MOV R5,A                      
    2086: AE 12       MOV R6,0x12                   
    2088: 8C 82       MOV 0x82,R4                   
    208A: 8D 83       MOV 0x83,R5                   
    208C: 8E F0       MOV 0xF0,R6                   
    208E: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    2091: FC          MOV R4,A                      
    2092: 78 82       MOV R0,#0x82                  
    2094: A6 04       MOV @R0,0x04                  
    2096: 74 01       MOV A,#0x01                   
    2098: 5B          ANL A,R3                      
    2099: 78 87       MOV R0,#0x87                  
    209B: F6          MOV @R0,A                     
    209C: 74 10       MOV A,#0x10                   
    209E: 5B          ANL A,R3                      
    209F: 78 88       MOV R0,#0x88                  
    20A1: F6          MOV @R0,A                     
    20A2: 74 01       MOV A,#0x01                   
    20A4: 5C          ANL A,R4                      
    20A5: 78 89       MOV R0,#0x89                  
    20A7: F6          MOV @R0,A                     
    20A8: 74 10       MOV A,#0x10                   
    20AA: 5C          ANL A,R4                      
    20AB: 78 8A       MOV R0,#0x8A                  
    20AD: F6          MOV @R0,A                     
    20AE: 74 02       MOV A,#0x02                   
    20B0: 25 10       ADD A,0x10                    
    20B2: FB          MOV R3,A                      
    20B3: E4          CLR A                         
    20B4: 35 11       ADDC A,0x11                   
    20B6: FC          MOV R4,A                      
    20B7: AD 12       MOV R5,0x12                   
    20B9: 8B 82       MOV 0x82,R3                   
    20BB: 8C 83       MOV 0x83,R4                   
    20BD: 8D F0       MOV 0xF0,R5                   
    20BF: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    20C2: F5 13       MOV 0x13,A                    
    20C4: 74 C0       MOV A,#0xC0                   
    20C6: 55 13       ANL A,0x13                    
    20C8: F5 17       MOV 0x17,A                    
    20CA: 53 13 01    ANL 0x13,#0x01                
    20CD: BA 01 02    CJNE R2,#0x01,0x20D2             ; -> loc_20D2
    20D0: 80 03       SJMP 0x20D5                      ; -> loc_20D5

loc_20D2:
    20D2: 02 21 69    LJMP 0x2169                      ; -> loc_2169

loc_20D5:
    20D5: 74 04       MOV A,#0x04                   
    20D7: 25 10       ADD A,0x10                    
    20D9: FA          MOV R2,A                      
    20DA: E4          CLR A                         
    20DB: 35 11       ADDC A,0x11                   
    20DD: FB          MOV R3,A                      
    20DE: AC 12       MOV R4,0x12                   
    20E0: 8A 82       MOV 0x82,R2                   
    20E2: 8B 83       MOV 0x83,R3                   
    20E4: 8C F0       MOV 0xF0,R4                   
    20E6: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    20E9: FA          MOV R2,A                      
    20EA: 74 0F       MOV A,#0x0F                   
    20EC: 5A          ANL A,R2                      
    20ED: 78 83       MOV R0,#0x83                  
    20EF: F6          MOV @R0,A                     
    20F0: EA          MOV A,R2                      
    20F1: C4          SWAP A                        
    20F2: 54 0F       ANL A,#0x0F                   
    20F4: FA          MOV R2,A                      
    20F5: 78 84       MOV R0,#0x84                  
    20F7: A6 02       MOV @R0,0x02                  
    20F9: 74 05       MOV A,#0x05                   
    20FB: 25 10       ADD A,0x10                    
    20FD: FA          MOV R2,A                      
    20FE: E4          CLR A                         
    20FF: 35 11       ADDC A,0x11                   
    2101: FB          MOV R3,A                      
    2102: AC 12       MOV R4,0x12                   
    2104: 8A 82       MOV 0x82,R2                   
    2106: 8B 83       MOV 0x83,R3                   
    2108: 8C F0       MOV 0xF0,R4                   
    210A: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    210D: FA          MOV R2,A                      
    210E: 74 0F       MOV A,#0x0F                   
    2110: 5A          ANL A,R2                      
    2111: 78 85       MOV R0,#0x85                  
    2113: F6          MOV @R0,A                     
    2114: EA          MOV A,R2                      
    2115: C4          SWAP A                        
    2116: 54 0F       ANL A,#0x0F                   
    2118: FA          MOV R2,A                      
    2119: 78 86       MOV R0,#0x86                  
    211B: A6 02       MOV @R0,0x02                  
    211D: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    2120: E0          MOVX A,@DPTR                  
    2121: FA          MOV R2,A                      
    2122: 30 E0 44    JNB ACC.0,0x2169                 ; -> loc_2169
    2125: 7A 00       MOV R2,#0x00                  
    2127: BA 04 00    CJNE R2,#0x04,0x212A             ; -> 0x212A
    212A: 50 3D       JNC 0x2169                       ; -> loc_2169
    212C: EA          MOV A,R2                      
    212D: 24 83       ADD A,#0x83                   
    212F: F8          MOV R0,A                      
    2130: 86 03       MOV 0x03,@R0                  
    2132: 74 03       MOV A,#0x03                   
    2134: 5B          ANL A,R3                      
    2135: FC          MOV R4,A                      
    2136: 53 03 0C    ANL 0x03,#0x0C                
    2139: EB          MOV A,R3                      
    213A: 03          RR A                          
    213B: 03          RR A                          
    213C: 54 3F       ANL A,#0x3F                   
    213E: FB          MOV R3,A                      
    213F: 7D 00       MOV R5,#0x00                  
    2141: 8B 06       MOV 0x06,R3                   
    2143: 7F 00       MOV R7,#0x00                  
    2145: EE          MOV A,R6                      
    2146: 2C          ADD A,R4                      
    2147: FC          MOV R4,A                      
    2148: EF          MOV A,R7                      
    2149: 3D          ADDC A,R5                     
    214A: FD          MOV R5,A                      
    214B: C3          CLR C                         
    214C: 74 03       MOV A,#0x03                   
    214E: 9C          SUBB A,R4                     
    214F: 74 80       MOV A,#0x80                   
    2151: 8D F0       MOV 0xF0,R5                   
    2153: 63 F0 80    XRL B(0xF0),#0x80             
    2156: 95 F0       SUBB A,B(0xF0)                
    2158: 50 0C       JNC 0x2166                       ; -> 0x2166
    215A: 74 03       MOV A,#0x03                   
    215C: C3          CLR C                         
    215D: 9B          SUBB A,R3                     
    215E: FC          MOV R4,A                      
    215F: EB          MOV A,R3                      
    2160: 2B          ADD A,R3                      
    2161: 25 E0       ADD A,ACC(0xE0)               
    2163: FB          MOV R3,A                      
    2164: 4C          ORL A,R4                      
    2165: F6          MOV @R0,A                     
    2166: 0A          INC R2                        
    2167: 80 BE       SJMP 0x2127                      ; -> 0x2127

loc_2169:
    2169: 75 82 00    MOV DPL(0x82),#0x00           
    216C: 22          RET                           

sub_216D:
    216D: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    2170: 74 01       MOV A,#0x01                   
    2172: F0          MOVX @DPTR,A                  
    2173: 90 C2 00    MOV DPTR,#0xC200              
    2176: E0          MOVX A,@DPTR                  
    2177: FA          MOV R2,A                      
    2178: 74 F0       MOV A,#0xF0                   
    217A: 5A          ANL A,R2                      
    217B: 44 02       ORL A,#0x02                   
    217D: FA          MOV R2,A                      
    217E: 90 C2 00    MOV DPTR,#0xC200              
    2181: F0          MOVX @DPTR,A                  
    2182: 90 CE 51    MOV DPTR,#0xCE51                 ; register CE51
    2185: 74 10       MOV A,#0x10                   
    2187: F0          MOVX @DPTR,A                  
    2188: 74 10       MOV A,#0x10                   
    218A: B5 0A 07    CJNE A,0x0A,0x2194               ; -> loc_2194
    218D: 90 D6 7D    MOV DPTR,#0xD67D                 ; register block D66E
    2190: 74 02       MOV A,#0x02                   
    2192: F0          MOVX @DPTR,A                  
    2193: 22          RET                           

loc_2194:
    2194: 74 08       MOV A,#0x08                   
    2196: B5 0A 07    CJNE A,0x0A,0x21A0               ; -> loc_21A0
    2199: 90 D6 7D    MOV DPTR,#0xD67D                 ; register block D66E
    219C: 74 01       MOV A,#0x01                   
    219E: F0          MOVX @DPTR,A                  
    219F: 22          RET                           

loc_21A0:
    21A0: 90 D6 7D    MOV DPTR,#0xD67D                 ; register block D66E
    21A3: E4          CLR A                         
    21A4: F0          MOVX @DPTR,A                  
    21A5: 22          RET                           

sub_21A6:
    21A6: 7A 00       MOV R2,#0x00                  
    21A8: EA          MOV A,R2                      
    21A9: B5 09 00    CJNE A,0x09,0x21AC               ; -> 0x21AC
    21AC: 50 64       JNC 0x2212                       ; -> loc_2212
    21AE: EA          MOV A,R2                      
    21AF: 24 83       ADD A,#0x83                   
    21B1: F8          MOV R0,A                      
    21B2: 86 03       MOV 0x03,@R0                  
    21B4: 74 03       MOV A,#0x03                   
    21B6: 5B          ANL A,R3                      
    21B7: FC          MOV R4,A                      
    21B8: EB          MOV A,R3                      
    21B9: 03          RR A                          
    21BA: 03          RR A                          
    21BB: 54 3F       ANL A,#0x3F                   
    21BD: F5 58       MOV 0x58,A                    
    21BF: BC 02 00    CJNE R4,#0x02,0x21C2             ; -> 0x21C2
    21C2: 50 04       JNC 0x21C8                       ; -> loc_21C8
    21C4: 7D 00       MOV R5,#0x00                  
    21C6: 80 02       SJMP 0x21CA                      ; -> 0x21CA

loc_21C8:
    21C8: 7D 04       MOV R5,#0x04                  
    21CA: 8D 59       MOV 0x59,R5                   
    21CC: 74 FE       MOV A,#0xFE                   
    21CE: 25 58       ADD A,0x58                    
    21D0: 40 04       JC 0x21D6                        ; -> loc_21D6
    21D2: 7E 00       MOV R6,#0x00                  
    21D4: 80 02       SJMP 0x21D8                      ; -> 0x21D8

loc_21D6:
    21D6: 7E 20       MOV R6,#0x20                  
    21D8: 8E 5A       MOV 0x5A,R6                   
    21DA: 8C 07       MOV 0x07,R4                   
    21DC: 7E 00       MOV R6,#0x00                  
    21DE: AD 58       MOV R5,0x58                   
    21E0: 7B 00       MOV R3,#0x00                  
    21E2: ED          MOV A,R5                      
    21E3: 2F          ADD A,R7                      
    21E4: FF          MOV R7,A                      
    21E5: EB          MOV A,R3                      
    21E6: 3E          ADDC A,R6                     
    21E7: FE          MOV R6,A                      
    21E8: C3          CLR C                         
    21E9: EF          MOV A,R7                      
    21EA: 94 03       SUBB A,#0x03                  
    21EC: EE          MOV A,R6                      
    21ED: 64 80       XRL A,#0x80                   
    21EF: 94 80       SUBB A,#0x80                  
    21F1: 40 0B       JC 0x21FE                        ; -> 0x21FE
    21F3: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    21F6: E0          MOVX A,@DPTR                  
    21F7: FB          MOV R3,A                      
    21F8: 30 E1 03    JNB ACC.1,0x21FE                 ; -> 0x21FE
    21FB: 75 59 04    MOV 0x59,#0x04                
    21FE: EA          MOV A,R2                      
    21FF: 24 54       ADD A,#0x54                   
    2201: F8          MOV R0,A                      
    2202: E5 58       MOV A,0x58                    
    2204: C4          SWAP A                        
    2205: 03          RR A                          
    2206: 54 F8       ANL A,#0xF8                   
    2208: FB          MOV R3,A                      
    2209: 45 5A       ORL A,0x5A                    
    220B: 45 59       ORL A,0x59                    
    220D: 4C          ORL A,R4                      
    220E: F6          MOV @R0,A                     
    220F: 0A          INC R2                        
    2210: 80 96       SJMP 0x21A8                      ; -> 0x21A8

loc_2212:
    2212: 75 30 0F    MOV 0x30,#0x0F                
    2215: 75 31 00    MOV 0x31,#0x00                
    2218: 75 32 40    MOV 0x32,#0x40                
    221B: 75 33 10    MOV 0x33,#0x10                
    221E: 75 34 00    MOV 0x34,#0x00                
    2221: 75 35 40    MOV 0x35,#0x40                
    2224: 75 2A 03    MOV 0x2A,#0x03                
    2227: 75 2B 01    MOV 0x2B,#0x01                
    222A: E4          CLR A                         
    222B: F5 2C       MOV 0x2C,A                    
    222D: F5 2D       MOV 0x2D,A                    
    222F: 85 09 2E    MOV 0x2E,0x09                 
    2232: 75 2F 54    MOV 0x2F,#0x54                
    2235: 75 82 08    MOV DPL(0x82),#0x08           
    2238: 02 1A A9    LJMP 0x1AA9                      ; -> sub_1AA9

sub_223B:
    223B: AA 82       MOV R2,0x82                   
    223D: 78 8B       MOV R0,#0x8B                  
    223F: 76 00       MOV @R0,#0x00                 
    2241: 78 8C       MOV R0,#0x8C                  
    2243: 76 00       MOV @R0,#0x00                 
    2245: 78 8D       MOV R0,#0x8D                  
    2247: 76 00       MOV @R0,#0x00                 
    2249: 78 8E       MOV R0,#0x8E                  
    224B: 76 00       MOV @R0,#0x00                 
    224D: 78 EE       MOV R0,#0xEE                  
    224F: 76 01       MOV @R0,#0x01                 
    2251: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    2254: 74 01       MOV A,#0x01                   
    2256: F0          MOVX @DPTR,A                  
    2257: 8A 09       MOV 0x09,R2                   
    2259: 85 5B 0A    MOV 0x0A,0x5B                 
    225C: 85 5C 14    MOV 0x14,0x5C                 
    225F: 74 10       MOV A,#0x10                   
    2261: B5 0A 08    CJNE A,0x0A,0x226C               ; -> loc_226C
    2264: 90 D6 72    MOV DPTR,#0xD672                 ; register block D66E
    2267: 74 F0       MOV A,#0xF0                   
    2269: F0          MOVX @DPTR,A                  
    226A: 80 06       SJMP 0x2272                      ; -> 0x2272

loc_226C:
    226C: 90 D6 72    MOV DPTR,#0xD672                 ; register block D66E
    226F: 74 0F       MOV A,#0x0F                   
    2271: F0          MOVX @DPTR,A                  
    2272: E5 15       MOV A,0x15                    
    2274: 60 03       JZ 0x2279                        ; -> loc_2279
    2276: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2279:
    2279: 75 2F EE    MOV 0x2F,#0xEE                
    227C: 75 30 0F    MOV 0x30,#0x0F                
    227F: 75 31 00    MOV 0x31,#0x00                
    2282: 75 32 40    MOV 0x32,#0x40                
    2285: 75 33 10    MOV 0x33,#0x10                
    2288: 75 34 00    MOV 0x34,#0x00                
    228B: 75 35 40    MOV 0x35,#0x40                
    228E: E4          CLR A                         
    228F: F5 2A       MOV 0x2A,A                    
    2291: 75 2B 06    MOV 0x2B,#0x06                
    2294: F5 2C       MOV 0x2C,A                    
    2296: F5 2D       MOV 0x2D,A                    
    2298: 75 2E 01    MOV 0x2E,#0x01                
    229B: 75 82 08    MOV DPL(0x82),#0x08           
    229E: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    22A1: AA 82       MOV R2,0x82                   
    22A3: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    22A6: EA          MOV A,R2                      
    22A7: F0          MOVX @DPTR,A                  
    22A8: EA          MOV A,R2                      
    22A9: 60 07       JZ 0x22B2                        ; -> loc_22B2
    22AB: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    22AE: E0          MOVX A,@DPTR                  
    22AF: F5 82       MOV DPL(0x82),A               
    22B1: 22          RET                           

loc_22B2:
    22B2: E5 14       MOV A,0x14                    
    22B4: 30 E5 0F    JNB ACC.5,0x22C6                 ; -> loc_22C6
    22B7: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    22BA: E0          MOVX A,@DPTR                  
    22BB: FA          MOV R2,A                      
    22BC: 43 02 01    ORL 0x02,#0x01                
    22BF: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    22C2: EA          MOV A,R2                      
    22C3: F0          MOVX @DPTR,A                  
    22C4: 80 0D       SJMP 0x22D3                      ; -> 0x22D3

loc_22C6:
    22C6: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    22C9: E0          MOVX A,@DPTR                  
    22CA: FA          MOV R2,A                      
    22CB: 53 02 FE    ANL 0x02,#0xFE                
    22CE: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    22D1: EA          MOV A,R2                      
    22D2: F0          MOVX @DPTR,A                  
    22D3: E4          CLR A                         
    22D4: B5 0A 04    CJNE A,0x0A,0x22DB               ; -> loc_22DB
    22D7: 74 01       MOV A,#0x01                   
    22D9: 80 01       SJMP 0x22DC                      ; -> 0x22DC

loc_22DB:
    22DB: E4          CLR A                         
    22DC: FA          MOV R2,A                      
    22DD: 74 01       MOV A,#0x01                   
    22DF: B5 09 0E    CJNE A,0x09,0x22F0               ; -> loc_22F0
    22E2: 75 1A 01    MOV 0x1A,#0x01                
    22E5: 75 1C 07    MOV 0x1C,#0x07                
    22E8: 75 1D 00    MOV 0x1D,#0x00                
    22EB: 75 1B 00    MOV 0x1B,#0x00                
    22EE: 80 24       SJMP 0x2314                      ; -> 0x2314

loc_22F0:
    22F0: 74 02       MOV A,#0x02                   
    22F2: B5 09 0E    CJNE A,0x09,0x2303               ; -> loc_2303
    22F5: 75 1A 11    MOV 0x1A,#0x11                
    22F8: 75 1C 77    MOV 0x1C,#0x77                
    22FB: 75 1D 00    MOV 0x1D,#0x00                
    22FE: 75 1B 00    MOV 0x1B,#0x00                
    2301: 80 11       SJMP 0x2314                      ; -> 0x2314

loc_2303:
    2303: 74 04       MOV A,#0x04                   
    2305: B5 09 0C    CJNE A,0x09,0x2314               ; -> 0x2314
    2308: 75 1A 11    MOV 0x1A,#0x11                
    230B: 75 1C 77    MOV 0x1C,#0x77                
    230E: 75 1B 11    MOV 0x1B,#0x11                
    2311: 75 1D 77    MOV 0x1D,#0x77                
    2314: 7B 00       MOV R3,#0x00                  
    2316: EB          MOV A,R3                      
    2317: B5 09 00    CJNE A,0x09,0x231A               ; -> 0x231A
    231A: 50 16       JNC 0x2332                       ; -> loc_2332
    231C: 75 7A 00    MOV 0x7A,#0x00                
    231F: 8B 7B       MOV 0x7B,R3                   
    2321: 75 82 00    MOV DPL(0x82),#0x00           
    2324: C0 02       PUSH 0x02                     
    2326: C0 03       PUSH 0x03                     
    2328: 12 0E 94    LCALL 0x0E94                     ; -> sub_0E94
    232B: D0 03       POP 0x03                      
    232D: D0 02       POP 0x02                      
    232F: 0B          INC R3                        
    2330: 80 E4       SJMP 0x2316                      ; -> 0x2316

loc_2332:
    2332: C0 02       PUSH 0x02                     
    2334: 12 21 6D    LCALL 0x216D                     ; -> sub_216D
    2337: 12 0F 3D    LCALL 0x0F3D                     ; -> sub_0F3D
    233A: D0 02       POP 0x02                      
    233C: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    233F: E0          MOVX A,@DPTR                  
    2340: FB          MOV R3,A                      
    2341: 30 E7 F8    JNB ACC.7,0x233C                 ; -> 0x233C
    2344: 90 00 0F    MOV DPTR,#0x000F              
    2347: C0 02       PUSH 0x02                     
    2349: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    234C: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    234F: E0          MOVX A,@DPTR                  
    2350: FB          MOV R3,A                      
    2351: 53 03 DD    ANL 0x03,#0xDD                
    2354: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    2357: EB          MOV A,R3                      
    2358: F0          MOVX @DPTR,A                  
    2359: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    235C: E4          CLR A                         
    235D: F0          MOVX @DPTR,A                  
    235E: 90 C2 00    MOV DPTR,#0xC200              
    2361: E0          MOVX A,@DPTR                  
    2362: FB          MOV R3,A                      
    2363: 43 03 01    ORL 0x03,#0x01                
    2366: 90 C2 00    MOV DPTR,#0xC200              
    2369: EB          MOV A,R3                      
    236A: F0          MOVX @DPTR,A                  
    236B: 12 10 43    LCALL 0x1043                     ; -> sub_1043
    236E: D0 02       POP 0x02                      
    2370: 74 10       MOV A,#0x10                   
    2372: B5 0A 04    CJNE A,0x0A,0x2379               ; -> loc_2379
    2375: 7B 14       MOV R3,#0x14                  
    2377: 80 0D       SJMP 0x2386                      ; -> 0x2386

loc_2379:
    2379: 74 08       MOV A,#0x08                   
    237B: B5 0A 04    CJNE A,0x0A,0x2382               ; -> loc_2382
    237E: 7C 0A       MOV R4,#0x0A                  
    2380: 80 02       SJMP 0x2384                      ; -> 0x2384

loc_2382:
    2382: 7C 06       MOV R4,#0x06                  
    2384: 8C 03       MOV 0x03,R4                   
    2386: 8B 6E       MOV 0x6E,R3                   
    2388: 74 20       MOV A,#0x20                   
    238A: 55 14       ANL A,0x14                    
    238C: 25 E0       ADD A,ACC(0xE0)               
    238E: 25 E0       ADD A,ACC(0xE0)               
    2390: 45 09       ORL A,0x09                    
    2392: F5 6F       MOV 0x6F,A                    
    2394: 75 7A 04    MOV 0x7A,#0x04                
    2397: 75 7B 11    MOV 0x7B,#0x11                
    239A: 75 82 00    MOV DPL(0x82),#0x00           
    239D: C0 02       PUSH 0x02                     
    239F: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    23A2: D0 02       POP 0x02                      
    23A4: E5 15       MOV A,0x15                    
    23A6: 60 03       JZ 0x23AB                        ; -> loc_23AB
    23A8: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_23AB:
    23AB: 75 30 0F    MOV 0x30,#0x0F                
    23AE: 75 31 00    MOV 0x31,#0x00                
    23B1: 75 32 40    MOV 0x32,#0x40                
    23B4: 75 33 10    MOV 0x33,#0x10                
    23B7: 75 34 00    MOV 0x34,#0x00                
    23BA: 75 35 40    MOV 0x35,#0x40                
    23BD: E4          CLR A                         
    23BE: F5 2A       MOV 0x2A,A                    
    23C0: 75 2B 01    MOV 0x2B,#0x01                
    23C3: F5 2C       MOV 0x2C,A                    
    23C5: F5 2D       MOV 0x2D,A                    
    23C7: 75 2E 02    MOV 0x2E,#0x02                
    23CA: 75 2F 6E    MOV 0x2F,#0x6E                
    23CD: 75 82 08    MOV DPL(0x82),#0x08           
    23D0: C0 02       PUSH 0x02                     
    23D2: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    23D5: AB 82       MOV R3,0x82                   
    23D7: D0 02       POP 0x02                      
    23D9: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    23DC: EB          MOV A,R3                      
    23DD: F0          MOVX @DPTR,A                  
    23DE: EB          MOV A,R3                      
    23DF: 60 07       JZ 0x23E8                        ; -> loc_23E8
    23E1: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    23E4: E0          MOVX A,@DPTR                  
    23E5: F5 82       MOV DPL(0x82),A               
    23E7: 22          RET                           

loc_23E8:
    23E8: 7B 00       MOV R3,#0x00                  
    23EA: EB          MOV A,R3                      
    23EB: B5 09 00    CJNE A,0x09,0x23EE               ; -> 0x23EE
    23EE: 50 0F       JNC 0x23FF                       ; -> loc_23FF
    23F0: EB          MOV A,R3                      
    23F1: 24 66       ADD A,#0x66                   
    23F3: F8          MOV R0,A                      
    23F4: 76 00       MOV @R0,#0x00                 
    23F6: EB          MOV A,R3                      
    23F7: 24 6A       ADD A,#0x6A                   
    23F9: F8          MOV R0,A                      
    23FA: 76 00       MOV @R0,#0x00                 
    23FC: 0B          INC R3                        
    23FD: 80 EB       SJMP 0x23EA                      ; -> 0x23EA

loc_23FF:
    23FF: 90 C6 00    MOV DPTR,#0xC600              
    2402: 74 01       MOV A,#0x01                   
    2404: F0          MOVX @DPTR,A                  
    2405: 90 CC 8C    MOV DPTR,#0xCC8C                 ; register block CC00
    2408: E0          MOVX A,@DPTR                  
    2409: FB          MOV R3,A                      
    240A: 43 03 01    ORL 0x03,#0x01                
    240D: 8B 70       MOV 0x70,R3                   
    240F: 8B 82       MOV 0x82,R3                   
    2411: C0 02       PUSH 0x02                     
    2413: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    2416: D0 02       POP 0x02                      
    2418: E5 15       MOV A,0x15                    
    241A: 60 03       JZ 0x241F                        ; -> loc_241F
    241C: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_241F:
    241F: 75 1F 71    MOV 0x1F,#0x71                
    2422: 75 20 00    MOV 0x20,#0x00                
    2425: 75 21 40    MOV 0x21,#0x40                
    2428: 75 22 0F    MOV 0x22,#0x0F                
    242B: 75 23 00    MOV 0x23,#0x00                
    242E: 75 24 40    MOV 0x24,#0x40                
    2431: 75 25 10    MOV 0x25,#0x10                
    2434: 75 26 00    MOV 0x26,#0x00                
    2437: 75 27 40    MOV 0x27,#0x40                
    243A: 75 1E 00    MOV 0x1E,#0x00                
    243D: 75 82 80    MOV DPL(0x82),#0x80           
    2440: C0 02       PUSH 0x02                     
    2442: 12 17 F4    LCALL 0x17F4                     ; -> sub_17F4
    2445: AB 82       MOV R3,0x82                   
    2447: D0 02       POP 0x02                      
    2449: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    244C: EB          MOV A,R3                      
    244D: F0          MOVX @DPTR,A                  
    244E: EB          MOV A,R3                      
    244F: 60 07       JZ 0x2458                        ; -> loc_2458
    2451: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2454: E0          MOVX A,@DPTR                  
    2455: F5 82       MOV DPL(0x82),A               
    2457: 22          RET                           

loc_2458:
    2458: 90 CE 51    MOV DPTR,#0xCE51                 ; register CE51
    245B: E4          CLR A                         
    245C: F0          MOVX @DPTR,A                  
    245D: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    2460: E0          MOVX A,@DPTR                  
    2461: FB          MOV R3,A                      
    2462: 90 4F ED    MOV DPTR,#0x4FED                 ; mailbox / host-interface register block
    2465: 74 01       MOV A,#0x01                   
    2467: 5B          ANL A,R3                      
    2468: F0          MOVX @DPTR,A                  
    2469: 90 4F ED    MOV DPTR,#0x4FED                 ; mailbox / host-interface register block
    246C: E0          MOVX A,@DPTR                  
    246D: FB          MOV R3,A                      
    246E: 60 54       JZ 0x24C4                        ; -> loc_24C4
    2470: AB 63       MOV R3,0x63                   
    2472: AC 64       MOV R4,0x64                   
    2474: AD 65       MOV R5,0x65                   
    2476: 8B 82       MOV 0x82,R3                   
    2478: 8C 83       MOV 0x83,R4                   
    247A: 8D F0       MOV 0xF0,R5                   
    247C: E4          CLR A                         
    247D: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    2480: AB 60       MOV R3,0x60                   
    2482: AC 61       MOV R4,0x61                   
    2484: AD 62       MOV R5,0x62                   
    2486: 8B 82       MOV 0x82,R3                   
    2488: 8C 83       MOV 0x83,R4                   
    248A: 8D F0       MOV 0xF0,R5                   
    248C: E5 0A       MOV A,0x0A                    
    248E: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    2491: AB 5D       MOV R3,0x5D                   
    2493: AC 5E       MOV R4,0x5E                   
    2495: AD 5F       MOV R5,0x5F                   
    2497: 8B 82       MOV 0x82,R3                   
    2499: 8C 83       MOV 0x83,R4                   
    249B: 8D F0       MOV 0xF0,R5                   
    249D: E5 09       MOV A,0x09                    
    249F: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    24A2: 78 80       MOV R0,#0x80                  
    24A4: 86 82       MOV DPL(0x82),@R0             
    24A6: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    24A9: 78 80       MOV R0,#0x80                  
    24AB: E6          MOV A,@R0                     
    24AC: FB          MOV R3,A                      
    24AD: 30 E5 04    JNB ACC.5,0x24B4                 ; -> loc_24B4
    24B0: 7B 01       MOV R3,#0x01                  
    24B2: 80 02       SJMP 0x24B6                      ; -> 0x24B6

loc_24B4:
    24B4: 7B 00       MOV R3,#0x00                  
    24B6: 90 C6 00    MOV DPTR,#0xC600              
    24B9: EB          MOV A,R3                      
    24BA: F0          MOVX @DPTR,A                  
    24BB: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    24BE: E4          CLR A                         
    24BF: F0          MOVX @DPTR,A                  
    24C0: 75 82 00    MOV DPL(0x82),#0x00           
    24C3: 22          RET                           

loc_24C4:
    24C4: 75 7A 04    MOV 0x7A,#0x04                
    24C7: 75 7B 14    MOV 0x7B,#0x14                
    24CA: 75 82 00    MOV DPL(0x82),#0x00           
    24CD: C0 02       PUSH 0x02                     
    24CF: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    24D2: D0 02       POP 0x02                      
    24D4: E5 15       MOV A,0x15                    
    24D6: 60 03       JZ 0x24DB                        ; -> loc_24DB
    24D8: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_24DB:
    24DB: 75 2F 70    MOV 0x2F,#0x70                
    24DE: 75 30 0F    MOV 0x30,#0x0F                
    24E1: 75 31 00    MOV 0x31,#0x00                
    24E4: 75 32 40    MOV 0x32,#0x40                
    24E7: 75 33 10    MOV 0x33,#0x10                
    24EA: 75 34 00    MOV 0x34,#0x00                
    24ED: 75 35 40    MOV 0x35,#0x40                
    24F0: 75 2A 02    MOV 0x2A,#0x02                
    24F3: 75 2B 01    MOV 0x2B,#0x01                
    24F6: E4          CLR A                         
    24F7: F5 2C       MOV 0x2C,A                    
    24F9: F5 2D       MOV 0x2D,A                    
    24FB: 75 2E 01    MOV 0x2E,#0x01                
    24FE: 75 82 08    MOV DPL(0x82),#0x08           
    2501: C0 02       PUSH 0x02                     
    2503: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    2506: AB 82       MOV R3,0x82                   
    2508: D0 02       POP 0x02                      
    250A: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    250D: EB          MOV A,R3                      
    250E: F0          MOVX @DPTR,A                  
    250F: EB          MOV A,R3                      
    2510: 60 07       JZ 0x2519                        ; -> loc_2519
    2512: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2515: E0          MOVX A,@DPTR                  
    2516: F5 82       MOV DPL(0x82),A               
    2518: 22          RET                           

loc_2519:
    2519: 75 7A 04    MOV 0x7A,#0x04                
    251C: 75 7B 17    MOV 0x7B,#0x17                
    251F: 75 82 00    MOV DPL(0x82),#0x00           
    2522: C0 02       PUSH 0x02                     
    2524: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2527: D0 02       POP 0x02                      
    2529: E5 15       MOV A,0x15                    
    252B: 60 03       JZ 0x2530                        ; -> loc_2530
    252D: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2530:
    2530: 75 30 0F    MOV 0x30,#0x0F                
    2533: 75 31 00    MOV 0x31,#0x00                
    2536: 75 32 40    MOV 0x32,#0x40                
    2539: 75 33 10    MOV 0x33,#0x10                
    253C: 75 34 00    MOV 0x34,#0x00                
    253F: 75 35 40    MOV 0x35,#0x40                
    2542: 75 2A 03    MOV 0x2A,#0x03                
    2545: 75 2B 01    MOV 0x2B,#0x01                
    2548: E4          CLR A                         
    2549: F5 2C       MOV 0x2C,A                    
    254B: F5 2D       MOV 0x2D,A                    
    254D: 75 2E 04    MOV 0x2E,#0x04                
    2550: 75 2F 8B    MOV 0x2F,#0x8B                
    2553: 75 82 08    MOV DPL(0x82),#0x08           
    2556: C0 02       PUSH 0x02                     
    2558: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    255B: AB 82       MOV R3,0x82                   
    255D: D0 02       POP 0x02                      
    255F: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2562: EB          MOV A,R3                      
    2563: F0          MOVX @DPTR,A                  
    2564: EB          MOV A,R3                      
    2565: 60 07       JZ 0x256E                        ; -> loc_256E
    2567: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    256A: E0          MOVX A,@DPTR                  
    256B: F5 82       MOV DPL(0x82),A               
    256D: 22          RET                           

loc_256E:
    256E: 74 F0       MOV A,#0xF0                   
    2570: 25 0A       ADD A,0x0A                    
    2572: 40 14       JC 0x2588                        ; -> loc_2588
    2574: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    2577: E0          MOVX A,@DPTR                  
    2578: FB          MOV R3,A                      
    2579: 30 E5 0C    JNB ACC.5,0x2588                 ; -> loc_2588
    257C: 90 00 64    MOV DPTR,#0x0064              
    257F: C0 02       PUSH 0x02                     
    2581: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2584: D0 02       POP 0x02                      
    2586: 80 0A       SJMP 0x2592                      ; -> 0x2592

loc_2588:
    2588: 90 00 64    MOV DPTR,#0x0064              
    258B: C0 02       PUSH 0x02                     
    258D: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2590: D0 02       POP 0x02                      
    2592: E5 15       MOV A,0x15                    
    2594: 60 03       JZ 0x2599                        ; -> loc_2599
    2596: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2599:
    2599: 75 82 01    MOV DPL(0x82),#0x01           
    259C: C0 02       PUSH 0x02                     
    259E: 12 1F 0B    LCALL 0x1F0B                     ; -> sub_1F0B
    25A1: AB 82       MOV R3,0x82                   
    25A3: D0 02       POP 0x02                      
    25A5: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    25A8: EB          MOV A,R3                      
    25A9: F0          MOVX @DPTR,A                  
    25AA: EB          MOV A,R3                      
    25AB: 60 07       JZ 0x25B4                        ; -> loc_25B4
    25AD: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    25B0: E0          MOVX A,@DPTR                  
    25B1: F5 82       MOV DPL(0x82),A               
    25B3: 22          RET                           

loc_25B4:
    25B4: 78 81       MOV R0,#0x81                  
    25B6: 86 03       MOV 0x03,@R0                  
    25B8: E5 1A       MOV A,0x1A                    
    25BA: 52 03       ANL 0x03,A                    
    25BC: EB          MOV A,R3                      
    25BD: B5 1A 0F    CJNE A,0x1A,0x25CF               ; -> loc_25CF
    25C0: 78 82       MOV R0,#0x82                  
    25C2: 86 03       MOV 0x03,@R0                  
    25C4: E5 1B       MOV A,0x1B                    
    25C6: 52 03       ANL 0x03,A                    
    25C8: EB          MOV A,R3                      
    25C9: B5 1B 03    CJNE A,0x1B,0x25CF               ; -> loc_25CF
    25CC: 02 26 87    LJMP 0x2687                      ; -> loc_2687

loc_25CF:
    25CF: 7B 00       MOV R3,#0x00                  
    25D1: EB          MOV A,R3                      
    25D2: B5 09 00    CJNE A,0x09,0x25D5               ; -> 0x25D5
    25D5: 50 68       JNC 0x263F                       ; -> loc_263F
    25D7: EB          MOV A,R3                      
    25D8: 24 83       ADD A,#0x83                   
    25DA: F8          MOV R0,A                      
    25DB: 86 04       MOV 0x04,@R0                  
    25DD: EB          MOV A,R3                      
    25DE: 24 6A       ADD A,#0x6A                   
    25E0: F8          MOV R0,A                      
    25E1: 86 05       MOV 0x05,@R0                  
    25E3: EC          MOV A,R4                      
    25E4: B5 05 02    CJNE A,0x05,0x25E9               ; -> loc_25E9
    25E7: 80 30       SJMP 0x2619                      ; -> loc_2619

loc_25E9:
    25E9: 74 03       MOV A,#0x03                   
    25EB: 5C          ANL A,R4                      
    25EC: F5 82       MOV DPL(0x82),A               
    25EE: 53 04 0C    ANL 0x04,#0x0C                
    25F1: EC          MOV A,R4                      
    25F2: 03          RR A                          
    25F3: 03          RR A                          
    25F4: 54 3F       ANL A,#0x3F                   
    25F6: F5 7A       MOV 0x7A,A                    
    25F8: 8B 7B       MOV 0x7B,R3                   
    25FA: C0 02       PUSH 0x02                     
    25FC: C0 03       PUSH 0x03                     
    25FE: C0 00       PUSH 0x00                     
    2600: 12 0E 94    LCALL 0x0E94                     ; -> sub_0E94
    2603: D0 00       POP 0x00                      
    2605: D0 03       POP 0x03                      
    2607: D0 02       POP 0x02                      
    2609: EB          MOV A,R3                      
    260A: 24 83       ADD A,#0x83                   
    260C: F9          MOV R1,A                      
    260D: 87 04       MOV 0x04,@R1                  
    260F: A6 04       MOV @R0,0x04                  
    2611: EB          MOV A,R3                      
    2612: 24 66       ADD A,#0x66                   
    2614: F8          MOV R0,A                      
    2615: 76 00       MOV @R0,#0x00                 
    2617: 80 23       SJMP 0x263C                      ; -> 0x263C

loc_2619:
    2619: EB          MOV A,R3                      
    261A: 24 87       ADD A,#0x87                   
    261C: F8          MOV R0,A                      
    261D: E6          MOV A,@R0                     
    261E: 70 0E       JNZ 0x262E                       ; -> loc_262E
    2620: EB          MOV A,R3                      
    2621: 24 66       ADD A,#0x66                   
    2623: F8          MOV R0,A                      
    2624: 86 04       MOV 0x04,@R0                  
    2626: 0C          INC R4                        
    2627: A6 04       MOV @R0,0x04                  
    2629: BC 05 02    CJNE R4,#0x05,0x262E             ; -> loc_262E
    262C: 80 33       SJMP 0x2661                      ; -> loc_2661

loc_262E:
    262E: EB          MOV A,R3                      
    262F: 24 83       ADD A,#0x83                   
    2631: F8          MOV R0,A                      
    2632: 86 04       MOV 0x04,@R0                  
    2634: 53 04 03    ANL 0x04,#0x03                
    2637: BC 02 00    CJNE R4,#0x02,0x263A             ; -> 0x263A
    263A: 50 25       JNC 0x2661                       ; -> loc_2661
    263C: 0B          INC R3                        
    263D: 80 92       SJMP 0x25D1                      ; -> 0x25D1

loc_263F:
    263F: E5 15       MOV A,0x15                    
    2641: 60 03       JZ 0x2646                        ; -> loc_2646
    2643: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2646:
    2646: C0 02       PUSH 0x02                     
    2648: 12 21 A6    LCALL 0x21A6                     ; -> sub_21A6
    264B: AB 82       MOV R3,0x82                   
    264D: D0 02       POP 0x02                      
    264F: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2652: EB          MOV A,R3                      
    2653: F0          MOVX @DPTR,A                  
    2654: EB          MOV A,R3                      
    2655: 70 03       JNZ 0x265A                       ; -> loc_265A
    2657: 02 25 6E    LJMP 0x256E                      ; -> loc_256E

loc_265A:
    265A: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    265D: E0          MOVX A,@DPTR                  
    265E: F5 82       MOV DPL(0x82),A               
    2660: 22          RET                           

loc_2661:
    2661: E5 08       MOV A,0x08                    
    2663: 4A          ORL A,R2                      
    2664: 60 03       JZ 0x2669                        ; -> loc_2669
    2666: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2669:
    2669: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    266C: E0          MOVX A,@DPTR                  
    266D: FB          MOV R3,A                      
    266E: 54 0F       ANL A,#0x0F                   
    2670: 60 03       JZ 0x2675                        ; -> loc_2675
    2672: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2675:
    2675: 74 08       MOV A,#0x08                   
    2677: B5 0A 04    CJNE A,0x0A,0x267E               ; -> loc_267E
    267A: 7B 00       MOV R3,#0x00                  
    267C: 80 02       SJMP 0x2680                      ; -> 0x2680

loc_267E:
    267E: 7B 08       MOV R3,#0x08                  
    2680: 8B 0A       MOV 0x0A,R3                   
    2682: 7A 01       MOV R2,#0x01                  
    2684: 02 23 32    LJMP 0x2332                      ; -> loc_2332

loc_2687:
    2687: 90 C6 00    MOV DPTR,#0xC600              
    268A: 74 01       MOV A,#0x01                   
    268C: F0          MOVX @DPTR,A                  
    268D: 90 CC 8C    MOV DPTR,#0xCC8C                 ; register block CC00
    2690: E0          MOVX A,@DPTR                  
    2691: FB          MOV R3,A                      
    2692: 90 4F AE    MOV DPTR,#0x4FAE                 ; mailbox / host-interface register block
    2695: E0          MOVX A,@DPTR                  
    2696: FC          MOV R4,A                      
    2697: 60 04       JZ 0x269D                        ; -> loc_269D
    2699: 7C 03       MOV R4,#0x03                  
    269B: 80 02       SJMP 0x269F                      ; -> 0x269F

loc_269D:
    269D: 7C 02       MOV R4,#0x02                  
    269F: EC          MOV A,R4                      
    26A0: 42 03       ORL 0x03,A                    
    26A2: 8B 70       MOV 0x70,R3                   
    26A4: 8B 82       MOV 0x82,R3                   
    26A6: C0 02       PUSH 0x02                     
    26A8: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    26AB: 75 7A 04    MOV 0x7A,#0x04                
    26AE: 75 7B 16    MOV 0x7B,#0x16                
    26B1: 75 82 00    MOV DPL(0x82),#0x00           
    26B4: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    26B7: D0 02       POP 0x02                      
    26B9: E5 15       MOV A,0x15                    
    26BB: 60 03       JZ 0x26C0                        ; -> loc_26C0
    26BD: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_26C0:
    26C0: 75 2F 70    MOV 0x2F,#0x70                
    26C3: 75 30 0F    MOV 0x30,#0x0F                
    26C6: 75 31 00    MOV 0x31,#0x00                
    26C9: 75 32 40    MOV 0x32,#0x40                
    26CC: 75 33 10    MOV 0x33,#0x10                
    26CF: 75 34 00    MOV 0x34,#0x00                
    26D2: 75 35 40    MOV 0x35,#0x40                
    26D5: 75 2A 02    MOV 0x2A,#0x02                
    26D8: 75 2B 01    MOV 0x2B,#0x01                
    26DB: E4          CLR A                         
    26DC: F5 2C       MOV 0x2C,A                    
    26DE: F5 2D       MOV 0x2D,A                    
    26E0: 75 2E 01    MOV 0x2E,#0x01                
    26E3: 75 82 08    MOV DPL(0x82),#0x08           
    26E6: C0 02       PUSH 0x02                     
    26E8: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    26EB: AB 82       MOV R3,0x82                   
    26ED: D0 02       POP 0x02                      
    26EF: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    26F2: EB          MOV A,R3                      
    26F3: F0          MOVX @DPTR,A                  
    26F4: EB          MOV A,R3                      
    26F5: 60 07       JZ 0x26FE                        ; -> loc_26FE
    26F7: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    26FA: E0          MOVX A,@DPTR                  
    26FB: F5 82       MOV DPL(0x82),A               
    26FD: 22          RET                           

loc_26FE:
    26FE: E5 15       MOV A,0x15                    
    2700: 60 03       JZ 0x2705                        ; -> loc_2705
    2702: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2705:
    2705: C0 02       PUSH 0x02                     
    2707: 12 21 A6    LCALL 0x21A6                     ; -> sub_21A6
    270A: AB 82       MOV R3,0x82                   
    270C: D0 02       POP 0x02                      
    270E: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2711: EB          MOV A,R3                      
    2712: F0          MOVX @DPTR,A                  
    2713: EB          MOV A,R3                      
    2714: 60 07       JZ 0x271D                        ; -> loc_271D
    2716: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2719: E0          MOVX A,@DPTR                  
    271A: F5 82       MOV DPL(0x82),A               
    271C: 22          RET                           

loc_271D:
    271D: 7B 00       MOV R3,#0x00                  
    271F: 74 F0       MOV A,#0xF0                   
    2721: 25 0A       ADD A,0x0A                    
    2723: 40 18       JC 0x273D                        ; -> loc_273D
    2725: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    2728: E0          MOVX A,@DPTR                  
    2729: FC          MOV R4,A                      
    272A: 30 E5 10    JNB ACC.5,0x273D                 ; -> loc_273D
    272D: 90 01 90    MOV DPTR,#0x0190              
    2730: C0 02       PUSH 0x02                     
    2732: C0 03       PUSH 0x03                     
    2734: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2737: D0 03       POP 0x03                      
    2739: D0 02       POP 0x02                      
    273B: 80 18       SJMP 0x2755                      ; -> 0x2755

loc_273D:
    273D: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    2740: E0          MOVX A,@DPTR                  
    2741: 75 F0 64    MOV B(0xF0),#0x64             
    2744: A4          MUL AB                        
    2745: F5 82       MOV DPL(0x82),A               
    2747: 85 F0 83    MOV DPH(0x83),B(0xF0)         
    274A: C0 02       PUSH 0x02                     
    274C: C0 03       PUSH 0x03                     
    274E: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2751: D0 03       POP 0x03                      
    2753: D0 02       POP 0x02                      
    2755: E5 15       MOV A,0x15                    
    2757: 60 03       JZ 0x275C                        ; -> loc_275C
    2759: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_275C:
    275C: 75 82 01    MOV DPL(0x82),#0x01           
    275F: C0 02       PUSH 0x02                     
    2761: C0 03       PUSH 0x03                     
    2763: 12 1F 0B    LCALL 0x1F0B                     ; -> sub_1F0B
    2766: AC 82       MOV R4,0x82                   
    2768: D0 03       POP 0x03                      
    276A: D0 02       POP 0x02                      
    276C: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    276F: EC          MOV A,R4                      
    2770: F0          MOVX @DPTR,A                  
    2771: EC          MOV A,R4                      
    2772: 60 07       JZ 0x277B                        ; -> loc_277B
    2774: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2777: E0          MOVX A,@DPTR                  
    2778: F5 82       MOV DPL(0x82),A               
    277A: 22          RET                           

loc_277B:
    277B: 78 81       MOV R0,#0x81                  
    277D: 86 04       MOV 0x04,@R0                  
    277F: E5 1A       MOV A,0x1A                    
    2781: 5C          ANL A,R4                      
    2782: FD          MOV R5,A                      
    2783: B5 1A 02    CJNE A,0x1A,0x2788               ; -> loc_2788
    2786: 80 03       SJMP 0x278B                      ; -> loc_278B

loc_2788:
    2788: 02 28 0C    LJMP 0x280C                      ; -> loc_280C

loc_278B:
    278B: 78 82       MOV R0,#0x82                  
    278D: 86 05       MOV 0x05,@R0                  
    278F: E5 1B       MOV A,0x1B                    
    2791: 5D          ANL A,R5                      
    2792: FE          MOV R6,A                      
    2793: B5 1B 76    CJNE A,0x1B,0x280C               ; -> loc_280C
    2796: E5 1C       MOV A,0x1C                    
    2798: 52 04       ANL 0x04,A                    
    279A: EC          MOV A,R4                      
    279B: B5 1C 0F    CJNE A,0x1C,0x27AD               ; -> loc_27AD
    279E: E5 1D       MOV A,0x1D                    
    27A0: 52 05       ANL 0x05,A                    
    27A2: ED          MOV A,R5                      
    27A3: B5 1D 07    CJNE A,0x1D,0x27AD               ; -> loc_27AD
    27A6: E5 13       MOV A,0x13                    
    27A8: 60 03       JZ 0x27AD                        ; -> loc_27AD
    27AA: 02 28 32    LJMP 0x2832                      ; -> loc_2832

loc_27AD:
    27AD: 0B          INC R3                        
    27AE: 74 05       MOV A,#0x05                   
    27B0: B5 03 00    CJNE A,0x03,0x27B3               ; -> 0x27B3
    27B3: 40 57       JC 0x280C                        ; -> loc_280C
    27B5: 7C 00       MOV R4,#0x00                  
    27B7: EC          MOV A,R4                      
    27B8: B5 09 00    CJNE A,0x09,0x27BB               ; -> 0x27BB
    27BB: 50 29       JNC 0x27E6                       ; -> loc_27E6
    27BD: EC          MOV A,R4                      
    27BE: 24 83       ADD A,#0x83                   
    27C0: F8          MOV R0,A                      
    27C1: 86 05       MOV 0x05,@R0                  
    27C3: 74 03       MOV A,#0x03                   
    27C5: 5D          ANL A,R5                      
    27C6: F5 82       MOV DPL(0x82),A               
    27C8: 53 05 0C    ANL 0x05,#0x0C                
    27CB: ED          MOV A,R5                      
    27CC: 03          RR A                          
    27CD: 03          RR A                          
    27CE: 54 3F       ANL A,#0x3F                   
    27D0: F5 7A       MOV 0x7A,A                    
    27D2: 8C 7B       MOV 0x7B,R4                   
    27D4: C0 02       PUSH 0x02                     
    27D6: C0 03       PUSH 0x03                     
    27D8: C0 04       PUSH 0x04                     
    27DA: 12 0E 94    LCALL 0x0E94                     ; -> sub_0E94
    27DD: D0 04       POP 0x04                      
    27DF: D0 03       POP 0x03                      
    27E1: D0 02       POP 0x02                      
    27E3: 0C          INC R4                        
    27E4: 80 D1       SJMP 0x27B7                      ; -> 0x27B7

loc_27E6:
    27E6: E5 15       MOV A,0x15                    
    27E8: 60 03       JZ 0x27ED                        ; -> loc_27ED
    27EA: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_27ED:
    27ED: C0 02       PUSH 0x02                     
    27EF: C0 03       PUSH 0x03                     
    27F1: 12 21 A6    LCALL 0x21A6                     ; -> sub_21A6
    27F4: AC 82       MOV R4,0x82                   
    27F6: D0 03       POP 0x03                      
    27F8: D0 02       POP 0x02                      
    27FA: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    27FD: EC          MOV A,R4                      
    27FE: F0          MOVX @DPTR,A                  
    27FF: EC          MOV A,R4                      
    2800: 70 03       JNZ 0x2805                       ; -> loc_2805
    2802: 02 27 1F    LJMP 0x271F                      ; -> 0x271F

loc_2805:
    2805: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2808: E0          MOVX A,@DPTR                  
    2809: F5 82       MOV DPL(0x82),A               
    280B: 22          RET                           

loc_280C:
    280C: E5 08       MOV A,0x08                    
    280E: 4A          ORL A,R2                      
    280F: 60 03       JZ 0x2814                        ; -> loc_2814
    2811: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2814:
    2814: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    2817: E0          MOVX A,@DPTR                  
    2818: FB          MOV R3,A                      
    2819: 54 0F       ANL A,#0x0F                   
    281B: 60 03       JZ 0x2820                        ; -> loc_2820
    281D: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_2820:
    2820: 74 08       MOV A,#0x08                   
    2822: B5 0A 04    CJNE A,0x0A,0x2829               ; -> loc_2829
    2825: 7B 00       MOV R3,#0x00                  
    2827: 80 02       SJMP 0x282B                      ; -> 0x282B

loc_2829:
    2829: 7B 08       MOV R3,#0x08                  
    282B: 8B 0A       MOV 0x0A,R3                   
    282D: 7A 01       MOV R2,#0x01                  
    282F: 02 23 32    LJMP 0x2332                      ; -> loc_2332

loc_2832:
    2832: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    2835: E4          CLR A                         
    2836: F0          MOVX @DPTR,A                  
    2837: 90 CC 94    MOV DPTR,#0xCC94                 ; register block CC00
    283A: E0          MOVX A,@DPTR                  
    283B: FA          MOV R2,A                      
    283C: 8A 70       MOV 0x70,R2                   
    283E: 90 C6 00    MOV DPTR,#0xC600              
    2841: E4          CLR A                         
    2842: F0          MOVX @DPTR,A                  
    2843: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    2846: E0          MOVX A,@DPTR                  
    2847: FB          MOV R3,A                      
    2848: 60 4D       JZ 0x2897                        ; -> loc_2897
    284A: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    284D: E0          MOVX A,@DPTR                  
    284E: FB          MOV R3,A                      
    284F: 53 03 F0    ANL 0x03,#0xF0                
    2852: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    2855: EB          MOV A,R3                      
    2856: F0          MOVX @DPTR,A                  
    2857: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    285A: 74 04       MOV A,#0x04                   
    285C: F0          MOVX @DPTR,A                  
    285D: 90 C8 73    MOV DPTR,#0xC873                 ; control + status register block
    2860: 74 F0       MOV A,#0xF0                   
    2862: F0          MOVX @DPTR,A                  
    2863: 90 C8 74    MOV DPTR,#0xC874                 ; control + status register block
    2866: E4          CLR A                         
    2867: F0          MOVX @DPTR,A                  
    2868: 90 C8 78    MOV DPTR,#0xC878                 ; control + status register block
    286B: 74 BC       MOV A,#0xBC                   
    286D: F0          MOVX @DPTR,A                  
    286E: 90 4F E9    MOV DPTR,#0x4FE9                 ; mailbox / host-interface register block
    2871: E4          CLR A                         
    2872: F0          MOVX @DPTR,A                  
    2873: 90 C8 7C    MOV DPTR,#0xC87C                 ; control + status register block
    2876: F0          MOVX @DPTR,A                  
    2877: 90 C8 7D    MOV DPTR,#0xC87D                 ; control + status register block
    287A: 74 80       MOV A,#0x80                   
    287C: F0          MOVX @DPTR,A                  
    287D: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    2880: 74 01       MOV A,#0x01                   
    2882: F0          MOVX @DPTR,A                  
    2883: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    2886: E4          CLR A                         
    2887: F0          MOVX @DPTR,A                  
    2888: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    288B: E0          MOVX A,@DPTR                  
    288C: FB          MOV R3,A                      
    288D: 53 03 0F    ANL 0x03,#0x0F                
    2890: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    2893: EB          MOV A,R3                      
    2894: F0          MOVX @DPTR,A                  
    2895: 80 0D       SJMP 0x28A4                      ; -> 0x28A4

loc_2897:
    2897: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    289A: E0          MOVX A,@DPTR                  
    289B: FB          MOV R3,A                      
    289C: 53 03 0F    ANL 0x03,#0x0F                
    289F: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    28A2: EB          MOV A,R3                      
    28A3: F0          MOVX @DPTR,A                  
    28A4: 8A 82       MOV 0x82,R2                   
    28A6: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    28A9: 75 7A 04    MOV 0x7A,#0x04                
    28AC: 75 7B 13    MOV 0x7B,#0x13                
    28AF: 75 82 00    MOV DPL(0x82),#0x00           
    28B2: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    28B5: E5 15       MOV A,0x15                    
    28B7: 60 03       JZ 0x28BC                        ; -> loc_28BC
    28B9: 02 29 72    LJMP 0x2972                      ; -> loc_2972

loc_28BC:
    28BC: 75 2F 70    MOV 0x2F,#0x70                
    28BF: 75 30 0F    MOV 0x30,#0x0F                
    28C2: 75 31 00    MOV 0x31,#0x00                
    28C5: 75 32 40    MOV 0x32,#0x40                
    28C8: 75 33 10    MOV 0x33,#0x10                
    28CB: 75 34 00    MOV 0x34,#0x00                
    28CE: 75 35 40    MOV 0x35,#0x40                
    28D1: 75 2A 02    MOV 0x2A,#0x02                
    28D4: 75 2B 01    MOV 0x2B,#0x01                
    28D7: E4          CLR A                         
    28D8: F5 2C       MOV 0x2C,A                    
    28DA: F5 2D       MOV 0x2D,A                    
    28DC: 75 2E 01    MOV 0x2E,#0x01                
    28DF: 75 82 08    MOV DPL(0x82),#0x08           
    28E2: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    28E5: AA 82       MOV R2,0x82                   
    28E7: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    28EA: EA          MOV A,R2                      
    28EB: F0          MOVX @DPTR,A                  
    28EC: EA          MOV A,R2                      
    28ED: 60 07       JZ 0x28F6                        ; -> loc_28F6
    28EF: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    28F2: E0          MOVX A,@DPTR                  
    28F3: F5 82       MOV DPL(0x82),A               
    28F5: 22          RET                           

loc_28F6:
    28F6: 75 82 00    MOV DPL(0x82),#0x00           
    28F9: 12 1F 0B    LCALL 0x1F0B                     ; -> sub_1F0B
    28FC: AA 82       MOV R2,0x82                   
    28FE: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2901: EA          MOV A,R2                      
    2902: F0          MOVX @DPTR,A                  
    2903: EA          MOV A,R2                      
    2904: 60 07       JZ 0x290D                        ; -> loc_290D
    2906: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    2909: E0          MOVX A,@DPTR                  
    290A: F5 82       MOV DPL(0x82),A               
    290C: 22          RET                           

loc_290D:
    290D: 78 81       MOV R0,#0x81                  
    290F: 86 02       MOV 0x02,@R0                  
    2911: E5 1C       MOV A,0x1C                    
    2913: 52 02       ANL 0x02,A                    
    2915: EA          MOV A,R2                      
    2916: B5 1C 44    CJNE A,0x1C,0x295D               ; -> loc_295D
    2919: 78 82       MOV R0,#0x82                  
    291B: 86 02       MOV 0x02,@R0                  
    291D: E5 1D       MOV A,0x1D                    
    291F: 52 02       ANL 0x02,A                    
    2921: EA          MOV A,R2                      
    2922: B5 1D 38    CJNE A,0x1D,0x295D               ; -> loc_295D
    2925: E5 13       MOV A,0x13                    
    2927: 60 34       JZ 0x295D                        ; -> loc_295D
    2929: AA 63       MOV R2,0x63                   
    292B: AB 64       MOV R3,0x64                   
    292D: AC 65       MOV R4,0x65                   
    292F: 8A 82       MOV 0x82,R2                   
    2931: 8B 83       MOV 0x83,R3                   
    2933: 8C F0       MOV 0xF0,R4                   
    2935: E4          CLR A                         
    2936: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    2939: AA 60       MOV R2,0x60                   
    293B: AB 61       MOV R3,0x61                   
    293D: AC 62       MOV R4,0x62                   
    293F: 8A 82       MOV 0x82,R2                   
    2941: 8B 83       MOV 0x83,R3                   
    2943: 8C F0       MOV 0xF0,R4                   
    2945: E5 0A       MOV A,0x0A                    
    2947: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    294A: AA 5D       MOV R2,0x5D                   
    294C: AB 5E       MOV R3,0x5E                   
    294E: AC 5F       MOV R4,0x5F                   
    2950: 8A 82       MOV 0x82,R2                   
    2952: 8B 83       MOV 0x83,R3                   
    2954: 8C F0       MOV 0xF0,R4                   
    2956: E5 09       MOV A,0x09                    
    2958: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    295B: 80 11       SJMP 0x296E                      ; -> 0x296E

loc_295D:
    295D: AA 63       MOV R2,0x63                   
    295F: AB 64       MOV R3,0x64                   
    2961: AC 65       MOV R4,0x65                   
    2963: 8A 82       MOV 0x82,R2                   
    2965: 8B 83       MOV 0x83,R3                   
    2967: 8C F0       MOV 0xF0,R4                   
    2969: 74 01       MOV A,#0x01                   
    296B: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    296E: 75 82 00    MOV DPL(0x82),#0x00           
    2971: 22          RET                           

loc_2972:
    2972: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    2975: E4          CLR A                         
    2976: F0          MOVX @DPTR,A                  
    2977: 75 15 00    MOV 0x15,#0x00                
    297A: 90 C6 00    MOV DPTR,#0xC600              
    297D: E4          CLR A                         
    297E: F0          MOVX @DPTR,A                  
    297F: 75 82 00    MOV DPL(0x82),#0x00           
    2982: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    2985: 75 7A 04    MOV 0x7A,#0x04                
    2988: 75 7B 13    MOV 0x7B,#0x13                
    298B: 75 82 00    MOV DPL(0x82),#0x00           
    298E: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2991: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    2994: 74 01       MOV A,#0x01                   
    2996: F0          MOVX @DPTR,A                  
    2997: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    299A: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    299D: E0          MOVX A,@DPTR                  
    299E: FA          MOV R2,A                      
    299F: 53 02 FE    ANL 0x02,#0xFE                
    29A2: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    29A5: EA          MOV A,R2                      
    29A6: F0          MOVX @DPTR,A                  
    29A7: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    29AA: E0          MOVX A,@DPTR                  
    29AB: FA          MOV R2,A                      
    29AC: 43 02 01    ORL 0x02,#0x01                
    29AF: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    29B2: EA          MOV A,R2                      
    29B3: F0          MOVX @DPTR,A                  
    29B4: 75 30 0F    MOV 0x30,#0x0F                
    29B7: 75 31 00    MOV 0x31,#0x00                
    29BA: 75 32 40    MOV 0x32,#0x40                
    29BD: 75 33 10    MOV 0x33,#0x10                
    29C0: 75 34 00    MOV 0x34,#0x00                
    29C3: 75 35 40    MOV 0x35,#0x40                
    29C6: 75 2A 02    MOV 0x2A,#0x02                
    29C9: 75 2B 01    MOV 0x2B,#0x01                
    29CC: E4          CLR A                         
    29CD: F5 2C       MOV 0x2C,A                    
    29CF: F5 2D       MOV 0x2D,A                    
    29D1: 75 2E 01    MOV 0x2E,#0x01                
    29D4: 75 2F 8B    MOV 0x2F,#0x8B                
    29D7: 75 82 08    MOV DPL(0x82),#0x08           
    29DA: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    29DD: AA 82       MOV R2,0x82                   
    29DF: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    29E2: EA          MOV A,R2                      
    29E3: F0          MOVX @DPTR,A                  
    29E4: EA          MOV A,R2                      
    29E5: 60 07       JZ 0x29EE                        ; -> loc_29EE
    29E7: 90 4F E8    MOV DPTR,#0x4FE8                 ; mailbox / host-interface register block
    29EA: E0          MOVX A,@DPTR                  
    29EB: F5 82       MOV DPL(0x82),A               
    29ED: 22          RET                           

loc_29EE:
    29EE: AA 63       MOV R2,0x63                   
    29F0: AB 64       MOV R3,0x64                   
    29F2: AC 65       MOV R4,0x65                   
    29F4: 8A 82       MOV 0x82,R2                   
    29F6: 8B 83       MOV 0x83,R3                   
    29F8: 8C F0       MOV 0xF0,R4                   
    29FA: 74 01       MOV A,#0x01                   
    29FC: 12 3E BC    LCALL 0x3EBC                     ; -> sub_3EBC
    29FF: 75 82 00    MOV DPL(0x82),#0x00           
    2A02: 22          RET                           

loc_2A03:
    2A03: 75 78 00    MOV 0x78,#0x00                
    2A06: 75 79 00    MOV 0x79,#0x00                
    2A09: 78 8F       MOV R0,#0x8F                  
    2A0B: 76 00       MOV @R0,#0x00                 
    2A0D: 78 90       MOV R0,#0x90                  
    2A0F: 76 00       MOV @R0,#0x00                 
    2A11: 78 91       MOV R0,#0x91                  
    2A13: 76 00       MOV @R0,#0x00                 
    2A15: 78 92       MOV R0,#0x92                  
    2A17: 76 00       MOV @R0,#0x00                 
    2A19: 78 00       MOV R0,#0x00                  
    2A1B: 79 00       MOV R1,#0x00                  
    2A1D: 7A 00       MOV R2,#0x00                  
    2A1F: 7B 00       MOV R3,#0x00                  
    2A21: 7C 00       MOV R4,#0x00                  
    2A23: 7D 00       MOV R5,#0x00                  
    2A25: 7E 00       MOV R6,#0x00                  
    2A27: 7F 00       MOV R7,#0x00                  
    2A29: 90 C8 A0    MOV DPTR,#0xC8A0                 ; control + status register block
    2A2C: 74 0E       MOV A,#0x0E                   
    2A2E: F0          MOVX @DPTR,A                  
    2A2F: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    2A32: E0          MOVX A,@DPTR                  
    2A33: FA          MOV R2,A                      
    2A34: 43 02 40    ORL 0x02,#0x40                
    2A37: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    2A3A: EA          MOV A,R2                      
    2A3B: F0          MOVX @DPTR,A                  
    2A3C: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2A3F: E0          MOVX A,@DPTR                  
    2A40: FA          MOV R2,A                      
    2A41: 53 02 FE    ANL 0x02,#0xFE                
    2A44: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2A47: EA          MOV A,R2                      
    2A48: F0          MOVX @DPTR,A                  
    2A49: E0          MOVX A,@DPTR                  
    2A4A: FA          MOV R2,A                      
    2A4B: 53 02 FD    ANL 0x02,#0xFD                
    2A4E: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2A51: EA          MOV A,R2                      
    2A52: F0          MOVX @DPTR,A                  
    2A53: 75 7A 01    MOV 0x7A,#0x01                
    2A56: 75 7B 01    MOV 0x7B,#0x01                
    2A59: 75 82 00    MOV DPL(0x82),#0x00           
    2A5C: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2A5F: 90 D7 68    MOV DPTR,#0xD768                 ; register block D766
    2A62: E4          CLR A                         
    2A63: F0          MOVX @DPTR,A                  
    2A64: 90 D7 69    MOV DPTR,#0xD769                 ; register block D766
    2A67: F0          MOVX @DPTR,A                  
    2A68: 90 D7 6A    MOV DPTR,#0xD76A                 ; register block D766
    2A6B: 74 05       MOV A,#0x05                   
    2A6D: F0          MOVX @DPTR,A                  
    2A6E: 90 CC 18    MOV DPTR,#0xCC18                 ; register block CC00
    2A71: 74 06       MOV A,#0x06                   
    2A73: F0          MOVX @DPTR,A                  
    2A74: 90 D6 6F    MOV DPTR,#0xD66F                 ; register block D66E
    2A77: E0          MOVX A,@DPTR                  
    2A78: FA          MOV R2,A                      
    2A79: 30 E4 12    JNB ACC.4,0x2A8E                 ; -> 0x2A8E
    2A7C: 90 CA 10    MOV DPTR,#0xCA10                 ; register block CA00
    2A7F: 74 03       MOV A,#0x03                   
    2A81: F0          MOVX @DPTR,A                  
    2A82: 90 CA 15    MOV DPTR,#0xCA15                 ; register block CA00
    2A85: 74 20       MOV A,#0x20                   
    2A87: F0          MOVX @DPTR,A                  
    2A88: 90 CA 14    MOV DPTR,#0xCA14                 ; register block CA00
    2A8B: 74 07       MOV A,#0x07                   
    2A8D: F0          MOVX @DPTR,A                  
    2A8E: 90 00 48    MOV DPTR,#0x0048              
    2A91: E4          CLR A                         
    2A92: 93          MOVC A,@A+DPTR                
    2A93: FA          MOV R2,A                      
    2A94: 30 E4 18    JNB ACC.4,0x2AAF                 ; -> 0x2AAF
    2A97: 90 D7 FC    MOV DPTR,#0xD7FC              
    2A9A: 74 01       MOV A,#0x01                   
    2A9C: F0          MOVX @DPTR,A                  
    2A9D: 90 D7 FA    MOV DPTR,#0xD7FA              
    2AA0: 74 01       MOV A,#0x01                   
    2AA2: F0          MOVX @DPTR,A                  
    2AA3: 90 D7 F8    MOV DPTR,#0xD7F8              
    2AA6: 74 01       MOV A,#0x01                   
    2AA8: F0          MOVX @DPTR,A                  
    2AA9: 90 D7 F6    MOV DPTR,#0xD7F6              
    2AAC: 74 01       MOV A,#0x01                   
    2AAE: F0          MOVX @DPTR,A                  
    2AAF: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    2AB2: E0          MOVX A,@DPTR                  
    2AB3: FA          MOV R2,A                      
    2AB4: 53 02 0E    ANL 0x02,#0x0E                
    2AB7: BA 0E 02    CJNE R2,#0x0E,0x2ABC             ; -> loc_2ABC
    2ABA: 80 F3       SJMP 0x2AAF                      ; -> 0x2AAF

loc_2ABC:
    2ABC: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    2ABF: E0          MOVX A,@DPTR                  
    2AC0: FA          MOV R2,A                      
    2AC1: 74 80       MOV A,#0x80                   
    2AC3: 5A          ANL A,R2                      
    2AC4: F5 08       MOV 0x08,A                    
    2AC6: 70 2F       JNZ 0x2AF7                       ; -> loc_2AF7
    2AC8: 90 D2 19    MOV DPTR,#0xD219                 ; register block D200
    2ACB: E0          MOVX A,@DPTR                  
    2ACC: FA          MOV R2,A                      
    2ACD: 43 02 02    ORL 0x02,#0x02                
    2AD0: 90 D2 19    MOV DPTR,#0xD219                 ; register block D200
    2AD3: EA          MOV A,R2                      
    2AD4: F0          MOVX @DPTR,A                  
    2AD5: 90 D2 1A    MOV DPTR,#0xD21A                 ; register block D200
    2AD8: E0          MOVX A,@DPTR                  
    2AD9: FA          MOV R2,A                      
    2ADA: 43 02 08    ORL 0x02,#0x08                
    2ADD: 90 D2 1A    MOV DPTR,#0xD21A                 ; register block D200
    2AE0: EA          MOV A,R2                      
    2AE1: F0          MOVX @DPTR,A                  
    2AE2: 90 D2 28    MOV DPTR,#0xD228                 ; register block D200
    2AE5: E0          MOVX A,@DPTR                  
    2AE6: FA          MOV R2,A                      
    2AE7: 43 02 91    ORL 0x02,#0x91                
    2AEA: 90 D2 28    MOV DPTR,#0xD228                 ; register block D200
    2AED: EA          MOV A,R2                      
    2AEE: F0          MOVX @DPTR,A                  
    2AEF: 90 D2 1E    MOV DPTR,#0xD21E                 ; register block D200
    2AF2: 74 FF       MOV A,#0xFF                   
    2AF4: F0          MOVX @DPTR,A                  
    2AF5: 80 05       SJMP 0x2AFC                      ; -> 0x2AFC

loc_2AF7:
    2AF7: 90 CC 8E    MOV DPTR,#0xCC8E                 ; register block CC00
    2AFA: E4          CLR A                         
    2AFB: F0          MOVX @DPTR,A                  
    2AFC: 90 4F E9    MOV DPTR,#0x4FE9                 ; mailbox / host-interface register block
    2AFF: E4          CLR A                         
    2B00: F0          MOVX @DPTR,A                  
    2B01: 75 09 00    MOV 0x09,#0x00                
    2B04: 75 0A 00    MOV 0x0A,#0x00                
    2B07: 75 14 00    MOV 0x14,#0x00                
    2B0A: 75 0D 00    MOV 0x0D,#0x00                
    2B0D: 75 0E 00    MOV 0x0E,#0x00                
    2B10: 75 13 00    MOV 0x13,#0x00                
    2B13: 75 17 00    MOV 0x17,#0x00                
    2B16: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    2B19: E4          CLR A                         
    2B1A: F0          MOVX @DPTR,A                  
    2B1B: 75 15 00    MOV 0x15,#0x00                
    2B1E: 75 16 00    MOV 0x16,#0x00                
    2B21: 75 18 00    MOV 0x18,#0x00                
    2B24: 90 4F EB    MOV DPTR,#0x4FEB                 ; mailbox / host-interface register block
    2B27: E4          CLR A                         
    2B28: F0          MOVX @DPTR,A                  
    2B29: 7A 00       MOV R2,#0x00                  
    2B2B: 90 4F E5    MOV DPTR,#0x4FE5                 ; mailbox / host-interface register block
    2B2E: E4          CLR A                         
    2B2F: F0          MOVX @DPTR,A                  
    2B30: 90 4F E6    MOV DPTR,#0x4FE6                 ; mailbox / host-interface register block
    2B33: F0          MOVX @DPTR,A                  
    2B34: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    2B37: F0          MOVX @DPTR,A                  
    2B38: 90 4F AE    MOV DPTR,#0x4FAE                 ; mailbox / host-interface register block
    2B3B: F0          MOVX @DPTR,A                  
    2B3C: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    2B3F: E0          MOVX A,@DPTR                  
    2B40: FB          MOV R3,A                      
    2B41: 43 03 04    ORL 0x03,#0x04                
    2B44: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    2B47: EB          MOV A,R3                      
    2B48: F0          MOVX @DPTR,A                  
    2B49: 90 D7 66    MOV DPTR,#0xD766                 ; register block D766
    2B4C: 74 08       MOV A,#0x08                   
    2B4E: F0          MOVX @DPTR,A                  
    2B4F: 90 D6 00    MOV DPTR,#0xD600              
    2B52: E4          CLR A                         
    2B53: F0          MOVX @DPTR,A                  
    2B54: 90 D6 80    MOV DPTR,#0xD680                 ; register block D66E
    2B57: F0          MOVX @DPTR,A                  
    2B58: 90 D7 00    MOV DPTR,#0xD700              
    2B5B: F0          MOVX @DPTR,A                  
    2B5C: 90 D7 80    MOV DPTR,#0xD780                 ; register block D766
    2B5F: F0          MOVX @DPTR,A                  
    2B60: 90 00 4B    MOV DPTR,#0x004B              
    2B63: E4          CLR A                         
    2B64: 93          MOVC A,@A+DPTR                
    2B65: FB          MOV R3,A                      
    2B66: 30 E7 04    JNB ACC.7,0x2B6D                 ; -> loc_2B6D
    2B69: 7B 00       MOV R3,#0x00                  
    2B6B: 80 02       SJMP 0x2B6F                      ; -> 0x2B6F

loc_2B6D:
    2B6D: 7B 0F       MOV R3,#0x0F                  
    2B6F: 90 D6 77    MOV DPTR,#0xD677                 ; register block D66E
    2B72: EB          MOV A,R3                      
    2B73: F0          MOVX @DPTR,A                  
    2B74: E5 08       MOV A,0x08                    
    2B76: 60 40       JZ 0x2BB8                        ; -> loc_2BB8
    2B78: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    2B7B: E0          MOVX A,@DPTR                  
    2B7C: FB          MOV R3,A                      
    2B7D: 20 E3 1C    JB ACC.3,0x2B9C                  ; -> loc_2B9C
    2B80: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    2B83: E0          MOVX A,@DPTR                  
    2B84: FB          MOV R3,A                      
    2B85: 53 03 FB    ANL 0x03,#0xFB                
    2B88: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    2B8B: EB          MOV A,R3                      
    2B8C: F0          MOVX @DPTR,A                  
    2B8D: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2B90: E0          MOVX A,@DPTR                  
    2B91: FB          MOV R3,A                      
    2B92: 53 03 FE    ANL 0x03,#0xFE                
    2B95: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2B98: EB          MOV A,R3                      
    2B99: F0          MOVX @DPTR,A                  
    2B9A: 80 3F       SJMP 0x2BDB                      ; -> 0x2BDB

loc_2B9C:
    2B9C: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    2B9F: E0          MOVX A,@DPTR                  
    2BA0: FB          MOV R3,A                      
    2BA1: 43 03 04    ORL 0x03,#0x04                
    2BA4: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    2BA7: EB          MOV A,R3                      
    2BA8: F0          MOVX @DPTR,A                  
    2BA9: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2BAC: E0          MOVX A,@DPTR                  
    2BAD: FB          MOV R3,A                      
    2BAE: 43 03 01    ORL 0x03,#0x01                
    2BB1: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2BB4: EB          MOV A,R3                      
    2BB5: F0          MOVX @DPTR,A                  
    2BB6: 80 23       SJMP 0x2BDB                      ; -> 0x2BDB

loc_2BB8:
    2BB8: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2BBB: E0          MOVX A,@DPTR                  
    2BBC: FB          MOV R3,A                      
    2BBD: 53 03 FD    ANL 0x03,#0xFD                
    2BC0: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2BC3: EB          MOV A,R3                      
    2BC4: F0          MOVX @DPTR,A                  
    2BC5: E0          MOVX A,@DPTR                  
    2BC6: FB          MOV R3,A                      
    2BC7: 53 03 FE    ANL 0x03,#0xFE                
    2BCA: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2BCD: EB          MOV A,R3                      
    2BCE: F0          MOVX @DPTR,A                  
    2BCF: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    2BD2: 74 FF       MOV A,#0xFF                   
    2BD4: F0          MOVX @DPTR,A                  
    2BD5: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    2BD8: 74 FF       MOV A,#0xFF                   
    2BDA: F0          MOVX @DPTR,A                  
    2BDB: 90 CC 92    MOV DPTR,#0xCC92                 ; register block CC00
    2BDE: 74 08       MOV A,#0x08                   
    2BE0: F0          MOVX @DPTR,A                  
    2BE1: 90 CC 8E    MOV DPTR,#0xCC8E                 ; register block CC00
    2BE4: E0          MOVX A,@DPTR                  
    2BE5: F5 19       MOV 0x19,A                    
    2BE7: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    2BEA: 74 01       MOV A,#0x01                   
    2BEC: F0          MOVX @DPTR,A                  
    2BED: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    2BF0: E0          MOVX A,@DPTR                  
    2BF1: FB          MOV R3,A                      
    2BF2: 43 03 01    ORL 0x03,#0x01                
    2BF5: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    2BF8: EB          MOV A,R3                      
    2BF9: F0          MOVX @DPTR,A                  
    2BFA: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2BFD: E0          MOVX A,@DPTR                  
    2BFE: FB          MOV R3,A                      
    2BFF: 53 03 FE    ANL 0x03,#0xFE                
    2C02: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C05: EB          MOV A,R3                      
    2C06: F0          MOVX @DPTR,A                  
    2C07: 90 00 05    MOV DPTR,#0x0005              
    2C0A: C0 02       PUSH 0x02                     
    2C0C: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2C0F: D0 02       POP 0x02                      
    2C11: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    2C14: E0          MOVX A,@DPTR                  
    2C15: FB          MOV R3,A                      
    2C16: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    2C19: 74 3F       MOV A,#0x3F                   
    2C1B: 5B          ANL A,R3                      
    2C1C: F0          MOVX @DPTR,A                  
    2C1D: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    2C20: E0          MOVX A,@DPTR                  
    2C21: FB          MOV R3,A                      
    2C22: BB 08 4A    CJNE R3,#0x08,0x2C6F             ; -> 0x2C6F
    2C25: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C28: E0          MOVX A,@DPTR                  
    2C29: FB          MOV R3,A                      
    2C2A: 43 03 02    ORL 0x03,#0x02                
    2C2D: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C30: EB          MOV A,R3                      
    2C31: F0          MOVX @DPTR,A                  
    2C32: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2C35: E4          CLR A                         
    2C36: F0          MOVX @DPTR,A                  
    2C37: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2C3A: E0          MOVX A,@DPTR                  
    2C3B: FB          MOV R3,A                      
    2C3C: BB 02 00    CJNE R3,#0x02,0x2C3F             ; -> 0x2C3F
    2C3F: 50 09       JNC 0x2C4A                       ; -> loc_2C4A
    2C41: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2C44: E0          MOVX A,@DPTR                  
    2C45: 24 01       ADD A,#0x01                   
    2C47: F0          MOVX @DPTR,A                  
    2C48: 80 ED       SJMP 0x2C37                      ; -> 0x2C37

loc_2C4A:
    2C4A: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C4D: E0          MOVX A,@DPTR                  
    2C4E: FB          MOV R3,A                      
    2C4F: 53 03 FD    ANL 0x03,#0xFD                
    2C52: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C55: EB          MOV A,R3                      
    2C56: F0          MOVX @DPTR,A                  
    2C57: 75 7A 10    MOV 0x7A,#0x10                
    2C5A: 75 7B 1C    MOV 0x7B,#0x1C                
    2C5D: 75 82 00    MOV DPL(0x82),#0x00           
    2C60: C0 02       PUSH 0x02                     
    2C62: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2C65: D0 02       POP 0x02                      
    2C67: 90 D6 7C    MOV DPTR,#0xD67C                 ; register block D66E
    2C6A: E0          MOVX A,@DPTR                  
    2C6B: FB          MOV R3,A                      
    2C6C: 30 E2 F8    JNB ACC.2,0x2C67                 ; -> 0x2C67
    2C6F: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    2C72: E0          MOVX A,@DPTR                  
    2C73: FB          MOV R3,A                      
    2C74: 30 E2 06    JNB ACC.2,0x2C7D                 ; -> 0x2C7D
    2C77: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    2C7A: E0          MOVX A,@DPTR                  
    2C7B: 60 08       JZ 0x2C85                        ; -> 0x2C85
    2C7D: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    2C80: E0          MOVX A,@DPTR                  
    2C81: FB          MOV R3,A                      
    2C82: 30 E0 12    JNB ACC.0,0x2C97                 ; -> loc_2C97
    2C85: 75 7A 20    MOV 0x7A,#0x20                
    2C88: 75 7B 20    MOV 0x7B,#0x20                
    2C8B: 75 82 00    MOV DPL(0x82),#0x00           
    2C8E: C0 02       PUSH 0x02                     
    2C90: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2C93: D0 02       POP 0x02                      
    2C95: 80 D8       SJMP 0x2C6F                      ; -> 0x2C6F

loc_2C97:
    2C97: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    2C9A: E0          MOVX A,@DPTR                  
    2C9B: FB          MOV R3,A                      
    2C9C: 20 E0 F8    JB ACC.0,0x2C97                  ; -> loc_2C97
    2C9F: 90 C8 2F    MOV DPTR,#0xC82F                 ; control + status register block
    2CA2: E0          MOVX A,@DPTR                  
    2CA3: FB          MOV R3,A                      
    2CA4: 30 E0 F8    JNB ACC.0,0x2C9F                 ; -> 0x2C9F
    2CA7: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2CAA: E0          MOVX A,@DPTR                  
    2CAB: FB          MOV R3,A                      
    2CAC: 43 03 01    ORL 0x03,#0x01                
    2CAF: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2CB2: EB          MOV A,R3                      
    2CB3: F0          MOVX @DPTR,A                  
    2CB4: E0          MOVX A,@DPTR                  
    2CB5: FB          MOV R3,A                      
    2CB6: 43 03 02    ORL 0x03,#0x02                
    2CB9: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    2CBC: EB          MOV A,R3                      
    2CBD: F0          MOVX @DPTR,A                  
    2CBE: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    2CC1: E0          MOVX A,@DPTR                  
    2CC2: FB          MOV R3,A                      
    2CC3: 30 E4 0A    JNB ACC.4,0x2CD0                 ; -> 0x2CD0
    2CC6: 90 01 C2    MOV DPTR,#0x01C2              
    2CC9: C0 02       PUSH 0x02                     
    2CCB: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2CCE: D0 02       POP 0x02                      
    2CD0: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    2CD3: E0          MOVX A,@DPTR                  
    2CD4: FB          MOV R3,A                      
    2CD5: 20 E0 03    JB ACC.0,0x2CDB                  ; -> loc_2CDB
    2CD8: 02 2E 8C    LJMP 0x2E8C                      ; -> loc_2E8C

loc_2CDB:
    2CDB: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    2CDE: E0          MOVX A,@DPTR                  
    2CDF: FB          MOV R3,A                      
    2CE0: 53 03 03    ANL 0x03,#0x03                
    2CE3: BB 01 20    CJNE R3,#0x01,0x2D06             ; -> loc_2D06
    2CE6: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2CE9: 74 01       MOV A,#0x01                   
    2CEB: F0          MOVX @DPTR,A                  
    2CEC: 90 C8 91    MOV DPTR,#0xC891                 ; control + status register block
    2CEF: 74 0C       MOV A,#0x0C                   
    2CF1: F0          MOVX @DPTR,A                  
    2CF2: 90 D4 49    MOV DPTR,#0xD449                 ; register block D403
    2CF5: 74 02       MOV A,#0x02                   
    2CF7: F0          MOVX @DPTR,A                  
    2CF8: 74 02       MOV A,#0x02                   
    2CFA: F0          MOVX @DPTR,A                  
    2CFB: 90 D7 66    MOV DPTR,#0xD766                 ; register block D766
    2CFE: E4          CLR A                         
    2CFF: F0          MOVX @DPTR,A                  
    2D00: 90 D6 72    MOV DPTR,#0xD672                 ; register block D66E
    2D03: F0          MOVX @DPTR,A                  
    2D04: 80 26       SJMP 0x2D2C                      ; -> 0x2D2C

loc_2D06:
    2D06: 90 D6 6E    MOV DPTR,#0xD66E                 ; register block D66E
    2D09: E0          MOVX A,@DPTR                  
    2D0A: FB          MOV R3,A                      
    2D0B: 53 03 03    ANL 0x03,#0x03                
    2D0E: BB 02 15    CJNE R3,#0x02,0x2D26             ; -> loc_2D26
    2D11: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2D14: E0          MOVX A,@DPTR                  
    2D15: FB          MOV R3,A                      
    2D16: 53 03 FE    ANL 0x03,#0xFE                
    2D19: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2D1C: EB          MOV A,R3                      
    2D1D: F0          MOVX @DPTR,A                  
    2D1E: 90 D6 72    MOV DPTR,#0xD672                 ; register block D66E
    2D21: 74 0F       MOV A,#0x0F                   
    2D23: F0          MOVX @DPTR,A                  
    2D24: 80 06       SJMP 0x2D2C                      ; -> 0x2D2C

loc_2D26:
    2D26: 90 D6 72    MOV DPTR,#0xD672                 ; register block D66E
    2D29: 74 0F       MOV A,#0x0F                   
    2D2B: F0          MOVX @DPTR,A                  
    2D2C: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2D2F: E4          CLR A                         
    2D30: F0          MOVX @DPTR,A                  
    2D31: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2D34: E0          MOVX A,@DPTR                  
    2D35: FB          MOV R3,A                      
    2D36: BB 04 00    CJNE R3,#0x04,0x2D39             ; -> 0x2D39
    2D39: 50 18       JNC 0x2D53                       ; -> loc_2D53
    2D3B: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2D3E: E0          MOVX A,@DPTR                  
    2D3F: F5 7B       MOV 0x7B,A                    
    2D41: 75 7A 00    MOV 0x7A,#0x00                
    2D44: 75 82 00    MOV DPL(0x82),#0x00           
    2D47: 12 0E 94    LCALL 0x0E94                     ; -> sub_0E94
    2D4A: 90 4F F0    MOV DPTR,#0x4FF0                 ; mailbox / host-interface register block
    2D4D: E0          MOVX A,@DPTR                  
    2D4E: 24 01       ADD A,#0x01                   
    2D50: F0          MOVX @DPTR,A                  
    2D51: 80 DE       SJMP 0x2D31                      ; -> 0x2D31

loc_2D53:
    2D53: 90 CA 5A    MOV DPTR,#0xCA5A                 ; register block CA00
    2D56: E4          CLR A                         
    2D57: F0          MOVX @DPTR,A                  
    2D58: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2D5B: E0          MOVX A,@DPTR                  
    2D5C: FB          MOV R3,A                      
    2D5D: 43 03 01    ORL 0x03,#0x01                
    2D60: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    2D63: EB          MOV A,R3                      
    2D64: F0          MOVX @DPTR,A                  
    2D65: 90 D7 67    MOV DPTR,#0xD767                 ; register block D766
    2D68: 74 3F       MOV A,#0x3F                   
    2D6A: F0          MOVX @DPTR,A                  
    2D6B: 75 09 04    MOV 0x09,#0x04                
    2D6E: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2D71: E0          MOVX A,@DPTR                  
    2D72: 60 28       JZ 0x2D9C                        ; -> loc_2D9C
    2D74: 75 7A 20    MOV 0x7A,#0x20                
    2D77: 75 7B 04    MOV 0x7B,#0x04                
    2D7A: 75 82 00    MOV DPL(0x82),#0x00           
    2D7D: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2D80: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    2D83: E0          MOVX A,@DPTR                  
    2D84: FB          MOV R3,A                      
    2D85: 30 E2 F8    JNB ACC.2,0x2D80                 ; -> 0x2D80
    2D88: 90 CC 36    MOV DPTR,#0xCC36                 ; register block CC00
    2D8B: E0          MOVX A,@DPTR                  
    2D8C: FB          MOV R3,A                      
    2D8D: 78 7F       MOV R0,#0x7F                  
    2D8F: A6 03       MOV @R0,0x03                  
    2D91: 90 CC 37    MOV DPTR,#0xCC37                 ; register block CC00
    2D94: E0          MOVX A,@DPTR                  
    2D95: FB          MOV R3,A                      
    2D96: 78 80       MOV R0,#0x80                  
    2D98: A6 03       MOV @R0,0x03                  
    2D9A: 80 E4       SJMP 0x2D80                      ; -> 0x2D80

loc_2D9C:
    2D9C: 75 7A 01    MOV 0x7A,#0x01                
    2D9F: 75 7B 02    MOV 0x7B,#0x02                
    2DA2: 75 82 00    MOV DPL(0x82),#0x00           
    2DA5: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2DA8: 90 D4 46    MOV DPTR,#0xD446                 ; register block D403
    2DAB: 74 C4       MOV A,#0xC4                   
    2DAD: F0          MOVX @DPTR,A                  
    2DAE: 90 D4 47    MOV DPTR,#0xD447                 ; register block D403
    2DB1: E4          CLR A                         
    2DB2: F0          MOVX @DPTR,A                  
    2DB3: 90 D4 53    MOV DPTR,#0xD453                 ; register block D403
    2DB6: 74 3A       MOV A,#0x3A                   
    2DB8: F0          MOVX @DPTR,A                  
    2DB9: 90 D4 7D    MOV DPTR,#0xD47D              
    2DBC: 74 3A       MOV A,#0x3A                   
    2DBE: F0          MOVX @DPTR,A                  
    2DBF: 90 D4 54    MOV DPTR,#0xD454                 ; register block D403
    2DC2: 74 54       MOV A,#0x54                   
    2DC4: F0          MOVX @DPTR,A                  
    2DC5: 90 D4 7E    MOV DPTR,#0xD47E              
    2DC8: 74 54       MOV A,#0x54                   
    2DCA: F0          MOVX @DPTR,A                  
    2DCB: 12 04 78    LCALL 0x0478                     ; -> sub_0478
    2DCE: 12 0A BA    LCALL 0x0ABA                     ; -> sub_0ABA
    2DD1: 90 C8 02    MOV DPTR,#0xC802                 ; control + status register block
    2DD4: E0          MOVX A,@DPTR                  
    2DD5: FB          MOV R3,A                      
    2DD6: 30 E0 23    JNB ACC.0,0x2DFC                 ; -> loc_2DFC
    2DD9: 12 0F 3D    LCALL 0x0F3D                     ; -> sub_0F3D
    2DDC: 12 10 10    LCALL 0x1010                     ; -> sub_1010
    2DDF: 90 00 0F    MOV DPTR,#0x000F              
    2DE2: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    2DE5: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    2DE8: E0          MOVX A,@DPTR                  
    2DE9: FB          MOV R3,A                      
    2DEA: 53 03 DD    ANL 0x03,#0xDD                
    2DED: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    2DF0: EB          MOV A,R3                      
    2DF1: F0          MOVX @DPTR,A                  
    2DF2: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    2DF5: E4          CLR A                         
    2DF6: F0          MOVX @DPTR,A                  
    2DF7: 12 10 43    LCALL 0x1043                     ; -> sub_1043
    2DFA: 80 0E       SJMP 0x2E0A                      ; -> loc_2E0A

loc_2DFC:
    2DFC: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    2DFF: E0          MOVX A,@DPTR                  
    2E00: FB          MOV R3,A                      
    2E01: 30 E0 CA    JNB ACC.0,0x2DCE                 ; -> 0x2DCE
    2E04: 12 0E 61    LCALL 0x0E61                     ; -> sub_0E61
    2E07: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_2E0A:
    2E0A: 90 CE 51    MOV DPTR,#0xCE51                 ; register CE51
    2E0D: E4          CLR A                         
    2E0E: F0          MOVX @DPTR,A                  
    2E0F: 75 7A 01    MOV 0x7A,#0x01                
    2E12: 75 7B 03    MOV 0x7B,#0x03                
    2E15: 75 82 00    MOV DPL(0x82),#0x00           
    2E18: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2E1B: 12 0A BA    LCALL 0x0ABA                     ; -> sub_0ABA
    2E1E: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    2E21: E0          MOVX A,@DPTR                  
    2E22: FB          MOV R3,A                      
    2E23: BB 01 0E    CJNE R3,#0x01,0x2E34             ; -> loc_2E34
    2E26: 75 7A 20    MOV 0x7A,#0x20                
    2E29: 75 7B 21    MOV 0x7B,#0x21                
    2E2C: 75 82 00    MOV DPL(0x82),#0x00           
    2E2F: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2E32: 80 EA       SJMP 0x2E1E                      ; -> 0x2E1E

loc_2E34:
    2E34: 90 C8 02    MOV DPTR,#0xC802                 ; control + status register block
    2E37: E0          MOVX A,@DPTR                  
    2E38: FB          MOV R3,A                      
    2E39: 20 E0 08    JB ACC.0,0x2E44                  ; -> 0x2E44
    2E3C: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2E3F: E0          MOVX A,@DPTR                  
    2E40: FB          MOV R3,A                      
    2E41: 30 E0 08    JNB ACC.0,0x2E4C                 ; -> 0x2E4C
    2E44: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    2E47: E0          MOVX A,@DPTR                  
    2E48: FB          MOV R3,A                      
    2E49: 20 E7 0E    JB ACC.7,0x2E5A                  ; -> loc_2E5A
    2E4C: 90 C8 90    MOV DPTR,#0xC890                 ; control + status register block
    2E4F: E0          MOVX A,@DPTR                  
    2E50: FB          MOV R3,A                      
    2E51: 20 E0 06    JB ACC.0,0x2E5A                  ; -> loc_2E5A
    2E54: 12 0E 61    LCALL 0x0E61                     ; -> sub_0E61
    2E57: 02 2D 6E    LJMP 0x2D6E                      ; -> 0x2D6E

loc_2E5A:
    2E5A: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    2E5D: E0          MOVX A,@DPTR                  
    2E5E: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    2E61: F0          MOVX @DPTR,A                  
    2E62: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    2E65: E0          MOVX A,@DPTR                  
    2E66: FB          MOV R3,A                      
    2E67: 30 E0 06    JNB ACC.0,0x2E70                 ; -> loc_2E70
    2E6A: 12 0E 61    LCALL 0x0E61                     ; -> sub_0E61
    2E6D: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_2E70:
    2E70: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    2E73: E0          MOVX A,@DPTR                  
    2E74: FB          MOV R3,A                      
    2E75: 30 E2 A3    JNB ACC.2,0x2E1B                 ; -> 0x2E1B
    2E78: 90 CC 36    MOV DPTR,#0xCC36                 ; register block CC00
    2E7B: E0          MOVX A,@DPTR                  
    2E7C: FB          MOV R3,A                      
    2E7D: 78 7F       MOV R0,#0x7F                  
    2E7F: A6 03       MOV @R0,0x03                  
    2E81: 90 CC 37    MOV DPTR,#0xCC37                 ; register block CC00
    2E84: E0          MOVX A,@DPTR                  
    2E85: FB          MOV R3,A                      
    2E86: 78 80       MOV R0,#0x80                  
    2E88: A6 03       MOV @R0,0x03                  
    2E8A: 80 8F       SJMP 0x2E1B                      ; -> 0x2E1B

loc_2E8C:
    2E8C: 90 CA 5A    MOV DPTR,#0xCA5A                 ; register block CA00
    2E8F: E4          CLR A                         
    2E90: F0          MOVX @DPTR,A                  
    2E91: 75 7A 01    MOV 0x7A,#0x01                
    2E94: 75 7B 05    MOV 0x7B,#0x05                
    2E97: 75 82 00    MOV DPL(0x82),#0x00           
    2E9A: C0 02       PUSH 0x02                     
    2E9C: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    2E9F: D0 02       POP 0x02                      
    2EA1: 90 4F EF    MOV DPTR,#0x4FEF                 ; mailbox / host-interface register block
    2EA4: E4          CLR A                         
    2EA5: F0          MOVX @DPTR,A                  
    2EA6: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    2EA9: E0          MOVX A,@DPTR                  
    2EAA: FB          MOV R3,A                      
    2EAB: 20 E4 03    JB ACC.4,0x2EB1                  ; -> loc_2EB1
    2EAE: 02 33 A5    LJMP 0x33A5                      ; -> loc_33A5

loc_2EB1:
    2EB1: E5 08       MOV A,0x08                    
    2EB3: 70 0B       JNZ 0x2EC0                       ; -> loc_2EC0
    2EB5: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    2EB8: E0          MOVX A,@DPTR                  
    2EB9: FB          MOV R3,A                      
    2EBA: 30 E5 03    JNB ACC.5,0x2EC0                 ; -> loc_2EC0
    2EBD: 02 33 A5    LJMP 0x33A5                      ; -> loc_33A5

loc_2EC0:
    2EC0: 78 EE       MOV R0,#0xEE                  
    2EC2: 76 01       MOV @R0,#0x01                 
    2EC4: 75 2F EE    MOV 0x2F,#0xEE                
    2EC7: 75 30 0F    MOV 0x30,#0x0F                
    2ECA: 75 31 00    MOV 0x31,#0x00                
    2ECD: 75 32 40    MOV 0x32,#0x40                
    2ED0: 75 33 10    MOV 0x33,#0x10                
    2ED3: 75 34 00    MOV 0x34,#0x00                
    2ED6: 75 35 40    MOV 0x35,#0x40                
    2ED9: E4          CLR A                         
    2EDA: F5 2A       MOV 0x2A,A                    
    2EDC: 75 2B 06    MOV 0x2B,#0x06                
    2EDF: F5 2C       MOV 0x2C,A                    
    2EE1: F5 2D       MOV 0x2D,A                    
    2EE3: 75 2E 01    MOV 0x2E,#0x01                
    2EE6: 75 82 08    MOV DPL(0x82),#0x08           
    2EE9: C0 02       PUSH 0x02                     
    2EEB: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    2EEE: D0 02       POP 0x02                      
    2EF0: E5 08       MOV A,0x08                    
    2EF2: 60 03       JZ 0x2EF7                        ; -> loc_2EF7
    2EF4: 02 2F 76    LJMP 0x2F76                      ; -> 0x2F76

loc_2EF7:
    2EF7: 90 CC 0C    MOV DPTR,#0xCC0C                 ; register block CC00
    2EFA: 74 C7       MOV A,#0xC7                   
    2EFC: F0          MOVX @DPTR,A                  
    2EFD: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    2F00: E4          CLR A                         
    2F01: F0          MOVX @DPTR,A                  
    2F02: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    2F05: E0          MOVX A,@DPTR                  
    2F06: FB          MOV R3,A                      
    2F07: BB C3 00    CJNE R3,#0xC3,0x2F0A             ; -> 0x2F0A
    2F0A: 50 06       JNC 0x2F12                       ; -> 0x2F12
    2F0C: 90 CC 29    MOV DPTR,#0xCC29                 ; register block CC00
    2F0F: E0          MOVX A,@DPTR                  
    2F10: 70 10       JNZ 0x2F22                       ; -> 0x2F22
    2F12: 90 CC 0A    MOV DPTR,#0xCC0A                 ; register block CC00
    2F15: E0          MOVX A,@DPTR                  
    2F16: FB          MOV R3,A                      
    2F17: BB 64 00    CJNE R3,#0x64,0x2F1A             ; -> 0x2F1A
    2F1A: 50 54       JNC 0x2F70                       ; -> loc_2F70
    2F1C: 90 CC 29    MOV DPTR,#0xCC29                 ; register block CC00
    2F1F: E0          MOVX A,@DPTR                  
    2F20: 70 4E       JNZ 0x2F70                       ; -> loc_2F70
    2F22: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    2F25: E0          MOVX A,@DPTR                  
    2F26: FB          MOV R3,A                      
    2F27: 20 E0 46    JB ACC.0,0x2F70                  ; -> loc_2F70
    2F2A: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    2F2D: E0          MOVX A,@DPTR                  
    2F2E: FB          MOV R3,A                      
    2F2F: 30 E0 D0    JNB ACC.0,0x2F02                 ; -> 0x2F02
    2F32: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    2F35: 74 01       MOV A,#0x01                   
    2F37: F0          MOVX @DPTR,A                  
    2F38: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    2F3B: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    2F3E: E0          MOVX A,@DPTR                  
    2F3F: FB          MOV R3,A                      
    2F40: 53 03 FE    ANL 0x03,#0xFE                
    2F43: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    2F46: EB          MOV A,R3                      
    2F47: F0          MOVX @DPTR,A                  
    2F48: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    2F4B: E0          MOVX A,@DPTR                  
    2F4C: FB          MOV R3,A                      
    2F4D: 43 03 01    ORL 0x03,#0x01                
    2F50: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    2F53: EB          MOV A,R3                      
    2F54: F0          MOVX @DPTR,A                  
    2F55: 90 C2 00    MOV DPTR,#0xC200              
    2F58: E0          MOVX A,@DPTR                  
    2F59: FB          MOV R3,A                      
    2F5A: 74 F1       MOV A,#0xF1                   
    2F5C: 5B          ANL A,R3                      
    2F5D: 44 03       ORL A,#0x03                   
    2F5F: FB          MOV R3,A                      
    2F60: 90 C2 00    MOV DPTR,#0xC200              
    2F63: F0          MOVX @DPTR,A                  
    2F64: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    2F67: E4          CLR A                         
    2F68: F0          MOVX @DPTR,A                  
    2F69: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    2F6C: F0          MOVX @DPTR,A                  
    2F6D: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_2F70:
    2F70: 90 CC 0C    MOV DPTR,#0xCC0C                 ; register block CC00
    2F73: 74 63       MOV A,#0x63                   
    2F75: F0          MOVX @DPTR,A                  
    2F76: 75 30 0F    MOV 0x30,#0x0F                
    2F79: 75 31 00    MOV 0x31,#0x00                
    2F7C: 75 32 40    MOV 0x32,#0x40                
    2F7F: 75 33 10    MOV 0x33,#0x10                
    2F82: 75 34 00    MOV 0x34,#0x00                
    2F85: 75 35 40    MOV 0x35,#0x40                
    2F88: E4          CLR A                         
    2F89: F5 2A       MOV 0x2A,A                    
    2F8B: F5 2B       MOV 0x2B,A                    
    2F8D: F5 2C       MOV 0x2C,A                    
    2F8F: F5 2D       MOV 0x2D,A                    
    2F91: 75 2E 0C    MOV 0x2E,#0x0C                
    2F94: 75 2F 00    MOV 0x2F,#0x00                
    2F97: 75 82 09    MOV DPL(0x82),#0x09           
    2F9A: C0 02       PUSH 0x02                     
    2F9C: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    2F9F: D0 02       POP 0x02                      
    2FA1: AB 10       MOV R3,0x10                   
    2FA3: AC 11       MOV R4,0x11                   
    2FA5: AD 12       MOV R5,0x12                   
    2FA7: 8B 82       MOV 0x82,R3                   
    2FA9: 8C 83       MOV 0x83,R4                   
    2FAB: 8D F0       MOV 0xF0,R5                   
    2FAD: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    2FB0: FB          MOV R3,A                      
    2FB1: BB 12 00    CJNE R3,#0x12,0x2FB4             ; -> 0x2FB4
    2FB4: E4          CLR A                         
    2FB5: 33          RLC A                         
    2FB6: FB          MOV R3,A                      
    2FB7: 90 4F EF    MOV DPTR,#0x4FEF                 ; mailbox / host-interface register block
    2FBA: B4 01 00    CJNE A,#0x01,0x2FBD              ; -> 0x2FBD
    2FBD: E4          CLR A                         
    2FBE: 33          RLC A                         
    2FBF: F0          MOVX @DPTR,A                  
    2FC0: 74 02       MOV A,#0x02                   
    2FC2: 25 10       ADD A,0x10                    
    2FC4: FB          MOV R3,A                      
    2FC5: E4          CLR A                         
    2FC6: 35 11       ADDC A,0x11                   
    2FC8: FC          MOV R4,A                      
    2FC9: AD 12       MOV R5,0x12                   
    2FCB: 8B 82       MOV 0x82,R3                   
    2FCD: 8C 83       MOV 0x83,R4                   
    2FCF: 8D F0       MOV 0xF0,R5                   
    2FD1: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    2FD4: FB          MOV R3,A                      
    2FD5: 90 4F AE    MOV DPTR,#0x4FAE                 ; mailbox / host-interface register block
    2FD8: 74 40       MOV A,#0x40                   
    2FDA: 5B          ANL A,R3                      
    2FDB: F0          MOVX @DPTR,A                  
    2FDC: E5 08       MOV A,0x08                    
    2FDE: 60 03       JZ 0x2FE3                        ; -> loc_2FE3
    2FE0: 02 31 F9    LJMP 0x31F9                      ; -> 0x31F9

loc_2FE3:
    2FE3: 90 D2 57    MOV DPTR,#0xD257                 ; register block D252
    2FE6: 74 11       MOV A,#0x11                   
    2FE8: F0          MOVX @DPTR,A                  
    2FE9: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    2FEC: E0          MOVX A,@DPTR                  
    2FED: FB          MOV R3,A                      
    2FEE: 53 03 0F    ANL 0x03,#0x0F                
    2FF1: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    2FF4: EB          MOV A,R3                      
    2FF5: F0          MOVX @DPTR,A                  
    2FF6: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    2FF9: E0          MOVX A,@DPTR                  
    2FFA: FB          MOV R3,A                      
    2FFB: 53 03 80    ANL 0x03,#0x80                
    2FFE: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3001: EB          MOV A,R3                      
    3002: F0          MOVX @DPTR,A                  
    3003: 90 D2 58    MOV DPTR,#0xD258                 ; register block D252
    3006: E0          MOVX A,@DPTR                  
    3007: FB          MOV R3,A                      
    3008: 53 03 3F    ANL 0x03,#0x3F                
    300B: 90 D2 58    MOV DPTR,#0xD258                 ; register block D252
    300E: EB          MOV A,R3                      
    300F: F0          MOVX @DPTR,A                  
    3010: AB 10       MOV R3,0x10                   
    3012: AC 11       MOV R4,0x11                   
    3014: AD 12       MOV R5,0x12                   
    3016: 8B 82       MOV 0x82,R3                   
    3018: 8C 83       MOV 0x83,R4                   
    301A: 8D F0       MOV 0xF0,R5                   
    301C: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    301F: FB          MOV R3,A                      
    3020: BB 10 02    CJNE R3,#0x10,0x3025             ; -> loc_3025
    3023: 80 0A       SJMP 0x302F                      ; -> loc_302F

loc_3025:
    3025: BB 11 02    CJNE R3,#0x11,0x302A             ; -> loc_302A
    3028: 80 10       SJMP 0x303A                      ; -> loc_303A

loc_302A:
    302A: BB 12 27    CJNE R3,#0x12,0x3054             ; -> loc_3054
    302D: 80 16       SJMP 0x3045                      ; -> loc_3045

loc_302F:
    302F: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3032: E0          MOVX A,@DPTR                  
    3033: FB          MOV R3,A                      
    3034: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3037: F0          MOVX @DPTR,A                  
    3038: 80 27       SJMP 0x3061                      ; -> 0x3061

loc_303A:
    303A: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    303D: E0          MOVX A,@DPTR                  
    303E: FB          MOV R3,A                      
    303F: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3042: F0          MOVX @DPTR,A                  
    3043: 80 1C       SJMP 0x3061                      ; -> 0x3061

loc_3045:
    3045: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3048: E0          MOVX A,@DPTR                  
    3049: FB          MOV R3,A                      
    304A: 43 03 10    ORL 0x03,#0x10                
    304D: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3050: EB          MOV A,R3                      
    3051: F0          MOVX @DPTR,A                  
    3052: 80 0D       SJMP 0x3061                      ; -> 0x3061

loc_3054:
    3054: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    3057: E0          MOVX A,@DPTR                  
    3058: FB          MOV R3,A                      
    3059: 43 03 10    ORL 0x03,#0x10                
    305C: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    305F: EB          MOV A,R3                      
    3060: F0          MOVX @DPTR,A                  
    3061: 90 C8 0A    MOV DPTR,#0xC80A                 ; control + status register block
    3064: E0          MOVX A,@DPTR                  
    3065: FB          MOV R3,A                      
    3066: 54 0F       ANL A,#0x0F                   
    3068: 70 5C       JNZ 0x30C6                       ; -> loc_30C6
    306A: 74 01       MOV A,#0x01                   
    306C: 25 10       ADD A,0x10                    
    306E: FB          MOV R3,A                      
    306F: E4          CLR A                         
    3070: 35 11       ADDC A,0x11                   
    3072: FC          MOV R4,A                      
    3073: AD 12       MOV R5,0x12                   
    3075: 8B 82       MOV 0x82,R3                   
    3077: 8C 83       MOV 0x83,R4                   
    3079: 8D F0       MOV 0xF0,R5                   
    307B: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    307E: FB          MOV R3,A                      
    307F: BB 06 02    CJNE R3,#0x06,0x3084             ; -> loc_3084
    3082: 80 0A       SJMP 0x308E                      ; -> loc_308E

loc_3084:
    3084: BB 0A 02    CJNE R3,#0x0A,0x3089             ; -> loc_3089
    3087: 80 10       SJMP 0x3099                      ; -> loc_3099

loc_3089:
    3089: BB 14 2B    CJNE R3,#0x14,0x30B7             ; -> loc_30B7
    308C: 80 1A       SJMP 0x30A8                      ; -> loc_30A8

loc_308E:
    308E: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3091: E0          MOVX A,@DPTR                  
    3092: FB          MOV R3,A                      
    3093: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3096: F0          MOVX @DPTR,A                  
    3097: 80 7A       SJMP 0x3113                      ; -> 0x3113

loc_3099:
    3099: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    309C: E0          MOVX A,@DPTR                  
    309D: FB          MOV R3,A                      
    309E: 43 03 01    ORL 0x03,#0x01                
    30A1: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30A4: EB          MOV A,R3                      
    30A5: F0          MOVX @DPTR,A                  
    30A6: 80 6B       SJMP 0x3113                      ; -> 0x3113

loc_30A8:
    30A8: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30AB: E0          MOVX A,@DPTR                  
    30AC: FB          MOV R3,A                      
    30AD: 43 03 02    ORL 0x03,#0x02                
    30B0: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30B3: EB          MOV A,R3                      
    30B4: F0          MOVX @DPTR,A                  
    30B5: 80 5C       SJMP 0x3113                      ; -> 0x3113

loc_30B7:
    30B7: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30BA: E0          MOVX A,@DPTR                  
    30BB: FB          MOV R3,A                      
    30BC: 43 03 02    ORL 0x03,#0x02                
    30BF: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30C2: EB          MOV A,R3                      
    30C3: F0          MOVX @DPTR,A                  
    30C4: 80 4D       SJMP 0x3113                      ; -> 0x3113

loc_30C6:
    30C6: 90 C8 0A    MOV DPTR,#0xC80A                 ; control + status register block
    30C9: E0          MOVX A,@DPTR                  
    30CA: FB          MOV R3,A                      
    30CB: 53 03 0F    ANL 0x03,#0x0F                
    30CE: BB 01 02    CJNE R3,#0x01,0x30D3             ; -> loc_30D3
    30D1: 80 0A       SJMP 0x30DD                      ; -> loc_30DD

loc_30D3:
    30D3: BB 02 02    CJNE R3,#0x02,0x30D8             ; -> loc_30D8
    30D6: 80 10       SJMP 0x30E8                      ; -> loc_30E8

loc_30D8:
    30D8: BB 03 2B    CJNE R3,#0x03,0x3106             ; -> loc_3106
    30DB: 80 1A       SJMP 0x30F7                      ; -> loc_30F7

loc_30DD:
    30DD: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30E0: E0          MOVX A,@DPTR                  
    30E1: FB          MOV R3,A                      
    30E2: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30E5: F0          MOVX @DPTR,A                  
    30E6: 80 2B       SJMP 0x3113                      ; -> 0x3113

loc_30E8:
    30E8: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30EB: E0          MOVX A,@DPTR                  
    30EC: FB          MOV R3,A                      
    30ED: 43 03 01    ORL 0x03,#0x01                
    30F0: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30F3: EB          MOV A,R3                      
    30F4: F0          MOVX @DPTR,A                  
    30F5: 80 1C       SJMP 0x3113                      ; -> 0x3113

loc_30F7:
    30F7: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    30FA: E0          MOVX A,@DPTR                  
    30FB: FB          MOV R3,A                      
    30FC: 43 03 02    ORL 0x03,#0x02                
    30FF: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3102: EB          MOV A,R3                      
    3103: F0          MOVX @DPTR,A                  
    3104: 80 0D       SJMP 0x3113                      ; -> 0x3113

loc_3106:
    3106: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3109: E0          MOVX A,@DPTR                  
    310A: FB          MOV R3,A                      
    310B: 43 03 02    ORL 0x03,#0x02                
    310E: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3111: EB          MOV A,R3                      
    3112: F0          MOVX @DPTR,A                  
    3113: 90 C8 0A    MOV DPTR,#0xC80A                 ; control + status register block
    3116: E0          MOVX A,@DPTR                  
    3117: FB          MOV R3,A                      
    3118: 54 F0       ANL A,#0xF0                   
    311A: 70 5F       JNZ 0x317B                       ; -> loc_317B
    311C: 74 02       MOV A,#0x02                   
    311E: 25 10       ADD A,0x10                    
    3120: FB          MOV R3,A                      
    3121: E4          CLR A                         
    3122: 35 11       ADDC A,0x11                   
    3124: FC          MOV R4,A                      
    3125: AD 12       MOV R5,0x12                   
    3127: 8B 82       MOV 0x82,R3                   
    3129: 8C 83       MOV 0x83,R4                   
    312B: 8D F0       MOV 0xF0,R5                   
    312D: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    3130: FB          MOV R3,A                      
    3131: 53 03 1F    ANL 0x03,#0x1F                
    3134: BB 01 02    CJNE R3,#0x01,0x3139             ; -> loc_3139
    3137: 80 0A       SJMP 0x3143                      ; -> loc_3143

loc_3139:
    3139: BB 02 02    CJNE R3,#0x02,0x313E             ; -> loc_313E
    313C: 80 10       SJMP 0x314E                      ; -> loc_314E

loc_313E:
    313E: BB 04 2B    CJNE R3,#0x04,0x316C             ; -> loc_316C
    3141: 80 1A       SJMP 0x315D                      ; -> loc_315D

loc_3143:
    3143: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3146: E0          MOVX A,@DPTR                  
    3147: FB          MOV R3,A                      
    3148: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    314B: F0          MOVX @DPTR,A                  
    314C: 80 7A       SJMP 0x31C8                      ; -> 0x31C8

loc_314E:
    314E: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3151: E0          MOVX A,@DPTR                  
    3152: FB          MOV R3,A                      
    3153: 43 03 10    ORL 0x03,#0x10                
    3156: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3159: EB          MOV A,R3                      
    315A: F0          MOVX @DPTR,A                  
    315B: 80 6B       SJMP 0x31C8                      ; -> 0x31C8

loc_315D:
    315D: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3160: E0          MOVX A,@DPTR                  
    3161: FB          MOV R3,A                      
    3162: 43 03 20    ORL 0x03,#0x20                
    3165: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3168: EB          MOV A,R3                      
    3169: F0          MOVX @DPTR,A                  
    316A: 80 5C       SJMP 0x31C8                      ; -> 0x31C8

loc_316C:
    316C: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    316F: E0          MOVX A,@DPTR                  
    3170: FB          MOV R3,A                      
    3171: 43 03 20    ORL 0x03,#0x20                
    3174: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3177: EB          MOV A,R3                      
    3178: F0          MOVX @DPTR,A                  
    3179: 80 4D       SJMP 0x31C8                      ; -> 0x31C8

loc_317B:
    317B: 90 C8 0A    MOV DPTR,#0xC80A                 ; control + status register block
    317E: E0          MOVX A,@DPTR                  
    317F: FB          MOV R3,A                      
    3180: 53 03 F0    ANL 0x03,#0xF0                
    3183: BB 10 02    CJNE R3,#0x10,0x3188             ; -> loc_3188
    3186: 80 0A       SJMP 0x3192                      ; -> loc_3192

loc_3188:
    3188: BB 20 02    CJNE R3,#0x20,0x318D             ; -> loc_318D
    318B: 80 10       SJMP 0x319D                      ; -> loc_319D

loc_318D:
    318D: BB 40 2B    CJNE R3,#0x40,0x31BB             ; -> loc_31BB
    3190: 80 1A       SJMP 0x31AC                      ; -> loc_31AC

loc_3192:
    3192: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    3195: E0          MOVX A,@DPTR                  
    3196: FB          MOV R3,A                      
    3197: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    319A: F0          MOVX @DPTR,A                  
    319B: 80 2B       SJMP 0x31C8                      ; -> 0x31C8

loc_319D:
    319D: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31A0: E0          MOVX A,@DPTR                  
    31A1: FB          MOV R3,A                      
    31A2: 43 03 10    ORL 0x03,#0x10                
    31A5: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31A8: EB          MOV A,R3                      
    31A9: F0          MOVX @DPTR,A                  
    31AA: 80 1C       SJMP 0x31C8                      ; -> 0x31C8

loc_31AC:
    31AC: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31AF: E0          MOVX A,@DPTR                  
    31B0: FB          MOV R3,A                      
    31B1: 43 03 20    ORL 0x03,#0x20                
    31B4: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31B7: EB          MOV A,R3                      
    31B8: F0          MOVX @DPTR,A                  
    31B9: 80 0D       SJMP 0x31C8                      ; -> 0x31C8

loc_31BB:
    31BB: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31BE: E0          MOVX A,@DPTR                  
    31BF: FB          MOV R3,A                      
    31C0: 43 03 20    ORL 0x03,#0x20                
    31C3: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    31C6: EB          MOV A,R3                      
    31C7: F0          MOVX @DPTR,A                  
    31C8: 90 D2 58    MOV DPTR,#0xD258                 ; register block D252
    31CB: E0          MOVX A,@DPTR                  
    31CC: FB          MOV R3,A                      
    31CD: 74 02       MOV A,#0x02                   
    31CF: 25 10       ADD A,0x10                    
    31D1: FC          MOV R4,A                      
    31D2: E4          CLR A                         
    31D3: 35 11       ADDC A,0x11                   
    31D5: FD          MOV R5,A                      
    31D6: AE 12       MOV R6,0x12                   
    31D8: 8C 82       MOV 0x82,R4                   
    31DA: 8D 83       MOV 0x83,R5                   
    31DC: 8E F0       MOV 0xF0,R6                   
    31DE: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    31E1: FC          MOV R4,A                      
    31E2: 74 C0       MOV A,#0xC0                   
    31E4: 5C          ANL A,R4                      
    31E5: 42 03       ORL 0x03,A                    
    31E7: 90 D2 58    MOV DPTR,#0xD258                 ; register block D252
    31EA: EB          MOV A,R3                      
    31EB: F0          MOVX @DPTR,A                  
    31EC: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    31EF: E0          MOVX A,@DPTR                  
    31F0: FB          MOV R3,A                      
    31F1: 53 03 FE    ANL 0x03,#0xFE                
    31F4: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    31F7: EB          MOV A,R3                      
    31F8: F0          MOVX @DPTR,A                  
    31F9: 90 00 48    MOV DPTR,#0x0048              
    31FC: E4          CLR A                         
    31FD: 93          MOVC A,@A+DPTR                
    31FE: FB          MOV R3,A                      
    31FF: 30 E2 46    JNB ACC.2,0x3248                 ; -> 0x3248
    3202: 75 30 0F    MOV 0x30,#0x0F                
    3205: 75 31 00    MOV 0x31,#0x00                
    3208: 75 32 40    MOV 0x32,#0x40                
    320B: 75 33 10    MOV 0x33,#0x10                
    320E: 75 34 00    MOV 0x34,#0x00                
    3211: 75 35 40    MOV 0x35,#0x40                
    3214: E4          CLR A                         
    3215: F5 2A       MOV 0x2A,A                    
    3217: 75 2B 02    MOV 0x2B,#0x02                
    321A: F5 2C       MOV 0x2C,A                    
    321C: F5 2D       MOV 0x2D,A                    
    321E: 75 2E 01    MOV 0x2E,#0x01                
    3221: 75 2F 00    MOV 0x2F,#0x00                
    3224: 75 82 09    MOV DPL(0x82),#0x09           
    3227: C0 02       PUSH 0x02                     
    3229: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    322C: AB 10       MOV R3,0x10                   
    322E: AC 11       MOV R4,0x11                   
    3230: AD 12       MOV R5,0x12                   
    3232: 8B 82       MOV 0x82,R3                   
    3234: 8C 83       MOV 0x83,R4                   
    3236: 8D F0       MOV 0xF0,R5                   
    3238: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    323B: FB          MOV R3,A                      
    323C: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    323F: 74 1F       MOV A,#0x1F                   
    3241: 5B          ANL A,R3                      
    3242: F0          MOVX @DPTR,A                  
    3243: 12 03 26    LCALL 0x0326                     ; -> sub_0326
    3246: D0 02       POP 0x02                      
    3248: 90 4F EF    MOV DPTR,#0x4FEF                 ; mailbox / host-interface register block
    324B: E0          MOVX A,@DPTR                  
    324C: FB          MOV R3,A                      
    324D: 70 03       JNZ 0x3252                       ; -> loc_3252
    324F: 02 33 97    LJMP 0x3397                      ; -> loc_3397

loc_3252:
    3252: 75 30 0F    MOV 0x30,#0x0F                
    3255: 75 31 00    MOV 0x31,#0x00                
    3258: 75 32 40    MOV 0x32,#0x40                
    325B: 75 33 10    MOV 0x33,#0x10                
    325E: 75 34 00    MOV 0x34,#0x00                
    3261: 75 35 40    MOV 0x35,#0x40                
    3264: 75 2A 0E    MOV 0x2A,#0x0E                
    3267: E4          CLR A                         
    3268: F5 2B       MOV 0x2B,A                    
    326A: F5 2C       MOV 0x2C,A                    
    326C: F5 2D       MOV 0x2D,A                    
    326E: 75 2E 01    MOV 0x2E,#0x01                
    3271: 75 2F 00    MOV 0x2F,#0x00                
    3274: 75 82 09    MOV DPL(0x82),#0x09           
    3277: C0 02       PUSH 0x02                     
    3279: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    327C: D0 02       POP 0x02                      
    327E: 90 C8 09    MOV DPTR,#0xC809                 ; control + status register block
    3281: E0          MOVX A,@DPTR                  
    3282: FB          MOV R3,A                      
    3283: 20 E0 03    JB ACC.0,0x3289                  ; -> loc_3289
    3286: 02 33 13    LJMP 0x3313                      ; -> loc_3313

loc_3289:
    3289: AB 10       MOV R3,0x10                   
    328B: AC 11       MOV R4,0x11                   
    328D: AD 12       MOV R5,0x12                   
    328F: 8B 82       MOV 0x82,R3                   
    3291: 8C 83       MOV 0x83,R4                   
    3293: 8D F0       MOV 0xF0,R5                   
    3295: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    3298: FB          MOV R3,A                      
    3299: 53 03 7F    ANL 0x03,#0x7F                
    329C: 74 04       MOV A,#0x04                   
    329E: B5 03 00    CJNE A,0x03,0x32A1               ; -> 0x32A1
    32A1: 40 61       JC 0x3304                        ; -> 0x3304
    32A3: EB          MOV A,R3                      
    32A4: 2B          ADD A,R3                      
    32A5: 2B          ADD A,R3                      
    32A6: 90 32 AA    MOV DPTR,#0x32AA              
    32A9: 73          JMP @A+DPTR                   
    32AA: 02 32 B9    LJMP 0x32B9                      ; -> 0x32B9
    32AD: 02          DB 0x02                       ; data
    32AE: 32          DB 0x32                       ; data
    32AF: C8          DB 0xC8                       ; data
    32B0: 02          DB 0x02                       ; data
    32B1: 32          DB 0x32                       ; data
    32B2: D7          DB 0xD7                       ; data
    32B3: 02          DB 0x02                       ; data
    32B4: 32          DB 0x32                       ; data
    32B5: E6          DB 0xE6                       ; data
    32B6: 02          DB 0x02                       ; data
    32B7: 32          DB 0x32                       ; data
    32B8: F5          DB 0xF5                       ; data
    32B9: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    32BC: 74 01       MOV A,#0x01                   
    32BE: F0          MOVX @DPTR,A                  
    32BF: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    32C2: 74 04       MOV A,#0x04                   
    32C4: F0          MOVX @DPTR,A                  
    32C5: 02 33 B1    LJMP 0x33B1                      ; -> 0x33B1
    32C8: 90          DB 0x90                       ; data
    32C9: 4F          DB 0x4F                       ; data
    32CA: D9          DB 0xD9                       ; data
    32CB: 74          DB 0x74                       ; data
    32CC: 02          DB 0x02                       ; data
    32CD: F0          DB 0xF0                       ; data
    32CE: 90          DB 0x90                       ; data
    32CF: 4F          DB 0x4F                       ; data
    32D0: D8          DB 0xD8                       ; data
    32D1: 74          DB 0x74                       ; data
    32D2: 05          DB 0x05                       ; data
    32D3: F0          DB 0xF0                       ; data
    32D4: 02          DB 0x02                       ; data
    32D5: 33          DB 0x33                       ; data
    32D6: B1          DB 0xB1                       ; data
    32D7: 90          DB 0x90                       ; data
    32D8: 4F          DB 0x4F                       ; data
    32D9: D9          DB 0xD9                       ; data
    32DA: 74          DB 0x74                       ; data
    32DB: 03          DB 0x03                       ; data
    32DC: F0          DB 0xF0                       ; data
    32DD: 90          DB 0x90                       ; data
    32DE: 4F          DB 0x4F                       ; data
    32DF: D8          DB 0xD8                       ; data
    32E0: 74          DB 0x74                       ; data
    32E1: 06          DB 0x06                       ; data
    32E2: F0          DB 0xF0                       ; data
    32E3: 02          DB 0x02                       ; data
    32E4: 33          DB 0x33                       ; data
    32E5: B1          DB 0xB1                       ; data
    32E6: 90          DB 0x90                       ; data
    32E7: 4F          DB 0x4F                       ; data
    32E8: D9          DB 0xD9                       ; data
    32E9: 74          DB 0x74                       ; data
    32EA: 04          DB 0x04                       ; data
    32EB: F0          DB 0xF0                       ; data
    32EC: 90          DB 0x90                       ; data
    32ED: 4F          DB 0x4F                       ; data
    32EE: D8          DB 0xD8                       ; data
    32EF: 74          DB 0x74                       ; data
    32F0: 07          DB 0x07                       ; data
    32F1: F0          DB 0xF0                       ; data
    32F2: 02          DB 0x02                       ; data
    32F3: 33          DB 0x33                       ; data
    32F4: B1          DB 0xB1                       ; data
    32F5: 90          DB 0x90                       ; data
    32F6: 4F          DB 0x4F                       ; data
    32F7: D9          DB 0xD9                       ; data
    32F8: 74          DB 0x74                       ; data
    32F9: 05          DB 0x05                       ; data
    32FA: F0          DB 0xF0                       ; data
    32FB: 90          DB 0x90                       ; data
    32FC: 4F          DB 0x4F                       ; data
    32FD: D8          DB 0xD8                       ; data
    32FE: 74          DB 0x74                       ; data
    32FF: 08          DB 0x08                       ; data
    3300: F0          DB 0xF0                       ; data
    3301: 02          DB 0x02                       ; data
    3302: 33          DB 0x33                       ; data
    3303: B1          DB 0xB1                       ; data
    3304: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    3307: 74 01       MOV A,#0x01                   
    3309: F0          MOVX @DPTR,A                  
    330A: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    330D: 74 04       MOV A,#0x04                   
    330F: F0          MOVX @DPTR,A                  
    3310: 02 33 B1    LJMP 0x33B1                      ; -> 0x33B1

loc_3313:
    3313: AB 10       MOV R3,0x10                   
    3315: AC 11       MOV R4,0x11                   
    3317: AD 12       MOV R5,0x12                   
    3319: 8B 82       MOV 0x82,R3                   
    331B: 8C 83       MOV 0x83,R4                   
    331D: 8D F0       MOV 0xF0,R5                   
    331F: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    3322: FB          MOV R3,A                      
    3323: 53 03 7F    ANL 0x03,#0x7F                
    3326: 74 04       MOV A,#0x04                   
    3328: B5 03 00    CJNE A,0x03,0x332B               ; -> 0x332B
    332B: 40 5C       JC 0x3389                        ; -> 0x3389
    332D: EB          MOV A,R3                      
    332E: 2B          ADD A,R3                      
    332F: 2B          ADD A,R3                      
    3330: 90 33 34    MOV DPTR,#0x3334              
    3333: 73          JMP @A+DPTR                   
    3334: 02 33 43    LJMP 0x3343                      ; -> 0x3343
    3337: 02          DB 0x02                       ; data
    3338: 33          DB 0x33                       ; data
    3339: 51          DB 0x51                       ; data
    333A: 02          DB 0x02                       ; data
    333B: 33          DB 0x33                       ; data
    333C: 5F          DB 0x5F                       ; data
    333D: 02          DB 0x02                       ; data
    333E: 33          DB 0x33                       ; data
    333F: 6D          DB 0x6D                       ; data
    3340: 02          DB 0x02                       ; data
    3341: 33          DB 0x33                       ; data
    3342: 7B          DB 0x7B                       ; data
    3343: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    3346: 74 01       MOV A,#0x01                   
    3348: F0          MOVX @DPTR,A                  
    3349: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    334C: 74 04       MOV A,#0x04                   
    334E: F0          MOVX @DPTR,A                  
    334F: 80 60       SJMP 0x33B1                      ; -> 0x33B1
    3351: 90          DB 0x90                       ; data
    3352: 4F          DB 0x4F                       ; data
    3353: D9          DB 0xD9                       ; data
    3354: 74          DB 0x74                       ; data
    3355: 28          DB 0x28                       ; data
    3356: F0          DB 0xF0                       ; data
    3357: 90          DB 0x90                       ; data
    3358: 4F          DB 0x4F                       ; data
    3359: D8          DB 0xD8                       ; data
    335A: 74          DB 0x74                       ; data
    335B: 28          DB 0x28                       ; data
    335C: F0          DB 0xF0                       ; data
    335D: 80          DB 0x80                       ; data
    335E: 52          DB 0x52                       ; data
    335F: 90          DB 0x90                       ; data
    3360: 4F          DB 0x4F                       ; data
    3361: D9          DB 0xD9                       ; data
    3362: 74          DB 0x74                       ; data
    3363: 50          DB 0x50                       ; data
    3364: F0          DB 0xF0                       ; data
    3365: 90          DB 0x90                       ; data
    3366: 4F          DB 0x4F                       ; data
    3367: D8          DB 0xD8                       ; data
    3368: 74          DB 0x74                       ; data
    3369: 50          DB 0x50                       ; data
    336A: F0          DB 0xF0                       ; data
    336B: 80          DB 0x80                       ; data
    336C: 44          DB 0x44                       ; data
    336D: 90          DB 0x90                       ; data
    336E: 4F          DB 0x4F                       ; data
    336F: D9          DB 0xD9                       ; data
    3370: 74          DB 0x74                       ; data
    3371: 78          DB 0x78                       ; data
    3372: F0          DB 0xF0                       ; data
    3373: 90          DB 0x90                       ; data
    3374: 4F          DB 0x4F                       ; data
    3375: D8          DB 0xD8                       ; data
    3376: 74          DB 0x74                       ; data
    3377: 78          DB 0x78                       ; data
    3378: F0          DB 0xF0                       ; data
    3379: 80          DB 0x80                       ; data
    337A: 36          DB 0x36                       ; data
    337B: 90          DB 0x90                       ; data
    337C: 4F          DB 0x4F                       ; data
    337D: D9          DB 0xD9                       ; data
    337E: 74          DB 0x74                       ; data
    337F: A0          DB 0xA0                       ; data
    3380: F0          DB 0xF0                       ; data
    3381: 90          DB 0x90                       ; data
    3382: 4F          DB 0x4F                       ; data
    3383: D8          DB 0xD8                       ; data
    3384: 74          DB 0x74                       ; data
    3385: A0          DB 0xA0                       ; data
    3386: F0          DB 0xF0                       ; data
    3387: 80          DB 0x80                       ; data
    3388: 28          DB 0x28                       ; data
    3389: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    338C: 74 01       MOV A,#0x01                   
    338E: F0          MOVX @DPTR,A                  
    338F: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    3392: 74 04       MOV A,#0x04                   
    3394: F0          MOVX @DPTR,A                  
    3395: 80 1A       SJMP 0x33B1                      ; -> 0x33B1

loc_3397:
    3397: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    339A: 74 01       MOV A,#0x01                   
    339C: F0          MOVX @DPTR,A                  
    339D: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    33A0: 74 04       MOV A,#0x04                   
    33A2: F0          MOVX @DPTR,A                  
    33A3: 80 0C       SJMP 0x33B1                      ; -> 0x33B1

loc_33A5:
    33A5: 90 4F D9    MOV DPTR,#0x4FD9                 ; mailbox / host-interface register block
    33A8: 74 01       MOV A,#0x01                   
    33AA: F0          MOVX @DPTR,A                  
    33AB: 90 4F D8    MOV DPTR,#0x4FD8                 ; mailbox / host-interface register block
    33AE: 74 04       MOV A,#0x04                   
    33B0: F0          MOVX @DPTR,A                  
    33B1: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    33B4: E0          MOVX A,@DPTR                  
    33B5: FB          MOV R3,A                      
    33B6: 53 03 FE    ANL 0x03,#0xFE                
    33B9: 90 D2 01    MOV DPTR,#0xD201                 ; register block D200
    33BC: EB          MOV A,R3                      
    33BD: F0          MOVX @DPTR,A                  
    33BE: 90 4F EF    MOV DPTR,#0x4FEF                 ; mailbox / host-interface register block
    33C1: E0          MOVX A,@DPTR                  
    33C2: FB          MOV R3,A                      
    33C3: 70 03       JNZ 0x33C8                       ; -> loc_33C8
    33C5: 02 34 72    LJMP 0x3472                      ; -> 0x3472

loc_33C8:
    33C8: 75 30 0F    MOV 0x30,#0x0F                
    33CB: 75 31 00    MOV 0x31,#0x00                
    33CE: 75 32 40    MOV 0x32,#0x40                
    33D1: 75 33 10    MOV 0x33,#0x10                
    33D4: 75 34 00    MOV 0x34,#0x00                
    33D7: 75 35 40    MOV 0x35,#0x40                
    33DA: 75 2A 21    MOV 0x2A,#0x21                
    33DD: E4          CLR A                         
    33DE: F5 2B       MOV 0x2B,A                    
    33E0: F5 2C       MOV 0x2C,A                    
    33E2: F5 2D       MOV 0x2D,A                    
    33E4: 75 2E 01    MOV 0x2E,#0x01                
    33E7: 75 2F 00    MOV 0x2F,#0x00                
    33EA: 75 82 09    MOV DPL(0x82),#0x09           
    33ED: C0 02       PUSH 0x02                     
    33EF: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    33F2: D0 02       POP 0x02                      
    33F4: AB 10       MOV R3,0x10                   
    33F6: AC 11       MOV R4,0x11                   
    33F8: AD 12       MOV R5,0x12                   
    33FA: 8B 82       MOV 0x82,R3                   
    33FC: 8C 83       MOV 0x83,R4                   
    33FE: 8D F0       MOV 0xF0,R5                   
    3400: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    3403: FB          MOV R3,A                      
    3404: 30 E0 6B    JNB ACC.0,0x3472                 ; -> 0x3472
    3407: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    340A: E4          CLR A                         
    340B: F0          MOVX @DPTR,A                  
    340C: 78 D4       MOV R0,#0xD4                  
    340E: 76 00       MOV @R0,#0x00                 
    3410: 75 2F D4    MOV 0x2F,#0xD4                
    3413: 75 30 0F    MOV 0x30,#0x0F                
    3416: 75 31 00    MOV 0x31,#0x00                
    3419: 75 32 40    MOV 0x32,#0x40                
    341C: 75 33 10    MOV 0x33,#0x10                
    341F: 75 34 00    MOV 0x34,#0x00                
    3422: 75 35 40    MOV 0x35,#0x40                
    3425: 75 2A 11    MOV 0x2A,#0x11                
    3428: 75 2B 01    MOV 0x2B,#0x01                
    342B: E4          CLR A                         
    342C: F5 2C       MOV 0x2C,A                    
    342E: F5 2D       MOV 0x2D,A                    
    3430: 75 2E 01    MOV 0x2E,#0x01                
    3433: 75 82 08    MOV DPL(0x82),#0x08           
    3436: C0 02       PUSH 0x02                     
    3438: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    343B: 78 D5       MOV R0,#0xD5                  
    343D: 76 00       MOV @R0,#0x00                 
    343F: 78 D6       MOV R0,#0xD6                  
    3441: 76 00       MOV @R0,#0x00                 
    3443: 78 D7       MOV R0,#0xD7                  
    3445: 76 3F       MOV @R0,#0x3F                 
    3447: 75 2F D5    MOV 0x2F,#0xD5                
    344A: 75 30 0F    MOV 0x30,#0x0F                
    344D: 75 31 00    MOV 0x31,#0x00                
    3450: 75 32 40    MOV 0x32,#0x40                
    3453: 75 33 10    MOV 0x33,#0x10                
    3456: 75 34 00    MOV 0x34,#0x00                
    3459: 75 35 40    MOV 0x35,#0x40                
    345C: 75 2A C0    MOV 0x2A,#0xC0                
    345F: 75 2B 01    MOV 0x2B,#0x01                
    3462: E4          CLR A                         
    3463: F5 2C       MOV 0x2C,A                    
    3465: F5 2D       MOV 0x2D,A                    
    3467: 75 2E 03    MOV 0x2E,#0x03                
    346A: 75 82 08    MOV DPL(0x82),#0x08           
    346D: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3470: D0 02       POP 0x02                      
    3472: E5 0D       MOV A,0x0D                    
    3474: 60 03       JZ 0x3479                        ; -> loc_3479
    3476: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_3479:
    3479: E5 16       MOV A,0x16                    
    347B: 70 6E       JNZ 0x34EB                       ; -> loc_34EB
    347D: 75 7A 20    MOV 0x7A,#0x20                
    3480: 75 7B 06    MOV 0x7B,#0x06                
    3483: F5 82       MOV DPL(0x82),A               
    3485: C0 02       PUSH 0x02                     
    3487: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    348A: D0 02       POP 0x02                      
    348C: 90 CC 2D    MOV DPTR,#0xCC2D                 ; register block CC00
    348F: 74 FE       MOV A,#0xFE                   
    3491: F0          MOVX @DPTR,A                  
    3492: 75 1F EC    MOV 0x1F,#0xEC                
    3495: 75 20 4F    MOV 0x20,#0x4F                
    3498: 75 21 00    MOV 0x21,#0x00                
    349B: 75 22 72    MOV 0x22,#0x72                
    349E: 75 23 00    MOV 0x23,#0x00                
    34A1: 75 24 40    MOV 0x24,#0x40                
    34A4: 75 25 73    MOV 0x25,#0x73                
    34A7: 75 26 00    MOV 0x26,#0x00                
    34AA: 75 27 40    MOV 0x27,#0x40                
    34AD: 75 1E 00    MOV 0x1E,#0x00                
    34B0: 75 82 26    MOV DPL(0x82),#0x26           
    34B3: C0 02       PUSH 0x02                     
    34B5: 12 17 F4    LCALL 0x17F4                     ; -> sub_17F4
    34B8: AB 82       MOV R3,0x82                   
    34BA: D0 02       POP 0x02                      
    34BC: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    34BF: EB          MOV A,R3                      
    34C0: F0          MOVX @DPTR,A                  
    34C1: EB          MOV A,R3                      
    34C2: 60 19       JZ 0x34DD                        ; -> loc_34DD
    34C4: 90 4F EA    MOV DPTR,#0x4FEA                 ; mailbox / host-interface register block
    34C7: E0          MOVX A,@DPTR                  
    34C8: FB          MOV R3,A                      
    34C9: BB 01 03    CJNE R3,#0x01,0x34CF             ; -> loc_34CF
    34CC: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_34CF:
    34CF: E5 0D       MOV A,0x0D                    
    34D1: 60 03       JZ 0x34D6                        ; -> loc_34D6
    34D3: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_34D6:
    34D6: E5 0E       MOV A,0x0E                    
    34D8: 60 B8       JZ 0x3492                        ; -> 0x3492
    34DA: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_34DD:
    34DD: E5 0D       MOV A,0x0D                    
    34DF: 60 03       JZ 0x34E4                        ; -> loc_34E4
    34E1: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_34E4:
    34E4: E5 0E       MOV A,0x0E                    
    34E6: 60 03       JZ 0x34EB                        ; -> loc_34EB
    34E8: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_34EB:
    34EB: 75 16 00    MOV 0x16,#0x00                
    34EE: 78 7E       MOV R0,#0x7E                  
    34F0: 86 03       MOV 0x03,@R0                  
    34F2: 74 07       MOV A,#0x07                   
    34F4: 5B          ANL A,R3                      
    34F5: F5 77       MOV 0x77,A                    
    34F7: 74 18       MOV A,#0x18                   
    34F9: 5B          ANL A,R3                      
    34FA: FC          MOV R4,A                      
    34FB: 53 03 60    ANL 0x03,#0x60                
    34FE: 78 80       MOV R0,#0x80                  
    3500: 86 76       MOV 0x76,@R0                  
    3502: 75 7A 20    MOV 0x7A,#0x20                
    3505: 75 7B 19    MOV 0x7B,#0x19                
    3508: 75 82 00    MOV DPL(0x82),#0x00           
    350B: C0 02       PUSH 0x02                     
    350D: C0 03       PUSH 0x03                     
    350F: C0 04       PUSH 0x04                     
    3511: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3514: D0 04       POP 0x04                      
    3516: D0 03       POP 0x03                      
    3518: D0 02       POP 0x02                      
    351A: 78 7F       MOV R0,#0x7F                  
    351C: 86 05       MOV 0x05,@R0                  
    351E: 53 05 0F    ANL 0x05,#0x0F                
    3521: 74 0F       MOV A,#0x0F                   
    3523: B5 05 00    CJNE A,0x05,0x3526               ; -> 0x3526
    3526: 50 03       JNC 0x352B                       ; -> loc_352B
    3528: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_352B:
    352B: ED          MOV A,R5                      
    352C: 2D          ADD A,R5                      
    352D: 2D          ADD A,R5                      
    352E: 90 35 32    MOV DPTR,#0x3532              
    3531: 73          JMP @A+DPTR                   
    3532: 02 39 58    LJMP 0x3958                      ; -> 0x3958

loc_3535:
    3535: 02 36 04    LJMP 0x3604                      ; -> loc_3604

loc_3538:
    3538: 02 39 58    LJMP 0x3958                      ; -> 0x3958

loc_353B:
    353B: 02 39 58    LJMP 0x3958                      ; -> 0x3958

loc_353E:
    353E: 02 39 58    LJMP 0x3958                      ; -> 0x3958

loc_3541:
    3541: 02 36 77    LJMP 0x3677                      ; -> loc_3677

loc_3544:
    3544: 02 35 62    LJMP 0x3562                      ; -> 0x3562
    3547: 02          DB 0x02                       ; data
    3548: 36          DB 0x36                       ; data
    3549: 1E          DB 0x1E                       ; data
    354A: 02          DB 0x02                       ; data
    354B: 36          DB 0x36                       ; data
    354C: F3          DB 0xF3                       ; data
    354D: 02          DB 0x02                       ; data
    354E: 38          DB 0x38                       ; data
    354F: E1          DB 0xE1                       ; data
    3550: 02          DB 0x02                       ; data
    3551: 39          DB 0x39                       ; data
    3552: 58          DB 0x58                       ; data
    3553: 02          DB 0x02                       ; data
    3554: 39          DB 0x39                       ; data
    3555: 58          DB 0x58                       ; data
    3556: 02          DB 0x02                       ; data
    3557: 39          DB 0x39                       ; data
    3558: 24          DB 0x24                       ; data
    3559: 02          DB 0x02                       ; data
    355A: 39          DB 0x39                       ; data
    355B: 58          DB 0x58                       ; data
    355C: 02          DB 0x02                       ; data
    355D: 37          DB 0x37                       ; data
    355E: 8A          DB 0x8A                       ; data
    355F: 02          DB 0x02                       ; data
    3560: 37          DB 0x37                       ; data
    3561: F0          DB 0xF0                       ; data
    3562: 75 2F 77    MOV 0x2F,#0x77                
    3565: 75 30 0F    MOV 0x30,#0x0F                
    3568: 75 31 00    MOV 0x31,#0x00                
    356B: 75 32 40    MOV 0x32,#0x40                
    356E: 75 33 10    MOV 0x33,#0x10                
    3571: 75 34 00    MOV 0x34,#0x00                
    3574: 75 35 40    MOV 0x35,#0x40                
    3577: 75 2A 01    MOV 0x2A,#0x01                
    357A: 75 2B 01    MOV 0x2B,#0x01                
    357D: E4          CLR A                         
    357E: F5 2C       MOV 0x2C,A                    
    3580: F5 2D       MOV 0x2D,A                    
    3582: 75 2E 01    MOV 0x2E,#0x01                
    3585: 75 82 08    MOV DPL(0x82),#0x08           
    3588: C0 02       PUSH 0x02                     
    358A: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    358D: AD 82       MOV R5,0x82                   
    358F: D0 02       POP 0x02                      
    3591: BD 01 03    CJNE R5,#0x01,0x3597             ; -> loc_3597
    3594: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_3597:
    3597: E5 0D       MOV A,0x0D                    
    3599: 60 03       JZ 0x359E                        ; -> loc_359E
    359B: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_359E:
    359E: E5 0E       MOV A,0x0E                    
    35A0: 60 03       JZ 0x35A5                        ; -> loc_35A5
    35A2: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_35A5:
    35A5: 85 77 09    MOV 0x09,0x77                 
    35A8: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35AB: E0          MOVX A,@DPTR                  
    35AC: FD          MOV R5,A                      
    35AD: 30 E1 19    JNB ACC.1,0x35C9                 ; -> loc_35C9
    35B0: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35B3: E0          MOVX A,@DPTR                  
    35B4: FD          MOV R5,A                      
    35B5: 53 05 FD    ANL 0x05,#0xFD                
    35B8: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35BB: ED          MOV A,R5                      
    35BC: F0          MOVX @DPTR,A                  
    35BD: E0          MOVX A,@DPTR                  
    35BE: FD          MOV R5,A                      
    35BF: 43 05 02    ORL 0x05,#0x02                
    35C2: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35C5: ED          MOV A,R5                      
    35C6: F0          MOVX @DPTR,A                  
    35C7: 80 1F       SJMP 0x35E8                      ; -> 0x35E8

loc_35C9:
    35C9: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35CC: E0          MOVX A,@DPTR                  
    35CD: FD          MOV R5,A                      
    35CE: 30 E0 17    JNB ACC.0,0x35E8                 ; -> 0x35E8
    35D1: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35D4: E0          MOVX A,@DPTR                  
    35D5: FD          MOV R5,A                      
    35D6: 53 05 FE    ANL 0x05,#0xFE                
    35D9: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35DC: ED          MOV A,R5                      
    35DD: F0          MOVX @DPTR,A                  
    35DE: E0          MOVX A,@DPTR                  
    35DF: FD          MOV R5,A                      
    35E0: 43 05 01    ORL 0x05,#0x01                
    35E3: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    35E6: ED          MOV A,R5                      
    35E7: F0          MOVX @DPTR,A                  
    35E8: C0 02       PUSH 0x02                     
    35EA: 12 10 43    LCALL 0x1043                     ; -> sub_1043
    35ED: 85 09 7A    MOV 0x7A,0x09                 
    35F0: 85 0A 7B    MOV 0x7B,0x0A                 
    35F3: 85 14 7C    MOV 0x7C,0x14                 
    35F6: 75 7D 00    MOV 0x7D,#0x00                
    35F9: 75 82 06    MOV DPL(0x82),#0x06           
    35FC: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    35FF: D0 02       POP 0x02                      
    3601: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3604:
    3604: E5 77       MOV A,0x77                    
    3606: 60 03       JZ 0x360B                        ; -> loc_360B
    3608: 02 39 5B    LJMP 0x395B                      ; -> loc_395B

loc_360B:
    360B: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    360E: E0          MOVX A,@DPTR                  
    360F: FD          MOV R5,A                      
    3610: 60 03       JZ 0x3615                        ; -> 0x3615
    3612: 75 15 01    MOV 0x15,#0x01                
    3615: 90 4F BF    MOV DPTR,#0x4FBF                 ; mailbox / host-interface register block
    3618: 74 01       MOV A,#0x01                   
    361A: F0          MOVX @DPTR,A                  
    361B: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_361E:
    361E: E5 76       MOV A,0x76                    
    3620: 30 E4 04    JNB ACC.4,0x3627                 ; -> loc_3627
    3623: 7D 01       MOV R5,#0x01                  
    3625: 80 02       SJMP 0x3629                      ; -> 0x3629

loc_3627:
    3627: 7D 00       MOV R5,#0x00                  
    3629: 53 05 01    ANL 0x05,#0x01                
    362C: 90 CC 0E    MOV DPTR,#0xCC0E                 ; register block CC00
    362F: ED          MOV A,R5                      
    3630: F0          MOVX @DPTR,A                  
    3631: 75 2F 76    MOV 0x2F,#0x76                
    3634: 75 30 0F    MOV 0x30,#0x0F                
    3637: 75 31 00    MOV 0x31,#0x00                
    363A: 75 32 40    MOV 0x32,#0x40                
    363D: 75 33 10    MOV 0x33,#0x10                
    3640: 75 34 00    MOV 0x34,#0x00                
    3643: 75 35 40    MOV 0x35,#0x40                
    3646: 75 2A 07    MOV 0x2A,#0x07                
    3649: 75 2B 01    MOV 0x2B,#0x01                
    364C: E4          CLR A                         
    364D: F5 2C       MOV 0x2C,A                    
    364F: F5 2D       MOV 0x2D,A                    
    3651: 75 2E 01    MOV 0x2E,#0x01                
    3654: 75 82 08    MOV DPL(0x82),#0x08           
    3657: C0 02       PUSH 0x02                     
    3659: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    365C: AD 82       MOV R5,0x82                   
    365E: D0 02       POP 0x02                      
    3660: BD 01 03    CJNE R5,#0x01,0x3666             ; -> loc_3666
    3663: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_3666:
    3666: E5 0D       MOV A,0x0D                    
    3668: 60 03       JZ 0x366D                        ; -> loc_366D
    366A: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_366D:
    366D: E5 0E       MOV A,0x0E                    
    366F: 70 03       JNZ 0x3674                       ; -> loc_3674
    3671: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3674:
    3674: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_3677:
    3677: E5 76       MOV A,0x76                    
    3679: 30 E5 04    JNB ACC.5,0x3680                 ; -> loc_3680
    367C: 7D 01       MOV R5,#0x01                  
    367E: 80 02       SJMP 0x3682                      ; -> 0x3682

loc_3680:
    3680: 7D 00       MOV R5,#0x00                  
    3682: 53 05 01    ANL 0x05,#0x01                
    3685: 90 C6 00    MOV DPTR,#0xC600              
    3688: ED          MOV A,R5                      
    3689: F0          MOVX @DPTR,A                  
    368A: E5 76       MOV A,0x76                    
    368C: 54 0C       ANL A,#0x0C                   
    368E: 60 21       JZ 0x36B1                        ; -> 0x36B1
    3690: E5 14       MOV A,0x14                    
    3692: 30 E5 0F    JNB ACC.5,0x36A4                 ; -> loc_36A4
    3695: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3698: E0          MOVX A,@DPTR                  
    3699: FD          MOV R5,A                      
    369A: 43 05 01    ORL 0x05,#0x01                
    369D: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    36A0: ED          MOV A,R5                      
    36A1: F0          MOVX @DPTR,A                  
    36A2: 80 0D       SJMP 0x36B1                      ; -> 0x36B1

loc_36A4:
    36A4: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    36A7: E0          MOVX A,@DPTR                  
    36A8: FD          MOV R5,A                      
    36A9: 53 05 FE    ANL 0x05,#0xFE                
    36AC: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    36AF: ED          MOV A,R5                      
    36B0: F0          MOVX @DPTR,A                  
    36B1: 85 76 82    MOV DPL(0x82),0x76            
    36B4: C0 02       PUSH 0x02                     
    36B6: 12 1D C6    LCALL 0x1DC6                     ; -> sub_1DC6
    36B9: 75 7A 20    MOV 0x7A,#0x20                
    36BC: 75 7B 18    MOV 0x7B,#0x18                
    36BF: 75 82 00    MOV DPL(0x82),#0x00           
    36C2: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    36C5: 75 2F 76    MOV 0x2F,#0x76                
    36C8: 75 30 0F    MOV 0x30,#0x0F                
    36CB: 75 31 00    MOV 0x31,#0x00                
    36CE: 75 32 40    MOV 0x32,#0x40                
    36D1: 75 33 10    MOV 0x33,#0x10                
    36D4: 75 34 00    MOV 0x34,#0x00                
    36D7: 75 35 40    MOV 0x35,#0x40                
    36DA: 75 2A 02    MOV 0x2A,#0x02                
    36DD: 75 2B 01    MOV 0x2B,#0x01                
    36E0: E4          CLR A                         
    36E1: F5 2C       MOV 0x2C,A                    
    36E3: F5 2D       MOV 0x2D,A                    
    36E5: 75 2E 01    MOV 0x2E,#0x01                
    36E8: 75 82 08    MOV DPL(0x82),#0x08           
    36EB: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    36EE: D0 02       POP 0x02                      
    36F0: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_36F3:
    36F3: 74 07       MOV A,#0x07                   
    36F5: 55 76       ANL A,0x76                    
    36F7: FD          MOV R5,A                      
    36F8: BD 02 02    CJNE R5,#0x02,0x36FD             ; -> loc_36FD
    36FB: 80 08       SJMP 0x3705                      ; -> 0x3705

loc_36FD:
    36FD: 74 07       MOV A,#0x07                   
    36FF: 55 76       ANL A,0x76                    
    3701: FD          MOV R5,A                      
    3702: BD 05 20    CJNE R5,#0x05,0x3725             ; -> loc_3725
    3705: 90 4F EB    MOV DPTR,#0x4FEB                 ; mailbox / host-interface register block
    3708: 74 01       MOV A,#0x01                   
    370A: F0          MOVX @DPTR,A                  
    370B: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    370E: E0          MOVX A,@DPTR                  
    370F: FD          MOV R5,A                      
    3710: 70 33       JNZ 0x3745                       ; -> 0x3745
    3712: E5 08       MOV A,0x08                    
    3714: 70 2F       JNZ 0x3745                       ; -> 0x3745
    3716: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3719: E0          MOVX A,@DPTR                  
    371A: FD          MOV R5,A                      
    371B: 53 05 FE    ANL 0x05,#0xFE                
    371E: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3721: ED          MOV A,R5                      
    3722: F0          MOVX @DPTR,A                  
    3723: 80 20       SJMP 0x3745                      ; -> 0x3745

loc_3725:
    3725: 90 4F EB    MOV DPTR,#0x4FEB                 ; mailbox / host-interface register block
    3728: E4          CLR A                         
    3729: F0          MOVX @DPTR,A                  
    372A: BA 01 18    CJNE R2,#0x01,0x3745             ; -> 0x3745
    372D: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    3730: E0          MOVX A,@DPTR                  
    3731: FD          MOV R5,A                      
    3732: 70 11       JNZ 0x3745                       ; -> 0x3745
    3734: E5 08       MOV A,0x08                    
    3736: 70 0D       JNZ 0x3745                       ; -> 0x3745
    3738: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    373B: E0          MOVX A,@DPTR                  
    373C: FD          MOV R5,A                      
    373D: 43 05 01    ORL 0x05,#0x01                
    3740: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3743: ED          MOV A,R5                      
    3744: F0          MOVX @DPTR,A                  
    3745: 75 2F 76    MOV 0x2F,#0x76                
    3748: 75 30 0F    MOV 0x30,#0x0F                
    374B: 75 31 00    MOV 0x31,#0x00                
    374E: 75 32 40    MOV 0x32,#0x40                
    3751: 75 33 10    MOV 0x33,#0x10                
    3754: 75 34 00    MOV 0x34,#0x00                
    3757: 75 35 40    MOV 0x35,#0x40                
    375A: E4          CLR A                         
    375B: F5 2A       MOV 0x2A,A                    
    375D: 75 2B 06    MOV 0x2B,#0x06                
    3760: F5 2C       MOV 0x2C,A                    
    3762: F5 2D       MOV 0x2D,A                    
    3764: 75 2E 01    MOV 0x2E,#0x01                
    3767: 75 82 08    MOV DPL(0x82),#0x08           
    376A: C0 02       PUSH 0x02                     
    376C: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    376F: AD 82       MOV R5,0x82                   
    3771: D0 02       POP 0x02                      
    3773: BD 01 03    CJNE R5,#0x01,0x3779             ; -> loc_3779
    3776: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_3779:
    3779: E5 0D       MOV A,0x0D                    
    377B: 60 03       JZ 0x3780                        ; -> loc_3780
    377D: 02 3B 47    LJMP 0x3B47                      ; -> loc_3B47

loc_3780:
    3780: E5 0E       MOV A,0x0E                    
    3782: 70 03       JNZ 0x3787                       ; -> loc_3787
    3784: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3787:
    3787: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_378A:
    378A: 75 7A 20    MOV 0x7A,#0x20                
    378D: 75 7B 23    MOV 0x7B,#0x23                
    3790: 75 82 00    MOV DPL(0x82),#0x00           
    3793: C0 02       PUSH 0x02                     
    3795: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3798: D0 02       POP 0x02                      
    379A: 90 4F E9    MOV DPTR,#0x4FE9                 ; mailbox / host-interface register block
    379D: E0          MOVX A,@DPTR                  
    379E: FD          MOV R5,A                      
    379F: 70 29       JNZ 0x37CA                       ; -> 0x37CA
    37A1: 90 C8 73    MOV DPTR,#0xC873                 ; control + status register block
    37A4: 74 FF       MOV A,#0xFF                   
    37A6: F0          MOVX @DPTR,A                  
    37A7: 90 C8 74    MOV DPTR,#0xC874                 ; control + status register block
    37AA: 74 BC       MOV A,#0xBC                   
    37AC: F0          MOVX @DPTR,A                  
    37AD: 90 C8 78    MOV DPTR,#0xC878                 ; control + status register block
    37B0: 74 1C       MOV A,#0x1C                   
    37B2: F0          MOVX @DPTR,A                  
    37B3: 90 C8 7C    MOV DPTR,#0xC87C                 ; control + status register block
    37B6: E4          CLR A                         
    37B7: F0          MOVX @DPTR,A                  
    37B8: 90 C8 7D    MOV DPTR,#0xC87D                 ; control + status register block
    37BB: 74 20       MOV A,#0x20                   
    37BD: F0          MOVX @DPTR,A                  
    37BE: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    37C1: 74 FF       MOV A,#0xFF                   
    37C3: F0          MOVX @DPTR,A                  
    37C4: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    37C7: 74 01       MOV A,#0x01                   
    37C9: F0          MOVX @DPTR,A                  
    37CA: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    37CD: E0          MOVX A,@DPTR                  
    37CE: FD          MOV R5,A                      
    37CF: 53 05 FB    ANL 0x05,#0xFB                
    37D2: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    37D5: ED          MOV A,R5                      
    37D6: F0          MOVX @DPTR,A                  
    37D7: 85 09 7A    MOV 0x7A,0x09                 
    37DA: 85 0A 7B    MOV 0x7B,0x0A                 
    37DD: 85 14 7C    MOV 0x7C,0x14                 
    37E0: 85 76 7D    MOV 0x7D,0x76                 
    37E3: 75 82 0E    MOV DPL(0x82),#0x0E           
    37E6: C0 02       PUSH 0x02                     
    37E8: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    37EB: D0 02       POP 0x02                      
    37ED: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_37F0:
    37F0: 75 7A 20    MOV 0x7A,#0x20                
    37F3: 75 7B 24    MOV 0x7B,#0x24                
    37F6: 75 82 00    MOV DPL(0x82),#0x00           
    37F9: C0 02       PUSH 0x02                     
    37FB: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    37FE: D0 02       POP 0x02                      
    3800: 74 01       MOV A,#0x01                   
    3802: 55 76       ANL A,0x76                    
    3804: FD          MOV R5,A                      
    3805: E4          CLR A                         
    3806: BD 00 01    CJNE R5,#0x00,0x380A             ; -> 0x380A
    3809: 04          INC A                         
    380A: FD          MOV R5,A                      
    380B: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    380E: B4 01 00    CJNE A,#0x01,0x3811              ; -> 0x3811
    3811: E4          CLR A                         
    3812: 33          RLC A                         
    3813: F0          MOVX @DPTR,A                  
    3814: E5 08       MOV A,0x08                    
    3816: 60 03       JZ 0x381B                        ; -> loc_381B
    3818: 02 38 C8    LJMP 0x38C8                      ; -> 0x38C8

loc_381B:
    381B: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    381E: E0          MOVX A,@DPTR                  
    381F: FD          MOV R5,A                      
    3820: 60 54       JZ 0x3876                        ; -> loc_3876
    3822: BA 01 42    CJNE R2,#0x01,0x3867             ; -> 0x3867
    3825: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    3828: E0          MOVX A,@DPTR                  
    3829: FD          MOV R5,A                      
    382A: 30 E6 0D    JNB ACC.6,0x383A                 ; -> 0x383A
    382D: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3830: E0          MOVX A,@DPTR                  
    3831: FD          MOV R5,A                      
    3832: 43 05 24    ORL 0x05,#0x24                
    3835: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3838: ED          MOV A,R5                      
    3839: F0          MOVX @DPTR,A                  
    383A: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    383D: E0          MOVX A,@DPTR                  
    383E: FD          MOV R5,A                      
    383F: 53 05 FE    ANL 0x05,#0xFE                
    3842: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3845: ED          MOV A,R5                      
    3846: F0          MOVX @DPTR,A                  
    3847: 90 D2 0B    MOV DPTR,#0xD20B                 ; register block D200
    384A: 74 84       MOV A,#0x84                   
    384C: F0          MOVX @DPTR,A                  
    384D: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3850: E0          MOVX A,@DPTR                  
    3851: FD          MOV R5,A                      
    3852: 43 05 08    ORL 0x05,#0x08                
    3855: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3858: ED          MOV A,R5                      
    3859: F0          MOVX @DPTR,A                  
    385A: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    385D: E0          MOVX A,@DPTR                  
    385E: FD          MOV R5,A                      
    385F: 43 05 02    ORL 0x05,#0x02                
    3862: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3865: ED          MOV A,R5                      
    3866: F0          MOVX @DPTR,A                  
    3867: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    386A: E0          MOVX A,@DPTR                  
    386B: FD          MOV R5,A                      
    386C: 43 05 08    ORL 0x05,#0x08                
    386F: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3872: ED          MOV A,R5                      
    3873: F0          MOVX @DPTR,A                  
    3874: 80 52       SJMP 0x38C8                      ; -> 0x38C8

loc_3876:
    3876: BA 01 42    CJNE R2,#0x01,0x38BB             ; -> 0x38BB
    3879: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    387C: E0          MOVX A,@DPTR                  
    387D: FD          MOV R5,A                      
    387E: 30 E6 0D    JNB ACC.6,0x388E                 ; -> 0x388E
    3881: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3884: E0          MOVX A,@DPTR                  
    3885: FD          MOV R5,A                      
    3886: 43 05 28    ORL 0x05,#0x28                
    3889: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    388C: ED          MOV A,R5                      
    388D: F0          MOVX @DPTR,A                  
    388E: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3891: E0          MOVX A,@DPTR                  
    3892: FD          MOV R5,A                      
    3893: 53 05 FD    ANL 0x05,#0xFD                
    3896: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3899: ED          MOV A,R5                      
    389A: F0          MOVX @DPTR,A                  
    389B: 90 D2 0B    MOV DPTR,#0xD20B                 ; register block D200
    389E: 74 85       MOV A,#0x85                   
    38A0: F0          MOVX @DPTR,A                  
    38A1: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    38A4: E0          MOVX A,@DPTR                  
    38A5: FD          MOV R5,A                      
    38A6: 53 05 F7    ANL 0x05,#0xF7                
    38A9: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    38AC: ED          MOV A,R5                      
    38AD: F0          MOVX @DPTR,A                  
    38AE: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    38B1: E0          MOVX A,@DPTR                  
    38B2: FD          MOV R5,A                      
    38B3: 43 05 01    ORL 0x05,#0x01                
    38B6: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    38B9: ED          MOV A,R5                      
    38BA: F0          MOVX @DPTR,A                  
    38BB: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    38BE: E0          MOVX A,@DPTR                  
    38BF: FD          MOV R5,A                      
    38C0: 53 05 F7    ANL 0x05,#0xF7                
    38C3: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    38C6: ED          MOV A,R5                      
    38C7: F0          MOVX @DPTR,A                  
    38C8: 85 09 7A    MOV 0x7A,0x09                 
    38CB: 85 0A 7B    MOV 0x7B,0x0A                 
    38CE: 85 14 7C    MOV 0x7C,0x14                 
    38D1: 75 7D 80    MOV 0x7D,#0x80                
    38D4: 75 82 0F    MOV DPL(0x82),#0x0F           
    38D7: C0 02       PUSH 0x02                     
    38D9: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    38DC: D0 02       POP 0x02                      
    38DE: 02 34 79    LJMP 0x3479                      ; -> loc_3479
    38E1: 75          DB 0x75                       ; data
    38E2: 7A          DB 0x7A                       ; data
    38E3: 20          DB 0x20                       ; data
    38E4: 75          DB 0x75                       ; data
    38E5: 7B          DB 0x7B                       ; data
    38E6: 25          DB 0x25                       ; data
    38E7: 75          DB 0x75                       ; data
    38E8: 82          DB 0x82                       ; data
    38E9: 00          DB 0x00                       ; data
    38EA: C0          DB 0xC0                       ; data
    38EB: 02          DB 0x02                       ; data
    38EC: 12          DB 0x12                       ; data
    38ED: 02          DB 0x02                       ; data
    38EE: 70          DB 0x70                       ; data
    38EF: D0          DB 0xD0                       ; data
    38F0: 02          DB 0x02                       ; data
    38F1: 90          DB 0x90                       ; data
    38F2: C8          DB 0xC8                       ; data
    38F3: 00          DB 0x00                       ; data
    38F4: E0          DB 0xE0                       ; data
    38F5: FD          DB 0xFD                       ; data
    38F6: 53          DB 0x53                       ; data
    38F7: 05          DB 0x05                       ; data
    38F8: 10          DB 0x10                       ; data
    38F9: E4          DB 0xE4                       ; data
    38FA: BD          DB 0xBD                       ; data
    38FB: 00          DB 0x00                       ; data
    38FC: 01          DB 0x01                       ; data
    38FD: 04          DB 0x04                       ; data
    38FE: FD          DB 0xFD                       ; data
    38FF: 90          DB 0x90                       ; data
    3900: 4F          DB 0x4F                       ; data
    3901: EA          DB 0xEA                       ; data
    3902: B4          DB 0xB4                       ; data
    3903: 01          DB 0x01                       ; data
    3904: 00          DB 0x00                       ; data
    3905: E4          DB 0xE4                       ; data
    3906: 33          DB 0x33                       ; data
    3907: F0          DB 0xF0                       ; data
    3908: 90          DB 0x90                       ; data
    3909: 4F          DB 0x4F                       ; data
    390A: EA          DB 0xEA                       ; data
    390B: E0          DB 0xE0                       ; data
    390C: F5          DB 0xF5                       ; data
    390D: 7D          DB 0x7D                       ; data
    390E: 85          DB 0x85                       ; data
    390F: 09          DB 0x09                       ; data
    3910: 7A          DB 0x7A                       ; data
    3911: 85          DB 0x85                       ; data
    3912: 0A          DB 0x0A                       ; data
    3913: 7B          DB 0x7B                       ; data
    3914: 85          DB 0x85                       ; data
    3915: 14          DB 0x14                       ; data
    3916: 7C          DB 0x7C                       ; data
    3917: 75          DB 0x75                       ; data
    3918: 82          DB 0x82                       ; data
    3919: 09          DB 0x09                       ; data
    391A: C0          DB 0xC0                       ; data
    391B: 02          DB 0x02                       ; data
    391C: 12          DB 0x12                       ; data
    391D: 11          DB 0x11                       ; data
    391E: F9          DB 0xF9                       ; data
    391F: D0          DB 0xD0                       ; data
    3920: 02          DB 0x02                       ; data
    3921: 02          DB 0x02                       ; data
    3922: 34          DB 0x34                       ; data
    3923: 79          DB 0x79                       ; data
    3924: 90          DB 0x90                       ; data
    3925: 00          DB 0x00                       ; data
    3926: 48          DB 0x48                       ; data
    3927: E4          DB 0xE4                       ; data
    3928: 93          DB 0x93                       ; data
    3929: FD          DB 0xFD                       ; data
    392A: 20          DB 0x20                       ; data
    392B: E5          DB 0xE5                       ; data
    392C: 03          DB 0x03                       ; data
    392D: 02          DB 0x02                       ; data
    392E: 34          DB 0x34                       ; data
    392F: 79          DB 0x79                       ; data
    3930: 75          DB 0x75                       ; data
    3931: 7A          DB 0x7A                       ; data
    3932: 20          DB 0x20                       ; data
    3933: 75          DB 0x75                       ; data
    3934: 7B          DB 0x7B                       ; data
    3935: 29          DB 0x29                       ; data
    3936: 75          DB 0x75                       ; data
    3937: 82          DB 0x82                       ; data
    3938: 00          DB 0x00                       ; data
    3939: C0          DB 0xC0                       ; data
    393A: 02          DB 0x02                       ; data
    393B: 12          DB 0x12                       ; data
    393C: 02          DB 0x02                       ; data
    393D: 70          DB 0x70                       ; data
    393E: 90          DB 0x90                       ; data
    393F: 01          DB 0x01                       ; data
    3940: 20          DB 0x20                       ; data
    3941: E0          DB 0xE0                       ; data
    3942: F5          DB 0xF5                       ; data
    3943: 7D          DB 0x7D                       ; data
    3944: 85          DB 0x85                       ; data
    3945: 09          DB 0x09                       ; data
    3946: 7A          DB 0x7A                       ; data
    3947: 85          DB 0x85                       ; data
    3948: 0A          DB 0x0A                       ; data
    3949: 7B          DB 0x7B                       ; data
    394A: 85          DB 0x85                       ; data
    394B: 14          DB 0x14                       ; data
    394C: 7C          DB 0x7C                       ; data
    394D: 75          DB 0x75                       ; data
    394E: 82          DB 0x82                       ; data
    394F: 0C          DB 0x0C                       ; data
    3950: 12          DB 0x12                       ; data
    3951: 11          DB 0x11                       ; data
    3952: F9          DB 0xF9                       ; data
    3953: D0          DB 0xD0                       ; data
    3954: 02          DB 0x02                       ; data
    3955: 02          DB 0x02                       ; data
    3956: 34          DB 0x34                       ; data
    3957: 79          DB 0x79                       ; data
    3958: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_395B:
    395B: E5 08       MOV A,0x08                    
    395D: 70 17       JNZ 0x3976                       ; -> 0x3976
    395F: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3962: E0          MOVX A,@DPTR                  
    3963: FD          MOV R5,A                      
    3964: 53 05 FD    ANL 0x05,#0xFD                
    3967: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    396A: ED          MOV A,R5                      
    396B: F0          MOVX @DPTR,A                  
    396C: E0          MOVX A,@DPTR                  
    396D: FD          MOV R5,A                      
    396E: 53 05 FE    ANL 0x05,#0xFE                
    3971: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3974: ED          MOV A,R5                      
    3975: F0          MOVX @DPTR,A                  
    3976: 75 7A 01    MOV 0x7A,#0x01                
    3979: 75 7B 08    MOV 0x7B,#0x08                
    397C: 75 82 00    MOV DPL(0x82),#0x00           
    397F: C0 02       PUSH 0x02                     
    3981: C0 03       PUSH 0x03                     
    3983: C0 04       PUSH 0x04                     
    3985: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3988: D0 04       POP 0x04                      
    398A: D0 03       POP 0x03                      
    398C: D0 02       POP 0x02                      
    398E: E5 08       MOV A,0x08                    
    3990: 60 13       JZ 0x39A5                        ; -> loc_39A5
    3992: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    3995: E0          MOVX A,@DPTR                  
    3996: FD          MOV R5,A                      
    3997: 53 05 08    ANL 0x05,#0x08                
    399A: 90 4F E5    MOV DPTR,#0x4FE5                 ; mailbox / host-interface register block
    399D: E4          CLR A                         
    399E: BD 00 01    CJNE R5,#0x00,0x39A2             ; -> 0x39A2
    39A1: 04          INC A                         
    39A2: F0          MOVX @DPTR,A                  
    39A3: 80 5C       SJMP 0x3A01                      ; -> 0x3A01

loc_39A5:
    39A5: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    39A8: E0          MOVX A,@DPTR                  
    39A9: FD          MOV R5,A                      
    39AA: 54 0F       ANL A,#0x0F                   
    39AC: 60 0F       JZ 0x39BD                        ; -> loc_39BD
    39AE: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    39B1: E0          MOVX A,@DPTR                  
    39B2: FD          MOV R5,A                      
    39B3: 53 05 BF    ANL 0x05,#0xBF                
    39B6: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    39B9: ED          MOV A,R5                      
    39BA: F0          MOVX @DPTR,A                  
    39BB: 80 0D       SJMP 0x39CA                      ; -> 0x39CA

loc_39BD:
    39BD: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    39C0: E0          MOVX A,@DPTR                  
    39C1: FD          MOV R5,A                      
    39C2: 43 05 40    ORL 0x05,#0x40                
    39C5: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    39C8: ED          MOV A,R5                      
    39C9: F0          MOVX @DPTR,A                  
    39CA: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    39CD: E0          MOVX A,@DPTR                  
    39CE: FD          MOV R5,A                      
    39CF: 20 E5 2A    JB ACC.5,0x39FC                  ; -> loc_39FC
    39D2: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    39D5: E0          MOVX A,@DPTR                  
    39D6: FD          MOV R5,A                      
    39D7: 54 0F       ANL A,#0x0F                   
    39D9: 70 08       JNZ 0x39E3                       ; -> 0x39E3
    39DB: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    39DE: E0          MOVX A,@DPTR                  
    39DF: FD          MOV R5,A                      
    39E0: 20 E3 11    JB ACC.3,0x39F4                  ; -> 0x39F4
    39E3: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    39E6: E0          MOVX A,@DPTR                  
    39E7: FD          MOV R5,A                      
    39E8: 54 0F       ANL A,#0x0F                   
    39EA: 60 10       JZ 0x39FC                        ; -> loc_39FC
    39EC: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    39EF: E0          MOVX A,@DPTR                  
    39F0: FD          MOV R5,A                      
    39F1: 30 E2 08    JNB ACC.2,0x39FC                 ; -> loc_39FC
    39F4: 90 4F E5    MOV DPTR,#0x4FE5                 ; mailbox / host-interface register block
    39F7: 74 01       MOV A,#0x01                   
    39F9: F0          MOVX @DPTR,A                  
    39FA: 80 05       SJMP 0x3A01                      ; -> 0x3A01

loc_39FC:
    39FC: 90 4F E5    MOV DPTR,#0x4FE5                 ; mailbox / host-interface register block
    39FF: E4          CLR A                         
    3A00: F0          MOVX @DPTR,A                  
    3A01: 90 4F E5    MOV DPTR,#0x4FE5                 ; mailbox / host-interface register block
    3A04: E0          MOVX A,@DPTR                  
    3A05: FD          MOV R5,A                      
    3A06: 60 20       JZ 0x3A28                        ; -> loc_3A28
    3A08: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    3A0B: E0          MOVX A,@DPTR                  
    3A0C: FD          MOV R5,A                      
    3A0D: 53 05 FE    ANL 0x05,#0xFE                
    3A10: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    3A13: ED          MOV A,R5                      
    3A14: F0          MOVX @DPTR,A                  
    3A15: E5 08       MOV A,0x08                    
    3A17: 70 1C       JNZ 0x3A35                       ; -> 0x3A35
    3A19: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3A1C: E0          MOVX A,@DPTR                  
    3A1D: FD          MOV R5,A                      
    3A1E: 43 05 04    ORL 0x05,#0x04                
    3A21: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3A24: ED          MOV A,R5                      
    3A25: F0          MOVX @DPTR,A                  
    3A26: 80 0D       SJMP 0x3A35                      ; -> 0x3A35

loc_3A28:
    3A28: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    3A2B: E0          MOVX A,@DPTR                  
    3A2C: FD          MOV R5,A                      
    3A2D: 43 05 01    ORL 0x05,#0x01                
    3A30: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    3A33: ED          MOV A,R5                      
    3A34: F0          MOVX @DPTR,A                  
    3A35: 90 4F EC    MOV DPTR,#0x4FEC                 ; mailbox / host-interface register block
    3A38: 74 01       MOV A,#0x01                   
    3A3A: F0          MOVX @DPTR,A                  
    3A3B: 75 5D 78    MOV 0x5D,#0x78                
    3A3E: 75 5E 00    MOV 0x5E,#0x00                
    3A41: 75 5F 40    MOV 0x5F,#0x40                
    3A44: 75 60 79    MOV 0x60,#0x79                
    3A47: 75 61 00    MOV 0x61,#0x00                
    3A4A: 75 62 40    MOV 0x62,#0x40                
    3A4D: 75 63 EC    MOV 0x63,#0xEC                
    3A50: 75 64 4F    MOV 0x64,#0x4F                
    3A53: 75 65 00    MOV 0x65,#0x00                
    3A56: 8C 5B       MOV 0x5B,R4                   
    3A58: 8B 5C       MOV 0x5C,R3                   
    3A5A: 85 77 82    MOV DPL(0x82),0x77            
    3A5D: C0 02       PUSH 0x02                     
    3A5F: C0 03       PUSH 0x03                     
    3A61: 12 22 3B    LCALL 0x223B                     ; -> sub_223B
    3A64: D0 03       POP 0x03                      
    3A66: D0 02       POP 0x02                      
    3A68: E5 0E       MOV A,0x0E                    
    3A6A: 60 03       JZ 0x3A6F                        ; -> loc_3A6F
    3A6C: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_3A6F:
    3A6F: E5 15       MOV A,0x15                    
    3A71: 60 03       JZ 0x3A76                        ; -> loc_3A76
    3A73: 02 3B E5    LJMP 0x3BE5                      ; -> loc_3BE5

loc_3A76:
    3A76: 90 4F EC    MOV DPTR,#0x4FEC                 ; mailbox / host-interface register block
    3A79: E0          MOVX A,@DPTR                  
    3A7A: FC          MOV R4,A                      
    3A7B: BC 01 25    CJNE R4,#0x01,0x3AA3             ; -> loc_3AA3
    3A7E: 75 7A 01    MOV 0x7A,#0x01                
    3A81: 75 7B 09    MOV 0x7B,#0x09                
    3A84: 75 82 00    MOV DPL(0x82),#0x00           
    3A87: C0 02       PUSH 0x02                     
    3A89: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3A8C: 85 09 7A    MOV 0x7A,0x09                 
    3A8F: 85 0A 7B    MOV 0x7B,0x0A                 
    3A92: 85 14 7C    MOV 0x7C,0x14                 
    3A95: 75 7D 00    MOV 0x7D,#0x00                
    3A98: 75 82 02    MOV DPL(0x82),#0x02           
    3A9B: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3A9E: D0 02       POP 0x02                      
    3AA0: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3AA3:
    3AA3: AC 19       MOV R4,0x19                   
    3AA5: 8C 83       MOV 0x83,R4                   
    3AA7: 75 82 00    MOV DPL(0x82),#0x00           
    3AAA: C0 03       PUSH 0x03                     
    3AAC: 12 1D A2    LCALL 0x1DA2                     ; -> sub_1DA2
    3AAF: 75 7A 01    MOV 0x7A,#0x01                
    3AB2: 75 7B 0A    MOV 0x7B,#0x0A                
    3AB5: 75 82 00    MOV DPL(0x82),#0x00           
    3AB8: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3ABB: D0 03       POP 0x03                      
    3ABD: 7A 01       MOV R2,#0x01                  
    3ABF: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    3AC2: E0          MOVX A,@DPTR                  
    3AC3: FC          MOV R4,A                      
    3AC4: 60 2F       JZ 0x3AF5                        ; -> loc_3AF5
    3AC6: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3AC9: E0          MOVX A,@DPTR                  
    3ACA: FC          MOV R4,A                      
    3ACB: 43 04 08    ORL 0x04,#0x08                
    3ACE: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3AD1: EC          MOV A,R4                      
    3AD2: F0          MOVX @DPTR,A                  
    3AD3: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3AD6: E0          MOVX A,@DPTR                  
    3AD7: FC          MOV R4,A                      
    3AD8: 53 04 FE    ANL 0x04,#0xFE                
    3ADB: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3ADE: EC          MOV A,R4                      
    3ADF: F0          MOVX @DPTR,A                  
    3AE0: 90 D2 0B    MOV DPTR,#0xD20B                 ; register block D200
    3AE3: 74 84       MOV A,#0x84                   
    3AE5: F0          MOVX @DPTR,A                  
    3AE6: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3AE9: E0          MOVX A,@DPTR                  
    3AEA: FC          MOV R4,A                      
    3AEB: 43 04 02    ORL 0x04,#0x02                
    3AEE: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3AF1: EC          MOV A,R4                      
    3AF2: F0          MOVX @DPTR,A                  
    3AF3: 80 2D       SJMP 0x3B22                      ; -> 0x3B22

loc_3AF5:
    3AF5: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3AF8: E0          MOVX A,@DPTR                  
    3AF9: FC          MOV R4,A                      
    3AFA: 53 04 F7    ANL 0x04,#0xF7                
    3AFD: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    3B00: EC          MOV A,R4                      
    3B01: F0          MOVX @DPTR,A                  
    3B02: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3B05: E0          MOVX A,@DPTR                  
    3B06: FC          MOV R4,A                      
    3B07: 53 04 FD    ANL 0x04,#0xFD                
    3B0A: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3B0D: EC          MOV A,R4                      
    3B0E: F0          MOVX @DPTR,A                  
    3B0F: 90 D2 0B    MOV DPTR,#0xD20B                 ; register block D200
    3B12: 74 85       MOV A,#0x85                   
    3B14: F0          MOVX @DPTR,A                  
    3B15: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3B18: E0          MOVX A,@DPTR                  
    3B19: FC          MOV R4,A                      
    3B1A: 43 04 01    ORL 0x04,#0x01                
    3B1D: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3B20: EC          MOV A,R4                      
    3B21: F0          MOVX @DPTR,A                  
    3B22: 90 00 48    MOV DPTR,#0x0048              
    3B25: E4          CLR A                         
    3B26: 93          MOVC A,@A+DPTR                
    3B27: FC          MOV R4,A                      
    3B28: 20 E3 15    JB ACC.3,0x3B40                  ; -> 0x3B40
    3B2B: 85 78 7A    MOV 0x7A,0x78                 
    3B2E: 85 79 7B    MOV 0x7B,0x79                 
    3B31: 8B 7C       MOV 0x7C,R3                   
    3B33: 75 7D 00    MOV 0x7D,#0x00                
    3B36: 75 82 01    MOV DPL(0x82),#0x01           
    3B39: C0 02       PUSH 0x02                     
    3B3B: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3B3E: D0 02       POP 0x02                      
    3B40: E5 0D       MOV A,0x0D                    
    3B42: 70 03       JNZ 0x3B47                       ; -> loc_3B47
    3B44: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3B47:
    3B47: 75 7A 20    MOV 0x7A,#0x20                
    3B4A: 75 7B 0B    MOV 0x7B,#0x0B                
    3B4D: 75 82 00    MOV DPL(0x82),#0x00           
    3B50: C0 02       PUSH 0x02                     
    3B52: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3B55: D0 02       POP 0x02                      
    3B57: 75 0D 00    MOV 0x0D,#0x00                
    3B5A: E5 18       MOV A,0x18                    
    3B5C: 60 03       JZ 0x3B61                        ; -> loc_3B61
    3B5E: 02 3E 82    LJMP 0x3E82                      ; -> loc_3E82

loc_3B61:
    3B61: 90 4F EB    MOV DPTR,#0x4FEB                 ; mailbox / host-interface register block
    3B64: E0          MOVX A,@DPTR                  
    3B65: FB          MOV R3,A                      
    3B66: 60 03       JZ 0x3B6B                        ; -> loc_3B6B
    3B68: 02 3E 82    LJMP 0x3E82                      ; -> loc_3E82

loc_3B6B:
    3B6B: 90 CC 8D    MOV DPTR,#0xCC8D                 ; register block CC00
    3B6E: E0          MOVX A,@DPTR                  
    3B6F: 60 03       JZ 0x3B74                        ; -> loc_3B74
    3B71: 02 3E 82    LJMP 0x3E82                      ; -> loc_3E82

loc_3B74:
    3B74: EA          MOV A,R2                      
    3B75: 70 03       JNZ 0x3B7A                       ; -> loc_3B7A
    3B77: 02 3E 82    LJMP 0x3E82                      ; -> loc_3E82

loc_3B7A:
    3B7A: 75 82 02    MOV DPL(0x82),#0x02           
    3B7D: C0 02       PUSH 0x02                     
    3B7F: 12 1F 0B    LCALL 0x1F0B                     ; -> sub_1F0B
    3B82: AB 82       MOV R3,0x82                   
    3B84: D0 02       POP 0x02                      
    3B86: BB 01 03    CJNE R3,#0x01,0x3B8C             ; -> loc_3B8C
    3B89: 02 2A 74    LJMP 0x2A74                      ; -> 0x2A74

loc_3B8C:
    3B8C: E5 0D       MOV A,0x0D                    
    3B8E: 70 B7       JNZ 0x3B47                       ; -> loc_3B47
    3B90: E5 0E       MOV A,0x0E                    
    3B92: 70 51       JNZ 0x3BE5                       ; -> loc_3BE5
    3B94: 90 00 48    MOV DPTR,#0x0048              
    3B97: E4          CLR A                         
    3B98: 93          MOVC A,@A+DPTR                
    3B99: FB          MOV R3,A                      
    3B9A: 30 E2 29    JNB ACC.2,0x3BC6                 ; -> 0x3BC6
    3B9D: 90 00 48    MOV DPTR,#0x0048              
    3BA0: E4          CLR A                         
    3BA1: 93          MOVC A,@A+DPTR                
    3BA2: FB          MOV R3,A                      
    3BA3: 30 E5 19    JNB ACC.5,0x3BBF                 ; -> 0x3BBF
    3BA6: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    3BA9: E0          MOVX A,@DPTR                  
    3BAA: F5 7D       MOV 0x7D,A                    
    3BAC: 85 09 7A    MOV 0x7A,0x09                 
    3BAF: 85 0A 7B    MOV 0x7B,0x0A                 
    3BB2: 85 14 7C    MOV 0x7C,0x14                 
    3BB5: 75 82 0C    MOV DPL(0x82),#0x0C           
    3BB8: C0 02       PUSH 0x02                     
    3BBA: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3BBD: D0 02       POP 0x02                      
    3BBF: C0 02       PUSH 0x02                     
    3BC1: 12 03 26    LCALL 0x0326                     ; -> sub_0326
    3BC4: D0 02       POP 0x02                      
    3BC6: 78 81       MOV R0,#0x81                  
    3BC8: 86 03       MOV 0x03,@R0                  
    3BCA: E5 1C       MOV A,0x1C                    
    3BCC: 52 03       ANL 0x03,A                    
    3BCE: EB          MOV A,R3                      
    3BCF: B5 1C 13    CJNE A,0x1C,0x3BE5               ; -> loc_3BE5
    3BD2: 78 82       MOV R0,#0x82                  
    3BD4: 86 03       MOV 0x03,@R0                  
    3BD6: E5 1D       MOV A,0x1D                    
    3BD8: 52 03       ANL 0x03,A                    
    3BDA: EB          MOV A,R3                      
    3BDB: B5 1D 07    CJNE A,0x1D,0x3BE5               ; -> loc_3BE5
    3BDE: E5 13       MOV A,0x13                    
    3BE0: 60 03       JZ 0x3BE5                        ; -> loc_3BE5
    3BE2: 02 3E 61    LJMP 0x3E61                      ; -> loc_3E61

loc_3BE5:
    3BE5: 75 7A 01    MOV 0x7A,#0x01                
    3BE8: 75 7B 0C    MOV 0x7B,#0x0C                
    3BEB: 75 82 00    MOV DPL(0x82),#0x00           
    3BEE: C0 02       PUSH 0x02                     
    3BF0: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3BF3: D0 02       POP 0x02                      
    3BF5: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3BF8: E0          MOVX A,@DPTR                  
    3BF9: FB          MOV R3,A                      
    3BFA: 53 03 FD    ANL 0x03,#0xFD                
    3BFD: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3C00: EB          MOV A,R3                      
    3C01: F0          MOVX @DPTR,A                  
    3C02: E0          MOVX A,@DPTR                  
    3C03: FB          MOV R3,A                      
    3C04: 53 03 FE    ANL 0x03,#0xFE                
    3C07: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    3C0A: EB          MOV A,R3                      
    3C0B: F0          MOVX @DPTR,A                  
    3C0C: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3C0F: E0          MOVX A,@DPTR                  
    3C10: FB          MOV R3,A                      
    3C11: 53 03 FE    ANL 0x03,#0xFE                
    3C14: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3C17: EB          MOV A,R3                      
    3C18: F0          MOVX @DPTR,A                  
    3C19: 90 4F BF    MOV DPTR,#0x4FBF                 ; mailbox / host-interface register block
    3C1C: E0          MOVX A,@DPTR                  
    3C1D: FB          MOV R3,A                      
    3C1E: BB 01 1F    CJNE R3,#0x01,0x3C40             ; -> 0x3C40
    3C21: 90 00 49    MOV DPTR,#0x0049              
    3C24: E4          CLR A                         
    3C25: 93          MOVC A,@A+DPTR                
    3C26: FB          MOV R3,A                      
    3C27: 30 E1 16    JNB ACC.1,0x3C40                 ; -> 0x3C40
    3C2A: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    3C2D: E0          MOVX A,@DPTR                  
    3C2E: FB          MOV R3,A                      
    3C2F: 43 03 01    ORL 0x03,#0x01                
    3C32: 90 D7 7F    MOV DPTR,#0xD77F                 ; register block D766
    3C35: EB          MOV A,R3                      
    3C36: F0          MOVX @DPTR,A                  
    3C37: 90 D6 7E    MOV DPTR,#0xD67E                 ; register block D66E
    3C3A: E4          CLR A                         
    3C3B: F0          MOVX @DPTR,A                  
    3C3C: 90 D6 7F    MOV DPTR,#0xD67F                 ; register block D66E
    3C3F: F0          MOVX @DPTR,A                  
    3C40: E5 0E       MOV A,0x0E                    
    3C42: 70 03       JNZ 0x3C47                       ; -> loc_3C47
    3C44: 02 3C F1    LJMP 0x3CF1                      ; -> 0x3CF1

loc_3C47:
    3C47: 75 30 0F    MOV 0x30,#0x0F                
    3C4A: 75 31 00    MOV 0x31,#0x00                
    3C4D: 75 32 40    MOV 0x32,#0x40                
    3C50: 75 33 10    MOV 0x33,#0x10                
    3C53: 75 34 00    MOV 0x34,#0x00                
    3C56: 75 35 40    MOV 0x35,#0x40                
    3C59: 75 2A 21    MOV 0x2A,#0x21                
    3C5C: E4          CLR A                         
    3C5D: F5 2B       MOV 0x2B,A                    
    3C5F: F5 2C       MOV 0x2C,A                    
    3C61: F5 2D       MOV 0x2D,A                    
    3C63: 75 2E 01    MOV 0x2E,#0x01                
    3C66: 75 2F 00    MOV 0x2F,#0x00                
    3C69: 75 82 09    MOV DPL(0x82),#0x09           
    3C6C: C0 02       PUSH 0x02                     
    3C6E: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3C71: D0 02       POP 0x02                      
    3C73: AB 10       MOV R3,0x10                   
    3C75: AC 11       MOV R4,0x11                   
    3C77: AD 12       MOV R5,0x12                   
    3C79: 8B 82       MOV 0x82,R3                   
    3C7B: 8C 83       MOV 0x83,R4                   
    3C7D: 8D F0       MOV 0xF0,R5                   
    3C7F: 12 3E D5    LCALL 0x3ED5                     ; -> sub_3ED5
    3C82: FB          MOV R3,A                      
    3C83: 30 E0 6B    JNB ACC.0,0x3CF1                 ; -> 0x3CF1
    3C86: 90 4F E7    MOV DPTR,#0x4FE7                 ; mailbox / host-interface register block
    3C89: E4          CLR A                         
    3C8A: F0          MOVX @DPTR,A                  
    3C8B: 78 D4       MOV R0,#0xD4                  
    3C8D: 76 00       MOV @R0,#0x00                 
    3C8F: 75 2F D4    MOV 0x2F,#0xD4                
    3C92: 75 30 0F    MOV 0x30,#0x0F                
    3C95: 75 31 00    MOV 0x31,#0x00                
    3C98: 75 32 40    MOV 0x32,#0x40                
    3C9B: 75 33 10    MOV 0x33,#0x10                
    3C9E: 75 34 00    MOV 0x34,#0x00                
    3CA1: 75 35 40    MOV 0x35,#0x40                
    3CA4: 75 2A 11    MOV 0x2A,#0x11                
    3CA7: 75 2B 01    MOV 0x2B,#0x01                
    3CAA: E4          CLR A                         
    3CAB: F5 2C       MOV 0x2C,A                    
    3CAD: F5 2D       MOV 0x2D,A                    
    3CAF: 75 2E 01    MOV 0x2E,#0x01                
    3CB2: 75 82 08    MOV DPL(0x82),#0x08           
    3CB5: C0 02       PUSH 0x02                     
    3CB7: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3CBA: 78 D5       MOV R0,#0xD5                  
    3CBC: 76 00       MOV @R0,#0x00                 
    3CBE: 78 D6       MOV R0,#0xD6                  
    3CC0: 76 00       MOV @R0,#0x00                 
    3CC2: 78 D7       MOV R0,#0xD7                  
    3CC4: 76 3F       MOV @R0,#0x3F                 
    3CC6: 75 2F D5    MOV 0x2F,#0xD5                
    3CC9: 75 30 0F    MOV 0x30,#0x0F                
    3CCC: 75 31 00    MOV 0x31,#0x00                
    3CCF: 75 32 40    MOV 0x32,#0x40                
    3CD2: 75 33 10    MOV 0x33,#0x10                
    3CD5: 75 34 00    MOV 0x34,#0x00                
    3CD8: 75 35 40    MOV 0x35,#0x40                
    3CDB: 75 2A C0    MOV 0x2A,#0xC0                
    3CDE: 75 2B 01    MOV 0x2B,#0x01                
    3CE1: E4          CLR A                         
    3CE2: F5 2C       MOV 0x2C,A                    
    3CE4: F5 2D       MOV 0x2D,A                    
    3CE6: 75 2E 03    MOV 0x2E,#0x03                
    3CE9: 75 82 08    MOV DPL(0x82),#0x08           
    3CEC: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3CEF: D0 02       POP 0x02                      
    3CF1: 75 0E 00    MOV 0x0E,#0x00                
    3CF4: 90 4F E6    MOV DPTR,#0x4FE6                 ; mailbox / host-interface register block
    3CF7: E4          CLR A                         
    3CF8: F0          MOVX @DPTR,A                  
    3CF9: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    3CFC: 74 01       MOV A,#0x01                   
    3CFE: F0          MOVX @DPTR,A                  
    3CFF: 90 C2 00    MOV DPTR,#0xC200              
    3D02: E0          MOVX A,@DPTR                  
    3D03: FB          MOV R3,A                      
    3D04: 74 F1       MOV A,#0xF1                   
    3D06: 5B          ANL A,R3                      
    3D07: 44 03       ORL A,#0x03                   
    3D09: 90 C2 00    MOV DPTR,#0xC200              
    3D0C: F0          MOVX @DPTR,A                  
    3D0D: 90 00 48    MOV DPTR,#0x0048              
    3D10: E4          CLR A                         
    3D11: 93          MOVC A,@A+DPTR                
    3D12: FB          MOV R3,A                      
    3D13: 20 E1 03    JB ACC.1,0x3D19                  ; -> loc_3D19
    3D16: 02 3D C7    LJMP 0x3DC7                      ; -> loc_3DC7

loc_3D19:
    3D19: 90 4F EB    MOV DPTR,#0x4FEB                 ; mailbox / host-interface register block
    3D1C: E0          MOVX A,@DPTR                  
    3D1D: FB          MOV R3,A                      
    3D1E: E4          CLR A                         
    3D1F: BB 01 01    CJNE R3,#0x01,0x3D23             ; -> 0x3D23
    3D22: 04          INC A                         
    3D23: FB          MOV R3,A                      
    3D24: B4 01 00    CJNE A,#0x01,0x3D27              ; -> 0x3D27
    3D27: E4          CLR A                         
    3D28: 33          RLC A                         
    3D29: FB          MOV R3,A                      
    3D2A: 90 4F BF    MOV DPTR,#0x4FBF                 ; mailbox / host-interface register block
    3D2D: E0          MOVX A,@DPTR                  
    3D2E: FC          MOV R4,A                      
    3D2F: E4          CLR A                         
    3D30: BC 01 01    CJNE R4,#0x01,0x3D34             ; -> 0x3D34
    3D33: 04          INC A                         
    3D34: FC          MOV R4,A                      
    3D35: B4 01 00    CJNE A,#0x01,0x3D38              ; -> 0x3D38
    3D38: E4          CLR A                         
    3D39: 33          RLC A                         
    3D3A: FC          MOV R4,A                      
    3D3B: 5B          ANL A,R3                      
    3D3C: 60 15       JZ 0x3D53                        ; -> loc_3D53
    3D3E: 85 09 7A    MOV 0x7A,0x09                 
    3D41: 85 0A 7B    MOV 0x7B,0x0A                 
    3D44: 85 14 7C    MOV 0x7C,0x14                 
    3D47: 85 17 7D    MOV 0x7D,0x17                 
    3D4A: 75 82 03    MOV DPL(0x82),#0x03           
    3D4D: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3D50: 02 3E 5C    LJMP 0x3E5C                      ; -> 0x3E5C

loc_3D53:
    3D53: 90 4F BF    MOV DPTR,#0x4FBF                 ; mailbox / host-interface register block
    3D56: E4          CLR A                         
    3D57: F0          MOVX @DPTR,A                  
    3D58: E5 15       MOV A,0x15                    
    3D5A: 70 0A       JNZ 0x3D66                       ; -> loc_3D66
    3D5C: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    3D5F: E0          MOVX A,@DPTR                  
    3D60: FB          MOV R3,A                      
    3D61: 70 03       JNZ 0x3D66                       ; -> loc_3D66
    3D63: 02 3E 5C    LJMP 0x3E5C                      ; -> 0x3E5C

loc_3D66:
    3D66: 90 CA 40    MOV DPTR,#0xCA40                 ; register block CA00
    3D69: E0          MOVX A,@DPTR                  
    3D6A: FB          MOV R3,A                      
    3D6B: 20 E1 09    JB ACC.1,0x3D77                  ; -> 0x3D77
    3D6E: 90 CB 40    MOV DPTR,#0xCB40                 ; register CB40
    3D71: E0          MOVX A,@DPTR                  
    3D72: FB          MOV R3,A                      
    3D73: 54 06       ANL A,#0x06                   
    3D75: 70 EF       JNZ 0x3D66                       ; -> loc_3D66
    3D77: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    3D7A: 74 01       MOV A,#0x01                   
    3D7C: F0          MOVX @DPTR,A                  
    3D7D: 75 30 0F    MOV 0x30,#0x0F                
    3D80: 75 31 00    MOV 0x31,#0x00                
    3D83: 75 32 40    MOV 0x32,#0x40                
    3D86: 75 33 10    MOV 0x33,#0x10                
    3D89: 75 34 00    MOV 0x34,#0x00                
    3D8C: 75 35 40    MOV 0x35,#0x40                
    3D8F: 75 2A 02    MOV 0x2A,#0x02                
    3D92: 75 2B 01    MOV 0x2B,#0x01                
    3D95: E4          CLR A                         
    3D96: F5 2C       MOV 0x2C,A                    
    3D98: F5 2D       MOV 0x2D,A                    
    3D9A: 75 2E 01    MOV 0x2E,#0x01                
    3D9D: 75 2F 8F    MOV 0x2F,#0x8F                
    3DA0: 75 82 08    MOV DPL(0x82),#0x08           
    3DA3: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3DA6: 90 CE 51    MOV DPTR,#0xCE51                 ; register CE51
    3DA9: 74 10       MOV A,#0x10                   
    3DAB: F0          MOVX @DPTR,A                  
    3DAC: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    3DAF: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3DB2: E0          MOVX A,@DPTR                  
    3DB3: FB          MOV R3,A                      
    3DB4: 53 03 FE    ANL 0x03,#0xFE                
    3DB7: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3DBA: EB          MOV A,R3                      
    3DBB: F0          MOVX @DPTR,A                  
    3DBC: 75 15 00    MOV 0x15,#0x00                
    3DBF: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    3DC2: E4          CLR A                         
    3DC3: F0          MOVX @DPTR,A                  
    3DC4: 02 3E 5C    LJMP 0x3E5C                      ; -> 0x3E5C

loc_3DC7:
    3DC7: EA          MOV A,R2                      
    3DC8: 60 29       JZ 0x3DF3                        ; -> loc_3DF3
    3DCA: 90 4F B1    MOV DPTR,#0x4FB1                 ; mailbox / host-interface register block
    3DCD: E0          MOVX A,@DPTR                  
    3DCE: FB          MOV R3,A                      
    3DCF: 60 0E       JZ 0x3DDF                        ; -> loc_3DDF
    3DD1: 75 7A 20    MOV 0x7A,#0x20                
    3DD4: 75 7B 28    MOV 0x7B,#0x28                
    3DD7: 75 82 00    MOV DPL(0x82),#0x00           
    3DDA: 12 02 70    LCALL 0x0270                     ; -> sub_0270
    3DDD: 80 EB       SJMP 0x3DCA                      ; -> 0x3DCA

loc_3DDF:
    3DDF: 85 09 7A    MOV 0x7A,0x09                 
    3DE2: 85 0A 7B    MOV 0x7B,0x0A                 
    3DE5: 85 14 7C    MOV 0x7C,0x14                 
    3DE8: 85 17 7D    MOV 0x7D,0x17                 
    3DEB: 75 82 03    MOV DPL(0x82),#0x03           
    3DEE: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3DF1: 80 69       SJMP 0x3E5C                      ; -> 0x3E5C

loc_3DF3:
    3DF3: E5 15       MOV A,0x15                    
    3DF5: 70 07       JNZ 0x3DFE                       ; -> 0x3DFE
    3DF7: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    3DFA: E0          MOVX A,@DPTR                  
    3DFB: FB          MOV R3,A                      
    3DFC: 60 5E       JZ 0x3E5C                        ; -> 0x3E5C
    3DFE: 90 CA 40    MOV DPTR,#0xCA40                 ; register block CA00
    3E01: E0          MOVX A,@DPTR                  
    3E02: FB          MOV R3,A                      
    3E03: 20 E1 09    JB ACC.1,0x3E0F                  ; -> 0x3E0F
    3E06: 90 CB 40    MOV DPTR,#0xCB40                 ; register CB40
    3E09: E0          MOVX A,@DPTR                  
    3E0A: FB          MOV R3,A                      
    3E0B: 54 06       ANL A,#0x06                   
    3E0D: 70 EF       JNZ 0x3DFE                       ; -> 0x3DFE
    3E0F: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    3E12: 74 01       MOV A,#0x01                   
    3E14: F0          MOVX @DPTR,A                  
    3E15: 75 30 0F    MOV 0x30,#0x0F                
    3E18: 75 31 00    MOV 0x31,#0x00                
    3E1B: 75 32 40    MOV 0x32,#0x40                
    3E1E: 75 33 10    MOV 0x33,#0x10                
    3E21: 75 34 00    MOV 0x34,#0x00                
    3E24: 75 35 40    MOV 0x35,#0x40                
    3E27: 75 2A 02    MOV 0x2A,#0x02                
    3E2A: 75 2B 01    MOV 0x2B,#0x01                
    3E2D: E4          CLR A                         
    3E2E: F5 2C       MOV 0x2C,A                    
    3E30: F5 2D       MOV 0x2D,A                    
    3E32: 75 2E 01    MOV 0x2E,#0x01                
    3E35: 75 2F 8F    MOV 0x2F,#0x8F                
    3E38: 75 82 08    MOV DPL(0x82),#0x08           
    3E3B: 12 1A A9    LCALL 0x1AA9                     ; -> sub_1AA9
    3E3E: 90 CE 51    MOV DPTR,#0xCE51                 ; register CE51
    3E41: 74 10       MOV A,#0x10                   
    3E43: F0          MOVX @DPTR,A                  
    3E44: 12 11 D7    LCALL 0x11D7                     ; -> sub_11D7
    3E47: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3E4A: E0          MOVX A,@DPTR                  
    3E4B: FB          MOV R3,A                      
    3E4C: 53 03 FE    ANL 0x03,#0xFE                
    3E4F: 90 D7 6D    MOV DPTR,#0xD76D                 ; register block D766
    3E52: EB          MOV A,R3                      
    3E53: F0          MOVX @DPTR,A                  
    3E54: 75 15 00    MOV 0x15,#0x00                
    3E57: 90 4F E4    MOV DPTR,#0x4FE4                 ; mailbox / host-interface register block
    3E5A: E4          CLR A                         
    3E5B: F0          MOVX @DPTR,A                  
    3E5C: 7A 00       MOV R2,#0x00                  
    3E5E: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3E61:
    3E61: 74 C0       MOV A,#0xC0                   
    3E63: 55 17       ANL A,0x17                    
    3E65: FB          MOV R3,A                      
    3E66: BB C0 19    CJNE R3,#0xC0,0x3E82             ; -> loc_3E82
    3E69: 85 09 7A    MOV 0x7A,0x09                 
    3E6C: 85 0A 7B    MOV 0x7B,0x0A                 
    3E6F: 85 14 7C    MOV 0x7C,0x14                 
    3E72: 85 17 7D    MOV 0x7D,0x17                 
    3E75: 75 82 04    MOV DPL(0x82),#0x04           
    3E78: C0 02       PUSH 0x02                     
    3E7A: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3E7D: D0 02       POP 0x02                      
    3E7F: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3E82:
    3E82: E5 08       MOV A,0x08                    
    3E84: 70 09       JNZ 0x3E8F                       ; -> 0x3E8F
    3E86: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    3E89: E0          MOVX A,@DPTR                  
    3E8A: FB          MOV R3,A                      
    3E8B: 54 0F       ANL A,#0x0F                   
    3E8D: 60 19       JZ 0x3EA8                        ; -> loc_3EA8
    3E8F: 85 09 7A    MOV 0x7A,0x09                 
    3E92: 85 0A 7B    MOV 0x7B,0x0A                 
    3E95: 85 14 7C    MOV 0x7C,0x14                 
    3E98: 75 7D 00    MOV 0x7D,#0x00                
    3E9B: 75 82 0D    MOV DPL(0x82),#0x0D           
    3E9E: C0 02       PUSH 0x02                     
    3EA0: 12 11 F9    LCALL 0x11F9                     ; -> sub_11F9
    3EA3: D0 02       POP 0x02                      
    3EA5: 02 34 79    LJMP 0x3479                      ; -> loc_3479

loc_3EA8:
    3EA8: 90 CC 21    MOV DPTR,#0xCC21                 ; register block CC00
    3EAB: 74 01       MOV A,#0x01                   
    3EAD: F0          MOVX @DPTR,A                  
    3EAE: 02 34 79    LJMP 0x3479                      ; -> loc_3479
    3EB1: 90          DB 0x90                       ; data
    3EB2: 00          DB 0x00                       ; data
    3EB3: 00          DB 0x00                       ; data
    3EB4: 22          DB 0x22                       ; data
    3EB5: 90          DB 0x90                       ; data
    3EB6: 00          DB 0x00                       ; data
    3EB7: 00          DB 0x00                       ; data
    3EB8: 22          DB 0x22                       ; data

sub_3EB9:
    3EB9: 02 2A 03    LJMP 0x2A03                      ; -> loc_2A03

sub_3EBC:
    3EBC: 20 F7 10    JB B.7,0x3ECF                    ; -> 0x3ECF
    3EBF: 30 F6 11    JNB B.6,0x3ED3                   ; -> loc_3ED3
    3EC2: 88 83       MOV 0x83,R0                   
    3EC4: A8 82       MOV R0,0x82                   
    3EC6: 20 F5 07    JB B.5,0x3ED0                    ; -> loc_3ED0
    3EC9: F6          MOV @R0,A                     
    3ECA: A8 83       MOV R0,0x83                   
    3ECC: 75 83 00    MOV DPH(0x83),#0x00           
    3ECF: 22          RET                           

loc_3ED0:
    3ED0: F2          MOVX @R0,A                    
    3ED1: 80 F7       SJMP 0x3ECA                      ; -> 0x3ECA

loc_3ED3:
    3ED3: F0          MOVX @DPTR,A                  
    3ED4: 22          RET                           

sub_3ED5:
    3ED5: 20 F7 14    JB B.7,0x3EEC                    ; -> loc_3EEC
    3ED8: 30 F6 14    JNB B.6,0x3EEF                   ; -> loc_3EEF
    3EDB: 88 83       MOV 0x83,R0                   
    3EDD: A8 82       MOV R0,0x82                   
    3EDF: 20 F5 07    JB B.5,0x3EE9                    ; -> loc_3EE9
    3EE2: E6          MOV A,@R0                     
    3EE3: A8 83       MOV R0,0x83                   
    3EE5: 75 83 00    MOV DPH(0x83),#0x00           
    3EE8: 22          RET                           

loc_3EE9:
    3EE9: E2          MOVX A,@R0                    
    3EEA: 80 F7       SJMP 0x3EE3                      ; -> 0x3EE3

loc_3EEC:
    3EEC: E4          CLR A                         
    3EED: 93          MOVC A,@A+DPTR                
    3EEE: 22          RET                           

loc_3EEF:
    3EEF: E0          MOVX A,@DPTR                  
    3EF0: 22          RET                           

sub_3EF1:
    3EF1: 75 82 00    MOV DPL(0x82),#0x00           
    3EF4: 22          RET                           
    3EF5: 00          DB 0x00                       ; data
    3EF6: 01          DB 0x01                       ; data
