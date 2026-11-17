; ------------------------------------------------------------------
; DP_IN_U_CODE  (Intel Thunderbolt NVM image)
; file 0x0C256-0x12A48, logical 0x0000-0x67F2, entry 0x0200
; recovered: 12890 instructions, 25089 bytes, 0 conflicts, 411 branch targets
; ------------------------------------------------------------------

; --- 0x000-0x1FF image header ---------------------------------------
; 0000: 02 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 |................|
; 0010: 44 50 5F 49 4E 5F 55 5F 43 4F 44 45 00 00 00 00 |DP_IN_U_CODE....|
; 0020: 1F 1F 1F 1F 1F 1E 1E 1E 1E 1E 1D 1D 1D 1D 1C 1C |................|
; 0030: 1C 1C 1C 1C 1C 1B 1B 1B 1B 1A 1A 1A 10 10 10 3B |...............;|
; 0040: 3B 3A 39 38 3A 39 38 37 36 39 38 37 36 38 37 36 |;:98:98769876876|
; 0050: 35 33 31 29 37 36 35 34 36 35 34 27 29 2B 32 32 |531)7654654')+22|
; 0060: 32 32 32 33 33 33 33 34 34 34 34 35 35 35 35 36 |2223333444455556|
; 0070: 36 36 36 36 36 36 36 37 37 37 10 10 10 2A 2A 2B |6666666777...**+|
; 0080: 2C 2D 2B 2C 2D 2E 2C 2D 2E 2F 2D 2E 2F 30 2E 2F |,-+,-.,-./-./0./|
; 0090: 30 31 2F 30 31 32 30 31 32 27 29 2B 31 00 00 00 |01/012012')+1...|
; 00A0: 43 4F 4E 46 49 47 21 F1 C2 4B 65 20 20 00 00 00 |CONFIG!..Ke  ...|
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
    0203: 12 67 CD    LCALL 0x67CD                     ; -> sub_67CD
    0206: 80 FE       SJMP 0x0206                      ; -> 0x0206

loc_0208:
    0208: 75 81 54    MOV SP(0x81),#0x54            
    020B: 12 67 EC    LCALL 0x67EC                     ; -> sub_67EC
    020E: E5 82       MOV A,DPL(0x82)               
    0210: 60 03       JZ 0x0215                        ; -> loc_0215
    0212: 02 02 03    LJMP 0x0203                      ; -> loc_0203

loc_0215:
    0215: 79 00       MOV R1,#0x00                  
    0217: E9          MOV A,R1                      
    0218: 44 00       ORL A,#0x00                   
    021A: 60 1B       JZ 0x0237                        ; -> 0x0237
    021C: 7A 00       MOV R2,#0x00                  
    021E: 90 67 F2    MOV DPTR,#0x67F2              
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
    0237: 75 0F 00    MOV 0x0F,#0x00                
    023A: 75 45 00    MOV 0x45,#0x00                
    023D: 75 46 00    MOV 0x46,#0x00                
    0240: 90 7F 75    MOV DPTR,#0x7F75              
    0243: E4          CLR A                         
    0244: F0          MOVX @DPTR,A                  
    0245: 90 7F 76    MOV DPTR,#0x7F76              
    0248: E4          CLR A                         
    0249: F0          MOVX @DPTR,A                  
    024A: 90 7F 77    MOV DPTR,#0x7F77              
    024D: E4          CLR A                         
    024E: F0          MOVX @DPTR,A                  
    024F: 90 7F 78    MOV DPTR,#0x7F78              
    0252: E4          CLR A                         
    0253: F0          MOVX @DPTR,A                  
    0254: 90 7F 79    MOV DPTR,#0x7F79              
    0257: E4          CLR A                         
    0258: F0          MOVX @DPTR,A                  
    0259: 90 7F 7A    MOV DPTR,#0x7F7A              
    025C: E4          CLR A                         
    025D: F0          MOVX @DPTR,A                  
    025E: 90 7F 7B    MOV DPTR,#0x7F7B              
    0261: E4          CLR A                         
    0262: F0          MOVX @DPTR,A                  
    0263: 90 7F 7C    MOV DPTR,#0x7F7C              
    0266: E4          CLR A                         
    0267: F0          MOVX @DPTR,A                  
    0268: 90 7F 7D    MOV DPTR,#0x7F7D              
    026B: E4          CLR A                         
    026C: F0          MOVX @DPTR,A                  
    026D: 90 7F 7E    MOV DPTR,#0x7F7E              
    0270: E4          CLR A                         
    0271: F0          MOVX @DPTR,A                  
    0272: 90 7F 7F    MOV DPTR,#0x7F7F              
    0275: E4          CLR A                         
    0276: F0          MOVX @DPTR,A                  
    0277: 90 7F 80    MOV DPTR,#0x7F80              
    027A: E4          CLR A                         
    027B: F0          MOVX @DPTR,A                  
    027C: 90 7F 84    MOV DPTR,#0x7F84              
    027F: E4          CLR A                         
    0280: F0          MOVX @DPTR,A                  
    0281: 90 7F 85    MOV DPTR,#0x7F85              
    0284: E4          CLR A                         
    0285: F0          MOVX @DPTR,A                  
    0286: 90 7F 86    MOV DPTR,#0x7F86              
    0289: E4          CLR A                         
    028A: F0          MOVX @DPTR,A                  
    028B: 90 7F 87    MOV DPTR,#0x7F87              
    028E: E4          CLR A                         
    028F: F0          MOVX @DPTR,A                  
    0290: 90 7F 88    MOV DPTR,#0x7F88              
    0293: E4          CLR A                         
    0294: F0          MOVX @DPTR,A                  
    0295: 90 7F 89    MOV DPTR,#0x7F89              
    0298: E4          CLR A                         
    0299: F0          MOVX @DPTR,A                  
    029A: 90 7F 8A    MOV DPTR,#0x7F8A              
    029D: E4          CLR A                         
    029E: F0          MOVX @DPTR,A                  
    029F: 90 7F 8D    MOV DPTR,#0x7F8D              
    02A2: E4          CLR A                         
    02A3: F0          MOVX @DPTR,A                  
    02A4: 90 7F 8E    MOV DPTR,#0x7F8E              
    02A7: E4          CLR A                         
    02A8: F0          MOVX @DPTR,A                  
    02A9: 90 7F 90    MOV DPTR,#0x7F90              
    02AC: E4          CLR A                         
    02AD: F0          MOVX @DPTR,A                  
    02AE: 90 7F 92    MOV DPTR,#0x7F92              
    02B1: E4          CLR A                         
    02B2: F0          MOVX @DPTR,A                  
    02B3: 90 7F 93    MOV DPTR,#0x7F93              
    02B6: E4          CLR A                         
    02B7: F0          MOVX @DPTR,A                  
    02B8: 90 7F 94    MOV DPTR,#0x7F94              
    02BB: E4          CLR A                         
    02BC: F0          MOVX @DPTR,A                  
    02BD: 90 7F 96    MOV DPTR,#0x7F96              
    02C0: E4          CLR A                         
    02C1: F0          MOVX @DPTR,A                  
    02C2: 90 7F 99    MOV DPTR,#0x7F99              
    02C5: E4          CLR A                         
    02C6: F0          MOVX @DPTR,A                  
    02C7: 90 7F 9A    MOV DPTR,#0x7F9A              
    02CA: E4          CLR A                         
    02CB: F0          MOVX @DPTR,A                  
    02CC: 90 7F 9B    MOV DPTR,#0x7F9B              
    02CF: E4          CLR A                         
    02D0: F0          MOVX @DPTR,A                  
    02D1: 90 7F 9C    MOV DPTR,#0x7F9C              
    02D4: E4          CLR A                         
    02D5: F0          MOVX @DPTR,A                  
    02D6: 90 7F 9D    MOV DPTR,#0x7F9D              
    02D9: E4          CLR A                         
    02DA: F0          MOVX @DPTR,A                  
    02DB: 90 7F 9E    MOV DPTR,#0x7F9E              
    02DE: E4          CLR A                         
    02DF: F0          MOVX @DPTR,A                  
    02E0: 90 7F 9F    MOV DPTR,#0x7F9F              
    02E3: E4          CLR A                         
    02E4: F0          MOVX @DPTR,A                  
    02E5: 90 7F A0    MOV DPTR,#0x7FA0              
    02E8: E4          CLR A                         
    02E9: F0          MOVX @DPTR,A                  
    02EA: 90 7F A1    MOV DPTR,#0x7FA1              
    02ED: E4          CLR A                         
    02EE: F0          MOVX @DPTR,A                  
    02EF: 90 7F A2    MOV DPTR,#0x7FA2              
    02F2: E4          CLR A                         
    02F3: F0          MOVX @DPTR,A                  
    02F4: 90 7F A3    MOV DPTR,#0x7FA3              
    02F7: E4          CLR A                         
    02F8: F0          MOVX @DPTR,A                  
    02F9: 90 7F A4    MOV DPTR,#0x7FA4              
    02FC: E4          CLR A                         
    02FD: F0          MOVX @DPTR,A                  
    02FE: 90 7F A5    MOV DPTR,#0x7FA5              
    0301: E4          CLR A                         
    0302: F0          MOVX @DPTR,A                  
    0303: 90 7F A6    MOV DPTR,#0x7FA6              
    0306: E4          CLR A                         
    0307: F0          MOVX @DPTR,A                  
    0308: 90 7F A7    MOV DPTR,#0x7FA7              
    030B: 74 01       MOV A,#0x01                   
    030D: F0          MOVX @DPTR,A                  
    030E: 90 7E A6    MOV DPTR,#0x7EA6              
    0311: E4          CLR A                         
    0312: F0          MOVX @DPTR,A                  
    0313: 90 7E A7    MOV DPTR,#0x7EA7              
    0316: E4          CLR A                         
    0317: F0          MOVX @DPTR,A                  
    0318: 90 7E A8    MOV DPTR,#0x7EA8              
    031B: E4          CLR A                         
    031C: F0          MOVX @DPTR,A                  
    031D: 90 7E A9    MOV DPTR,#0x7EA9              
    0320: E4          CLR A                         
    0321: F0          MOVX @DPTR,A                  
    0322: 90 7E AA    MOV DPTR,#0x7EAA              
    0325: E4          CLR A                         
    0326: F0          MOVX @DPTR,A                  
    0327: 90 7E AB    MOV DPTR,#0x7EAB              
    032A: E4          CLR A                         
    032B: F0          MOVX @DPTR,A                  
    032C: 90 7E AC    MOV DPTR,#0x7EAC              
    032F: E4          CLR A                         
    0330: F0          MOVX @DPTR,A                  
    0331: 90 7E AD    MOV DPTR,#0x7EAD              
    0334: E4          CLR A                         
    0335: F0          MOVX @DPTR,A                  
    0336: 90 7E AF    MOV DPTR,#0x7EAF              
    0339: E4          CLR A                         
    033A: F0          MOVX @DPTR,A                  
    033B: 90 7E B0    MOV DPTR,#0x7EB0              
    033E: E4          CLR A                         
    033F: F0          MOVX @DPTR,A                  
    0340: A3          INC DPTR                      
    0341: F0          MOVX @DPTR,A                  
    0342: A3          INC DPTR                      
    0343: F0          MOVX @DPTR,A                  
    0344: A3          INC DPTR                      
    0345: F0          MOVX @DPTR,A                  
    0346: 90 7E B4    MOV DPTR,#0x7EB4              
    0349: E4          CLR A                         
    034A: F0          MOVX @DPTR,A                  
    034B: 90 7E B5    MOV DPTR,#0x7EB5              
    034E: E4          CLR A                         
    034F: F0          MOVX @DPTR,A                  
    0350: A3          INC DPTR                      
    0351: F0          MOVX @DPTR,A                  
    0352: 90 7E B8    MOV DPTR,#0x7EB8              
    0355: E4          CLR A                         
    0356: F0          MOVX @DPTR,A                  
    0357: 90 7E B9    MOV DPTR,#0x7EB9              
    035A: E4          CLR A                         
    035B: F0          MOVX @DPTR,A                  
    035C: 90 7F 74    MOV DPTR,#0x7F74              
    035F: E4          CLR A                         
    0360: F0          MOVX @DPTR,A                  
    0361: 90 7F A8    MOV DPTR,#0x7FA8              
    0364: E4          CLR A                         
    0365: F0          MOVX @DPTR,A                  
    0366: 90 7F A9    MOV DPTR,#0x7FA9              
    0369: E4          CLR A                         
    036A: F0          MOVX @DPTR,A                  
    036B: 90 7F AA    MOV DPTR,#0x7FAA              
    036E: E4          CLR A                         
    036F: F0          MOVX @DPTR,A                  
    0370: 90 7F AB    MOV DPTR,#0x7FAB              
    0373: E4          CLR A                         
    0374: F0          MOVX @DPTR,A                  
    0375: 90 7F AE    MOV DPTR,#0x7FAE              
    0378: E4          CLR A                         
    0379: F0          MOVX @DPTR,A                  
    037A: 90 7F AF    MOV DPTR,#0x7FAF              
    037D: E4          CLR A                         
    037E: F0          MOVX @DPTR,A                  
    037F: 90 7F B0    MOV DPTR,#0x7FB0              
    0382: E4          CLR A                         
    0383: F0          MOVX @DPTR,A                  
    0384: 90 7F B1    MOV DPTR,#0x7FB1              
    0387: E4          CLR A                         
    0388: F0          MOVX @DPTR,A                  
    0389: 90 7F B2    MOV DPTR,#0x7FB2              
    038C: E4          CLR A                         
    038D: F0          MOVX @DPTR,A                  
    038E: 90 7F B3    MOV DPTR,#0x7FB3              
    0391: E4          CLR A                         
    0392: F0          MOVX @DPTR,A                  
    0393: 90 7F B4    MOV DPTR,#0x7FB4              
    0396: E4          CLR A                         
    0397: F0          MOVX @DPTR,A                  
    0398: 90 7F B5    MOV DPTR,#0x7FB5              
    039B: E4          CLR A                         
    039C: F0          MOVX @DPTR,A                  
    039D: 90 7F B6    MOV DPTR,#0x7FB6              
    03A0: E4          CLR A                         
    03A1: F0          MOVX @DPTR,A                  
    03A2: 90 7F B7    MOV DPTR,#0x7FB7              
    03A5: E4          CLR A                         
    03A6: F0          MOVX @DPTR,A                  
    03A7: 90 7F B8    MOV DPTR,#0x7FB8              
    03AA: E4          CLR A                         
    03AB: F0          MOVX @DPTR,A                  
    03AC: 90 7F B9    MOV DPTR,#0x7FB9              
    03AF: E4          CLR A                         
    03B0: F0          MOVX @DPTR,A                  
    03B1: 90 7F BA    MOV DPTR,#0x7FBA              
    03B4: E4          CLR A                         
    03B5: F0          MOVX @DPTR,A                  
    03B6: 90 7F BB    MOV DPTR,#0x7FBB              
    03B9: E4          CLR A                         
    03BA: F0          MOVX @DPTR,A                  
    03BB: 90 7F BC    MOV DPTR,#0x7FBC              
    03BE: E4          CLR A                         
    03BF: F0          MOVX @DPTR,A                  
    03C0: 90 7F BD    MOV DPTR,#0x7FBD              
    03C3: E4          CLR A                         
    03C4: F0          MOVX @DPTR,A                  
    03C5: 90 7F BE    MOV DPTR,#0x7FBE              
    03C8: E4          CLR A                         
    03C9: F0          MOVX @DPTR,A                  
    03CA: 90 7F BF    MOV DPTR,#0x7FBF              
    03CD: E4          CLR A                         
    03CE: F0          MOVX @DPTR,A                  
    03CF: 90 7F DD    MOV DPTR,#0x7FDD              
    03D2: E4          CLR A                         
    03D3: F0          MOVX @DPTR,A                  
    03D4: 90 7F DE    MOV DPTR,#0x7FDE              
    03D7: E4          CLR A                         
    03D8: F0          MOVX @DPTR,A                  
    03D9: 90 7F DF    MOV DPTR,#0x7FDF              
    03DC: E4          CLR A                         
    03DD: F0          MOVX @DPTR,A                  
    03DE: 90 7F E0    MOV DPTR,#0x7FE0              
    03E1: E4          CLR A                         
    03E2: F0          MOVX @DPTR,A                  
    03E3: 90 7F E1    MOV DPTR,#0x7FE1              
    03E6: E4          CLR A                         
    03E7: F0          MOVX @DPTR,A                  
    03E8: 90 7F E2    MOV DPTR,#0x7FE2              
    03EB: E4          CLR A                         
    03EC: F0          MOVX @DPTR,A                  
    03ED: 90 7F E3    MOV DPTR,#0x7FE3              
    03F0: E4          CLR A                         
    03F1: F0          MOVX @DPTR,A                  
    03F2: 90 7F E4    MOV DPTR,#0x7FE4              
    03F5: E4          CLR A                         
    03F6: F0          MOVX @DPTR,A                  
    03F7: 90 7F E5    MOV DPTR,#0x7FE5              
    03FA: E4          CLR A                         
    03FB: F0          MOVX @DPTR,A                  
    03FC: 90 7F E6    MOV DPTR,#0x7FE6              
    03FF: E4          CLR A                         
    0400: F0          MOVX @DPTR,A                  
    0401: 90 7F E7    MOV DPTR,#0x7FE7              
    0404: E4          CLR A                         
    0405: F0          MOVX @DPTR,A                  
    0406: 90 7F EC    MOV DPTR,#0x7FEC              
    0409: E4          CLR A                         
    040A: F0          MOVX @DPTR,A                  
    040B: 90 7F ED    MOV DPTR,#0x7FED              
    040E: E4          CLR A                         
    040F: F0          MOVX @DPTR,A                  
    0410: 90 7F EE    MOV DPTR,#0x7FEE              
    0413: E4          CLR A                         
    0414: F0          MOVX @DPTR,A                  
    0415: 90 7F EF    MOV DPTR,#0x7FEF              
    0418: E4          CLR A                         
    0419: F0          MOVX @DPTR,A                  
    041A: 90 7F F0    MOV DPTR,#0x7FF0              
    041D: E4          CLR A                         
    041E: F0          MOVX @DPTR,A                  
    041F: 90 7F F1    MOV DPTR,#0x7FF1              
    0422: E4          CLR A                         
    0423: F0          MOVX @DPTR,A                  
    0424: 90 7F F2    MOV DPTR,#0x7FF2              
    0427: E4          CLR A                         
    0428: F0          MOVX @DPTR,A                  
    0429: 90 7F F3    MOV DPTR,#0x7FF3              
    042C: E4          CLR A                         
    042D: F0          MOVX @DPTR,A                  
    042E: 90 7F F4    MOV DPTR,#0x7FF4              
    0431: E4          CLR A                         
    0432: F0          MOVX @DPTR,A                  
    0433: 90 7F F9    MOV DPTR,#0x7FF9              
    0436: E4          CLR A                         
    0437: F0          MOVX @DPTR,A                  
    0438: 90 7F FA    MOV DPTR,#0x7FFA              
    043B: E4          CLR A                         
    043C: F0          MOVX @DPTR,A                  
    043D: 90 7F FB    MOV DPTR,#0x7FFB              
    0440: E4          CLR A                         
    0441: F0          MOVX @DPTR,A                  
    0442: 90 7F FC    MOV DPTR,#0x7FFC              
    0445: E4          CLR A                         
    0446: F0          MOVX @DPTR,A                  
    0447: 90 7F FF    MOV DPTR,#0x7FFF              
    044A: E4          CLR A                         
    044B: F0          MOVX @DPTR,A                  
    044C: 02 02 03    LJMP 0x0203                      ; -> loc_0203

sub_044F:
    044F: AA 82       MOV R2,0x82                   
    0451: 90 00 A9    MOV DPTR,#0x00A9              
    0454: E4          CLR A                         
    0455: 93          MOVC A,@A+DPTR                
    0456: FB          MOV R3,A                      
    0457: E5 50       MOV A,0x50                    
    0459: 5B          ANL A,R3                      
    045A: 70 01       JNZ 0x045D                       ; -> loc_045D
    045C: 22          RET                           

loc_045D:
    045D: EA          MOV A,R2                      
    045E: 70 09       JNZ 0x0469                       ; -> loc_0469
    0460: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    0463: E0          MOVX A,@DPTR                  
    0464: FA          MOV R2,A                      
    0465: B5 51 01    CJNE A,0x51,0x0469               ; -> loc_0469
    0468: 22          RET                           

loc_0469:
    0469: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    046C: E5 51       MOV A,0x51                    
    046E: F0          MOVX @DPTR,A                  
    046F: 90 00 A6    MOV DPTR,#0x00A6              
    0472: E4          CLR A                         
    0473: 93          MOVC A,@A+DPTR                
    0474: FA          MOV R2,A                      
    0475: 30 E0 57    JNB ACC.0,0x04CF                 ; -> 0x04CF
    0478: 90 00 A8    MOV DPTR,#0x00A8              
    047B: E4          CLR A                         
    047C: 93          MOVC A,@A+DPTR                
    047D: FA          MOV R2,A                      
    047E: 20 E4 28    JB ACC.4,0x04A9                  ; -> loc_04A9
    0481: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    0484: E0          MOVX A,@DPTR                  
    0485: FA          MOV R2,A                      
    0486: BA 80 00    CJNE R2,#0x80,0x0489             ; -> 0x0489
    0489: 50 44       JNC 0x04CF                       ; -> 0x04CF
    048B: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    048E: E0          MOVX A,@DPTR                  
    048F: FA          MOV R2,A                      
    0490: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    0493: E0          MOVX A,@DPTR                  
    0494: 24 01       ADD A,#0x01                   
    0496: F0          MOVX @DPTR,A                  
    0497: EA          MOV A,R2                      
    0498: 24 27       ADD A,#0x27                   
    049A: FA          MOV R2,A                      
    049B: E4          CLR A                         
    049C: 34 01       ADDC A,#0x01                  
    049E: FB          MOV R3,A                      
    049F: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    04A2: E0          MOVX A,@DPTR                  
    04A3: 8A 82       MOV 0x82,R2                   
    04A5: 8B 83       MOV 0x83,R3                   
    04A7: F0          MOVX @DPTR,A                  
    04A8: 22          RET                           

loc_04A9:
    04A9: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    04AC: E0          MOVX A,@DPTR                  
    04AD: FA          MOV R2,A                      
    04AE: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    04B1: E0          MOVX A,@DPTR                  
    04B2: 24 01       ADD A,#0x01                   
    04B4: F0          MOVX @DPTR,A                  
    04B5: EA          MOV A,R2                      
    04B6: 24 27       ADD A,#0x27                   
    04B8: FA          MOV R2,A                      
    04B9: E4          CLR A                         
    04BA: 34 01       ADDC A,#0x01                  
    04BC: FB          MOV R3,A                      
    04BD: 90 C8 51    MOV DPTR,#0xC851                 ; control + status register block
    04C0: E0          MOVX A,@DPTR                  
    04C1: FC          MOV R4,A                      
    04C2: 8A 82       MOV 0x82,R2                   
    04C4: 8B 83       MOV 0x83,R3                   
    04C6: F0          MOVX @DPTR,A                  
    04C7: 90 01 25    MOV DPTR,#0x0125                 ; internal RAM counters
    04CA: E0          MOVX A,@DPTR                  
    04CB: FA          MOV R2,A                      
    04CC: 54 7F       ANL A,#0x7F                   
    04CE: F0          MOVX @DPTR,A                  
    04CF: 22          RET                           

sub_04D0:
    04D0: 75 50 10    MOV 0x50,#0x10                
    04D3: 75 51 0F    MOV 0x51,#0x0F                
    04D6: 75 82 00    MOV DPL(0x82),#0x00           
    04D9: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    04DC: 75 50 10    MOV 0x50,#0x10                
    04DF: 75 51 68    MOV 0x51,#0x68                
    04E2: 75 82 00    MOV DPL(0x82),#0x00           
    04E5: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    04E8: 75 50 10    MOV 0x50,#0x10                
    04EB: 75 51 08    MOV 0x51,#0x08                
    04EE: 75 82 01    MOV DPL(0x82),#0x01           
    04F1: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    04F4: 90 D6 02    MOV DPTR,#0xD602              
    04F7: E0          MOVX A,@DPTR                  
    04F8: F5 51       MOV 0x51,A                    
    04FA: 75 50 10    MOV 0x50,#0x10                
    04FD: 75 82 01    MOV DPL(0x82),#0x01           
    0500: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    0503: 90 D6 03    MOV DPTR,#0xD603              
    0506: E0          MOVX A,@DPTR                  
    0507: F5 51       MOV 0x51,A                    
    0509: 75 50 10    MOV 0x50,#0x10                
    050C: 75 82 01    MOV DPL(0x82),#0x01           
    050F: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    0512: 90 D6 82    MOV DPTR,#0xD682              
    0515: E0          MOVX A,@DPTR                  
    0516: F5 51       MOV 0x51,A                    
    0518: 75 50 10    MOV 0x50,#0x10                
    051B: 75 82 01    MOV DPL(0x82),#0x01           
    051E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    0521: 90 D6 83    MOV DPTR,#0xD683              
    0524: E0          MOVX A,@DPTR                  
    0525: F5 51       MOV 0x51,A                    
    0527: 75 50 10    MOV 0x50,#0x10                
    052A: 75 82 01    MOV DPL(0x82),#0x01           
    052D: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    0530: 90 D7 02    MOV DPTR,#0xD702              
    0533: E0          MOVX A,@DPTR                  
    0534: F5 51       MOV 0x51,A                    
    0536: 75 50 10    MOV 0x50,#0x10                
    0539: 75 82 01    MOV DPL(0x82),#0x01           
    053C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    053F: 90 D7 03    MOV DPTR,#0xD703              
    0542: E0          MOVX A,@DPTR                  
    0543: F5 51       MOV 0x51,A                    
    0545: 75 50 10    MOV 0x50,#0x10                
    0548: 75 82 01    MOV DPL(0x82),#0x01           
    054B: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    054E: 90 D7 82    MOV DPTR,#0xD782              
    0551: E0          MOVX A,@DPTR                  
    0552: F5 51       MOV 0x51,A                    
    0554: 75 50 10    MOV 0x50,#0x10                
    0557: 75 82 01    MOV DPL(0x82),#0x01           
    055A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    055D: 90 D7 83    MOV DPTR,#0xD783              
    0560: E0          MOVX A,@DPTR                  
    0561: F5 51       MOV 0x51,A                    
    0563: 75 50 10    MOV 0x50,#0x10                
    0566: 75 82 01    MOV DPL(0x82),#0x01           
    0569: 02 04 4F    LJMP 0x044F                      ; -> sub_044F

sub_056C:
    056C: 90 7E AA    MOV DPTR,#0x7EAA              
    056F: E4          CLR A                         
    0570: F0          MOVX @DPTR,A                  
    0571: 90 7E AF    MOV DPTR,#0x7EAF              
    0574: F0          MOVX @DPTR,A                  
    0575: 90 7E B4    MOV DPTR,#0x7EB4              
    0578: 74 02       MOV A,#0x02                   
    057A: F0          MOVX @DPTR,A                  
    057B: 90 7E B5    MOV DPTR,#0x7EB5              
    057E: E4          CLR A                         
    057F: F0          MOVX @DPTR,A                  
    0580: A3          INC DPTR                      
    0581: F0          MOVX @DPTR,A                  
    0582: 90 7E B0    MOV DPTR,#0x7EB0              
    0585: E4          CLR A                         
    0586: F0          MOVX @DPTR,A                  
    0587: A3          INC DPTR                      
    0588: F0          MOVX @DPTR,A                  
    0589: A3          INC DPTR                      
    058A: F0          MOVX @DPTR,A                  
    058B: A3          INC DPTR                      
    058C: F0          MOVX @DPTR,A                  
    058D: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    0590: E0          MOVX A,@DPTR                  
    0591: FA          MOV R2,A                      
    0592: 53 02 3F    ANL 0x02,#0x3F                
    0595: BA 05 02    CJNE R2,#0x05,0x059A             ; -> loc_059A
    0598: 80 0A       SJMP 0x05A4                      ; -> loc_05A4

loc_059A:
    059A: BA 09 02    CJNE R2,#0x09,0x059F             ; -> loc_059F
    059D: 80 05       SJMP 0x05A4                      ; -> loc_05A4

loc_059F:
    059F: BA 0A 1A    CJNE R2,#0x0A,0x05BC             ; -> loc_05BC
    05A2: 80 0C       SJMP 0x05B0                      ; -> loc_05B0

loc_05A4:
    05A4: 90 7E B5    MOV DPTR,#0x7EB5              
    05A7: 74 C7       MOV A,#0xC7                   
    05A9: F0          MOVX @DPTR,A                  
    05AA: A3          INC DPTR                      
    05AB: 74 01       MOV A,#0x01                   
    05AD: F0          MOVX @DPTR,A                  
    05AE: 80 0D       SJMP 0x05BD                      ; -> loc_05BD

loc_05B0:
    05B0: 90 7E B5    MOV DPTR,#0x7EB5              
    05B3: 74 C8       MOV A,#0xC8                   
    05B5: F0          MOVX @DPTR,A                  
    05B6: A3          INC DPTR                      
    05B7: 74 01       MOV A,#0x01                   
    05B9: F0          MOVX @DPTR,A                  
    05BA: 80 01       SJMP 0x05BD                      ; -> loc_05BD

loc_05BC:
    05BC: 22          RET                           

loc_05BD:
    05BD: 75 82 00    MOV DPL(0x82),#0x00           
    05C0: 12 06 EE    LCALL 0x06EE                     ; -> sub_06EE
    05C3: 90 7E B0    MOV DPTR,#0x7EB0              
    05C6: E0          MOVX A,@DPTR                  
    05C7: FA          MOV R2,A                      
    05C8: A3          INC DPTR                      
    05C9: E0          MOVX A,@DPTR                  
    05CA: FB          MOV R3,A                      
    05CB: A3          INC DPTR                      
    05CC: E0          MOVX A,@DPTR                  
    05CD: FC          MOV R4,A                      
    05CE: A3          INC DPTR                      
    05CF: E0          MOVX A,@DPTR                  
    05D0: FD          MOV R5,A                      
    05D1: 30 E7 06    JNB ACC.7,0x05DA                 ; -> 0x05DA
    05D4: 90 7E AA    MOV DPTR,#0x7EAA              
    05D7: 74 01       MOV A,#0x01                   
    05D9: F0          MOVX @DPTR,A                  
    05DA: 22          RET                           

sub_05DB:
    05DB: AA 82       MOV R2,0x82                   
    05DD: 90 7E AF    MOV DPTR,#0x7EAF              
    05E0: E4          CLR A                         
    05E1: F0          MOVX @DPTR,A                  
    05E2: 90 7E B4    MOV DPTR,#0x7EB4              
    05E5: 74 02       MOV A,#0x02                   
    05E7: F0          MOVX @DPTR,A                  
    05E8: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    05EB: E0          MOVX A,@DPTR                  
    05EC: FB          MOV R3,A                      
    05ED: 90 7F ED    MOV DPTR,#0x7FED              
    05F0: 74 3F       MOV A,#0x3F                   
    05F2: 5B          ANL A,R3                      
    05F3: F0          MOVX @DPTR,A                  
    05F4: 90 7F ED    MOV DPTR,#0x7FED              
    05F7: E0          MOVX A,@DPTR                  
    05F8: FB          MOV R3,A                      
    05F9: BB 05 02    CJNE R3,#0x05,0x05FE             ; -> loc_05FE
    05FC: 80 0A       SJMP 0x0608                      ; -> loc_0608

loc_05FE:
    05FE: BB 09 02    CJNE R3,#0x09,0x0603             ; -> loc_0603
    0601: 80 05       SJMP 0x0608                      ; -> loc_0608

loc_0603:
    0603: BB 0A 1A    CJNE R3,#0x0A,0x0620             ; -> loc_0620
    0606: 80 0C       SJMP 0x0614                      ; -> loc_0614

loc_0608:
    0608: 90 7E B5    MOV DPTR,#0x7EB5              
    060B: 74 C7       MOV A,#0xC7                   
    060D: F0          MOVX @DPTR,A                  
    060E: A3          INC DPTR                      
    060F: 74 01       MOV A,#0x01                   
    0611: F0          MOVX @DPTR,A                  
    0612: 80 0D       SJMP 0x0621                      ; -> loc_0621

loc_0614:
    0614: 90 7E B5    MOV DPTR,#0x7EB5              
    0617: 74 C8       MOV A,#0xC8                   
    0619: F0          MOVX @DPTR,A                  
    061A: A3          INC DPTR                      
    061B: 74 01       MOV A,#0x01                   
    061D: F0          MOVX @DPTR,A                  
    061E: 80 01       SJMP 0x0621                      ; -> loc_0621

loc_0620:
    0620: 22          RET                           

loc_0621:
    0621: 75 82 00    MOV DPL(0x82),#0x00           
    0624: C0 02       PUSH 0x02                     
    0626: 12 06 EE    LCALL 0x06EE                     ; -> sub_06EE
    0629: D0 02       POP 0x02                      
    062B: EA          MOV A,R2                      
    062C: 70 1F       JNZ 0x064D                       ; -> loc_064D
    062E: 90 7E B0    MOV DPTR,#0x7EB0              
    0631: E0          MOVX A,@DPTR                  
    0632: FB          MOV R3,A                      
    0633: A3          INC DPTR                      
    0634: E0          MOVX A,@DPTR                  
    0635: FC          MOV R4,A                      
    0636: A3          INC DPTR                      
    0637: E0          MOVX A,@DPTR                  
    0638: FD          MOV R5,A                      
    0639: A3          INC DPTR                      
    063A: E0          MOVX A,@DPTR                  
    063B: FE          MOV R6,A                      
    063C: 90 7E B0    MOV DPTR,#0x7EB0              
    063F: 74 FF       MOV A,#0xFF                   
    0641: F0          MOVX @DPTR,A                  
    0642: A3          INC DPTR                      
    0643: EC          MOV A,R4                      
    0644: F0          MOVX @DPTR,A                  
    0645: A3          INC DPTR                      
    0646: ED          MOV A,R5                      
    0647: F0          MOVX @DPTR,A                  
    0648: A3          INC DPTR                      
    0649: EE          MOV A,R6                      
    064A: F0          MOVX @DPTR,A                  
    064B: 80 1C       SJMP 0x0669                      ; -> 0x0669

loc_064D:
    064D: 90 7E B0    MOV DPTR,#0x7EB0              
    0650: E0          MOVX A,@DPTR                  
    0651: FB          MOV R3,A                      
    0652: A3          INC DPTR                      
    0653: E0          MOVX A,@DPTR                  
    0654: FC          MOV R4,A                      
    0655: A3          INC DPTR                      
    0656: E0          MOVX A,@DPTR                  
    0657: FD          MOV R5,A                      
    0658: A3          INC DPTR                      
    0659: E0          MOVX A,@DPTR                  
    065A: FE          MOV R6,A                      
    065B: 90 7E B0    MOV DPTR,#0x7EB0              
    065E: E4          CLR A                         
    065F: F0          MOVX @DPTR,A                  
    0660: A3          INC DPTR                      
    0661: EC          MOV A,R4                      
    0662: F0          MOVX @DPTR,A                  
    0663: A3          INC DPTR                      
    0664: ED          MOV A,R5                      
    0665: F0          MOVX @DPTR,A                  
    0666: A3          INC DPTR                      
    0667: EE          MOV A,R6                      
    0668: F0          MOVX @DPTR,A                  
    0669: 75 82 01    MOV DPL(0x82),#0x01           
    066C: C0 02       PUSH 0x02                     
    066E: 12 06 EE    LCALL 0x06EE                     ; -> sub_06EE
    0671: D0 02       POP 0x02                      
    0673: 90 7F ED    MOV DPTR,#0x7FED              
    0676: E0          MOVX A,@DPTR                  
    0677: FB          MOV R3,A                      
    0678: BB 05 02    CJNE R3,#0x05,0x067D             ; -> loc_067D
    067B: 80 0A       SJMP 0x0687                      ; -> loc_0687

loc_067D:
    067D: BB 09 02    CJNE R3,#0x09,0x0682             ; -> loc_0682
    0680: 80 05       SJMP 0x0687                      ; -> loc_0687

loc_0682:
    0682: BB 0A 1A    CJNE R3,#0x0A,0x069F             ; -> loc_069F
    0685: 80 0C       SJMP 0x0693                      ; -> loc_0693

loc_0687:
    0687: 90 7E B5    MOV DPTR,#0x7EB5              
    068A: 74 C7       MOV A,#0xC7                   
    068C: F0          MOVX @DPTR,A                  
    068D: A3          INC DPTR                      
    068E: 74 02       MOV A,#0x02                   
    0690: F0          MOVX @DPTR,A                  
    0691: 80 0D       SJMP 0x06A0                      ; -> loc_06A0

loc_0693:
    0693: 90 7E B5    MOV DPTR,#0x7EB5              
    0696: 74 C8       MOV A,#0xC8                   
    0698: F0          MOVX @DPTR,A                  
    0699: A3          INC DPTR                      
    069A: 74 02       MOV A,#0x02                   
    069C: F0          MOVX @DPTR,A                  
    069D: 80 01       SJMP 0x06A0                      ; -> loc_06A0

loc_069F:
    069F: 22          RET                           

loc_06A0:
    06A0: 75 82 00    MOV DPL(0x82),#0x00           
    06A3: C0 02       PUSH 0x02                     
    06A5: 12 06 EE    LCALL 0x06EE                     ; -> sub_06EE
    06A8: D0 02       POP 0x02                      
    06AA: EA          MOV A,R2                      
    06AB: 70 1F       JNZ 0x06CC                       ; -> loc_06CC
    06AD: 90 7E B0    MOV DPTR,#0x7EB0              
    06B0: E0          MOVX A,@DPTR                  
    06B1: FA          MOV R2,A                      
    06B2: A3          INC DPTR                      
    06B3: E0          MOVX A,@DPTR                  
    06B4: FB          MOV R3,A                      
    06B5: A3          INC DPTR                      
    06B6: E0          MOVX A,@DPTR                  
    06B7: FC          MOV R4,A                      
    06B8: A3          INC DPTR                      
    06B9: E0          MOVX A,@DPTR                  
    06BA: FD          MOV R5,A                      
    06BB: 90 7E B0    MOV DPTR,#0x7EB0              
    06BE: 74 FF       MOV A,#0xFF                   
    06C0: F0          MOVX @DPTR,A                  
    06C1: A3          INC DPTR                      
    06C2: EB          MOV A,R3                      
    06C3: F0          MOVX @DPTR,A                  
    06C4: A3          INC DPTR                      
    06C5: EC          MOV A,R4                      
    06C6: F0          MOVX @DPTR,A                  
    06C7: A3          INC DPTR                      
    06C8: ED          MOV A,R5                      
    06C9: F0          MOVX @DPTR,A                  
    06CA: 80 1C       SJMP 0x06E8                      ; -> 0x06E8

loc_06CC:
    06CC: 90 7E B0    MOV DPTR,#0x7EB0              
    06CF: E0          MOVX A,@DPTR                  
    06D0: FA          MOV R2,A                      
    06D1: A3          INC DPTR                      
    06D2: E0          MOVX A,@DPTR                  
    06D3: FB          MOV R3,A                      
    06D4: A3          INC DPTR                      
    06D5: E0          MOVX A,@DPTR                  
    06D6: FC          MOV R4,A                      
    06D7: A3          INC DPTR                      
    06D8: E0          MOVX A,@DPTR                  
    06D9: FD          MOV R5,A                      
    06DA: 90 7E B0    MOV DPTR,#0x7EB0              
    06DD: E4          CLR A                         
    06DE: F0          MOVX @DPTR,A                  
    06DF: A3          INC DPTR                      
    06E0: EB          MOV A,R3                      
    06E1: F0          MOVX @DPTR,A                  
    06E2: A3          INC DPTR                      
    06E3: EC          MOV A,R4                      
    06E4: F0          MOVX @DPTR,A                  
    06E5: A3          INC DPTR                      
    06E6: ED          MOV A,R5                      
    06E7: F0          MOVX @DPTR,A                  
    06E8: 75 82 01    MOV DPL(0x82),#0x01           
    06EB: 02 06 EE    LJMP 0x06EE                      ; -> sub_06EE

sub_06EE:
    06EE: AA 82       MOV R2,0x82                   
    06F0: 75 50 20    MOV 0x50,#0x20                
    06F3: 75 51 2E    MOV 0x51,#0x2E                
    06F6: 75 82 00    MOV DPL(0x82),#0x00           
    06F9: C0 02       PUSH 0x02                     
    06FB: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    06FE: D0 02       POP 0x02                      
    0700: 90 7E B5    MOV DPTR,#0x7EB5              
    0703: E0          MOVX A,@DPTR                  
    0704: FB          MOV R3,A                      
    0705: A3          INC DPTR                      
    0706: E0          MOVX A,@DPTR                  
    0707: 90 C8 10    MOV DPTR,#0xC810                 ; control + status register block
    070A: EB          MOV A,R3                      
    070B: F0          MOVX @DPTR,A                  
    070C: 90 7E B5    MOV DPTR,#0x7EB5              
    070F: E0          MOVX A,@DPTR                  
    0710: A3          INC DPTR                      
    0711: E0          MOVX A,@DPTR                  
    0712: 90 C8 11    MOV DPTR,#0xC811                 ; control + status register block
    0715: F0          MOVX @DPTR,A                  
    0716: 90 7E B4    MOV DPTR,#0x7EB4              
    0719: E0          MOVX A,@DPTR                  
    071A: 03          RR A                          
    071B: 03          RR A                          
    071C: 54 C0       ANL A,#0xC0                   
    071E: FB          MOV R3,A                      
    071F: 90 7E AF    MOV DPTR,#0x7EAF              
    0722: E0          MOVX A,@DPTR                  
    0723: FC          MOV R4,A                      
    0724: 42 03       ORL 0x03,A                    
    0726: 90 C8 12    MOV DPTR,#0xC812                 ; control + status register block
    0729: EB          MOV A,R3                      
    072A: F0          MOVX @DPTR,A                  
    072B: EA          MOV A,R2                      
    072C: 60 4E       JZ 0x077C                        ; -> loc_077C
    072E: 90 7E B0    MOV DPTR,#0x7EB0              
    0731: E0          MOVX A,@DPTR                  
    0732: FB          MOV R3,A                      
    0733: A3          INC DPTR                      
    0734: E0          MOVX A,@DPTR                  
    0735: A3          INC DPTR                      
    0736: E0          MOVX A,@DPTR                  
    0737: A3          INC DPTR                      
    0738: E0          MOVX A,@DPTR                  
    0739: 90 C8 14    MOV DPTR,#0xC814                 ; control + status register block
    073C: EB          MOV A,R3                      
    073D: F0          MOVX @DPTR,A                  
    073E: 90 7E B0    MOV DPTR,#0x7EB0              
    0741: E0          MOVX A,@DPTR                  
    0742: A3          INC DPTR                      
    0743: E0          MOVX A,@DPTR                  
    0744: FC          MOV R4,A                      
    0745: A3          INC DPTR                      
    0746: E0          MOVX A,@DPTR                  
    0747: A3          INC DPTR                      
    0748: E0          MOVX A,@DPTR                  
    0749: 8C 03       MOV 0x03,R4                   
    074B: 90 C8 15    MOV DPTR,#0xC815                 ; control + status register block
    074E: EB          MOV A,R3                      
    074F: F0          MOVX @DPTR,A                  
    0750: 90 7E B0    MOV DPTR,#0x7EB0              
    0753: E0          MOVX A,@DPTR                  
    0754: A3          INC DPTR                      
    0755: E0          MOVX A,@DPTR                  
    0756: A3          INC DPTR                      
    0757: E0          MOVX A,@DPTR                  
    0758: FD          MOV R5,A                      
    0759: A3          INC DPTR                      
    075A: E0          MOVX A,@DPTR                  
    075B: 8D 03       MOV 0x03,R5                   
    075D: 90 C8 16    MOV DPTR,#0xC816                 ; control + status register block
    0760: EB          MOV A,R3                      
    0761: F0          MOVX @DPTR,A                  
    0762: 90 7E B0    MOV DPTR,#0x7EB0              
    0765: E0          MOVX A,@DPTR                  
    0766: A3          INC DPTR                      
    0767: E0          MOVX A,@DPTR                  
    0768: FC          MOV R4,A                      
    0769: A3          INC DPTR                      
    076A: E0          MOVX A,@DPTR                  
    076B: FD          MOV R5,A                      
    076C: A3          INC DPTR                      
    076D: E0          MOVX A,@DPTR                  
    076E: FE          MOV R6,A                      
    076F: FB          MOV R3,A                      
    0770: 90 C8 17    MOV DPTR,#0xC817                 ; control + status register block
    0773: F0          MOVX @DPTR,A                  
    0774: 90 C8 13    MOV DPTR,#0xC813                 ; control + status register block
    0777: 74 81       MOV A,#0x81                   
    0779: F0          MOVX @DPTR,A                  
    077A: 80 06       SJMP 0x0782                      ; -> 0x0782

loc_077C:
    077C: 90 C8 13    MOV DPTR,#0xC813                 ; control + status register block
    077F: 74 80       MOV A,#0x80                   
    0781: F0          MOVX @DPTR,A                  
    0782: 90 C8 13    MOV DPTR,#0xC813                 ; control + status register block
    0785: E0          MOVX A,@DPTR                  
    0786: FB          MOV R3,A                      
    0787: 20 E7 F8    JB ACC.7,0x0782                  ; -> 0x0782
    078A: EA          MOV A,R2                      
    078B: 70 5B       JNZ 0x07E8                       ; -> 0x07E8
    078D: 90 C8 1B    MOV DPTR,#0xC81B                 ; control + status register block
    0790: E0          MOVX A,@DPTR                  
    0791: FD          MOV R5,A                      
    0792: 7A 00       MOV R2,#0x00                  
    0794: 7B 00       MOV R3,#0x00                  
    0796: 7C 00       MOV R4,#0x00                  
    0798: 90 C8 1A    MOV DPTR,#0xC81A                 ; control + status register block
    079B: E0          MOVX A,@DPTR                  
    079C: FE          MOV R6,A                      
    079D: 7F 00       MOV R7,#0x00                  
    079F: 8F 01       MOV 0x01,R7                   
    07A1: 8E 00       MOV 0x00,R6                   
    07A3: E4          CLR A                         
    07A4: FF          MOV R7,A                      
    07A5: 42 02       ORL 0x02,A                    
    07A7: EF          MOV A,R7                      
    07A8: 42 03       ORL 0x03,A                    
    07AA: E8          MOV A,R0                      
    07AB: 42 04       ORL 0x04,A                    
    07AD: E9          MOV A,R1                      
    07AE: 42 05       ORL 0x05,A                    
    07B0: 90 C8 19    MOV DPTR,#0xC819                 ; control + status register block
    07B3: E0          MOVX A,@DPTR                  
    07B4: FE          MOV R6,A                      
    07B5: 7F 00       MOV R7,#0x00                  
    07B7: 78 00       MOV R0,#0x00                  
    07B9: 88 01       MOV 0x01,R0                   
    07BB: 8F 00       MOV 0x00,R7                   
    07BD: 8E 07       MOV 0x07,R6                   
    07BF: E4          CLR A                         
    07C0: 42 02       ORL 0x02,A                    
    07C2: EF          MOV A,R7                      
    07C3: 42 03       ORL 0x03,A                    
    07C5: E8          MOV A,R0                      
    07C6: 42 04       ORL 0x04,A                    
    07C8: E9          MOV A,R1                      
    07C9: 42 05       ORL 0x05,A                    
    07CB: 90 C8 18    MOV DPTR,#0xC818                 ; control + status register block
    07CE: E0          MOVX A,@DPTR                  
    07CF: FE          MOV R6,A                      
    07D0: 7F 00       MOV R7,#0x00                  
    07D2: 78 00       MOV R0,#0x00                  
    07D4: 79 00       MOV R1,#0x00                  
    07D6: 90 7E B0    MOV DPTR,#0x7EB0              
    07D9: EE          MOV A,R6                      
    07DA: 4A          ORL A,R2                      
    07DB: F0          MOVX @DPTR,A                  
    07DC: EF          MOV A,R7                      
    07DD: 4B          ORL A,R3                      
    07DE: A3          INC DPTR                      
    07DF: F0          MOVX @DPTR,A                  
    07E0: E8          MOV A,R0                      
    07E1: 4C          ORL A,R4                      
    07E2: A3          INC DPTR                      
    07E3: F0          MOVX @DPTR,A                  
    07E4: E9          MOV A,R1                      
    07E5: 4D          ORL A,R5                      
    07E6: A3          INC DPTR                      
    07E7: F0          MOVX @DPTR,A                  
    07E8: 75 50 20    MOV 0x50,#0x20                
    07EB: 75 51 2F    MOV 0x51,#0x2F                
    07EE: 75 82 00    MOV DPL(0x82),#0x00           
    07F1: 02 04 4F    LJMP 0x044F                      ; -> sub_044F

sub_07F4:
    07F4: 12 23 69    LCALL 0x2369                     ; -> sub_2369
    07F7: E5 82       MOV A,DPL(0x82)               
    07F9: 60 04       JZ 0x07FF                        ; -> loc_07FF
    07FB: 75 82 01    MOV DPL(0x82),#0x01           
    07FE: 22          RET                           

loc_07FF:
    07FF: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    0802: E0          MOVX A,@DPTR                  
    0803: FA          MOV R2,A                      
    0804: BA FF 00    CJNE R2,#0xFF,0x0807             ; -> 0x0807
    0807: 40 08       JC 0x0811                        ; -> 0x0811
    0809: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    080C: E0          MOVX A,@DPTR                  
    080D: FA          MOV R2,A                      
    080E: 30 E7 1B    JNB ACC.7,0x082C                 ; -> 0x082C
    0811: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    0814: E0          MOVX A,@DPTR                  
    0815: FA          MOV R2,A                      
    0816: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    0819: E0          MOVX A,@DPTR                  
    081A: FB          MOV R3,A                      
    081B: 53 03 7F    ANL 0x03,#0x7F                
    081E: EA          MOV A,R2                      
    081F: B5 03 00    CJNE A,0x03,0x0822               ; -> 0x0822
    0822: 40 38       JC 0x085C                        ; -> 0x085C
    0824: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    0827: E0          MOVX A,@DPTR                  
    0828: FA          MOV R2,A                      
    0829: 30 E7 30    JNB ACC.7,0x085C                 ; -> 0x085C
    082C: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    082F: E0          MOVX A,@DPTR                  
    0830: FA          MOV R2,A                      
    0831: 53 02 7F    ANL 0x02,#0x7F                
    0834: 90 7F E5    MOV DPTR,#0x7FE5              
    0837: E0          MOVX A,@DPTR                  
    0838: FB          MOV R3,A                      
    0839: B5 02 00    CJNE A,0x02,0x083C               ; -> 0x083C
    083C: 50 08       JNC 0x0846                       ; -> 0x0846
    083E: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    0841: E0          MOVX A,@DPTR                  
    0842: FA          MOV R2,A                      
    0843: 30 E7 07    JNB ACC.7,0x084D                 ; -> loc_084D
    0846: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    0849: 75 82 02    MOV DPL(0x82),#0x02           
    084C: 22          RET                           

loc_084D:
    084D: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    0850: E4          CLR A                         
    0851: F0          MOVX @DPTR,A                  
    0852: 90 7F E5    MOV DPTR,#0x7FE5              
    0855: E0          MOVX A,@DPTR                  
    0856: FA          MOV R2,A                      
    0857: 90 7F E5    MOV DPTR,#0x7FE5              
    085A: 04          INC A                         
    085B: F0          MOVX @DPTR,A                  
    085C: 75 82 00    MOV DPL(0x82),#0x00           
    085F: 22          RET                           

sub_0860:
    0860: 90 D8 15    MOV DPTR,#0xD815              
    0863: E4          CLR A                         
    0864: F0          MOVX @DPTR,A                  
    0865: 90 D8 0B    MOV DPTR,#0xD80B              
    0868: F0          MOVX @DPTR,A                  
    0869: 90 D8 0A    MOV DPTR,#0xD80A              
    086C: F0          MOVX @DPTR,A                  
    086D: 90 D8 04    MOV DPTR,#0xD804              
    0870: F0          MOVX @DPTR,A                  
    0871: 7A 3C       MOV R2,#0x3C                  
    0873: DA FE       DJNZ R2,0x0873                   ; -> 0x0873
    0875: 90 D8 04    MOV DPTR,#0xD804              
    0878: 74 87       MOV A,#0x87                   
    087A: F0          MOVX @DPTR,A                  
    087B: 90 D8 0A    MOV DPTR,#0xD80A              
    087E: 74 77       MOV A,#0x77                   
    0880: F0          MOVX @DPTR,A                  
    0881: 90 D8 0B    MOV DPTR,#0xD80B              
    0884: 74 77       MOV A,#0x77                   
    0886: F0          MOVX @DPTR,A                  
    0887: 90 D8 15    MOV DPTR,#0xD815              
    088A: 74 0F       MOV A,#0x0F                   
    088C: F0          MOVX @DPTR,A                  
    088D: 7A 3C       MOV R2,#0x3C                  
    088F: DA FE       DJNZ R2,0x088F                   ; -> 0x088F
    0891: 22          RET                           

loc_0892:
    0892: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0895: E0          MOVX A,@DPTR                  
    0896: FA          MOV R2,A                      
    0897: 30 E0 01    JNB ACC.0,0x089B                 ; -> loc_089B
    089A: 22          RET                           

loc_089B:
    089B: 90 7F 7D    MOV DPTR,#0x7F7D              
    089E: E0          MOVX A,@DPTR                  
    089F: FA          MOV R2,A                      
    08A0: BA 00 03    CJNE R2,#0x00,0x08A6             ; -> loc_08A6
    08A3: 02 09 A6    LJMP 0x09A6                      ; -> loc_09A6

loc_08A6:
    08A6: BA 08 03    CJNE R2,#0x08,0x08AC             ; -> loc_08AC
    08A9: 02 09 2A    LJMP 0x092A                      ; -> loc_092A

loc_08AC:
    08AC: BA 10 02    CJNE R2,#0x10,0x08B1             ; -> loc_08B1
    08AF: 80 01       SJMP 0x08B2                      ; -> loc_08B2

loc_08B1:
    08B1: 22          RET                           

loc_08B2:
    08B2: 90 7F E8    MOV DPTR,#0x7FE8              
    08B5: E0          MOVX A,@DPTR                  
    08B6: FA          MOV R2,A                      
    08B7: 53 02 7F    ANL 0x02,#0x7F                
    08BA: 90 7F E8    MOV DPTR,#0x7FE8              
    08BD: E0          MOVX A,@DPTR                  
    08BE: 54 80       ANL A,#0x80                   
    08C0: 23          RL A                          
    08C1: 54 01       ANL A,#0x01                   
    08C3: F5 50       MOV 0x50,A                    
    08C5: 75 51 00    MOV 0x51,#0x00                
    08C8: 75 52 00    MOV 0x52,#0x00                
    08CB: 8A 82       MOV 0x82,R2                   
    08CD: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    08D0: 90 7F E9    MOV DPTR,#0x7FE9              
    08D3: E0          MOVX A,@DPTR                  
    08D4: FA          MOV R2,A                      
    08D5: 53 02 7F    ANL 0x02,#0x7F                
    08D8: 90 7F E9    MOV DPTR,#0x7FE9              
    08DB: E0          MOVX A,@DPTR                  
    08DC: 54 80       ANL A,#0x80                   
    08DE: 23          RL A                          
    08DF: 54 01       ANL A,#0x01                   
    08E1: F5 50       MOV 0x50,A                    
    08E3: 75 51 01    MOV 0x51,#0x01                
    08E6: 75 52 00    MOV 0x52,#0x00                
    08E9: 8A 82       MOV 0x82,R2                   
    08EB: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    08EE: 90 7F EA    MOV DPTR,#0x7FEA              
    08F1: E0          MOVX A,@DPTR                  
    08F2: FA          MOV R2,A                      
    08F3: 53 02 7F    ANL 0x02,#0x7F                
    08F6: 90 7F EA    MOV DPTR,#0x7FEA              
    08F9: E0          MOVX A,@DPTR                  
    08FA: 54 80       ANL A,#0x80                   
    08FC: 23          RL A                          
    08FD: 54 01       ANL A,#0x01                   
    08FF: F5 50       MOV 0x50,A                    
    0901: 75 51 02    MOV 0x51,#0x02                
    0904: 75 52 00    MOV 0x52,#0x00                
    0907: 8A 82       MOV 0x82,R2                   
    0909: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    090C: 90 7F EB    MOV DPTR,#0x7FEB              
    090F: E0          MOVX A,@DPTR                  
    0910: FA          MOV R2,A                      
    0911: 53 02 7F    ANL 0x02,#0x7F                
    0914: 90 7F EB    MOV DPTR,#0x7FEB              
    0917: E0          MOVX A,@DPTR                  
    0918: 54 80       ANL A,#0x80                   
    091A: 23          RL A                          
    091B: 54 01       ANL A,#0x01                   
    091D: F5 50       MOV 0x50,A                    
    091F: 75 51 03    MOV 0x51,#0x03                
    0922: 75 52 00    MOV 0x52,#0x00                
    0925: 8A 82       MOV 0x82,R2                   
    0927: 02 0B BE    LJMP 0x0BBE                      ; -> sub_0BBE

loc_092A:
    092A: 90 7F E8    MOV DPTR,#0x7FE8              
    092D: E0          MOVX A,@DPTR                  
    092E: 54 7F       ANL A,#0x7F                   
    0930: C3          CLR C                         
    0931: 13          RRC A                         
    0932: FA          MOV R2,A                      
    0933: 90 7F E8    MOV DPTR,#0x7FE8              
    0936: E0          MOVX A,@DPTR                  
    0937: 54 80       ANL A,#0x80                   
    0939: 23          RL A                          
    093A: 54 01       ANL A,#0x01                   
    093C: F5 50       MOV 0x50,A                    
    093E: 75 51 00    MOV 0x51,#0x00                
    0941: 75 52 00    MOV 0x52,#0x00                
    0944: 8A 82       MOV 0x82,R2                   
    0946: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    0949: 90 7F E9    MOV DPTR,#0x7FE9              
    094C: E0          MOVX A,@DPTR                  
    094D: 54 7F       ANL A,#0x7F                   
    094F: C3          CLR C                         
    0950: 13          RRC A                         
    0951: FA          MOV R2,A                      
    0952: 90 7F E9    MOV DPTR,#0x7FE9              
    0955: E0          MOVX A,@DPTR                  
    0956: 54 80       ANL A,#0x80                   
    0958: 23          RL A                          
    0959: 54 01       ANL A,#0x01                   
    095B: F5 50       MOV 0x50,A                    
    095D: 75 51 01    MOV 0x51,#0x01                
    0960: 75 52 00    MOV 0x52,#0x00                
    0963: 8A 82       MOV 0x82,R2                   
    0965: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    0968: 90 7F EA    MOV DPTR,#0x7FEA              
    096B: E0          MOVX A,@DPTR                  
    096C: 54 7F       ANL A,#0x7F                   
    096E: C3          CLR C                         
    096F: 13          RRC A                         
    0970: FA          MOV R2,A                      
    0971: 90 7F EA    MOV DPTR,#0x7FEA              
    0974: E0          MOVX A,@DPTR                  
    0975: 54 80       ANL A,#0x80                   
    0977: 23          RL A                          
    0978: 54 01       ANL A,#0x01                   
    097A: F5 50       MOV 0x50,A                    
    097C: 75 51 02    MOV 0x51,#0x02                
    097F: 75 52 00    MOV 0x52,#0x00                
    0982: 8A 82       MOV 0x82,R2                   
    0984: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    0987: 90 7F EB    MOV DPTR,#0x7FEB              
    098A: E0          MOVX A,@DPTR                  
    098B: 54 7F       ANL A,#0x7F                   
    098D: C3          CLR C                         
    098E: 13          RRC A                         
    098F: FA          MOV R2,A                      
    0990: 90 7F EB    MOV DPTR,#0x7FEB              
    0993: E0          MOVX A,@DPTR                  
    0994: 54 80       ANL A,#0x80                   
    0996: 23          RL A                          
    0997: 54 01       ANL A,#0x01                   
    0999: F5 50       MOV 0x50,A                    
    099B: 75 51 03    MOV 0x51,#0x03                
    099E: 75 52 00    MOV 0x52,#0x00                
    09A1: 8A 82       MOV 0x82,R2                   
    09A3: 02 0B BE    LJMP 0x0BBE                      ; -> sub_0BBE

loc_09A6:
    09A6: 90 7F E8    MOV DPTR,#0x7FE8              
    09A9: E0          MOVX A,@DPTR                  
    09AA: FA          MOV R2,A                      
    09AB: 74 7F       MOV A,#0x7F                   
    09AD: 5A          ANL A,R2                      
    09AE: 75 F0 03    MOV B(0xF0),#0x03             
    09B1: 84          DIV AB                        
    09B2: FA          MOV R2,A                      
    09B3: 90 7F E8    MOV DPTR,#0x7FE8              
    09B6: E0          MOVX A,@DPTR                  
    09B7: 54 80       ANL A,#0x80                   
    09B9: 23          RL A                          
    09BA: 54 01       ANL A,#0x01                   
    09BC: F5 50       MOV 0x50,A                    
    09BE: 75 51 00    MOV 0x51,#0x00                
    09C1: 75 52 00    MOV 0x52,#0x00                
    09C4: 8A 82       MOV 0x82,R2                   
    09C6: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    09C9: 90 7F E9    MOV DPTR,#0x7FE9              
    09CC: E0          MOVX A,@DPTR                  
    09CD: FA          MOV R2,A                      
    09CE: 74 7F       MOV A,#0x7F                   
    09D0: 5A          ANL A,R2                      
    09D1: 75 F0 03    MOV B(0xF0),#0x03             
    09D4: 84          DIV AB                        
    09D5: FA          MOV R2,A                      
    09D6: 90 7F E9    MOV DPTR,#0x7FE9              
    09D9: E0          MOVX A,@DPTR                  
    09DA: 54 80       ANL A,#0x80                   
    09DC: 23          RL A                          
    09DD: 54 01       ANL A,#0x01                   
    09DF: F5 50       MOV 0x50,A                    
    09E1: 75 51 01    MOV 0x51,#0x01                
    09E4: 75 52 00    MOV 0x52,#0x00                
    09E7: 8A 82       MOV 0x82,R2                   
    09E9: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    09EC: 90 7F EA    MOV DPTR,#0x7FEA              
    09EF: E0          MOVX A,@DPTR                  
    09F0: FA          MOV R2,A                      
    09F1: 74 7F       MOV A,#0x7F                   
    09F3: 5A          ANL A,R2                      
    09F4: 75 F0 03    MOV B(0xF0),#0x03             
    09F7: 84          DIV AB                        
    09F8: FA          MOV R2,A                      
    09F9: 90 7F EA    MOV DPTR,#0x7FEA              
    09FC: E0          MOVX A,@DPTR                  
    09FD: 54 80       ANL A,#0x80                   
    09FF: 23          RL A                          
    0A00: 54 01       ANL A,#0x01                   
    0A02: F5 50       MOV 0x50,A                    
    0A04: 75 51 02    MOV 0x51,#0x02                
    0A07: 75 52 00    MOV 0x52,#0x00                
    0A0A: 8A 82       MOV 0x82,R2                   
    0A0C: 12 0B BE    LCALL 0x0BBE                     ; -> sub_0BBE
    0A0F: 90 7F EB    MOV DPTR,#0x7FEB              
    0A12: E0          MOVX A,@DPTR                  
    0A13: FA          MOV R2,A                      
    0A14: 74 7F       MOV A,#0x7F                   
    0A16: 5A          ANL A,R2                      
    0A17: 75 F0 03    MOV B(0xF0),#0x03             
    0A1A: 84          DIV AB                        
    0A1B: FA          MOV R2,A                      
    0A1C: 90 7F EB    MOV DPTR,#0x7FEB              
    0A1F: E0          MOVX A,@DPTR                  
    0A20: 54 80       ANL A,#0x80                   
    0A22: 23          RL A                          
    0A23: 54 01       ANL A,#0x01                   
    0A25: F5 50       MOV 0x50,A                    
    0A27: 75 51 03    MOV 0x51,#0x03                
    0A2A: 75 52 00    MOV 0x52,#0x00                
    0A2D: 8A 82       MOV 0x82,R2                   
    0A2F: 02 0B BE    LJMP 0x0BBE                      ; -> sub_0BBE

loc_0A32:
    0A32: 75 50 10    MOV 0x50,#0x10                
    0A35: 75 51 1F    MOV 0x51,#0x1F                
    0A38: 75 82 00    MOV DPL(0x82),#0x00           
    0A3B: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    0A3E: 90 D8 10    MOV DPTR,#0xD810              
    0A41: E4          CLR A                         
    0A42: F0          MOVX @DPTR,A                  
    0A43: 90 D8 68    MOV DPTR,#0xD868              
    0A46: 74 FF       MOV A,#0xFF                   
    0A48: F0          MOVX @DPTR,A                  
    0A49: 90 D6 52    MOV DPTR,#0xD652              
    0A4C: 74 01       MOV A,#0x01                   
    0A4E: F0          MOVX @DPTR,A                  
    0A4F: 90 D6 D2    MOV DPTR,#0xD6D2              
    0A52: 74 01       MOV A,#0x01                   
    0A54: F0          MOVX @DPTR,A                  
    0A55: 90 D7 52    MOV DPTR,#0xD752              
    0A58: 74 01       MOV A,#0x01                   
    0A5A: F0          MOVX @DPTR,A                  
    0A5B: 90 D7 D2    MOV DPTR,#0xD7D2              
    0A5E: 74 01       MOV A,#0x01                   
    0A60: F0          MOVX @DPTR,A                  
    0A61: 90 D8 69    MOV DPTR,#0xD869              
    0A64: E0          MOVX A,@DPTR                  
    0A65: FA          MOV R2,A                      
    0A66: 90 7F ED    MOV DPTR,#0x7FED              
    0A69: F0          MOVX @DPTR,A                  
    0A6A: 90 7F E8    MOV DPTR,#0x7FE8              
    0A6D: E4          CLR A                         
    0A6E: F0          MOVX @DPTR,A                  
    0A6F: 90 7F ED    MOV DPTR,#0x7FED              
    0A72: E0          MOVX A,@DPTR                  
    0A73: FA          MOV R2,A                      
    0A74: 20 E0 08    JB ACC.0,0x0A7F                  ; -> 0x0A7F
    0A77: 90 D8 69    MOV DPTR,#0xD869              
    0A7A: E0          MOVX A,@DPTR                  
    0A7B: FA          MOV R2,A                      
    0A7C: 20 E0 1B    JB ACC.0,0x0A9A                  ; -> loc_0A9A
    0A7F: 90 D8 69    MOV DPTR,#0xD869              
    0A82: E0          MOVX A,@DPTR                  
    0A83: 90 7F ED    MOV DPTR,#0x7FED              
    0A86: F0          MOVX @DPTR,A                  
    0A87: 90 D6 53    MOV DPTR,#0xD653              
    0A8A: 74 01       MOV A,#0x01                   
    0A8C: F0          MOVX @DPTR,A                  
    0A8D: 90 7F E8    MOV DPTR,#0x7FE8              
    0A90: E0          MOVX A,@DPTR                  
    0A91: FA          MOV R2,A                      
    0A92: 0A          INC R2                        
    0A93: 90 7F E8    MOV DPTR,#0x7FE8              
    0A96: EA          MOV A,R2                      
    0A97: F0          MOVX @DPTR,A                  
    0A98: 80 D5       SJMP 0x0A6F                      ; -> 0x0A6F

loc_0A9A:
    0A9A: 90 D8 69    MOV DPTR,#0xD869              
    0A9D: E0          MOVX A,@DPTR                  
    0A9E: FA          MOV R2,A                      
    0A9F: 90 7F ED    MOV DPTR,#0x7FED              
    0AA2: F0          MOVX @DPTR,A                  
    0AA3: 90 7F E9    MOV DPTR,#0x7FE9              
    0AA6: E4          CLR A                         
    0AA7: F0          MOVX @DPTR,A                  
    0AA8: 90 7F ED    MOV DPTR,#0x7FED              
    0AAB: E0          MOVX A,@DPTR                  
    0AAC: FA          MOV R2,A                      
    0AAD: 20 E1 08    JB ACC.1,0x0AB8                  ; -> 0x0AB8
    0AB0: 90 D8 69    MOV DPTR,#0xD869              
    0AB3: E0          MOVX A,@DPTR                  
    0AB4: FA          MOV R2,A                      
    0AB5: 20 E1 1B    JB ACC.1,0x0AD3                  ; -> loc_0AD3
    0AB8: 90 D8 69    MOV DPTR,#0xD869              
    0ABB: E0          MOVX A,@DPTR                  
    0ABC: 90 7F ED    MOV DPTR,#0x7FED              
    0ABF: F0          MOVX @DPTR,A                  
    0AC0: 90 D6 D3    MOV DPTR,#0xD6D3              
    0AC3: 74 01       MOV A,#0x01                   
    0AC5: F0          MOVX @DPTR,A                  
    0AC6: 90 7F E9    MOV DPTR,#0x7FE9              
    0AC9: E0          MOVX A,@DPTR                  
    0ACA: FA          MOV R2,A                      
    0ACB: 0A          INC R2                        
    0ACC: 90 7F E9    MOV DPTR,#0x7FE9              
    0ACF: EA          MOV A,R2                      
    0AD0: F0          MOVX @DPTR,A                  
    0AD1: 80 D5       SJMP 0x0AA8                      ; -> 0x0AA8

loc_0AD3:
    0AD3: 90 D8 69    MOV DPTR,#0xD869              
    0AD6: E0          MOVX A,@DPTR                  
    0AD7: FA          MOV R2,A                      
    0AD8: 90 7F ED    MOV DPTR,#0x7FED              
    0ADB: F0          MOVX @DPTR,A                  
    0ADC: 90 7F EA    MOV DPTR,#0x7FEA              
    0ADF: E4          CLR A                         
    0AE0: F0          MOVX @DPTR,A                  
    0AE1: 90 7F ED    MOV DPTR,#0x7FED              
    0AE4: E0          MOVX A,@DPTR                  
    0AE5: FA          MOV R2,A                      
    0AE6: 20 E2 08    JB ACC.2,0x0AF1                  ; -> 0x0AF1
    0AE9: 90 D8 69    MOV DPTR,#0xD869              
    0AEC: E0          MOVX A,@DPTR                  
    0AED: FA          MOV R2,A                      
    0AEE: 20 E2 1B    JB ACC.2,0x0B0C                  ; -> loc_0B0C
    0AF1: 90 D8 69    MOV DPTR,#0xD869              
    0AF4: E0          MOVX A,@DPTR                  
    0AF5: 90 7F ED    MOV DPTR,#0x7FED              
    0AF8: F0          MOVX @DPTR,A                  
    0AF9: 90 D7 53    MOV DPTR,#0xD753              
    0AFC: 74 01       MOV A,#0x01                   
    0AFE: F0          MOVX @DPTR,A                  
    0AFF: 90 7F EA    MOV DPTR,#0x7FEA              
    0B02: E0          MOVX A,@DPTR                  
    0B03: FA          MOV R2,A                      
    0B04: 0A          INC R2                        
    0B05: 90 7F EA    MOV DPTR,#0x7FEA              
    0B08: EA          MOV A,R2                      
    0B09: F0          MOVX @DPTR,A                  
    0B0A: 80 D5       SJMP 0x0AE1                      ; -> 0x0AE1

loc_0B0C:
    0B0C: 90 D8 69    MOV DPTR,#0xD869              
    0B0F: E0          MOVX A,@DPTR                  
    0B10: FA          MOV R2,A                      
    0B11: 90 7F ED    MOV DPTR,#0x7FED              
    0B14: F0          MOVX @DPTR,A                  
    0B15: 90 7F EB    MOV DPTR,#0x7FEB              
    0B18: E4          CLR A                         
    0B19: F0          MOVX @DPTR,A                  
    0B1A: 90 7F ED    MOV DPTR,#0x7FED              
    0B1D: E0          MOVX A,@DPTR                  
    0B1E: FA          MOV R2,A                      
    0B1F: 20 E3 08    JB ACC.3,0x0B2A                  ; -> 0x0B2A
    0B22: 90 D8 69    MOV DPTR,#0xD869              
    0B25: E0          MOVX A,@DPTR                  
    0B26: FA          MOV R2,A                      
    0B27: 20 E3 1B    JB ACC.3,0x0B45                  ; -> loc_0B45
    0B2A: 90 D8 69    MOV DPTR,#0xD869              
    0B2D: E0          MOVX A,@DPTR                  
    0B2E: 90 7F ED    MOV DPTR,#0x7FED              
    0B31: F0          MOVX @DPTR,A                  
    0B32: 90 D7 D3    MOV DPTR,#0xD7D3              
    0B35: 74 01       MOV A,#0x01                   
    0B37: F0          MOVX @DPTR,A                  
    0B38: 90 7F EB    MOV DPTR,#0x7FEB              
    0B3B: E0          MOVX A,@DPTR                  
    0B3C: FA          MOV R2,A                      
    0B3D: 0A          INC R2                        
    0B3E: 90 7F EB    MOV DPTR,#0x7FEB              
    0B41: EA          MOV A,R2                      
    0B42: F0          MOVX @DPTR,A                  
    0B43: 80 D5       SJMP 0x0B1A                      ; -> 0x0B1A

loc_0B45:
    0B45: 90 7F ED    MOV DPTR,#0x7FED              
    0B48: E4          CLR A                         
    0B49: F0          MOVX @DPTR,A                  
    0B4A: 90 7F ED    MOV DPTR,#0x7FED              
    0B4D: E0          MOVX A,@DPTR                  
    0B4E: FA          MOV R2,A                      
    0B4F: BA 04 00    CJNE R2,#0x04,0x0B52             ; -> 0x0B52
    0B52: 40 01       JC 0x0B55                        ; -> loc_0B55
    0B54: 22          RET                           

loc_0B55:
    0B55: 90 7F ED    MOV DPTR,#0x7FED              
    0B58: E0          MOVX A,@DPTR                  
    0B59: 24 E8       ADD A,#0xE8                   
    0B5B: F5 82       MOV DPL(0x82),A               
    0B5D: E4          CLR A                         
    0B5E: 34 7F       ADDC A,#0x7F                  
    0B60: F5 83       MOV DPH(0x83),A               
    0B62: E0          MOVX A,@DPTR                  
    0B63: FA          MOV R2,A                      
    0B64: 74 19       MOV A,#0x19                   
    0B66: B5 02 00    CJNE A,0x02,0x0B69               ; -> 0x0B69
    0B69: 50 25       JNC 0x0B90                       ; -> loc_0B90
    0B6B: 90 7F ED    MOV DPTR,#0x7FED              
    0B6E: E0          MOVX A,@DPTR                  
    0B6F: 24 E8       ADD A,#0xE8                   
    0B71: FA          MOV R2,A                      
    0B72: E4          CLR A                         
    0B73: 34 7F       ADDC A,#0x7F                  
    0B75: FB          MOV R3,A                      
    0B76: 90 7F ED    MOV DPTR,#0x7FED              
    0B79: E0          MOVX A,@DPTR                  
    0B7A: 24 E8       ADD A,#0xE8                   
    0B7C: F5 82       MOV DPL(0x82),A               
    0B7E: E4          CLR A                         
    0B7F: 34 7F       ADDC A,#0x7F                  
    0B81: F5 83       MOV DPH(0x83),A               
    0B83: E0          MOVX A,@DPTR                  
    0B84: 24 E7       ADD A,#0xE7                   
    0B86: 44 80       ORL A,#0x80                   
    0B88: FC          MOV R4,A                      
    0B89: 8A 82       MOV 0x82,R2                   
    0B8B: 8B 83       MOV 0x83,R3                   
    0B8D: F0          MOVX @DPTR,A                  
    0B8E: 80 24       SJMP 0x0BB4                      ; -> 0x0BB4

loc_0B90:
    0B90: 90 7F ED    MOV DPTR,#0x7FED              
    0B93: E0          MOVX A,@DPTR                  
    0B94: 24 E8       ADD A,#0xE8                   
    0B96: FA          MOV R2,A                      
    0B97: E4          CLR A                         
    0B98: 34 7F       ADDC A,#0x7F                  
    0B9A: FB          MOV R3,A                      
    0B9B: 90 7F ED    MOV DPTR,#0x7FED              
    0B9E: E0          MOVX A,@DPTR                  
    0B9F: 24 E8       ADD A,#0xE8                   
    0BA1: F5 82       MOV DPL(0x82),A               
    0BA3: E4          CLR A                         
    0BA4: 34 7F       ADDC A,#0x7F                  
    0BA6: F5 83       MOV DPH(0x83),A               
    0BA8: E0          MOVX A,@DPTR                  
    0BA9: FC          MOV R4,A                      
    0BAA: 74 19       MOV A,#0x19                   
    0BAC: C3          CLR C                         
    0BAD: 9C          SUBB A,R4                     
    0BAE: FC          MOV R4,A                      
    0BAF: 8A 82       MOV 0x82,R2                   
    0BB1: 8B 83       MOV 0x83,R3                   
    0BB3: F0          MOVX @DPTR,A                  
    0BB4: 90 7F ED    MOV DPTR,#0x7FED              
    0BB7: E0          MOVX A,@DPTR                  
    0BB8: 24 01       ADD A,#0x01                   
    0BBA: F0          MOVX @DPTR,A                  
    0BBB: 02 0B 4A    LJMP 0x0B4A                      ; -> 0x0B4A

sub_0BBE:
    0BBE: AA 82       MOV R2,0x82                   
    0BC0: E5 52       MOV A,0x52                    
    0BC2: 60 5A       JZ 0x0C1E                        ; -> loc_0C1E
    0BC4: 90 D6 52    MOV DPTR,#0xD652              
    0BC7: E5 50       MOV A,0x50                    
    0BC9: F0          MOVX @DPTR,A                  
    0BCA: 90 D6 D2    MOV DPTR,#0xD6D2              
    0BCD: E5 50       MOV A,0x50                    
    0BCF: F0          MOVX @DPTR,A                  
    0BD0: 90 D7 52    MOV DPTR,#0xD752              
    0BD3: E5 50       MOV A,0x50                    
    0BD5: F0          MOVX @DPTR,A                  
    0BD6: 90 D7 D2    MOV DPTR,#0xD7D2              
    0BD9: E5 50       MOV A,0x50                    
    0BDB: F0          MOVX @DPTR,A                  
    0BDC: 90 7F ED    MOV DPTR,#0x7FED              
    0BDF: E4          CLR A                         
    0BE0: F0          MOVX @DPTR,A                  
    0BE1: 90 7F ED    MOV DPTR,#0x7FED              
    0BE4: E0          MOVX A,@DPTR                  
    0BE5: FB          MOV R3,A                      
    0BE6: B5 02 00    CJNE A,0x02,0x0BE9               ; -> 0x0BE9
    0BE9: 40 01       JC 0x0BEC                        ; -> loc_0BEC
    0BEB: 22          RET                           

loc_0BEC:
    0BEC: 90 D6 53    MOV DPTR,#0xD653              
    0BEF: 74 01       MOV A,#0x01                   
    0BF1: F0          MOVX @DPTR,A                  
    0BF2: 90 D6 D3    MOV DPTR,#0xD6D3              
    0BF5: 74 01       MOV A,#0x01                   
    0BF7: F0          MOVX @DPTR,A                  
    0BF8: 90 D7 53    MOV DPTR,#0xD753              
    0BFB: 74 01       MOV A,#0x01                   
    0BFD: F0          MOVX @DPTR,A                  
    0BFE: 90 D7 D3    MOV DPTR,#0xD7D3              
    0C01: 74 01       MOV A,#0x01                   
    0C03: F0          MOVX @DPTR,A                  
    0C04: 90 D6 53    MOV DPTR,#0xD653              
    0C07: E4          CLR A                         
    0C08: F0          MOVX @DPTR,A                  
    0C09: 90 D6 D3    MOV DPTR,#0xD6D3              
    0C0C: F0          MOVX @DPTR,A                  
    0C0D: 90 D7 53    MOV DPTR,#0xD753              
    0C10: F0          MOVX @DPTR,A                  
    0C11: 90 D7 D3    MOV DPTR,#0xD7D3              
    0C14: F0          MOVX @DPTR,A                  
    0C15: 90 7F ED    MOV DPTR,#0x7FED              
    0C18: E0          MOVX A,@DPTR                  
    0C19: 24 01       ADD A,#0x01                   
    0C1B: F0          MOVX @DPTR,A                  
    0C1C: 80 C3       SJMP 0x0BE1                      ; -> 0x0BE1

loc_0C1E:
    0C1E: 74 03       MOV A,#0x03                   
    0C20: B5 51 00    CJNE A,0x51,0x0C23               ; -> 0x0C23
    0C23: 50 01       JNC 0x0C26                       ; -> loc_0C26
    0C25: 22          RET                           

loc_0C26:
    0C26: E5 51       MOV A,0x51                    
    0C28: 25 51       ADD A,0x51                    
    0C2A: 25 51       ADD A,0x51                    
    0C2C: 90 0C 30    MOV DPTR,#0x0C30              
    0C2F: 73          JMP @A+DPTR                   
    0C30: 02 0C 3C    LJMP 0x0C3C                      ; -> 0x0C3C
    0C33: 02          DB 0x02                       ; data
    0C34: 0C          DB 0x0C                       ; data
    0C35: 61          DB 0x61                       ; data
    0C36: 02          DB 0x02                       ; data
    0C37: 0C          DB 0x0C                       ; data
    0C38: 85          DB 0x85                       ; data
    0C39: 02          DB 0x02                       ; data
    0C3A: 0C          DB 0x0C                       ; data
    0C3B: A9          DB 0xA9                       ; data
    0C3C: 90 D6 52    MOV DPTR,#0xD652              
    0C3F: E5 50       MOV A,0x50                    
    0C41: F0          MOVX @DPTR,A                  
    0C42: 90 7F ED    MOV DPTR,#0x7FED              
    0C45: E4          CLR A                         
    0C46: F0          MOVX @DPTR,A                  
    0C47: 90 7F ED    MOV DPTR,#0x7FED              
    0C4A: E0          MOVX A,@DPTR                  
    0C4B: FB          MOV R3,A                      
    0C4C: B5 02 00    CJNE A,0x02,0x0C4F               ; -> 0x0C4F
    0C4F: 40 01       JC 0x0C52                        ; -> loc_0C52
    0C51: 22          RET                           

loc_0C52:
    0C52: 90 D6 53    MOV DPTR,#0xD653              
    0C55: 74 01       MOV A,#0x01                   
    0C57: F0          MOVX @DPTR,A                  
    0C58: 90 7F ED    MOV DPTR,#0x7FED              
    0C5B: E0          MOVX A,@DPTR                  
    0C5C: 24 01       ADD A,#0x01                   
    0C5E: F0          MOVX @DPTR,A                  
    0C5F: 80 E6       SJMP 0x0C47                      ; -> 0x0C47

loc_0C61:
    0C61: 90 D6 D2    MOV DPTR,#0xD6D2              
    0C64: E5 50       MOV A,0x50                    
    0C66: F0          MOVX @DPTR,A                  
    0C67: 90 7F ED    MOV DPTR,#0x7FED              
    0C6A: E4          CLR A                         
    0C6B: F0          MOVX @DPTR,A                  
    0C6C: 90 7F ED    MOV DPTR,#0x7FED              
    0C6F: E0          MOVX A,@DPTR                  
    0C70: FB          MOV R3,A                      
    0C71: B5 02 00    CJNE A,0x02,0x0C74               ; -> 0x0C74
    0C74: 50 57       JNC 0x0CCD                       ; -> 0x0CCD
    0C76: 90 D6 D3    MOV DPTR,#0xD6D3              
    0C79: 74 01       MOV A,#0x01                   
    0C7B: F0          MOVX @DPTR,A                  
    0C7C: 90 7F ED    MOV DPTR,#0x7FED              
    0C7F: E0          MOVX A,@DPTR                  
    0C80: 24 01       ADD A,#0x01                   
    0C82: F0          MOVX @DPTR,A                  
    0C83: 80 E7       SJMP 0x0C6C                      ; -> 0x0C6C

loc_0C85:
    0C85: 90 D7 52    MOV DPTR,#0xD752              
    0C88: E5 50       MOV A,0x50                    
    0C8A: F0          MOVX @DPTR,A                  
    0C8B: 90 7F ED    MOV DPTR,#0x7FED              
    0C8E: E4          CLR A                         
    0C8F: F0          MOVX @DPTR,A                  
    0C90: 90 7F ED    MOV DPTR,#0x7FED              
    0C93: E0          MOVX A,@DPTR                  
    0C94: FB          MOV R3,A                      
    0C95: B5 02 00    CJNE A,0x02,0x0C98               ; -> 0x0C98
    0C98: 50 33       JNC 0x0CCD                       ; -> 0x0CCD
    0C9A: 90 D7 53    MOV DPTR,#0xD753              
    0C9D: 74 01       MOV A,#0x01                   
    0C9F: F0          MOVX @DPTR,A                  
    0CA0: 90 7F ED    MOV DPTR,#0x7FED              
    0CA3: E0          MOVX A,@DPTR                  
    0CA4: 24 01       ADD A,#0x01                   
    0CA6: F0          MOVX @DPTR,A                  
    0CA7: 80 E7       SJMP 0x0C90                      ; -> 0x0C90
    0CA9: 90          DB 0x90                       ; data
    0CAA: D7          DB 0xD7                       ; data
    0CAB: D2          DB 0xD2                       ; data
    0CAC: E5          DB 0xE5                       ; data
    0CAD: 50          DB 0x50                       ; data
    0CAE: F0          DB 0xF0                       ; data
    0CAF: 90          DB 0x90                       ; data
    0CB0: 7F          DB 0x7F                       ; data
    0CB1: ED          DB 0xED                       ; data
    0CB2: E4          DB 0xE4                       ; data
    0CB3: F0          DB 0xF0                       ; data
    0CB4: 90          DB 0x90                       ; data
    0CB5: 7F          DB 0x7F                       ; data
    0CB6: ED          DB 0xED                       ; data
    0CB7: E0          DB 0xE0                       ; data
    0CB8: FB          DB 0xFB                       ; data
    0CB9: B5          DB 0xB5                       ; data
    0CBA: 02          DB 0x02                       ; data
    0CBB: 00          DB 0x00                       ; data
    0CBC: 50          DB 0x50                       ; data
    0CBD: 0F          DB 0x0F                       ; data
    0CBE: 90          DB 0x90                       ; data
    0CBF: D7          DB 0xD7                       ; data
    0CC0: D3          DB 0xD3                       ; data
    0CC1: 74          DB 0x74                       ; data
    0CC2: 01          DB 0x01                       ; data
    0CC3: F0          DB 0xF0                       ; data
    0CC4: 90          DB 0x90                       ; data
    0CC5: 7F          DB 0x7F                       ; data
    0CC6: ED          DB 0xED                       ; data
    0CC7: E0          DB 0xE0                       ; data
    0CC8: 24          DB 0x24                       ; data
    0CC9: 01          DB 0x01                       ; data
    0CCA: F0          DB 0xF0                       ; data
    0CCB: 80          DB 0x80                       ; data
    0CCC: E7          DB 0xE7                       ; data
    0CCD: 22          RET                           
    0CCE: AA          DB 0xAA                       ; data
    0CCF: 82          DB 0x82                       ; data
    0CD0: 90          DB 0x90                       ; data
    0CD1: C8          DB 0xC8                       ; data
    0CD2: 88          DB 0x88                       ; data
    0CD3: E5          DB 0xE5                       ; data
    0CD4: 51          DB 0x51                       ; data
    0CD5: F0          DB 0xF0                       ; data
    0CD6: 90          DB 0x90                       ; data
    0CD7: C8          DB 0xC8                       ; data
    0CD8: 89          DB 0x89                       ; data
    0CD9: E5          DB 0xE5                       ; data
    0CDA: 52          DB 0x52                       ; data
    0CDB: F0          DB 0xF0                       ; data
    0CDC: 90          DB 0x90                       ; data
    0CDD: C8          DB 0xC8                       ; data
    0CDE: 8A          DB 0x8A                       ; data
    0CDF: E5          DB 0xE5                       ; data
    0CE0: 53          DB 0x53                       ; data
    0CE1: F0          DB 0xF0                       ; data
    0CE2: 90          DB 0x90                       ; data
    0CE3: C8          DB 0xC8                       ; data
    0CE4: 8B          DB 0x8B                       ; data
    0CE5: E5          DB 0xE5                       ; data
    0CE6: 54          DB 0x54                       ; data
    0CE7: F0          DB 0xF0                       ; data
    0CE8: 90          DB 0x90                       ; data
    0CE9: C8          DB 0xC8                       ; data
    0CEA: 83          DB 0x83                       ; data
    0CEB: EA          DB 0xEA                       ; data
    0CEC: F0          DB 0xF0                       ; data
    0CED: 90          DB 0x90                       ; data
    0CEE: C8          DB 0xC8                       ; data
    0CEF: 84          DB 0x84                       ; data
    0CF0: E5          DB 0xE5                       ; data
    0CF1: 50          DB 0x50                       ; data
    0CF2: F0          DB 0xF0                       ; data
    0CF3: 90          DB 0x90                       ; data
    0CF4: C8          DB 0xC8                       ; data
    0CF5: 87          DB 0x87                       ; data
    0CF6: 74          DB 0x74                       ; data
    0CF7: 20          DB 0x20                       ; data
    0CF8: F0          DB 0xF0                       ; data
    0CF9: 22          DB 0x22                       ; data

sub_0CFA:
    0CFA: AA 82       MOV R2,0x82                   
    0CFC: BA 01 61    CJNE R2,#0x01,0x0D60             ; -> loc_0D60
    0CFF: 90 D6 54    MOV DPTR,#0xD654              
    0D02: 74 07       MOV A,#0x07                   
    0D04: F0          MOVX @DPTR,A                  
    0D05: 90 D6 D4    MOV DPTR,#0xD6D4              
    0D08: 74 07       MOV A,#0x07                   
    0D0A: F0          MOVX @DPTR,A                  
    0D0B: 90 D7 54    MOV DPTR,#0xD754              
    0D0E: 74 07       MOV A,#0x07                   
    0D10: F0          MOVX @DPTR,A                  
    0D11: 90 D7 D4    MOV DPTR,#0xD7D4              
    0D14: 74 07       MOV A,#0x07                   
    0D16: F0          MOVX @DPTR,A                  
    0D17: 90 D6 55    MOV DPTR,#0xD655              
    0D1A: 74 02       MOV A,#0x02                   
    0D1C: F0          MOVX @DPTR,A                  
    0D1D: 90 D6 D5    MOV DPTR,#0xD6D5              
    0D20: 74 02       MOV A,#0x02                   
    0D22: F0          MOVX @DPTR,A                  
    0D23: 90 D7 55    MOV DPTR,#0xD755              
    0D26: 74 02       MOV A,#0x02                   
    0D28: F0          MOVX @DPTR,A                  
    0D29: 90 D7 D5    MOV DPTR,#0xD7D5              
    0D2C: 74 02       MOV A,#0x02                   
    0D2E: F0          MOVX @DPTR,A                  
    0D2F: 90 D6 0A    MOV DPTR,#0xD60A              
    0D32: 74 07       MOV A,#0x07                   
    0D34: F0          MOVX @DPTR,A                  
    0D35: 90 D6 8A    MOV DPTR,#0xD68A              
    0D38: 74 07       MOV A,#0x07                   
    0D3A: F0          MOVX @DPTR,A                  
    0D3B: 90 D7 0A    MOV DPTR,#0xD70A              
    0D3E: 74 07       MOV A,#0x07                   
    0D40: F0          MOVX @DPTR,A                  
    0D41: 90 D7 8A    MOV DPTR,#0xD78A              
    0D44: 74 07       MOV A,#0x07                   
    0D46: F0          MOVX @DPTR,A                  
    0D47: 90 D6 0B    MOV DPTR,#0xD60B              
    0D4A: 74 02       MOV A,#0x02                   
    0D4C: F0          MOVX @DPTR,A                  
    0D4D: 90 D6 8B    MOV DPTR,#0xD68B              
    0D50: 74 02       MOV A,#0x02                   
    0D52: F0          MOVX @DPTR,A                  
    0D53: 90 D7 0B    MOV DPTR,#0xD70B              
    0D56: 74 02       MOV A,#0x02                   
    0D58: F0          MOVX @DPTR,A                  
    0D59: 90 D7 8B    MOV DPTR,#0xD78B              
    0D5C: 74 02       MOV A,#0x02                   
    0D5E: F0          MOVX @DPTR,A                  
    0D5F: 22          RET                           

loc_0D60:
    0D60: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    0D63: E0          MOVX A,@DPTR                  
    0D64: FA          MOV R2,A                      
    0D65: 20 E0 03    JB ACC.0,0x0D6B                  ; -> loc_0D6B
    0D68: 02 10 43    LJMP 0x1043                      ; -> loc_1043

loc_0D6B:
    0D6B: 90 D4 B5    MOV DPTR,#0xD4B5              
    0D6E: E0          MOVX A,@DPTR                  
    0D6F: FA          MOV R2,A                      
    0D70: 74 34       MOV A,#0x34                   
    0D72: B5 02 00    CJNE A,0x02,0x0D75               ; -> 0x0D75
    0D75: 40 14       JC 0x0D8B                        ; -> 0x0D8B
    0D77: 90 D4 B5    MOV DPTR,#0xD4B5              
    0D7A: E0          MOVX A,@DPTR                  
    0D7B: FA          MOV R2,A                      
    0D7C: BA 34 66    CJNE R2,#0x34,0x0DE5             ; -> loc_0DE5
    0D7F: 90 D4 B4    MOV DPTR,#0xD4B4              
    0D82: E0          MOVX A,@DPTR                  
    0D83: FA          MOV R2,A                      
    0D84: 74 BC       MOV A,#0xBC                   
    0D86: B5 02 00    CJNE A,0x02,0x0D89               ; -> 0x0D89
    0D89: 50 5A       JNC 0x0DE5                       ; -> loc_0DE5
    0D8B: 90 D6 54    MOV DPTR,#0xD654              
    0D8E: 74 07       MOV A,#0x07                   
    0D90: F0          MOVX @DPTR,A                  
    0D91: 90 D6 D4    MOV DPTR,#0xD6D4              
    0D94: 74 07       MOV A,#0x07                   
    0D96: F0          MOVX @DPTR,A                  
    0D97: 90 D7 54    MOV DPTR,#0xD754              
    0D9A: 74 07       MOV A,#0x07                   
    0D9C: F0          MOVX @DPTR,A                  
    0D9D: 90 D7 D4    MOV DPTR,#0xD7D4              
    0DA0: 74 07       MOV A,#0x07                   
    0DA2: F0          MOVX @DPTR,A                  
    0DA3: 90 D6 55    MOV DPTR,#0xD655              
    0DA6: 74 02       MOV A,#0x02                   
    0DA8: F0          MOVX @DPTR,A                  
    0DA9: 90 D6 D5    MOV DPTR,#0xD6D5              
    0DAC: 74 02       MOV A,#0x02                   
    0DAE: F0          MOVX @DPTR,A                  
    0DAF: 90 D7 55    MOV DPTR,#0xD755              
    0DB2: 74 02       MOV A,#0x02                   
    0DB4: F0          MOVX @DPTR,A                  
    0DB5: 90 D7 D5    MOV DPTR,#0xD7D5              
    0DB8: 74 02       MOV A,#0x02                   
    0DBA: F0          MOVX @DPTR,A                  
    0DBB: 90 D6 0A    MOV DPTR,#0xD60A              
    0DBE: E4          CLR A                         
    0DBF: F0          MOVX @DPTR,A                  
    0DC0: 90 D6 8A    MOV DPTR,#0xD68A              
    0DC3: F0          MOVX @DPTR,A                  
    0DC4: 90 D7 0A    MOV DPTR,#0xD70A              
    0DC7: F0          MOVX @DPTR,A                  
    0DC8: 90 D7 8A    MOV DPTR,#0xD78A              
    0DCB: F0          MOVX @DPTR,A                  
    0DCC: 90 D6 0B    MOV DPTR,#0xD60B              
    0DCF: 74 04       MOV A,#0x04                   
    0DD1: F0          MOVX @DPTR,A                  
    0DD2: 90 D6 8B    MOV DPTR,#0xD68B              
    0DD5: 74 04       MOV A,#0x04                   
    0DD7: F0          MOVX @DPTR,A                  
    0DD8: 90 D7 0B    MOV DPTR,#0xD70B              
    0DDB: 74 04       MOV A,#0x04                   
    0DDD: F0          MOVX @DPTR,A                  
    0DDE: 90 D7 8B    MOV DPTR,#0xD78B              
    0DE1: 74 04       MOV A,#0x04                   
    0DE3: F0          MOVX @DPTR,A                  
    0DE4: 22          RET                           

loc_0DE5:
    0DE5: 90 D4 B5    MOV DPTR,#0xD4B5              
    0DE8: E0          MOVX A,@DPTR                  
    0DE9: FA          MOV R2,A                      
    0DEA: 74 21       MOV A,#0x21                   
    0DEC: B5 02 00    CJNE A,0x02,0x0DEF               ; -> 0x0DEF
    0DEF: 40 14       JC 0x0E05                        ; -> 0x0E05
    0DF1: 90 D4 B5    MOV DPTR,#0xD4B5              
    0DF4: E0          MOVX A,@DPTR                  
    0DF5: FA          MOV R2,A                      
    0DF6: BA 21 66    CJNE R2,#0x21,0x0E5F             ; -> loc_0E5F
    0DF9: 90 D4 B4    MOV DPTR,#0xD4B4              
    0DFC: E0          MOVX A,@DPTR                  
    0DFD: FA          MOV R2,A                      
    0DFE: 74 34       MOV A,#0x34                   
    0E00: B5 02 00    CJNE A,0x02,0x0E03               ; -> 0x0E03
    0E03: 50 5A       JNC 0x0E5F                       ; -> loc_0E5F
    0E05: 90 D6 54    MOV DPTR,#0xD654              
    0E08: 74 01       MOV A,#0x01                   
    0E0A: F0          MOVX @DPTR,A                  
    0E0B: 90 D6 D4    MOV DPTR,#0xD6D4              
    0E0E: 74 01       MOV A,#0x01                   
    0E10: F0          MOVX @DPTR,A                  
    0E11: 90 D7 54    MOV DPTR,#0xD754              
    0E14: 74 01       MOV A,#0x01                   
    0E16: F0          MOVX @DPTR,A                  
    0E17: 90 D7 D4    MOV DPTR,#0xD7D4              
    0E1A: 74 01       MOV A,#0x01                   
    0E1C: F0          MOVX @DPTR,A                  
    0E1D: 90 D6 55    MOV DPTR,#0xD655              
    0E20: 74 08       MOV A,#0x08                   
    0E22: F0          MOVX @DPTR,A                  
    0E23: 90 D6 D5    MOV DPTR,#0xD6D5              
    0E26: 74 08       MOV A,#0x08                   
    0E28: F0          MOVX @DPTR,A                  
    0E29: 90 D7 55    MOV DPTR,#0xD755              
    0E2C: 74 08       MOV A,#0x08                   
    0E2E: F0          MOVX @DPTR,A                  
    0E2F: 90 D7 D5    MOV DPTR,#0xD7D5              
    0E32: 74 08       MOV A,#0x08                   
    0E34: F0          MOVX @DPTR,A                  
    0E35: 90 D6 0A    MOV DPTR,#0xD60A              
    0E38: E4          CLR A                         
    0E39: F0          MOVX @DPTR,A                  
    0E3A: 90 D6 8A    MOV DPTR,#0xD68A              
    0E3D: F0          MOVX @DPTR,A                  
    0E3E: 90 D7 0A    MOV DPTR,#0xD70A              
    0E41: F0          MOVX @DPTR,A                  
    0E42: 90 D7 8A    MOV DPTR,#0xD78A              
    0E45: F0          MOVX @DPTR,A                  
    0E46: 90 D6 0B    MOV DPTR,#0xD60B              
    0E49: 74 04       MOV A,#0x04                   
    0E4B: F0          MOVX @DPTR,A                  
    0E4C: 90 D6 8B    MOV DPTR,#0xD68B              
    0E4F: 74 04       MOV A,#0x04                   
    0E51: F0          MOVX @DPTR,A                  
    0E52: 90 D7 0B    MOV DPTR,#0xD70B              
    0E55: 74 04       MOV A,#0x04                   
    0E57: F0          MOVX @DPTR,A                  
    0E58: 90 D7 8B    MOV DPTR,#0xD78B              
    0E5B: 74 04       MOV A,#0x04                   
    0E5D: F0          MOVX @DPTR,A                  
    0E5E: 22          RET                           

loc_0E5F:
    0E5F: 90 D4 B5    MOV DPTR,#0xD4B5              
    0E62: E0          MOVX A,@DPTR                  
    0E63: FA          MOV R2,A                      
    0E64: 74 1F       MOV A,#0x1F                   
    0E66: B5 02 00    CJNE A,0x02,0x0E69               ; -> 0x0E69
    0E69: 40 14       JC 0x0E7F                        ; -> 0x0E7F
    0E6B: 90 D4 B5    MOV DPTR,#0xD4B5              
    0E6E: E0          MOVX A,@DPTR                  
    0E6F: FA          MOV R2,A                      
    0E70: BA 1F 6D    CJNE R2,#0x1F,0x0EE0             ; -> loc_0EE0
    0E73: 90 D4 B4    MOV DPTR,#0xD4B4              
    0E76: E0          MOVX A,@DPTR                  
    0E77: FA          MOV R2,A                      
    0E78: 74 40       MOV A,#0x40                   
    0E7A: B5 02 00    CJNE A,0x02,0x0E7D               ; -> 0x0E7D
    0E7D: 50 61       JNC 0x0EE0                       ; -> loc_0EE0
    0E7F: 90 D6 54    MOV DPTR,#0xD654              
    0E82: 74 01       MOV A,#0x01                   
    0E84: F0          MOVX @DPTR,A                  
    0E85: 90 D6 D4    MOV DPTR,#0xD6D4              
    0E88: 74 01       MOV A,#0x01                   
    0E8A: F0          MOVX @DPTR,A                  
    0E8B: 90 D7 54    MOV DPTR,#0xD754              
    0E8E: 74 01       MOV A,#0x01                   
    0E90: F0          MOVX @DPTR,A                  
    0E91: 90 D7 D4    MOV DPTR,#0xD7D4              
    0E94: 74 01       MOV A,#0x01                   
    0E96: F0          MOVX @DPTR,A                  
    0E97: 90 D6 55    MOV DPTR,#0xD655              
    0E9A: 74 08       MOV A,#0x08                   
    0E9C: F0          MOVX @DPTR,A                  
    0E9D: 90 D6 D5    MOV DPTR,#0xD6D5              
    0EA0: 74 08       MOV A,#0x08                   
    0EA2: F0          MOVX @DPTR,A                  
    0EA3: 90 D7 55    MOV DPTR,#0xD755              
    0EA6: 74 08       MOV A,#0x08                   
    0EA8: F0          MOVX @DPTR,A                  
    0EA9: 90 D7 D5    MOV DPTR,#0xD7D5              
    0EAC: 74 08       MOV A,#0x08                   
    0EAE: F0          MOVX @DPTR,A                  
    0EAF: 90 D6 0A    MOV DPTR,#0xD60A              
    0EB2: 74 01       MOV A,#0x01                   
    0EB4: F0          MOVX @DPTR,A                  
    0EB5: 90 D6 8A    MOV DPTR,#0xD68A              
    0EB8: 74 01       MOV A,#0x01                   
    0EBA: F0          MOVX @DPTR,A                  
    0EBB: 90 D7 0A    MOV DPTR,#0xD70A              
    0EBE: 74 01       MOV A,#0x01                   
    0EC0: F0          MOVX @DPTR,A                  
    0EC1: 90 D7 8A    MOV DPTR,#0xD78A              
    0EC4: 74 01       MOV A,#0x01                   
    0EC6: F0          MOVX @DPTR,A                  
    0EC7: 90 D6 0B    MOV DPTR,#0xD60B              
    0ECA: 74 04       MOV A,#0x04                   
    0ECC: F0          MOVX @DPTR,A                  
    0ECD: 90 D6 8B    MOV DPTR,#0xD68B              
    0ED0: 74 04       MOV A,#0x04                   
    0ED2: F0          MOVX @DPTR,A                  
    0ED3: 90 D7 0B    MOV DPTR,#0xD70B              
    0ED6: 74 04       MOV A,#0x04                   
    0ED8: F0          MOVX @DPTR,A                  
    0ED9: 90 D7 8B    MOV DPTR,#0xD78B              
    0EDC: 74 04       MOV A,#0x04                   
    0EDE: F0          MOVX @DPTR,A                  
    0EDF: 22          RET                           

loc_0EE0:
    0EE0: 90 D4 B5    MOV DPTR,#0xD4B5              
    0EE3: E0          MOVX A,@DPTR                  
    0EE4: FA          MOV R2,A                      
    0EE5: 74 13       MOV A,#0x13                   
    0EE7: B5 02 00    CJNE A,0x02,0x0EEA               ; -> 0x0EEA
    0EEA: 40 14       JC 0x0F00                        ; -> 0x0F00
    0EEC: 90 D4 B5    MOV DPTR,#0xD4B5              
    0EEF: E0          MOVX A,@DPTR                  
    0EF0: FA          MOV R2,A                      
    0EF1: BA 13 6D    CJNE R2,#0x13,0x0F61             ; -> loc_0F61
    0EF4: 90 D4 B4    MOV DPTR,#0xD4B4              
    0EF7: E0          MOVX A,@DPTR                  
    0EF8: FA          MOV R2,A                      
    0EF9: 74 88       MOV A,#0x88                   
    0EFB: B5 02 00    CJNE A,0x02,0x0EFE               ; -> 0x0EFE
    0EFE: 50 61       JNC 0x0F61                       ; -> loc_0F61
    0F00: 90 D6 54    MOV DPTR,#0xD654              
    0F03: 74 03       MOV A,#0x03                   
    0F05: F0          MOVX @DPTR,A                  
    0F06: 90 D6 D4    MOV DPTR,#0xD6D4              
    0F09: 74 03       MOV A,#0x03                   
    0F0B: F0          MOVX @DPTR,A                  
    0F0C: 90 D7 54    MOV DPTR,#0xD754              
    0F0F: 74 03       MOV A,#0x03                   
    0F11: F0          MOVX @DPTR,A                  
    0F12: 90 D7 D4    MOV DPTR,#0xD7D4              
    0F15: 74 03       MOV A,#0x03                   
    0F17: F0          MOVX @DPTR,A                  
    0F18: 90 D6 55    MOV DPTR,#0xD655              
    0F1B: 74 08       MOV A,#0x08                   
    0F1D: F0          MOVX @DPTR,A                  
    0F1E: 90 D6 D5    MOV DPTR,#0xD6D5              
    0F21: 74 08       MOV A,#0x08                   
    0F23: F0          MOVX @DPTR,A                  
    0F24: 90 D7 55    MOV DPTR,#0xD755              
    0F27: 74 08       MOV A,#0x08                   
    0F29: F0          MOVX @DPTR,A                  
    0F2A: 90 D7 D5    MOV DPTR,#0xD7D5              
    0F2D: 74 08       MOV A,#0x08                   
    0F2F: F0          MOVX @DPTR,A                  
    0F30: 90 D6 0A    MOV DPTR,#0xD60A              
    0F33: 74 01       MOV A,#0x01                   
    0F35: F0          MOVX @DPTR,A                  
    0F36: 90 D6 8A    MOV DPTR,#0xD68A              
    0F39: 74 01       MOV A,#0x01                   
    0F3B: F0          MOVX @DPTR,A                  
    0F3C: 90 D7 0A    MOV DPTR,#0xD70A              
    0F3F: 74 01       MOV A,#0x01                   
    0F41: F0          MOVX @DPTR,A                  
    0F42: 90 D7 8A    MOV DPTR,#0xD78A              
    0F45: 74 01       MOV A,#0x01                   
    0F47: F0          MOVX @DPTR,A                  
    0F48: 90 D6 0B    MOV DPTR,#0xD60B              
    0F4B: 74 02       MOV A,#0x02                   
    0F4D: F0          MOVX @DPTR,A                  
    0F4E: 90 D6 8B    MOV DPTR,#0xD68B              
    0F51: 74 02       MOV A,#0x02                   
    0F53: F0          MOVX @DPTR,A                  
    0F54: 90 D7 0B    MOV DPTR,#0xD70B              
    0F57: 74 02       MOV A,#0x02                   
    0F59: F0          MOVX @DPTR,A                  
    0F5A: 90 D7 8B    MOV DPTR,#0xD78B              
    0F5D: 74 02       MOV A,#0x02                   
    0F5F: F0          MOVX @DPTR,A                  
    0F60: 22          RET                           

loc_0F61:
    0F61: 90 D4 B5    MOV DPTR,#0xD4B5              
    0F64: E0          MOVX A,@DPTR                  
    0F65: FA          MOV R2,A                      
    0F66: 74 09       MOV A,#0x09                   
    0F68: B5 02 00    CJNE A,0x02,0x0F6B               ; -> 0x0F6B
    0F6B: 40 14       JC 0x0F81                        ; -> 0x0F81
    0F6D: 90 D4 B5    MOV DPTR,#0xD4B5              
    0F70: E0          MOVX A,@DPTR                  
    0F71: FA          MOV R2,A                      
    0F72: BA 09 6D    CJNE R2,#0x09,0x0FE2             ; -> loc_0FE2
    0F75: 90 D4 B4    MOV DPTR,#0xD4B4              
    0F78: E0          MOVX A,@DPTR                  
    0F79: FA          MOV R2,A                      
    0F7A: 74 C4       MOV A,#0xC4                   
    0F7C: B5 02 00    CJNE A,0x02,0x0F7F               ; -> 0x0F7F
    0F7F: 50 61       JNC 0x0FE2                       ; -> loc_0FE2
    0F81: 90 D6 54    MOV DPTR,#0xD654              
    0F84: 74 07       MOV A,#0x07                   
    0F86: F0          MOVX @DPTR,A                  
    0F87: 90 D6 D4    MOV DPTR,#0xD6D4              
    0F8A: 74 07       MOV A,#0x07                   
    0F8C: F0          MOVX @DPTR,A                  
    0F8D: 90 D7 54    MOV DPTR,#0xD754              
    0F90: 74 07       MOV A,#0x07                   
    0F92: F0          MOVX @DPTR,A                  
    0F93: 90 D7 D4    MOV DPTR,#0xD7D4              
    0F96: 74 07       MOV A,#0x07                   
    0F98: F0          MOVX @DPTR,A                  
    0F99: 90 D6 55    MOV DPTR,#0xD655              
    0F9C: 74 08       MOV A,#0x08                   
    0F9E: F0          MOVX @DPTR,A                  
    0F9F: 90 D6 D5    MOV DPTR,#0xD6D5              
    0FA2: 74 08       MOV A,#0x08                   
    0FA4: F0          MOVX @DPTR,A                  
    0FA5: 90 D7 55    MOV DPTR,#0xD755              
    0FA8: 74 08       MOV A,#0x08                   
    0FAA: F0          MOVX @DPTR,A                  
    0FAB: 90 D7 D5    MOV DPTR,#0xD7D5              
    0FAE: 74 08       MOV A,#0x08                   
    0FB0: F0          MOVX @DPTR,A                  
    0FB1: 90 D6 0A    MOV DPTR,#0xD60A              
    0FB4: 74 03       MOV A,#0x03                   
    0FB6: F0          MOVX @DPTR,A                  
    0FB7: 90 D6 8A    MOV DPTR,#0xD68A              
    0FBA: 74 03       MOV A,#0x03                   
    0FBC: F0          MOVX @DPTR,A                  
    0FBD: 90 D7 0A    MOV DPTR,#0xD70A              
    0FC0: 74 03       MOV A,#0x03                   
    0FC2: F0          MOVX @DPTR,A                  
    0FC3: 90 D7 8A    MOV DPTR,#0xD78A              
    0FC6: 74 03       MOV A,#0x03                   
    0FC8: F0          MOVX @DPTR,A                  
    0FC9: 90 D6 0B    MOV DPTR,#0xD60B              
    0FCC: 74 02       MOV A,#0x02                   
    0FCE: F0          MOVX @DPTR,A                  
    0FCF: 90 D6 8B    MOV DPTR,#0xD68B              
    0FD2: 74 02       MOV A,#0x02                   
    0FD4: F0          MOVX @DPTR,A                  
    0FD5: 90 D7 0B    MOV DPTR,#0xD70B              
    0FD8: 74 02       MOV A,#0x02                   
    0FDA: F0          MOVX @DPTR,A                  
    0FDB: 90 D7 8B    MOV DPTR,#0xD78B              
    0FDE: 74 02       MOV A,#0x02                   
    0FE0: F0          MOVX @DPTR,A                  
    0FE1: 22          RET                           

loc_0FE2:
    0FE2: 90 D6 54    MOV DPTR,#0xD654              
    0FE5: 74 07       MOV A,#0x07                   
    0FE7: F0          MOVX @DPTR,A                  
    0FE8: 90 D6 D4    MOV DPTR,#0xD6D4              
    0FEB: 74 07       MOV A,#0x07                   
    0FED: F0          MOVX @DPTR,A                  
    0FEE: 90 D7 54    MOV DPTR,#0xD754              
    0FF1: 74 07       MOV A,#0x07                   
    0FF3: F0          MOVX @DPTR,A                  
    0FF4: 90 D7 D4    MOV DPTR,#0xD7D4              
    0FF7: 74 07       MOV A,#0x07                   
    0FF9: F0          MOVX @DPTR,A                  
    0FFA: 90 D6 55    MOV DPTR,#0xD655              
    0FFD: 74 10       MOV A,#0x10                   
    0FFF: F0          MOVX @DPTR,A                  
    1000: 90 D6 D5    MOV DPTR,#0xD6D5              
    1003: 74 10       MOV A,#0x10                   
    1005: F0          MOVX @DPTR,A                  
    1006: 90 D7 55    MOV DPTR,#0xD755              
    1009: 74 10       MOV A,#0x10                   
    100B: F0          MOVX @DPTR,A                  
    100C: 90 D7 D5    MOV DPTR,#0xD7D5              
    100F: 74 10       MOV A,#0x10                   
    1011: F0          MOVX @DPTR,A                  
    1012: 90 D6 0A    MOV DPTR,#0xD60A              
    1015: 74 0F       MOV A,#0x0F                   
    1017: F0          MOVX @DPTR,A                  
    1018: 90 D6 8A    MOV DPTR,#0xD68A              
    101B: 74 0F       MOV A,#0x0F                   
    101D: F0          MOVX @DPTR,A                  
    101E: 90 D7 0A    MOV DPTR,#0xD70A              
    1021: 74 0F       MOV A,#0x0F                   
    1023: F0          MOVX @DPTR,A                  
    1024: 90 D7 8A    MOV DPTR,#0xD78A              
    1027: 74 0F       MOV A,#0x0F                   
    1029: F0          MOVX @DPTR,A                  
    102A: 90 D6 0B    MOV DPTR,#0xD60B              
    102D: 74 02       MOV A,#0x02                   
    102F: F0          MOVX @DPTR,A                  
    1030: 90 D6 8B    MOV DPTR,#0xD68B              
    1033: 74 02       MOV A,#0x02                   
    1035: F0          MOVX @DPTR,A                  
    1036: 90 D7 0B    MOV DPTR,#0xD70B              
    1039: 74 02       MOV A,#0x02                   
    103B: F0          MOVX @DPTR,A                  
    103C: 90 D7 8B    MOV DPTR,#0xD78B              
    103F: 74 02       MOV A,#0x02                   
    1041: F0          MOVX @DPTR,A                  
    1042: 22          RET                           

loc_1043:
    1043: 90 7F 7D    MOV DPTR,#0x7F7D              
    1046: E0          MOVX A,@DPTR                  
    1047: FA          MOV R2,A                      
    1048: BA 10 61    CJNE R2,#0x10,0x10AC             ; -> loc_10AC
    104B: 90 D6 54    MOV DPTR,#0xD654              
    104E: 74 07       MOV A,#0x07                   
    1050: F0          MOVX @DPTR,A                  
    1051: 90 D6 D4    MOV DPTR,#0xD6D4              
    1054: 74 07       MOV A,#0x07                   
    1056: F0          MOVX @DPTR,A                  
    1057: 90 D7 54    MOV DPTR,#0xD754              
    105A: 74 07       MOV A,#0x07                   
    105C: F0          MOVX @DPTR,A                  
    105D: 90 D7 D4    MOV DPTR,#0xD7D4              
    1060: 74 07       MOV A,#0x07                   
    1062: F0          MOVX @DPTR,A                  
    1063: 90 D6 55    MOV DPTR,#0xD655              
    1066: 74 02       MOV A,#0x02                   
    1068: F0          MOVX @DPTR,A                  
    1069: 90 D6 D5    MOV DPTR,#0xD6D5              
    106C: 74 02       MOV A,#0x02                   
    106E: F0          MOVX @DPTR,A                  
    106F: 90 D7 55    MOV DPTR,#0xD755              
    1072: 74 02       MOV A,#0x02                   
    1074: F0          MOVX @DPTR,A                  
    1075: 90 D7 D5    MOV DPTR,#0xD7D5              
    1078: 74 02       MOV A,#0x02                   
    107A: F0          MOVX @DPTR,A                  
    107B: 90 D6 0A    MOV DPTR,#0xD60A              
    107E: 74 07       MOV A,#0x07                   
    1080: F0          MOVX @DPTR,A                  
    1081: 90 D6 8A    MOV DPTR,#0xD68A              
    1084: 74 07       MOV A,#0x07                   
    1086: F0          MOVX @DPTR,A                  
    1087: 90 D7 0A    MOV DPTR,#0xD70A              
    108A: 74 07       MOV A,#0x07                   
    108C: F0          MOVX @DPTR,A                  
    108D: 90 D7 8A    MOV DPTR,#0xD78A              
    1090: 74 07       MOV A,#0x07                   
    1092: F0          MOVX @DPTR,A                  
    1093: 90 D6 0B    MOV DPTR,#0xD60B              
    1096: 74 02       MOV A,#0x02                   
    1098: F0          MOVX @DPTR,A                  
    1099: 90 D6 8B    MOV DPTR,#0xD68B              
    109C: 74 02       MOV A,#0x02                   
    109E: F0          MOVX @DPTR,A                  
    109F: 90 D7 0B    MOV DPTR,#0xD70B              
    10A2: 74 02       MOV A,#0x02                   
    10A4: F0          MOVX @DPTR,A                  
    10A5: 90 D7 8B    MOV DPTR,#0xD78B              
    10A8: 74 02       MOV A,#0x02                   
    10AA: F0          MOVX @DPTR,A                  
    10AB: 22          RET                           

loc_10AC:
    10AC: 90 7F 7D    MOV DPTR,#0x7F7D              
    10AF: E0          MOVX A,@DPTR                  
    10B0: FA          MOV R2,A                      
    10B1: BA 08 61    CJNE R2,#0x08,0x1115             ; -> loc_1115
    10B4: 90 D6 54    MOV DPTR,#0xD654              
    10B7: 74 07       MOV A,#0x07                   
    10B9: F0          MOVX @DPTR,A                  
    10BA: 90 D6 D4    MOV DPTR,#0xD6D4              
    10BD: 74 07       MOV A,#0x07                   
    10BF: F0          MOVX @DPTR,A                  
    10C0: 90 D7 54    MOV DPTR,#0xD754              
    10C3: 74 07       MOV A,#0x07                   
    10C5: F0          MOVX @DPTR,A                  
    10C6: 90 D7 D4    MOV DPTR,#0xD7D4              
    10C9: 74 07       MOV A,#0x07                   
    10CB: F0          MOVX @DPTR,A                  
    10CC: 90 D6 55    MOV DPTR,#0xD655              
    10CF: 74 04       MOV A,#0x04                   
    10D1: F0          MOVX @DPTR,A                  
    10D2: 90 D6 D5    MOV DPTR,#0xD6D5              
    10D5: 74 04       MOV A,#0x04                   
    10D7: F0          MOVX @DPTR,A                  
    10D8: 90 D7 55    MOV DPTR,#0xD755              
    10DB: 74 04       MOV A,#0x04                   
    10DD: F0          MOVX @DPTR,A                  
    10DE: 90 D7 D5    MOV DPTR,#0xD7D5              
    10E1: 74 04       MOV A,#0x04                   
    10E3: F0          MOVX @DPTR,A                  
    10E4: 90 D6 0A    MOV DPTR,#0xD60A              
    10E7: 74 07       MOV A,#0x07                   
    10E9: F0          MOVX @DPTR,A                  
    10EA: 90 D6 8A    MOV DPTR,#0xD68A              
    10ED: 74 07       MOV A,#0x07                   
    10EF: F0          MOVX @DPTR,A                  
    10F0: 90 D7 0A    MOV DPTR,#0xD70A              
    10F3: 74 07       MOV A,#0x07                   
    10F5: F0          MOVX @DPTR,A                  
    10F6: 90 D7 8A    MOV DPTR,#0xD78A              
    10F9: 74 07       MOV A,#0x07                   
    10FB: F0          MOVX @DPTR,A                  
    10FC: 90 D6 0B    MOV DPTR,#0xD60B              
    10FF: 74 02       MOV A,#0x02                   
    1101: F0          MOVX @DPTR,A                  
    1102: 90 D6 8B    MOV DPTR,#0xD68B              
    1105: 74 02       MOV A,#0x02                   
    1107: F0          MOVX @DPTR,A                  
    1108: 90 D7 0B    MOV DPTR,#0xD70B              
    110B: 74 02       MOV A,#0x02                   
    110D: F0          MOVX @DPTR,A                  
    110E: 90 D7 8B    MOV DPTR,#0xD78B              
    1111: 74 02       MOV A,#0x02                   
    1113: F0          MOVX @DPTR,A                  
    1114: 22          RET                           

loc_1115:
    1115: 90 D6 54    MOV DPTR,#0xD654              
    1118: 74 03       MOV A,#0x03                   
    111A: F0          MOVX @DPTR,A                  
    111B: 90 D6 D4    MOV DPTR,#0xD6D4              
    111E: 74 03       MOV A,#0x03                   
    1120: F0          MOVX @DPTR,A                  
    1121: 90 D7 54    MOV DPTR,#0xD754              
    1124: 74 03       MOV A,#0x03                   
    1126: F0          MOVX @DPTR,A                  
    1127: 90 D7 D4    MOV DPTR,#0xD7D4              
    112A: 74 03       MOV A,#0x03                   
    112C: F0          MOVX @DPTR,A                  
    112D: 90 D6 55    MOV DPTR,#0xD655              
    1130: 74 08       MOV A,#0x08                   
    1132: F0          MOVX @DPTR,A                  
    1133: 90 D6 D5    MOV DPTR,#0xD6D5              
    1136: 74 08       MOV A,#0x08                   
    1138: F0          MOVX @DPTR,A                  
    1139: 90 D7 55    MOV DPTR,#0xD755              
    113C: 74 08       MOV A,#0x08                   
    113E: F0          MOVX @DPTR,A                  
    113F: 90 D7 D5    MOV DPTR,#0xD7D5              
    1142: 74 08       MOV A,#0x08                   
    1144: F0          MOVX @DPTR,A                  
    1145: 90 D6 0A    MOV DPTR,#0xD60A              
    1148: 74 0F       MOV A,#0x0F                   
    114A: F0          MOVX @DPTR,A                  
    114B: 90 D6 8A    MOV DPTR,#0xD68A              
    114E: 74 0F       MOV A,#0x0F                   
    1150: F0          MOVX @DPTR,A                  
    1151: 90 D7 0A    MOV DPTR,#0xD70A              
    1154: 74 0F       MOV A,#0x0F                   
    1156: F0          MOVX @DPTR,A                  
    1157: 90 D7 8A    MOV DPTR,#0xD78A              
    115A: 74 0F       MOV A,#0x0F                   
    115C: F0          MOVX @DPTR,A                  
    115D: 90 D6 0B    MOV DPTR,#0xD60B              
    1160: 74 01       MOV A,#0x01                   
    1162: F0          MOVX @DPTR,A                  
    1163: 90 D6 8B    MOV DPTR,#0xD68B              
    1166: 74 01       MOV A,#0x01                   
    1168: F0          MOVX @DPTR,A                  
    1169: 90 D7 0B    MOV DPTR,#0xD70B              
    116C: 74 01       MOV A,#0x01                   
    116E: F0          MOVX @DPTR,A                  
    116F: 90 D7 8B    MOV DPTR,#0xD78B              
    1172: 74 01       MOV A,#0x01                   
    1174: F0          MOVX @DPTR,A                  
    1175: 22          RET                           
    1176: 90          DB 0x90                       ; data
    1177: D8          DB 0xD8                       ; data
    1178: 54          DB 0x54                       ; data
    1179: E0          DB 0xE0                       ; data
    117A: 90          DB 0x90                       ; data
    117B: D8          DB 0xD8                       ; data
    117C: 08          DB 0x08                       ; data
    117D: F0          DB 0xF0                       ; data
    117E: 90          DB 0x90                       ; data
    117F: D6          DB 0xD6                       ; data
    1180: 10          DB 0x10                       ; data
    1181: E0          DB 0xE0                       ; data
    1182: 90          DB 0x90                       ; data
    1183: D6          DB 0xD6                       ; data
    1184: 08          DB 0x08                       ; data
    1185: F0          DB 0xF0                       ; data
    1186: 90          DB 0x90                       ; data
    1187: D6          DB 0xD6                       ; data
    1188: 90          DB 0x90                       ; data
    1189: E0          DB 0xE0                       ; data
    118A: 90          DB 0x90                       ; data
    118B: D6          DB 0xD6                       ; data
    118C: 88          DB 0x88                       ; data
    118D: F0          DB 0xF0                       ; data
    118E: 90          DB 0x90                       ; data
    118F: D7          DB 0xD7                       ; data
    1190: 10          DB 0x10                       ; data
    1191: E0          DB 0xE0                       ; data
    1192: 90          DB 0x90                       ; data
    1193: D7          DB 0xD7                       ; data
    1194: 08          DB 0x08                       ; data
    1195: F0          DB 0xF0                       ; data
    1196: 90          DB 0x90                       ; data
    1197: D7          DB 0xD7                       ; data
    1198: 90          DB 0x90                       ; data
    1199: E0          DB 0xE0                       ; data
    119A: 90          DB 0x90                       ; data
    119B: D7          DB 0xD7                       ; data
    119C: 88          DB 0x88                       ; data
    119D: F0          DB 0xF0                       ; data
    119E: 90          DB 0x90                       ; data
    119F: D6          DB 0xD6                       ; data
    11A0: 11          DB 0x11                       ; data
    11A1: E0          DB 0xE0                       ; data
    11A2: 90          DB 0x90                       ; data
    11A3: D6          DB 0xD6                       ; data
    11A4: 09          DB 0x09                       ; data
    11A5: F0          DB 0xF0                       ; data
    11A6: 90          DB 0x90                       ; data
    11A7: D6          DB 0xD6                       ; data
    11A8: 91          DB 0x91                       ; data
    11A9: E0          DB 0xE0                       ; data
    11AA: 90          DB 0x90                       ; data
    11AB: D6          DB 0xD6                       ; data
    11AC: 89          DB 0x89                       ; data
    11AD: F0          DB 0xF0                       ; data
    11AE: 90          DB 0x90                       ; data
    11AF: D7          DB 0xD7                       ; data
    11B0: 11          DB 0x11                       ; data
    11B1: E0          DB 0xE0                       ; data
    11B2: 90          DB 0x90                       ; data
    11B3: D7          DB 0xD7                       ; data
    11B4: 09          DB 0x09                       ; data
    11B5: F0          DB 0xF0                       ; data
    11B6: 90          DB 0x90                       ; data
    11B7: D7          DB 0xD7                       ; data
    11B8: 91          DB 0x91                       ; data
    11B9: E0          DB 0xE0                       ; data
    11BA: 90          DB 0x90                       ; data
    11BB: D7          DB 0xD7                       ; data
    11BC: 89          DB 0x89                       ; data
    11BD: F0          DB 0xF0                       ; data
    11BE: 90          DB 0x90                       ; data
    11BF: 7F          DB 0x7F                       ; data
    11C0: E1          DB 0xE1                       ; data
    11C1: E0          DB 0xE0                       ; data
    11C2: 90          DB 0x90                       ; data
    11C3: D6          DB 0xD6                       ; data
    11C4: 07          DB 0x07                       ; data
    11C5: F0          DB 0xF0                       ; data
    11C6: 90          DB 0x90                       ; data
    11C7: 7F          DB 0x7F                       ; data
    11C8: E2          DB 0xE2                       ; data
    11C9: E0          DB 0xE0                       ; data
    11CA: 90          DB 0x90                       ; data
    11CB: D6          DB 0xD6                       ; data
    11CC: 87          DB 0x87                       ; data
    11CD: F0          DB 0xF0                       ; data
    11CE: 90          DB 0x90                       ; data
    11CF: 7F          DB 0x7F                       ; data
    11D0: E3          DB 0xE3                       ; data
    11D1: E0          DB 0xE0                       ; data
    11D2: 90          DB 0x90                       ; data
    11D3: D7          DB 0xD7                       ; data
    11D4: 07          DB 0x07                       ; data
    11D5: F0          DB 0xF0                       ; data
    11D6: 90          DB 0x90                       ; data
    11D7: 7F          DB 0x7F                       ; data
    11D8: E4          DB 0xE4                       ; data
    11D9: E0          DB 0xE0                       ; data
    11DA: 90          DB 0x90                       ; data
    11DB: D7          DB 0xD7                       ; data
    11DC: 87          DB 0x87                       ; data
    11DD: F0          DB 0xF0                       ; data
    11DE: 90          DB 0x90                       ; data
    11DF: D8          DB 0xD8                       ; data
    11E0: 5B          DB 0x5B                       ; data
    11E1: 74          DB 0x74                       ; data
    11E2: 01          DB 0x01                       ; data
    11E3: F0          DB 0xF0                       ; data
    11E4: 22          DB 0x22                       ; data

sub_11E5:
    11E5: 90 D4 06    MOV DPTR,#0xD406                 ; register block D403
    11E8: 74 20       MOV A,#0x20                   
    11EA: F0          MOVX @DPTR,A                  
    11EB: 90 D4 07    MOV DPTR,#0xD407                 ; register block D403
    11EE: 74 01       MOV A,#0x01                   
    11F0: F0          MOVX @DPTR,A                  
    11F1: 90 D4 13    MOV DPTR,#0xD413                 ; register block D403
    11F4: 74 10       MOV A,#0x10                   
    11F6: F0          MOVX @DPTR,A                  
    11F7: 90 D4 14    MOV DPTR,#0xD414                 ; register block D403
    11FA: 74 27       MOV A,#0x27                   
    11FC: F0          MOVX @DPTR,A                  
    11FD: 90 D4 16    MOV DPTR,#0xD416                 ; register block D403
    1200: 74 15       MOV A,#0x15                   
    1202: F0          MOVX @DPTR,A                  
    1203: 90 D4 17    MOV DPTR,#0xD417                 ; register block D403
    1206: 74 34       MOV A,#0x34                   
    1208: F0          MOVX @DPTR,A                  
    1209: 90 D4 34    MOV DPTR,#0xD434                 ; register block D403
    120C: 74 98       MOV A,#0x98                   
    120E: F0          MOVX @DPTR,A                  
    120F: 90 D4 35    MOV DPTR,#0xD435                 ; register block D403
    1212: 74 3A       MOV A,#0x3A                   
    1214: F0          MOVX @DPTR,A                  
    1215: 90 D4 37    MOV DPTR,#0xD437                 ; register block D403
    1218: 74 20       MOV A,#0x20                   
    121A: F0          MOVX @DPTR,A                  
    121B: 90 D4 38    MOV DPTR,#0xD438                 ; register block D403
    121E: 74 4E       MOV A,#0x4E                   
    1220: F0          MOVX @DPTR,A                  
    1221: 90 D4 55    MOV DPTR,#0xD455                 ; register block D403
    1224: 74 04       MOV A,#0x04                   
    1226: F0          MOVX @DPTR,A                  
    1227: 90 D4 58    MOV DPTR,#0xD458                 ; register block D403
    122A: 74 03       MOV A,#0x03                   
    122C: F0          MOVX @DPTR,A                  
    122D: 90 D5 20    MOV DPTR,#0xD520              
    1230: 74 81       MOV A,#0x81                   
    1232: F0          MOVX @DPTR,A                  
    1233: 90 D5 21    MOV DPTR,#0xD521              
    1236: 74 05       MOV A,#0x05                   
    1238: F0          MOVX @DPTR,A                  
    1239: 90 D5 31    MOV DPTR,#0xD531              
    123C: 74 FF       MOV A,#0xFF                   
    123E: F0          MOVX @DPTR,A                  
    123F: 90 D5 45    MOV DPTR,#0xD545              
    1242: 74 02       MOV A,#0x02                   
    1244: F0          MOVX @DPTR,A                  
    1245: 90 D5 46    MOV DPTR,#0xD546              
    1248: 74 01       MOV A,#0x01                   
    124A: F0          MOVX @DPTR,A                  
    124B: 90 D5 4F    MOV DPTR,#0xD54F              
    124E: 74 03       MOV A,#0x03                   
    1250: F0          MOVX @DPTR,A                  
    1251: 90 D4 E2    MOV DPTR,#0xD4E2              
    1254: 74 88       MOV A,#0x88                   
    1256: F0          MOVX @DPTR,A                  
    1257: 90 D4 E3    MOV DPTR,#0xD4E3              
    125A: 74 88       MOV A,#0x88                   
    125C: F0          MOVX @DPTR,A                  
    125D: 90 D4 E4    MOV DPTR,#0xD4E4              
    1260: 74 08       MOV A,#0x08                   
    1262: F0          MOVX @DPTR,A                  
    1263: 90 D4 DC    MOV DPTR,#0xD4DC              
    1266: 74 66       MOV A,#0x66                   
    1268: F0          MOVX @DPTR,A                  
    1269: 90 D4 DD    MOV DPTR,#0xD4DD              
    126C: 74 66       MOV A,#0x66                   
    126E: F0          MOVX @DPTR,A                  
    126F: 90 D4 DE    MOV DPTR,#0xD4DE              
    1272: 74 06       MOV A,#0x06                   
    1274: F0          MOVX @DPTR,A                  
    1275: 90 D5 00    MOV DPTR,#0xD500              
    1278: 74 44       MOV A,#0x44                   
    127A: F0          MOVX @DPTR,A                  
    127B: 90 D5 01    MOV DPTR,#0xD501              
    127E: 74 44       MOV A,#0x44                   
    1280: F0          MOVX @DPTR,A                  
    1281: 90 D5 02    MOV DPTR,#0xD502              
    1284: 74 04       MOV A,#0x04                   
    1286: F0          MOVX @DPTR,A                  
    1287: 90 D5 06    MOV DPTR,#0xD506              
    128A: 74 33       MOV A,#0x33                   
    128C: F0          MOVX @DPTR,A                  
    128D: 90 D5 07    MOV DPTR,#0xD507              
    1290: 74 33       MOV A,#0x33                   
    1292: F0          MOVX @DPTR,A                  
    1293: 90 D5 08    MOV DPTR,#0xD508              
    1296: 74 03       MOV A,#0x03                   
    1298: F0          MOVX @DPTR,A                  
    1299: 22          RET                           

sub_129A:
    129A: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    129D: E0          MOVX A,@DPTR                  
    129E: FA          MOV R2,A                      
    129F: 30 E0 43    JNB ACC.0,0x12E5                 ; -> loc_12E5
    12A2: 90 D8 16    MOV DPTR,#0xD816              
    12A5: 74 F0       MOV A,#0xF0                   
    12A7: F0          MOVX @DPTR,A                  
    12A8: 90 D8 66    MOV DPTR,#0xD866              
    12AB: 74 F0       MOV A,#0xF0                   
    12AD: F0          MOVX @DPTR,A                  
    12AE: 90 D8 15    MOV DPTR,#0xD815              
    12B1: E0          MOVX A,@DPTR                  
    12B2: FA          MOV R2,A                      
    12B3: 43 02 80    ORL 0x02,#0x80                
    12B6: 90 D8 15    MOV DPTR,#0xD815              
    12B9: EA          MOV A,R2                      
    12BA: F0          MOVX @DPTR,A                  
    12BB: 90 D6 1E    MOV DPTR,#0xD61E              
    12BE: E4          CLR A                         
    12BF: F0          MOVX @DPTR,A                  
    12C0: 90 D8 15    MOV DPTR,#0xD815              
    12C3: E0          MOVX A,@DPTR                  
    12C4: FA          MOV R2,A                      
    12C5: 53 02 7F    ANL 0x02,#0x7F                
    12C8: 90 D8 15    MOV DPTR,#0xD815              
    12CB: EA          MOV A,R2                      
    12CC: F0          MOVX @DPTR,A                  
    12CD: 90 D8 2A    MOV DPTR,#0xD82A              
    12D0: E4          CLR A                         
    12D1: F0          MOVX @DPTR,A                  
    12D2: 90 D8 2B    MOV DPTR,#0xD82B              
    12D5: F0          MOVX @DPTR,A                  
    12D6: 90 D8 28    MOV DPTR,#0xD828              
    12D9: 74 F0       MOV A,#0xF0                   
    12DB: F0          MOVX @DPTR,A                  
    12DC: 90 D8 27    MOV DPTR,#0xD827              
    12DF: 74 F0       MOV A,#0xF0                   
    12E1: F0          MOVX @DPTR,A                  
    12E2: 02 13 C2    LJMP 0x13C2                      ; -> 0x13C2

loc_12E5:
    12E5: 90 7F 7D    MOV DPTR,#0x7F7D              
    12E8: E0          MOVX A,@DPTR                  
    12E9: FA          MOV R2,A                      
    12EA: BA 10 43    CJNE R2,#0x10,0x1330             ; -> loc_1330
    12ED: 90 D8 16    MOV DPTR,#0xD816              
    12F0: 74 F0       MOV A,#0xF0                   
    12F2: F0          MOVX @DPTR,A                  
    12F3: 90 D8 66    MOV DPTR,#0xD866              
    12F6: 74 0F       MOV A,#0x0F                   
    12F8: F0          MOVX @DPTR,A                  
    12F9: 90 D8 15    MOV DPTR,#0xD815              
    12FC: E0          MOVX A,@DPTR                  
    12FD: FA          MOV R2,A                      
    12FE: 43 02 80    ORL 0x02,#0x80                
    1301: 90 D8 15    MOV DPTR,#0xD815              
    1304: EA          MOV A,R2                      
    1305: F0          MOVX @DPTR,A                  
    1306: 90 D6 1E    MOV DPTR,#0xD61E              
    1309: E4          CLR A                         
    130A: F0          MOVX @DPTR,A                  
    130B: 90 D8 15    MOV DPTR,#0xD815              
    130E: E0          MOVX A,@DPTR                  
    130F: FA          MOV R2,A                      
    1310: 53 02 7F    ANL 0x02,#0x7F                
    1313: 90 D8 15    MOV DPTR,#0xD815              
    1316: EA          MOV A,R2                      
    1317: F0          MOVX @DPTR,A                  
    1318: 90 D8 2A    MOV DPTR,#0xD82A              
    131B: E4          CLR A                         
    131C: F0          MOVX @DPTR,A                  
    131D: 90 D8 2B    MOV DPTR,#0xD82B              
    1320: F0          MOVX @DPTR,A                  
    1321: 90 D8 28    MOV DPTR,#0xD828              
    1324: 74 F0       MOV A,#0xF0                   
    1326: F0          MOVX @DPTR,A                  
    1327: 90 D8 27    MOV DPTR,#0xD827              
    132A: 74 F0       MOV A,#0xF0                   
    132C: F0          MOVX @DPTR,A                  
    132D: 02 13 C2    LJMP 0x13C2                      ; -> 0x13C2

loc_1330:
    1330: 90 7F 7D    MOV DPTR,#0x7F7D              
    1333: E0          MOVX A,@DPTR                  
    1334: FA          MOV R2,A                      
    1335: BA 08 46    CJNE R2,#0x08,0x137E             ; -> loc_137E
    1338: 90 D8 16    MOV DPTR,#0xD816              
    133B: 74 0F       MOV A,#0x0F                   
    133D: F0          MOVX @DPTR,A                  
    133E: 90 D8 66    MOV DPTR,#0xD866              
    1341: 74 F0       MOV A,#0xF0                   
    1343: F0          MOVX @DPTR,A                  
    1344: 90 D8 15    MOV DPTR,#0xD815              
    1347: E0          MOVX A,@DPTR                  
    1348: FA          MOV R2,A                      
    1349: 43 02 80    ORL 0x02,#0x80                
    134C: 90 D8 15    MOV DPTR,#0xD815              
    134F: EA          MOV A,R2                      
    1350: F0          MOVX @DPTR,A                  
    1351: 90 D6 1E    MOV DPTR,#0xD61E              
    1354: 74 01       MOV A,#0x01                   
    1356: F0          MOVX @DPTR,A                  
    1357: 90 D8 15    MOV DPTR,#0xD815              
    135A: E0          MOVX A,@DPTR                  
    135B: FA          MOV R2,A                      
    135C: 53 02 7F    ANL 0x02,#0x7F                
    135F: 90 D8 15    MOV DPTR,#0xD815              
    1362: EA          MOV A,R2                      
    1363: F0          MOVX @DPTR,A                  
    1364: 90 D8 2A    MOV DPTR,#0xD82A              
    1367: 74 FF       MOV A,#0xFF                   
    1369: F0          MOVX @DPTR,A                  
    136A: 90 D8 2B    MOV DPTR,#0xD82B              
    136D: 74 FF       MOV A,#0xFF                   
    136F: F0          MOVX @DPTR,A                  
    1370: 90 D8 28    MOV DPTR,#0xD828              
    1373: 74 F0       MOV A,#0xF0                   
    1375: F0          MOVX @DPTR,A                  
    1376: 90 D8 27    MOV DPTR,#0xD827              
    1379: 74 F0       MOV A,#0xF0                   
    137B: F0          MOVX @DPTR,A                  
    137C: 80 44       SJMP 0x13C2                      ; -> 0x13C2

loc_137E:
    137E: 90 D8 16    MOV DPTR,#0xD816              
    1381: 74 0F       MOV A,#0x0F                   
    1383: F0          MOVX @DPTR,A                  
    1384: 90 D8 66    MOV DPTR,#0xD866              
    1387: 74 F0       MOV A,#0xF0                   
    1389: F0          MOVX @DPTR,A                  
    138A: 90 D8 15    MOV DPTR,#0xD815              
    138D: E0          MOVX A,@DPTR                  
    138E: FA          MOV R2,A                      
    138F: 43 02 80    ORL 0x02,#0x80                
    1392: 90 D8 15    MOV DPTR,#0xD815              
    1395: EA          MOV A,R2                      
    1396: F0          MOVX @DPTR,A                  
    1397: 90 D6 1E    MOV DPTR,#0xD61E              
    139A: 74 01       MOV A,#0x01                   
    139C: F0          MOVX @DPTR,A                  
    139D: 90 D8 15    MOV DPTR,#0xD815              
    13A0: E0          MOVX A,@DPTR                  
    13A1: FA          MOV R2,A                      
    13A2: 53 02 7F    ANL 0x02,#0x7F                
    13A5: 90 D8 15    MOV DPTR,#0xD815              
    13A8: EA          MOV A,R2                      
    13A9: F0          MOVX @DPTR,A                  
    13AA: 90 D8 2A    MOV DPTR,#0xD82A              
    13AD: 74 FF       MOV A,#0xFF                   
    13AF: F0          MOVX @DPTR,A                  
    13B0: 90 D8 2B    MOV DPTR,#0xD82B              
    13B3: 74 FF       MOV A,#0xFF                   
    13B5: F0          MOVX @DPTR,A                  
    13B6: 90 D8 28    MOV DPTR,#0xD828              
    13B9: 74 F0       MOV A,#0xF0                   
    13BB: F0          MOVX @DPTR,A                  
    13BC: 90 D8 27    MOV DPTR,#0xD827              
    13BF: 74 F0       MOV A,#0xF0                   
    13C1: F0          MOVX @DPTR,A                  
    13C2: 90 7F 7D    MOV DPTR,#0x7F7D              
    13C5: E0          MOVX A,@DPTR                  
    13C6: FA          MOV R2,A                      
    13C7: B4 01 00    CJNE A,#0x01,0x13CA              ; -> 0x13CA
    13CA: E4          CLR A                         
    13CB: 33          RLC A                         
    13CC: FA          MOV R2,A                      
    13CD: 60 04       JZ 0x13D3                        ; -> loc_13D3
    13CF: 7A 00       MOV R2,#0x00                  
    13D1: 80 10       SJMP 0x13E3                      ; -> 0x13E3

loc_13D3:
    13D3: 90 7F 7D    MOV DPTR,#0x7F7D              
    13D6: E0          MOVX A,@DPTR                  
    13D7: FB          MOV R3,A                      
    13D8: BB 08 04    CJNE R3,#0x08,0x13DF             ; -> loc_13DF
    13DB: 7B 01       MOV R3,#0x01                  
    13DD: 80 02       SJMP 0x13E1                      ; -> 0x13E1

loc_13DF:
    13DF: 7B 02       MOV R3,#0x02                  
    13E1: 8B 02       MOV 0x02,R3                   
    13E3: 90 D8 02    MOV DPTR,#0xD802              
    13E6: EA          MOV A,R2                      
    13E7: F0          MOVX @DPTR,A                  
    13E8: 75 82 00    MOV DPL(0x82),#0x00           
    13EB: 12 0C FA    LCALL 0x0CFA                     ; -> sub_0CFA
    13EE: 90 C8 9C    MOV DPTR,#0xC89C                 ; control + status register block
    13F1: E0          MOVX A,@DPTR                  
    13F2: 60 0E       JZ 0x1402                        ; -> 0x1402
    13F4: 90 7F 7D    MOV DPTR,#0x7F7D              
    13F7: E0          MOVX A,@DPTR                  
    13F8: FA          MOV R2,A                      
    13F9: BA 10 06    CJNE R2,#0x10,0x1402             ; -> 0x1402
    13FC: 90 CE 06    MOV DPTR,#0xCE06              
    13FF: 74 10       MOV A,#0x10                   
    1401: F0          MOVX @DPTR,A                  
    1402: 22          RET                           

sub_1403:
    1403: 90 D8 3C    MOV DPTR,#0xD83C              
    1406: 74 FF       MOV A,#0xFF                   
    1408: F0          MOVX @DPTR,A                  
    1409: 90 D8 3D    MOV DPTR,#0xD83D              
    140C: E4          CLR A                         
    140D: F0          MOVX @DPTR,A                  
    140E: 90 D8 42    MOV DPTR,#0xD842              
    1411: 74 10       MOV A,#0x10                   
    1413: F0          MOVX @DPTR,A                  
    1414: 90 D8 43    MOV DPTR,#0xD843              
    1417: E4          CLR A                         
    1418: F0          MOVX @DPTR,A                  
    1419: 75 50 10    MOV 0x50,#0x10                
    141C: 75 51 0E    MOV 0x51,#0x0E                
    141F: 75 82 00    MOV DPL(0x82),#0x00           
    1422: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1425: 90 D8 3B    MOV DPTR,#0xD83B              
    1428: 74 FF       MOV A,#0xFF                   
    142A: F0          MOVX @DPTR,A                  
    142B: 90 D8 0F    MOV DPTR,#0xD80F              
    142E: 74 0F       MOV A,#0x0F                   
    1430: F0          MOVX @DPTR,A                  
    1431: 90 D8 11    MOV DPTR,#0xD811              
    1434: 74 FF       MOV A,#0xFF                   
    1436: F0          MOVX @DPTR,A                  
    1437: 90 7E AC    MOV DPTR,#0x7EAC              
    143A: E0          MOVX A,@DPTR                  
    143B: FA          MOV R2,A                      
    143C: 60 04       JZ 0x1442                        ; -> loc_1442
    143E: 7A 10       MOV R2,#0x10                  
    1440: 80 02       SJMP 0x1444                      ; -> 0x1444

loc_1442:
    1442: 7A 32       MOV R2,#0x32                  
    1444: 90 D8 40    MOV DPTR,#0xD840              
    1447: EA          MOV A,R2                      
    1448: F0          MOVX @DPTR,A                  
    1449: 90 D8 41    MOV DPTR,#0xD841              
    144C: E4          CLR A                         
    144D: F0          MOVX @DPTR,A                  
    144E: 90 D8 3A    MOV DPTR,#0xD83A              
    1451: 74 0F       MOV A,#0x0F                   
    1453: F0          MOVX @DPTR,A                  
    1454: 90 7F B3    MOV DPTR,#0x7FB3              
    1457: E4          CLR A                         
    1458: F0          MOVX @DPTR,A                  
    1459: 90 7F B4    MOV DPTR,#0x7FB4              
    145C: 74 01       MOV A,#0x01                   
    145E: F0          MOVX @DPTR,A                  
    145F: 90 7E B9    MOV DPTR,#0x7EB9              
    1462: E4          CLR A                         
    1463: F0          MOVX @DPTR,A                  
    1464: 22          RET                           

sub_1465:
    1465: 75 50 10    MOV 0x50,#0x10                
    1468: 75 51 0C    MOV 0x51,#0x0C                
    146B: 75 82 00    MOV DPL(0x82),#0x00           
    146E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1471: 90 D8 15    MOV DPTR,#0xD815              
    1474: 74 0F       MOV A,#0x0F                   
    1476: F0          MOVX @DPTR,A                  
    1477: E0          MOVX A,@DPTR                  
    1478: FA          MOV R2,A                      
    1479: 43 02 80    ORL 0x02,#0x80                
    147C: 90 D8 15    MOV DPTR,#0xD815              
    147F: EA          MOV A,R2                      
    1480: F0          MOVX @DPTR,A                  
    1481: 90 D6 1C    MOV DPTR,#0xD61C              
    1484: E4          CLR A                         
    1485: F0          MOVX @DPTR,A                  
    1486: 90 D8 15    MOV DPTR,#0xD815              
    1489: E0          MOVX A,@DPTR                  
    148A: FA          MOV R2,A                      
    148B: 53 02 7F    ANL 0x02,#0x7F                
    148E: 90 D8 15    MOV DPTR,#0xD815              
    1491: EA          MOV A,R2                      
    1492: F0          MOVX @DPTR,A                  
    1493: 90 D8 25    MOV DPTR,#0xD825              
    1496: 74 FF       MOV A,#0xFF                   
    1498: F0          MOVX @DPTR,A                  
    1499: 90 D8 0F    MOV DPTR,#0xD80F              
    149C: E0          MOVX A,@DPTR                  
    149D: FA          MOV R2,A                      
    149E: 53 02 F0    ANL 0x02,#0xF0                
    14A1: 90 D8 0F    MOV DPTR,#0xD80F              
    14A4: EA          MOV A,R2                      
    14A5: F0          MOVX @DPTR,A                  
    14A6: 90 D8 11    MOV DPTR,#0xD811              
    14A9: E4          CLR A                         
    14AA: F0          MOVX @DPTR,A                  
    14AB: 90 D6 56    MOV DPTR,#0xD656              
    14AE: 74 03       MOV A,#0x03                   
    14B0: F0          MOVX @DPTR,A                  
    14B1: 90 D6 D6    MOV DPTR,#0xD6D6              
    14B4: 74 03       MOV A,#0x03                   
    14B6: F0          MOVX @DPTR,A                  
    14B7: 90 D7 56    MOV DPTR,#0xD756              
    14BA: 74 03       MOV A,#0x03                   
    14BC: F0          MOVX @DPTR,A                  
    14BD: 90 D7 D6    MOV DPTR,#0xD7D6              
    14C0: 74 03       MOV A,#0x03                   
    14C2: F0          MOVX @DPTR,A                  
    14C3: 90 D8 12    MOV DPTR,#0xD812              
    14C6: E0          MOVX A,@DPTR                  
    14C7: FA          MOV R2,A                      
    14C8: 43 02 F0    ORL 0x02,#0xF0                
    14CB: 90 D8 12    MOV DPTR,#0xD812              
    14CE: EA          MOV A,R2                      
    14CF: F0          MOVX @DPTR,A                  
    14D0: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    14D3: E0          MOVX A,@DPTR                  
    14D4: FA          MOV R2,A                      
    14D5: 90 7F ED    MOV DPTR,#0x7FED              
    14D8: 74 01       MOV A,#0x01                   
    14DA: 5A          ANL A,R2                      
    14DB: F0          MOVX @DPTR,A                  
    14DC: 90 7F ED    MOV DPTR,#0x7FED              
    14DF: E0          MOVX A,@DPTR                  
    14E0: FA          MOV R2,A                      
    14E1: 70 03       JNZ 0x14E6                       ; -> loc_14E6
    14E3: 02 15 6C    LJMP 0x156C                      ; -> loc_156C

loc_14E6:
    14E6: 90 D8 68    MOV DPTR,#0xD868              
    14E9: 74 07       MOV A,#0x07                   
    14EB: F0          MOVX @DPTR,A                  
    14EC: 90 D4 B5    MOV DPTR,#0xD4B5              
    14EF: E0          MOVX A,@DPTR                  
    14F0: FA          MOV R2,A                      
    14F1: BA 09 00    CJNE R2,#0x09,0x14F4             ; -> 0x14F4
    14F4: 40 12       JC 0x1508                        ; -> 0x1508
    14F6: 90 D4 B5    MOV DPTR,#0xD4B5              
    14F9: E0          MOVX A,@DPTR                  
    14FA: FA          MOV R2,A                      
    14FB: BA 09 18    CJNE R2,#0x09,0x1516             ; -> loc_1516
    14FE: 90 D4 B4    MOV DPTR,#0xD4B4              
    1501: E0          MOVX A,@DPTR                  
    1502: FA          MOV R2,A                      
    1503: BA C4 00    CJNE R2,#0xC4,0x1506             ; -> 0x1506
    1506: 50 0E       JNC 0x1516                       ; -> loc_1516
    1508: 90 D8 24    MOV DPTR,#0xD824              
    150B: 74 04       MOV A,#0x04                   
    150D: F0          MOVX @DPTR,A                  
    150E: 90 D8 4A    MOV DPTR,#0xD84A              
    1511: 74 02       MOV A,#0x02                   
    1513: F0          MOVX @DPTR,A                  
    1514: 80 4E       SJMP 0x1564                      ; -> 0x1564

loc_1516:
    1516: 90 D4 B5    MOV DPTR,#0xD4B5              
    1519: E0          MOVX A,@DPTR                  
    151A: FA          MOV R2,A                      
    151B: BA 13 00    CJNE R2,#0x13,0x151E             ; -> 0x151E
    151E: 40 12       JC 0x1532                        ; -> 0x1532
    1520: 90 D4 B5    MOV DPTR,#0xD4B5              
    1523: E0          MOVX A,@DPTR                  
    1524: FA          MOV R2,A                      
    1525: BA 13 18    CJNE R2,#0x13,0x1540             ; -> loc_1540
    1528: 90 D4 B4    MOV DPTR,#0xD4B4              
    152B: E0          MOVX A,@DPTR                  
    152C: FA          MOV R2,A                      
    152D: BA 88 00    CJNE R2,#0x88,0x1530             ; -> 0x1530
    1530: 50 0E       JNC 0x1540                       ; -> loc_1540
    1532: 90 D8 24    MOV DPTR,#0xD824              
    1535: 74 04       MOV A,#0x04                   
    1537: F0          MOVX @DPTR,A                  
    1538: 90 D8 4A    MOV DPTR,#0xD84A              
    153B: 74 04       MOV A,#0x04                   
    153D: F0          MOVX @DPTR,A                  
    153E: 80 24       SJMP 0x1564                      ; -> 0x1564

loc_1540:
    1540: 90 D4 B5    MOV DPTR,#0xD4B5              
    1543: E0          MOVX A,@DPTR                  
    1544: FA          MOV R2,A                      
    1545: BA 30 00    CJNE R2,#0x30,0x1548             ; -> 0x1548
    1548: 50 0E       JNC 0x1558                       ; -> loc_1558
    154A: 90 D8 24    MOV DPTR,#0xD824              
    154D: 74 08       MOV A,#0x08                   
    154F: F0          MOVX @DPTR,A                  
    1550: 90 D8 4A    MOV DPTR,#0xD84A              
    1553: 74 08       MOV A,#0x08                   
    1555: F0          MOVX @DPTR,A                  
    1556: 80 0C       SJMP 0x1564                      ; -> 0x1564

loc_1558:
    1558: 90 D8 24    MOV DPTR,#0xD824              
    155B: 74 08       MOV A,#0x08                   
    155D: F0          MOVX @DPTR,A                  
    155E: 90 D8 4A    MOV DPTR,#0xD84A              
    1561: 74 0F       MOV A,#0x0F                   
    1563: F0          MOVX @DPTR,A                  
    1564: 90 D8 67    MOV DPTR,#0xD867              
    1567: 74 07       MOV A,#0x07                   
    1569: F0          MOVX @DPTR,A                  
    156A: 80 43       SJMP 0x15AF                      ; -> 0x15AF

loc_156C:
    156C: 90 D8 68    MOV DPTR,#0xD868              
    156F: 74 0F       MOV A,#0x0F                   
    1571: F0          MOVX @DPTR,A                  
    1572: 90 7F 7D    MOV DPTR,#0x7F7D              
    1575: E0          MOVX A,@DPTR                  
    1576: FA          MOV R2,A                      
    1577: BA 10 0D    CJNE R2,#0x10,0x1587             ; -> loc_1587
    157A: 90 D8 24    MOV DPTR,#0xD824              
    157D: E4          CLR A                         
    157E: F0          MOVX @DPTR,A                  
    157F: 90 D8 4A    MOV DPTR,#0xD84A              
    1582: 74 1A       MOV A,#0x1A                   
    1584: F0          MOVX @DPTR,A                  
    1585: 80 22       SJMP 0x15A9                      ; -> 0x15A9

loc_1587:
    1587: 90 7F 7D    MOV DPTR,#0x7F7D              
    158A: E0          MOVX A,@DPTR                  
    158B: FA          MOV R2,A                      
    158C: BA 08 0E    CJNE R2,#0x08,0x159D             ; -> loc_159D
    158F: 90 D8 24    MOV DPTR,#0xD824              
    1592: 74 04       MOV A,#0x04                   
    1594: F0          MOVX @DPTR,A                  
    1595: 90 D8 4A    MOV DPTR,#0xD84A              
    1598: 74 0D       MOV A,#0x0D                   
    159A: F0          MOVX @DPTR,A                  
    159B: 80 0C       SJMP 0x15A9                      ; -> 0x15A9

loc_159D:
    159D: 90 D8 24    MOV DPTR,#0xD824              
    15A0: 74 02       MOV A,#0x02                   
    15A2: F0          MOVX @DPTR,A                  
    15A3: 90 D8 4A    MOV DPTR,#0xD84A              
    15A6: 74 08       MOV A,#0x08                   
    15A8: F0          MOVX @DPTR,A                  
    15A9: 90 D8 67    MOV DPTR,#0xD867              
    15AC: 74 0F       MOV A,#0x0F                   
    15AE: F0          MOVX @DPTR,A                  
    15AF: 90 D8 18    MOV DPTR,#0xD818              
    15B2: 74 2F       MOV A,#0x2F                   
    15B4: F0          MOVX @DPTR,A                  
    15B5: 90 7F B5    MOV DPTR,#0x7FB5              
    15B8: 74 01       MOV A,#0x01                   
    15BA: F0          MOVX @DPTR,A                  
    15BB: 75 82 00    MOV DPL(0x82),#0x00           
    15BE: 02 18 7F    LJMP 0x187F                      ; -> sub_187F

sub_15C1:
    15C1: 75 50 10    MOV 0x50,#0x10                
    15C4: 75 51 0D    MOV 0x51,#0x0D                
    15C7: 75 82 00    MOV DPL(0x82),#0x00           
    15CA: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    15CD: 90 7F B5    MOV DPTR,#0x7FB5              
    15D0: E4          CLR A                         
    15D1: F0          MOVX @DPTR,A                  
    15D2: 90 D8 67    MOV DPTR,#0xD867              
    15D5: F0          MOVX @DPTR,A                  
    15D6: 90 D8 68    MOV DPTR,#0xD868              
    15D9: F0          MOVX @DPTR,A                  
    15DA: 90 D8 51    MOV DPTR,#0xD851              
    15DD: 74 0F       MOV A,#0x0F                   
    15DF: F0          MOVX @DPTR,A                  
    15E0: 90 D6 56    MOV DPTR,#0xD656              
    15E3: 74 01       MOV A,#0x01                   
    15E5: F0          MOVX @DPTR,A                  
    15E6: 90 D6 D6    MOV DPTR,#0xD6D6              
    15E9: 74 01       MOV A,#0x01                   
    15EB: F0          MOVX @DPTR,A                  
    15EC: 90 D7 56    MOV DPTR,#0xD756              
    15EF: 74 01       MOV A,#0x01                   
    15F1: F0          MOVX @DPTR,A                  
    15F2: 90 D7 D6    MOV DPTR,#0xD7D6              
    15F5: 74 01       MOV A,#0x01                   
    15F7: F0          MOVX @DPTR,A                  
    15F8: 90 7F B3    MOV DPTR,#0x7FB3              
    15FB: E0          MOVX A,@DPTR                  
    15FC: FA          MOV R2,A                      
    15FD: 60 03       JZ 0x1602                        ; -> loc_1602
    15FF: 02 14 03    LJMP 0x1403                      ; -> sub_1403

loc_1602:
    1602: 22          RET                           

sub_1603:
    1603: 75 50 10    MOV 0x50,#0x10                
    1606: 75 51 71    MOV 0x51,#0x71                
    1609: 75 82 00    MOV DPL(0x82),#0x00           
    160C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    160F: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1612: E4          CLR A                         
    1613: F0          MOVX @DPTR,A                  
    1614: 90 D8 06    MOV DPTR,#0xD806              
    1617: E0          MOVX A,@DPTR                  
    1618: FA          MOV R2,A                      
    1619: 20 E3 0A    JB ACC.3,0x1626                  ; -> 0x1626
    161C: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    161F: E0          MOVX A,@DPTR                  
    1620: FA          MOV R2,A                      
    1621: BA C8 00    CJNE R2,#0xC8,0x1624             ; -> 0x1624
    1624: 40 EE       JC 0x1614                        ; -> 0x1614
    1626: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1629: E0          MOVX A,@DPTR                  
    162A: FA          MOV R2,A                      
    162B: BA C8 00    CJNE R2,#0xC8,0x162E             ; -> 0x162E
    162E: 50 0B       JNC 0x163B                       ; -> 0x163B
    1630: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1633: E0          MOVX A,@DPTR                  
    1634: FA          MOV R2,A                      
    1635: 53 02 1C    ANL 0x02,#0x1C                
    1638: BA 02 11    CJNE R2,#0x02,0x164C             ; -> loc_164C
    163B: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    163E: E0          MOVX A,@DPTR                  
    163F: FA          MOV R2,A                      
    1640: 53 02 E3    ANL 0x02,#0xE3                
    1643: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1646: EA          MOV A,R2                      
    1647: F0          MOVX @DPTR,A                  
    1648: 75 82 01    MOV DPL(0x82),#0x01           
    164B: 22          RET                           

loc_164C:
    164C: 90 D8 06    MOV DPTR,#0xD806              
    164F: E0          MOVX A,@DPTR                  
    1650: FA          MOV R2,A                      
    1651: 43 02 02    ORL 0x02,#0x02                
    1654: 90 D8 06    MOV DPTR,#0xD806              
    1657: EA          MOV A,R2                      
    1658: F0          MOVX @DPTR,A                  
    1659: E0          MOVX A,@DPTR                  
    165A: FA          MOV R2,A                      
    165B: 53 02 FD    ANL 0x02,#0xFD                
    165E: 90 D8 06    MOV DPTR,#0xD806              
    1661: EA          MOV A,R2                      
    1662: F0          MOVX @DPTR,A                  
    1663: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1666: E4          CLR A                         
    1667: F0          MOVX @DPTR,A                  
    1668: 90 D8 06    MOV DPTR,#0xD806              
    166B: E0          MOVX A,@DPTR                  
    166C: FA          MOV R2,A                      
    166D: 20 E3 0A    JB ACC.3,0x167A                  ; -> 0x167A
    1670: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1673: E0          MOVX A,@DPTR                  
    1674: FA          MOV R2,A                      
    1675: BA C8 00    CJNE R2,#0xC8,0x1678             ; -> 0x1678
    1678: 40 EE       JC 0x1668                        ; -> 0x1668
    167A: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    167D: E0          MOVX A,@DPTR                  
    167E: FA          MOV R2,A                      
    167F: BA C8 00    CJNE R2,#0xC8,0x1682             ; -> 0x1682
    1682: 50 0B       JNC 0x168F                       ; -> 0x168F
    1684: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1687: E0          MOVX A,@DPTR                  
    1688: FA          MOV R2,A                      
    1689: 53 02 1C    ANL 0x02,#0x1C                
    168C: BA 03 11    CJNE R2,#0x03,0x16A0             ; -> loc_16A0
    168F: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1692: E0          MOVX A,@DPTR                  
    1693: FA          MOV R2,A                      
    1694: 53 02 E3    ANL 0x02,#0xE3                
    1697: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    169A: EA          MOV A,R2                      
    169B: F0          MOVX @DPTR,A                  
    169C: 75 82 01    MOV DPL(0x82),#0x01           
    169F: 22          RET                           

loc_16A0:
    16A0: 75 82 00    MOV DPL(0x82),#0x00           
    16A3: 22          RET                           
    16A4: E5          DB 0xE5                       ; data
    16A5: 82          DB 0x82                       ; data
    16A6: FA          DB 0xFA                       ; data
    16A7: F4          DB 0xF4                       ; data
    16A8: FB          DB 0xFB                       ; data
    16A9: 74          DB 0x74                       ; data
    16AA: 7F          DB 0x7F                       ; data
    16AB: 5B          DB 0x5B                       ; data
    16AC: 90          DB 0x90                       ; data
    16AD: 7F          DB 0x7F                       ; data
    16AE: ED          DB 0xED                       ; data
    16AF: 04          DB 0x04                       ; data
    16B0: F0          DB 0xF0                       ; data
    16B1: EA          DB 0xEA                       ; data
    16B2: 30          DB 0x30                       ; data
    16B3: E7          DB 0xE7                       ; data
    16B4: 0D          DB 0x0D                       ; data
    16B5: 90          DB 0x90                       ; data
    16B6: 7F          DB 0x7F                       ; data
    16B7: ED          DB 0xED                       ; data
    16B8: E0          DB 0xE0                       ; data
    16B9: FB          DB 0xFB                       ; data
    16BA: 74          DB 0x74                       ; data
    16BB: 7F          DB 0x7F                       ; data
    16BC: 5B          DB 0x5B                       ; data
    16BD: 44          DB 0x44                       ; data
    16BE: 80          DB 0x80                       ; data
    16BF: F5          DB 0xF5                       ; data
    16C0: 82          DB 0x82                       ; data
    16C1: 22          DB 0x22                       ; data
    16C2: 74          DB 0x74                       ; data
    16C3: 7F          DB 0x7F                       ; data
    16C4: 5A          DB 0x5A                       ; data
    16C5: F5          DB 0xF5                       ; data
    16C6: 82          DB 0x82                       ; data
    16C7: 22          DB 0x22                       ; data

sub_16C8:
    16C8: E5 82       MOV A,DPL(0x82)               
    16CA: 75 F0 03    MOV B(0xF0),#0x03             
    16CD: A4          MUL AB                        
    16CE: FA          MOV R2,A                      
    16CF: AB F0       MOV R3,0xF0                   
    16D1: 8A 04       MOV 0x04,R2                   
    16D3: 74 01       MOV A,#0x01                   
    16D5: 2B          ADD A,R3                      
    16D6: FD          MOV R5,A                      
    16D7: 8C 82       MOV 0x82,R4                   
    16D9: 74 D8       MOV A,#0xD8                   
    16DB: 2D          ADD A,R5                      
    16DC: F5 83       MOV DPH(0x83),A               
    16DE: 74 3F       MOV A,#0x3F                   
    16E0: 55 50       ANL A,0x50                    
    16E2: FC          MOV R4,A                      
    16E3: 74 03       MOV A,#0x03                   
    16E5: 55 51       ANL A,0x51                    
    16E7: 03          RR A                          
    16E8: 03          RR A                          
    16E9: 54 C0       ANL A,#0xC0                   
    16EB: 42 04       ORL 0x04,A                    
    16ED: EC          MOV A,R4                      
    16EE: F0          MOVX @DPTR,A                  
    16EF: 74 01       MOV A,#0x01                   
    16F1: 2A          ADD A,R2                      
    16F2: FC          MOV R4,A                      
    16F3: 74 01       MOV A,#0x01                   
    16F5: 3B          ADDC A,R3                     
    16F6: FD          MOV R5,A                      
    16F7: 8C 82       MOV 0x82,R4                   
    16F9: 74 D8       MOV A,#0xD8                   
    16FB: 2D          ADD A,R5                      
    16FC: F5 83       MOV DPH(0x83),A               
    16FE: E5 51       MOV A,0x51                    
    1700: 03          RR A                          
    1701: 03          RR A                          
    1702: 54 3F       ANL A,#0x3F                   
    1704: FC          MOV R4,A                      
    1705: 53 04 0F    ANL 0x04,#0x0F                
    1708: 74 03       MOV A,#0x03                   
    170A: 55 52       ANL A,0x52                    
    170C: 03          RR A                          
    170D: 03          RR A                          
    170E: 54 C0       ANL A,#0xC0                   
    1710: 42 04       ORL 0x04,A                    
    1712: EC          MOV A,R4                      
    1713: F0          MOVX @DPTR,A                  
    1714: 74 02       MOV A,#0x02                   
    1716: 2A          ADD A,R2                      
    1717: FA          MOV R2,A                      
    1718: 74 01       MOV A,#0x01                   
    171A: 3B          ADDC A,R3                     
    171B: FB          MOV R3,A                      
    171C: 8A 82       MOV 0x82,R2                   
    171E: 74 D8       MOV A,#0xD8                   
    1720: 2B          ADD A,R3                      
    1721: F5 83       MOV DPH(0x83),A               
    1723: E5 52       MOV A,0x52                    
    1725: 03          RR A                          
    1726: 03          RR A                          
    1727: 54 3F       ANL A,#0x3F                   
    1729: FA          MOV R2,A                      
    172A: 53 02 07    ANL 0x02,#0x07                
    172D: 74 1F       MOV A,#0x1F                   
    172F: 55 53       ANL A,0x53                    
    1731: C4          SWAP A                        
    1732: 03          RR A                          
    1733: 54 F8       ANL A,#0xF8                   
    1735: 42 02       ORL 0x02,A                    
    1737: EA          MOV A,R2                      
    1738: F0          MOVX @DPTR,A                  
    1739: 22          RET                           

sub_173A:
    173A: 90 7F ED    MOV DPTR,#0x7FED              
    173D: E4          CLR A                         
    173E: F0          MOVX @DPTR,A                  
    173F: 90 7F ED    MOV DPTR,#0x7FED              
    1742: E0          MOVX A,@DPTR                  
    1743: FA          MOV R2,A                      
    1744: BA 1F 00    CJNE R2,#0x1F,0x1747             ; -> 0x1747
    1747: 40 01       JC 0x174A                        ; -> loc_174A
    1749: 22          RET                           

loc_174A:
    174A: 90 7F ED    MOV DPTR,#0x7FED              
    174D: E0          MOVX A,@DPTR                  
    174E: 24 F8       ADD A,#0xF8                   
    1750: FA          MOV R2,A                      
    1751: E4          CLR A                         
    1752: 34 7E       ADDC A,#0x7E                  
    1754: FB          MOV R3,A                      
    1755: 90 7F ED    MOV DPTR,#0x7FED              
    1758: E0          MOVX A,@DPTR                  
    1759: 90 00 5E    MOV DPTR,#0x005E              
    175C: 93          MOVC A,@A+DPTR                
    175D: FC          MOV R4,A                      
    175E: 53 04 3F    ANL 0x04,#0x3F                
    1761: 90 7F ED    MOV DPTR,#0x7FED              
    1764: E0          MOVX A,@DPTR                  
    1765: 90 00 7D    MOV DPTR,#0x007D              
    1768: 93          MOVC A,@A+DPTR                
    1769: 54 03       ANL A,#0x03                   
    176B: 03          RR A                          
    176C: 03          RR A                          
    176D: 54 C0       ANL A,#0xC0                   
    176F: 42 04       ORL 0x04,A                    
    1771: 8A 82       MOV 0x82,R2                   
    1773: 8B 83       MOV 0x83,R3                   
    1775: EC          MOV A,R4                      
    1776: F0          MOVX @DPTR,A                  
    1777: 90 7F ED    MOV DPTR,#0x7FED              
    177A: E0          MOVX A,@DPTR                  
    177B: 24 D9       ADD A,#0xD9                   
    177D: FA          MOV R2,A                      
    177E: E4          CLR A                         
    177F: 34 7E       ADDC A,#0x7E                  
    1781: FB          MOV R3,A                      
    1782: 90 7F ED    MOV DPTR,#0x7FED              
    1785: E0          MOVX A,@DPTR                  
    1786: 90 00 7D    MOV DPTR,#0x007D              
    1789: 93          MOVC A,@A+DPTR                
    178A: 03          RR A                          
    178B: 03          RR A                          
    178C: 54 3F       ANL A,#0x3F                   
    178E: FC          MOV R4,A                      
    178F: 53 04 0F    ANL 0x04,#0x0F                
    1792: 90 7F ED    MOV DPTR,#0x7FED              
    1795: E0          MOVX A,@DPTR                  
    1796: 04          INC A                         
    1797: 54 03       ANL A,#0x03                   
    1799: 03          RR A                          
    179A: 03          RR A                          
    179B: 54 C0       ANL A,#0xC0                   
    179D: 42 04       ORL 0x04,A                    
    179F: 8A 82       MOV 0x82,R2                   
    17A1: 8B 83       MOV 0x83,R3                   
    17A3: EC          MOV A,R4                      
    17A4: F0          MOVX @DPTR,A                  
    17A5: 90 7F ED    MOV DPTR,#0x7FED              
    17A8: E0          MOVX A,@DPTR                  
    17A9: 24 BA       ADD A,#0xBA                   
    17AB: FA          MOV R2,A                      
    17AC: E4          CLR A                         
    17AD: 34 7E       ADDC A,#0x7E                  
    17AF: FB          MOV R3,A                      
    17B0: 90 7F ED    MOV DPTR,#0x7FED              
    17B3: E0          MOVX A,@DPTR                  
    17B4: FC          MOV R4,A                      
    17B5: 7D 00       MOV R5,#0x00                  
    17B7: 0C          INC R4                        
    17B8: BC 00 01    CJNE R4,#0x00,0x17BC             ; -> 0x17BC
    17BB: 0D          INC R5                        
    17BC: ED          MOV A,R5                      
    17BD: A2 E7       MOV C,ACC.7                   
    17BF: 13          RRC A                         
    17C0: CC          XCH A,R4                      
    17C1: 13          RRC A                         
    17C2: CC          XCH A,R4                      
    17C3: A2 E7       MOV C,ACC.7                   
    17C5: 13          RRC A                         
    17C6: CC          XCH A,R4                      
    17C7: 13          RRC A                         
    17C8: CC          XCH A,R4                      
    17C9: 53 04 07    ANL 0x04,#0x07                
    17CC: 90 7F ED    MOV DPTR,#0x7FED              
    17CF: E0          MOVX A,@DPTR                  
    17D0: 04          INC A                         
    17D1: 54 1F       ANL A,#0x1F                   
    17D3: C4          SWAP A                        
    17D4: 03          RR A                          
    17D5: 54 F8       ANL A,#0xF8                   
    17D7: 42 04       ORL 0x04,A                    
    17D9: 8A 82       MOV 0x82,R2                   
    17DB: 8B 83       MOV 0x83,R3                   
    17DD: EC          MOV A,R4                      
    17DE: F0          MOVX @DPTR,A                  
    17DF: 90 7F ED    MOV DPTR,#0x7FED              
    17E2: E0          MOVX A,@DPTR                  
    17E3: 24 55       ADD A,#0x55                   
    17E5: FA          MOV R2,A                      
    17E6: E4          CLR A                         
    17E7: 34 7F       ADDC A,#0x7F                  
    17E9: FB          MOV R3,A                      
    17EA: 90 7F ED    MOV DPTR,#0x7FED              
    17ED: E0          MOVX A,@DPTR                  
    17EE: 90 00 20    MOV DPTR,#0x0020              
    17F1: 93          MOVC A,@A+DPTR                
    17F2: FC          MOV R4,A                      
    17F3: 53 04 3F    ANL 0x04,#0x3F                
    17F6: 90 7F ED    MOV DPTR,#0x7FED              
    17F9: E0          MOVX A,@DPTR                  
    17FA: 90 00 3F    MOV DPTR,#0x003F              
    17FD: 93          MOVC A,@A+DPTR                
    17FE: 54 03       ANL A,#0x03                   
    1800: 03          RR A                          
    1801: 03          RR A                          
    1802: 54 C0       ANL A,#0xC0                   
    1804: 42 04       ORL 0x04,A                    
    1806: 8A 82       MOV 0x82,R2                   
    1808: 8B 83       MOV 0x83,R3                   
    180A: EC          MOV A,R4                      
    180B: F0          MOVX @DPTR,A                  
    180C: 90 7F ED    MOV DPTR,#0x7FED              
    180F: E0          MOVX A,@DPTR                  
    1810: 24 36       ADD A,#0x36                   
    1812: FA          MOV R2,A                      
    1813: E4          CLR A                         
    1814: 34 7F       ADDC A,#0x7F                  
    1816: FB          MOV R3,A                      
    1817: 90 7F ED    MOV DPTR,#0x7FED              
    181A: E0          MOVX A,@DPTR                  
    181B: 90 00 3F    MOV DPTR,#0x003F              
    181E: 93          MOVC A,@A+DPTR                
    181F: 03          RR A                          
    1820: 03          RR A                          
    1821: 54 3F       ANL A,#0x3F                   
    1823: FC          MOV R4,A                      
    1824: 53 04 0F    ANL 0x04,#0x0F                
    1827: 90 7F ED    MOV DPTR,#0x7FED              
    182A: E0          MOVX A,@DPTR                  
    182B: 04          INC A                         
    182C: 54 03       ANL A,#0x03                   
    182E: 03          RR A                          
    182F: 03          RR A                          
    1830: 54 C0       ANL A,#0xC0                   
    1832: 42 04       ORL 0x04,A                    
    1834: 8A 82       MOV 0x82,R2                   
    1836: 8B 83       MOV 0x83,R3                   
    1838: EC          MOV A,R4                      
    1839: F0          MOVX @DPTR,A                  
    183A: 90 7F ED    MOV DPTR,#0x7FED              
    183D: E0          MOVX A,@DPTR                  
    183E: 24 17       ADD A,#0x17                   
    1840: FA          MOV R2,A                      
    1841: E4          CLR A                         
    1842: 34 7F       ADDC A,#0x7F                  
    1844: FB          MOV R3,A                      
    1845: 90 7F ED    MOV DPTR,#0x7FED              
    1848: E0          MOVX A,@DPTR                  
    1849: FC          MOV R4,A                      
    184A: 7D 00       MOV R5,#0x00                  
    184C: 0C          INC R4                        
    184D: BC 00 01    CJNE R4,#0x00,0x1851             ; -> 0x1851
    1850: 0D          INC R5                        
    1851: ED          MOV A,R5                      
    1852: A2 E7       MOV C,ACC.7                   
    1854: 13          RRC A                         
    1855: CC          XCH A,R4                      
    1856: 13          RRC A                         
    1857: CC          XCH A,R4                      
    1858: A2 E7       MOV C,ACC.7                   
    185A: 13          RRC A                         
    185B: CC          XCH A,R4                      
    185C: 13          RRC A                         
    185D: CC          XCH A,R4                      
    185E: 53 04 07    ANL 0x04,#0x07                
    1861: 90 7F ED    MOV DPTR,#0x7FED              
    1864: E0          MOVX A,@DPTR                  
    1865: 04          INC A                         
    1866: 54 1F       ANL A,#0x1F                   
    1868: C4          SWAP A                        
    1869: 03          RR A                          
    186A: 54 F8       ANL A,#0xF8                   
    186C: FD          MOV R5,A                      
    186D: 42 04       ORL 0x04,A                    
    186F: 8A 82       MOV 0x82,R2                   
    1871: 8B 83       MOV 0x83,R3                   
    1873: EC          MOV A,R4                      
    1874: F0          MOVX @DPTR,A                  
    1875: 90 7F ED    MOV DPTR,#0x7FED              
    1878: E0          MOVX A,@DPTR                  
    1879: 24 01       ADD A,#0x01                   
    187B: F0          MOVX @DPTR,A                  
    187C: 02 17 3F    LJMP 0x173F                      ; -> 0x173F

sub_187F:
    187F: AA 82       MOV R2,0x82                   
    1881: 75 50 10    MOV 0x50,#0x10                
    1884: 75 51 2B    MOV 0x51,#0x2B                
    1887: 75 82 00    MOV DPL(0x82),#0x00           
    188A: C0 02       PUSH 0x02                     
    188C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    188F: D0 02       POP 0x02                      
    1891: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    1894: E0          MOVX A,@DPTR                  
    1895: 54 01       ANL A,#0x01                   
    1897: FB          MOV R3,A                      
    1898: B4 01 00    CJNE A,#0x01,0x189B              ; -> 0x189B
    189B: E4          CLR A                         
    189C: 33          RLC A                         
    189D: FB          MOV R3,A                      
    189E: 90 7F 7D    MOV DPTR,#0x7F7D              
    18A1: E0          MOVX A,@DPTR                  
    18A2: FC          MOV R4,A                      
    18A3: E4          CLR A                         
    18A4: BC 10 01    CJNE R4,#0x10,0x18A8             ; -> 0x18A8
    18A7: 04          INC A                         
    18A8: 5B          ANL A,R3                      
    18A9: 60 1E       JZ 0x18C9                        ; -> loc_18C9
    18AB: 90 00 A9    MOV DPTR,#0x00A9              
    18AE: E4          CLR A                         
    18AF: 93          MOVC A,@A+DPTR                
    18B0: FB          MOV R3,A                      
    18B1: 20 E7 0D    JB ACC.7,0x18C1                  ; -> 0x18C1
    18B4: 90 D8 06    MOV DPTR,#0xD806              
    18B7: E0          MOVX A,@DPTR                  
    18B8: FB          MOV R3,A                      
    18B9: 43 03 04    ORL 0x03,#0x04                
    18BC: 90 D8 06    MOV DPTR,#0xD806              
    18BF: EB          MOV A,R3                      
    18C0: F0          MOVX @DPTR,A                  
    18C1: 90 D8 08    MOV DPTR,#0xD808              
    18C4: 74 10       MOV A,#0x10                   
    18C6: F0          MOVX @DPTR,A                  
    18C7: 80 12       SJMP 0x18DB                      ; -> 0x18DB

loc_18C9:
    18C9: 90 D8 06    MOV DPTR,#0xD806              
    18CC: E0          MOVX A,@DPTR                  
    18CD: FB          MOV R3,A                      
    18CE: 53 03 FB    ANL 0x03,#0xFB                
    18D1: 90 D8 06    MOV DPTR,#0xD806              
    18D4: EB          MOV A,R3                      
    18D5: F0          MOVX @DPTR,A                  
    18D6: 90 D8 08    MOV DPTR,#0xD808              
    18D9: E4          CLR A                         
    18DA: F0          MOVX @DPTR,A                  
    18DB: 90 00 A6    MOV DPTR,#0x00A6              
    18DE: E4          CLR A                         
    18DF: 93          MOVC A,@A+DPTR                
    18E0: FB          MOV R3,A                      
    18E1: 20 E5 03    JB ACC.5,0x18E7                  ; -> loc_18E7
    18E4: 02 1A 22    LJMP 0x1A22                      ; -> loc_1A22

loc_18E7:
    18E7: EA          MOV A,R2                      
    18E8: B4 01 00    CJNE A,#0x01,0x18EB              ; -> 0x18EB
    18EB: E4          CLR A                         
    18EC: 33          RLC A                         
    18ED: FA          MOV R2,A                      
    18EE: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    18F1: E0          MOVX A,@DPTR                  
    18F2: 54 01       ANL A,#0x01                   
    18F4: FB          MOV R3,A                      
    18F5: B4 01 00    CJNE A,#0x01,0x18F8              ; -> 0x18F8
    18F8: E4          CLR A                         
    18F9: 33          RLC A                         
    18FA: FB          MOV R3,A                      
    18FB: 90 7F B6    MOV DPTR,#0x7FB6              
    18FE: E0          MOVX A,@DPTR                  
    18FF: 42 03       ORL 0x03,A                    
    1901: 90 7F 7D    MOV DPTR,#0x7F7D              
    1904: E0          MOVX A,@DPTR                  
    1905: FC          MOV R4,A                      
    1906: E4          CLR A                         
    1907: BC 10 01    CJNE R4,#0x10,0x190B             ; -> 0x190B
    190A: 04          INC A                         
    190B: 5B          ANL A,R3                      
    190C: 5A          ANL A,R2                      
    190D: 70 03       JNZ 0x1912                       ; -> loc_1912
    190F: 02 19 9A    LJMP 0x199A                      ; -> loc_199A

loc_1912:
    1912: 90 7F ED    MOV DPTR,#0x7FED              
    1915: E4          CLR A                         
    1916: F0          MOVX @DPTR,A                  
    1917: 90 7F ED    MOV DPTR,#0x7FED              
    191A: E0          MOVX A,@DPTR                  
    191B: FA          MOV R2,A                      
    191C: BA 1F 00    CJNE R2,#0x1F,0x191F             ; -> 0x191F
    191F: 40 01       JC 0x1922                        ; -> loc_1922
    1921: 22          RET                           

loc_1922:
    1922: 90 7F ED    MOV DPTR,#0x7FED              
    1925: E0          MOVX A,@DPTR                  
    1926: 75 F0 03    MOV B(0xF0),#0x03             
    1929: A4          MUL AB                        
    192A: FA          MOV R2,A                      
    192B: 74 01       MOV A,#0x01                   
    192D: 25 F0       ADD A,B(0xF0)                 
    192F: 24 D8       ADD A,#0xD8                   
    1931: FB          MOV R3,A                      
    1932: 90 7F ED    MOV DPTR,#0x7FED              
    1935: E0          MOVX A,@DPTR                  
    1936: 24 55       ADD A,#0x55                   
    1938: F5 82       MOV DPL(0x82),A               
    193A: E4          CLR A                         
    193B: 34 7F       ADDC A,#0x7F                  
    193D: F5 83       MOV DPH(0x83),A               
    193F: E0          MOVX A,@DPTR                  
    1940: 8A 82       MOV 0x82,R2                   
    1942: 8B 83       MOV 0x83,R3                   
    1944: F0          MOVX @DPTR,A                  
    1945: 90 7F ED    MOV DPTR,#0x7FED              
    1948: E0          MOVX A,@DPTR                  
    1949: 75 F0 03    MOV B(0xF0),#0x03             
    194C: A4          MUL AB                        
    194D: 24 01       ADD A,#0x01                   
    194F: FA          MOV R2,A                      
    1950: 74 01       MOV A,#0x01                   
    1952: 35 F0       ADDC A,B(0xF0)                
    1954: 24 D8       ADD A,#0xD8                   
    1956: FB          MOV R3,A                      
    1957: 90 7F ED    MOV DPTR,#0x7FED              
    195A: E0          MOVX A,@DPTR                  
    195B: 24 36       ADD A,#0x36                   
    195D: F5 82       MOV DPL(0x82),A               
    195F: E4          CLR A                         
    1960: 34 7F       ADDC A,#0x7F                  
    1962: F5 83       MOV DPH(0x83),A               
    1964: E0          MOVX A,@DPTR                  
    1965: 8A 82       MOV 0x82,R2                   
    1967: 8B 83       MOV 0x83,R3                   
    1969: F0          MOVX @DPTR,A                  
    196A: 90 7F ED    MOV DPTR,#0x7FED              
    196D: E0          MOVX A,@DPTR                  
    196E: 75 F0 03    MOV B(0xF0),#0x03             
    1971: A4          MUL AB                        
    1972: 24 02       ADD A,#0x02                   
    1974: FA          MOV R2,A                      
    1975: 74 01       MOV A,#0x01                   
    1977: 35 F0       ADDC A,B(0xF0)                
    1979: 24 D8       ADD A,#0xD8                   
    197B: FB          MOV R3,A                      
    197C: 90 7F ED    MOV DPTR,#0x7FED              
    197F: E0          MOVX A,@DPTR                  
    1980: 24 17       ADD A,#0x17                   
    1982: F5 82       MOV DPL(0x82),A               
    1984: E4          CLR A                         
    1985: 34 7F       ADDC A,#0x7F                  
    1987: F5 83       MOV DPH(0x83),A               
    1989: E0          MOVX A,@DPTR                  
    198A: FC          MOV R4,A                      
    198B: 8A 82       MOV 0x82,R2                   
    198D: 8B 83       MOV 0x83,R3                   
    198F: F0          MOVX @DPTR,A                  
    1990: 90 7F ED    MOV DPTR,#0x7FED              
    1993: E0          MOVX A,@DPTR                  
    1994: 24 01       ADD A,#0x01                   
    1996: F0          MOVX @DPTR,A                  
    1997: 02 19 17    LJMP 0x1917                      ; -> 0x1917

loc_199A:
    199A: 90 7F ED    MOV DPTR,#0x7FED              
    199D: E4          CLR A                         
    199E: F0          MOVX @DPTR,A                  
    199F: 90 7F ED    MOV DPTR,#0x7FED              
    19A2: E0          MOVX A,@DPTR                  
    19A3: FA          MOV R2,A                      
    19A4: BA 1F 00    CJNE R2,#0x1F,0x19A7             ; -> 0x19A7
    19A7: 40 01       JC 0x19AA                        ; -> loc_19AA
    19A9: 22          RET                           

loc_19AA:
    19AA: 90 7F ED    MOV DPTR,#0x7FED              
    19AD: E0          MOVX A,@DPTR                  
    19AE: 75 F0 03    MOV B(0xF0),#0x03             
    19B1: A4          MUL AB                        
    19B2: FA          MOV R2,A                      
    19B3: 74 01       MOV A,#0x01                   
    19B5: 25 F0       ADD A,B(0xF0)                 
    19B7: 24 D8       ADD A,#0xD8                   
    19B9: FB          MOV R3,A                      
    19BA: 90 7F ED    MOV DPTR,#0x7FED              
    19BD: E0          MOVX A,@DPTR                  
    19BE: 24 F8       ADD A,#0xF8                   
    19C0: F5 82       MOV DPL(0x82),A               
    19C2: E4          CLR A                         
    19C3: 34 7E       ADDC A,#0x7E                  
    19C5: F5 83       MOV DPH(0x83),A               
    19C7: E0          MOVX A,@DPTR                  
    19C8: 8A 82       MOV 0x82,R2                   
    19CA: 8B 83       MOV 0x83,R3                   
    19CC: F0          MOVX @DPTR,A                  
    19CD: 90 7F ED    MOV DPTR,#0x7FED              
    19D0: E0          MOVX A,@DPTR                  
    19D1: 75 F0 03    MOV B(0xF0),#0x03             
    19D4: A4          MUL AB                        
    19D5: 24 01       ADD A,#0x01                   
    19D7: FA          MOV R2,A                      
    19D8: 74 01       MOV A,#0x01                   
    19DA: 35 F0       ADDC A,B(0xF0)                
    19DC: 24 D8       ADD A,#0xD8                   
    19DE: FB          MOV R3,A                      
    19DF: 90 7F ED    MOV DPTR,#0x7FED              
    19E2: E0          MOVX A,@DPTR                  
    19E3: 24 D9       ADD A,#0xD9                   
    19E5: F5 82       MOV DPL(0x82),A               
    19E7: E4          CLR A                         
    19E8: 34 7E       ADDC A,#0x7E                  
    19EA: F5 83       MOV DPH(0x83),A               
    19EC: E0          MOVX A,@DPTR                  
    19ED: 8A 82       MOV 0x82,R2                   
    19EF: 8B 83       MOV 0x83,R3                   
    19F1: F0          MOVX @DPTR,A                  
    19F2: 90 7F ED    MOV DPTR,#0x7FED              
    19F5: E0          MOVX A,@DPTR                  
    19F6: 75 F0 03    MOV B(0xF0),#0x03             
    19F9: A4          MUL AB                        
    19FA: 24 02       ADD A,#0x02                   
    19FC: FA          MOV R2,A                      
    19FD: 74 01       MOV A,#0x01                   
    19FF: 35 F0       ADDC A,B(0xF0)                
    1A01: 24 D8       ADD A,#0xD8                   
    1A03: FB          MOV R3,A                      
    1A04: 90 7F ED    MOV DPTR,#0x7FED              
    1A07: E0          MOVX A,@DPTR                  
    1A08: 24 BA       ADD A,#0xBA                   
    1A0A: F5 82       MOV DPL(0x82),A               
    1A0C: E4          CLR A                         
    1A0D: 34 7E       ADDC A,#0x7E                  
    1A0F: F5 83       MOV DPH(0x83),A               
    1A11: E0          MOVX A,@DPTR                  
    1A12: FC          MOV R4,A                      
    1A13: 8A 82       MOV 0x82,R2                   
    1A15: 8B 83       MOV 0x83,R3                   
    1A17: F0          MOVX @DPTR,A                  
    1A18: 90 7F ED    MOV DPTR,#0x7FED              
    1A1B: E0          MOVX A,@DPTR                  
    1A1C: 24 01       ADD A,#0x01                   
    1A1E: F0          MOVX @DPTR,A                  
    1A1F: 02 19 9F    LJMP 0x199F                      ; -> 0x199F

loc_1A22:
    1A22: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    1A25: E0          MOVX A,@DPTR                  
    1A26: 54 01       ANL A,#0x01                   
    1A28: FA          MOV R2,A                      
    1A29: B4 01 00    CJNE A,#0x01,0x1A2C              ; -> 0x1A2C
    1A2C: E4          CLR A                         
    1A2D: 33          RLC A                         
    1A2E: FA          MOV R2,A                      
    1A2F: 90 7F 7D    MOV DPTR,#0x7F7D              
    1A32: E0          MOVX A,@DPTR                  
    1A33: FB          MOV R3,A                      
    1A34: E4          CLR A                         
    1A35: BB 10 01    CJNE R3,#0x10,0x1A39             ; -> 0x1A39
    1A38: 04          INC A                         
    1A39: 5A          ANL A,R2                      
    1A3A: 60 45       JZ 0x1A81                        ; -> loc_1A81
    1A3C: 90 7F ED    MOV DPTR,#0x7FED              
    1A3F: E4          CLR A                         
    1A40: F0          MOVX @DPTR,A                  
    1A41: 90 7F ED    MOV DPTR,#0x7FED              
    1A44: E0          MOVX A,@DPTR                  
    1A45: FA          MOV R2,A                      
    1A46: BA 1F 00    CJNE R2,#0x1F,0x1A49             ; -> 0x1A49
    1A49: 40 01       JC 0x1A4C                        ; -> loc_1A4C
    1A4B: 22          RET                           

loc_1A4C:
    1A4C: 90 7F ED    MOV DPTR,#0x7FED              
    1A4F: E0          MOVX A,@DPTR                  
    1A50: FA          MOV R2,A                      
    1A51: 90 7F ED    MOV DPTR,#0x7FED              
    1A54: E0          MOVX A,@DPTR                  
    1A55: 90 00 20    MOV DPTR,#0x0020              
    1A58: 93          MOVC A,@A+DPTR                
    1A59: F5 50       MOV 0x50,A                    
    1A5B: 90 7F ED    MOV DPTR,#0x7FED              
    1A5E: E0          MOVX A,@DPTR                  
    1A5F: 90 00 3F    MOV DPTR,#0x003F              
    1A62: 93          MOVC A,@A+DPTR                
    1A63: F5 51       MOV 0x51,A                    
    1A65: 90 7F ED    MOV DPTR,#0x7FED              
    1A68: E0          MOVX A,@DPTR                  
    1A69: 04          INC A                         
    1A6A: F5 52       MOV 0x52,A                    
    1A6C: 90 7F ED    MOV DPTR,#0x7FED              
    1A6F: E0          MOVX A,@DPTR                  
    1A70: 04          INC A                         
    1A71: F5 53       MOV 0x53,A                    
    1A73: 8A 82       MOV 0x82,R2                   
    1A75: 12 16 C8    LCALL 0x16C8                     ; -> sub_16C8
    1A78: 90 7F ED    MOV DPTR,#0x7FED              
    1A7B: E0          MOVX A,@DPTR                  
    1A7C: 24 01       ADD A,#0x01                   
    1A7E: F0          MOVX @DPTR,A                  
    1A7F: 80 C0       SJMP 0x1A41                      ; -> 0x1A41

loc_1A81:
    1A81: 90 7F ED    MOV DPTR,#0x7FED              
    1A84: E4          CLR A                         
    1A85: F0          MOVX @DPTR,A                  
    1A86: 90 7F ED    MOV DPTR,#0x7FED              
    1A89: E0          MOVX A,@DPTR                  
    1A8A: FA          MOV R2,A                      
    1A8B: BA 1F 00    CJNE R2,#0x1F,0x1A8E             ; -> 0x1A8E
    1A8E: 50 35       JNC 0x1AC5                       ; -> loc_1AC5
    1A90: 90 7F ED    MOV DPTR,#0x7FED              
    1A93: E0          MOVX A,@DPTR                  
    1A94: FA          MOV R2,A                      
    1A95: 90 7F ED    MOV DPTR,#0x7FED              
    1A98: E0          MOVX A,@DPTR                  
    1A99: 90 00 5E    MOV DPTR,#0x005E              
    1A9C: 93          MOVC A,@A+DPTR                
    1A9D: F5 50       MOV 0x50,A                    
    1A9F: 90 7F ED    MOV DPTR,#0x7FED              
    1AA2: E0          MOVX A,@DPTR                  
    1AA3: 90 00 7D    MOV DPTR,#0x007D              
    1AA6: 93          MOVC A,@A+DPTR                
    1AA7: F5 51       MOV 0x51,A                    
    1AA9: 90 7F ED    MOV DPTR,#0x7FED              
    1AAC: E0          MOVX A,@DPTR                  
    1AAD: 04          INC A                         
    1AAE: F5 52       MOV 0x52,A                    
    1AB0: 90 7F ED    MOV DPTR,#0x7FED              
    1AB3: E0          MOVX A,@DPTR                  
    1AB4: 04          INC A                         
    1AB5: F5 53       MOV 0x53,A                    
    1AB7: 8A 82       MOV 0x82,R2                   
    1AB9: 12 16 C8    LCALL 0x16C8                     ; -> sub_16C8
    1ABC: 90 7F ED    MOV DPTR,#0x7FED              
    1ABF: E0          MOVX A,@DPTR                  
    1AC0: 24 01       ADD A,#0x01                   
    1AC2: F0          MOVX @DPTR,A                  
    1AC3: 80 C1       SJMP 0x1A86                      ; -> 0x1A86

loc_1AC5:
    1AC5: 22          RET                           

sub_1AC6:
    1AC6: 90 00 A6    MOV DPTR,#0x00A6              
    1AC9: E4          CLR A                         
    1ACA: 93          MOVC A,@A+DPTR                
    1ACB: FA          MOV R2,A                      
    1ACC: 30 E5 12    JNB ACC.5,0x1AE1                 ; -> 0x1AE1
    1ACF: 12 17 3A    LCALL 0x173A                     ; -> sub_173A
    1AD2: 90 00 A7    MOV DPTR,#0x00A7              
    1AD5: E4          CLR A                         
    1AD6: 93          MOVC A,@A+DPTR                
    1AD7: FA          MOV R2,A                      
    1AD8: 30 E1 06    JNB ACC.1,0x1AE1                 ; -> 0x1AE1
    1ADB: 75 82 FF    MOV DPL(0x82),#0xFF           
    1ADE: 12 18 7F    LCALL 0x187F                     ; -> sub_187F
    1AE1: 90 D8 15    MOV DPTR,#0xD815              
    1AE4: 74 0F       MOV A,#0x0F                   
    1AE6: F0          MOVX @DPTR,A                  
    1AE7: 90 D8 4F    MOV DPTR,#0xD84F              
    1AEA: 74 0F       MOV A,#0x0F                   
    1AEC: F0          MOVX @DPTR,A                  
    1AED: 90 D6 59    MOV DPTR,#0xD659              
    1AF0: 74 80       MOV A,#0x80                   
    1AF2: F0          MOVX @DPTR,A                  
    1AF3: 90 D6 D9    MOV DPTR,#0xD6D9              
    1AF6: 74 80       MOV A,#0x80                   
    1AF8: F0          MOVX @DPTR,A                  
    1AF9: 90 D7 59    MOV DPTR,#0xD759              
    1AFC: 74 80       MOV A,#0x80                   
    1AFE: F0          MOVX @DPTR,A                  
    1AFF: 90 D7 D9    MOV DPTR,#0xD7D9              
    1B02: 74 80       MOV A,#0x80                   
    1B04: F0          MOVX @DPTR,A                  
    1B05: 90 D8 11    MOV DPTR,#0xD811              
    1B08: E4          CLR A                         
    1B09: F0          MOVX @DPTR,A                  
    1B0A: 90 D6 56    MOV DPTR,#0xD656              
    1B0D: 74 03       MOV A,#0x03                   
    1B0F: F0          MOVX @DPTR,A                  
    1B10: 90 D6 D6    MOV DPTR,#0xD6D6              
    1B13: 74 03       MOV A,#0x03                   
    1B15: F0          MOVX @DPTR,A                  
    1B16: 90 D7 56    MOV DPTR,#0xD756              
    1B19: 74 03       MOV A,#0x03                   
    1B1B: F0          MOVX @DPTR,A                  
    1B1C: 90 D7 D6    MOV DPTR,#0xD7D6              
    1B1F: 74 03       MOV A,#0x03                   
    1B21: F0          MOVX @DPTR,A                  
    1B22: 90 D8 15    MOV DPTR,#0xD815              
    1B25: E0          MOVX A,@DPTR                  
    1B26: FA          MOV R2,A                      
    1B27: 43 02 80    ORL 0x02,#0x80                
    1B2A: 90 D8 15    MOV DPTR,#0xD815              
    1B2D: EA          MOV A,R2                      
    1B2E: F0          MOVX @DPTR,A                  
    1B2F: 90 D6 1B    MOV DPTR,#0xD61B              
    1B32: 74 03       MOV A,#0x03                   
    1B34: F0          MOVX @DPTR,A                  
    1B35: 90 D6 02    MOV DPTR,#0xD602              
    1B38: 74 FF       MOV A,#0xFF                   
    1B3A: F0          MOVX @DPTR,A                  
    1B3B: 90 D6 03    MOV DPTR,#0xD603              
    1B3E: 74 FF       MOV A,#0xFF                   
    1B40: F0          MOVX @DPTR,A                  
    1B41: 90 D6 82    MOV DPTR,#0xD682              
    1B44: 74 FF       MOV A,#0xFF                   
    1B46: F0          MOVX @DPTR,A                  
    1B47: 90 D6 83    MOV DPTR,#0xD683              
    1B4A: 74 FF       MOV A,#0xFF                   
    1B4C: F0          MOVX @DPTR,A                  
    1B4D: 90 D7 02    MOV DPTR,#0xD702              
    1B50: 74 FF       MOV A,#0xFF                   
    1B52: F0          MOVX @DPTR,A                  
    1B53: 90 D7 03    MOV DPTR,#0xD703              
    1B56: 74 FF       MOV A,#0xFF                   
    1B58: F0          MOVX @DPTR,A                  
    1B59: 90 D7 82    MOV DPTR,#0xD782              
    1B5C: 74 FF       MOV A,#0xFF                   
    1B5E: F0          MOVX @DPTR,A                  
    1B5F: 90 D7 83    MOV DPTR,#0xD783              
    1B62: 74 FF       MOV A,#0xFF                   
    1B64: F0          MOVX @DPTR,A                  
    1B65: 22          RET                           

sub_1B66:
    1B66: AA 82       MOV R2,0x82                   
    1B68: 75 50 10    MOV 0x50,#0x10                
    1B6B: 75 51 72    MOV 0x51,#0x72                
    1B6E: 75 82 00    MOV DPL(0x82),#0x00           
    1B71: C0 02       PUSH 0x02                     
    1B73: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1B76: D0 02       POP 0x02                      
    1B78: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1B7B: E4          CLR A                         
    1B7C: F0          MOVX @DPTR,A                  
    1B7D: 90 D8 0D    MOV DPTR,#0xD80D              
    1B80: E0          MOVX A,@DPTR                  
    1B81: FB          MOV R3,A                      
    1B82: 53 03 0F    ANL 0x03,#0x0F                
    1B85: BB 0F 02    CJNE R3,#0x0F,0x1B8A             ; -> loc_1B8A
    1B88: 80 0A       SJMP 0x1B94                      ; -> 0x1B94

loc_1B8A:
    1B8A: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1B8D: E0          MOVX A,@DPTR                  
    1B8E: FB          MOV R3,A                      
    1B8F: BB C8 00    CJNE R3,#0xC8,0x1B92             ; -> 0x1B92
    1B92: 40 E9       JC 0x1B7D                        ; -> 0x1B7D
    1B94: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1B97: E0          MOVX A,@DPTR                  
    1B98: FB          MOV R3,A                      
    1B99: BB C8 00    CJNE R3,#0xC8,0x1B9C             ; -> 0x1B9C
    1B9C: 50 0B       JNC 0x1BA9                       ; -> 0x1BA9
    1B9E: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1BA1: E0          MOVX A,@DPTR                  
    1BA2: FB          MOV R3,A                      
    1BA3: 53 03 1C    ANL 0x03,#0x1C                
    1BA6: BB 04 11    CJNE R3,#0x04,0x1BBA             ; -> loc_1BBA
    1BA9: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1BAC: E0          MOVX A,@DPTR                  
    1BAD: FB          MOV R3,A                      
    1BAE: 53 03 E3    ANL 0x03,#0xE3                
    1BB1: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1BB4: EB          MOV A,R3                      
    1BB5: F0          MOVX @DPTR,A                  
    1BB6: 75 82 01    MOV DPL(0x82),#0x01           
    1BB9: 22          RET                           

loc_1BBA:
    1BBA: 90 D6 1F    MOV DPTR,#0xD61F              
    1BBD: 74 64       MOV A,#0x64                   
    1BBF: F0          MOVX @DPTR,A                  
    1BC0: 90 D6 20    MOV DPTR,#0xD620              
    1BC3: 74 19       MOV A,#0x19                   
    1BC5: F0          MOVX @DPTR,A                  
    1BC6: 90 D6 21    MOV DPTR,#0xD621              
    1BC9: E4          CLR A                         
    1BCA: F0          MOVX @DPTR,A                  
    1BCB: 90 D6 26    MOV DPTR,#0xD626              
    1BCE: 74 E8       MOV A,#0xE8                   
    1BD0: F0          MOVX @DPTR,A                  
    1BD1: 90 D6 27    MOV DPTR,#0xD627              
    1BD4: 74 FD       MOV A,#0xFD                   
    1BD6: F0          MOVX @DPTR,A                  
    1BD7: 90 D6 28    MOV DPTR,#0xD628              
    1BDA: 74 FF       MOV A,#0xFF                   
    1BDC: F0          MOVX @DPTR,A                  
    1BDD: 90 D6 29    MOV DPTR,#0xD629              
    1BE0: 74 FF       MOV A,#0xFF                   
    1BE2: F0          MOVX @DPTR,A                  
    1BE3: 90 D6 2A    MOV DPTR,#0xD62A              
    1BE6: 74 01       MOV A,#0x01                   
    1BE8: F0          MOVX @DPTR,A                  
    1BE9: EA          MOV A,R2                      
    1BEA: 60 03       JZ 0x1BEF                        ; -> loc_1BEF
    1BEC: 02 1C ED    LJMP 0x1CED                      ; -> loc_1CED

loc_1BEF:
    1BEF: 75 50 10    MOV 0x50,#0x10                
    1BF2: 75 51 73    MOV 0x51,#0x73                
    1BF5: 75 82 00    MOV DPL(0x82),#0x00           
    1BF8: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1BFB: 90 D8 5B    MOV DPTR,#0xD85B              
    1BFE: E0          MOVX A,@DPTR                  
    1BFF: FB          MOV R3,A                      
    1C00: 43 03 08    ORL 0x03,#0x08                
    1C03: 90 D8 5B    MOV DPTR,#0xD85B              
    1C06: EB          MOV A,R3                      
    1C07: F0          MOVX @DPTR,A                  
    1C08: 90 D8 15    MOV DPTR,#0xD815              
    1C0B: E0          MOVX A,@DPTR                  
    1C0C: FB          MOV R3,A                      
    1C0D: 43 03 80    ORL 0x03,#0x80                
    1C10: 90 D8 15    MOV DPTR,#0xD815              
    1C13: EB          MOV A,R3                      
    1C14: F0          MOVX @DPTR,A                  
    1C15: 90 D8 12    MOV DPTR,#0xD812              
    1C18: 74 0F       MOV A,#0x0F                   
    1C1A: F0          MOVX @DPTR,A                  
    1C1B: 90 D6 1C    MOV DPTR,#0xD61C              
    1C1E: 74 03       MOV A,#0x03                   
    1C20: F0          MOVX @DPTR,A                  
    1C21: 90 D6 22    MOV DPTR,#0xD622              
    1C24: 74 81       MOV A,#0x81                   
    1C26: F0          MOVX @DPTR,A                  
    1C27: 90 D6 23    MOV DPTR,#0xD623              
    1C2A: 74 FF       MOV A,#0xFF                   
    1C2C: F0          MOVX @DPTR,A                  
    1C2D: 90 D6 24    MOV DPTR,#0xD624              
    1C30: 74 7F       MOV A,#0x7F                   
    1C32: F0          MOVX @DPTR,A                  
    1C33: 90 D6 25    MOV DPTR,#0xD625              
    1C36: E4          CLR A                         
    1C37: F0          MOVX @DPTR,A                  
    1C38: 90 D6 17    MOV DPTR,#0xD617              
    1C3B: 74 01       MOV A,#0x01                   
    1C3D: F0          MOVX @DPTR,A                  
    1C3E: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1C41: E4          CLR A                         
    1C42: F0          MOVX @DPTR,A                  
    1C43: 90 D6 34    MOV DPTR,#0xD634              
    1C46: E0          MOVX A,@DPTR                  
    1C47: FB          MOV R3,A                      
    1C48: 90 D6 B4    MOV DPTR,#0xD6B4              
    1C4B: E0          MOVX A,@DPTR                  
    1C4C: 52 03       ANL 0x03,A                    
    1C4E: 90 D7 34    MOV DPTR,#0xD734              
    1C51: E0          MOVX A,@DPTR                  
    1C52: 52 03       ANL 0x03,A                    
    1C54: 90 D7 B4    MOV DPTR,#0xD7B4              
    1C57: E0          MOVX A,@DPTR                  
    1C58: FC          MOV R4,A                      
    1C59: 5B          ANL A,R3                      
    1C5A: 70 0A       JNZ 0x1C66                       ; -> 0x1C66
    1C5C: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1C5F: E0          MOVX A,@DPTR                  
    1C60: FB          MOV R3,A                      
    1C61: BB C8 00    CJNE R3,#0xC8,0x1C64             ; -> 0x1C64
    1C64: 40 DD       JC 0x1C43                        ; -> 0x1C43
    1C66: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1C69: E0          MOVX A,@DPTR                  
    1C6A: FB          MOV R3,A                      
    1C6B: BB C8 00    CJNE R3,#0xC8,0x1C6E             ; -> 0x1C6E
    1C6E: 50 0B       JNC 0x1C7B                       ; -> 0x1C7B
    1C70: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1C73: E0          MOVX A,@DPTR                  
    1C74: FB          MOV R3,A                      
    1C75: 53 03 1C    ANL 0x03,#0x1C                
    1C78: BB 05 6A    CJNE R3,#0x05,0x1CE5             ; -> loc_1CE5
    1C7B: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1C7E: E0          MOVX A,@DPTR                  
    1C7F: FB          MOV R3,A                      
    1C80: 53 03 E3    ANL 0x03,#0xE3                
    1C83: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1C86: EB          MOV A,R3                      
    1C87: F0          MOVX @DPTR,A                  
    1C88: 75 50 10    MOV 0x50,#0x10                
    1C8B: 75 51 68    MOV 0x51,#0x68                
    1C8E: 75 82 00    MOV DPL(0x82),#0x00           
    1C91: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1C94: 75 50 10    MOV 0x50,#0x10                
    1C97: 75 51 04    MOV 0x51,#0x04                
    1C9A: 75 82 01    MOV DPL(0x82),#0x01           
    1C9D: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1CA0: 90 D6 34    MOV DPTR,#0xD634              
    1CA3: E0          MOVX A,@DPTR                  
    1CA4: F5 51       MOV 0x51,A                    
    1CA6: 75 50 10    MOV 0x50,#0x10                
    1CA9: 75 82 01    MOV DPL(0x82),#0x01           
    1CAC: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1CAF: 90 D6 B4    MOV DPTR,#0xD6B4              
    1CB2: E0          MOVX A,@DPTR                  
    1CB3: F5 51       MOV 0x51,A                    
    1CB5: 75 50 10    MOV 0x50,#0x10                
    1CB8: 75 82 01    MOV DPL(0x82),#0x01           
    1CBB: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1CBE: 90 D7 34    MOV DPTR,#0xD734              
    1CC1: E0          MOVX A,@DPTR                  
    1CC2: F5 51       MOV 0x51,A                    
    1CC4: 75 50 10    MOV 0x50,#0x10                
    1CC7: 75 82 01    MOV DPL(0x82),#0x01           
    1CCA: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1CCD: 90 D7 B4    MOV DPTR,#0xD7B4              
    1CD0: E0          MOVX A,@DPTR                  
    1CD1: F5 51       MOV 0x51,A                    
    1CD3: 75 50 10    MOV 0x50,#0x10                
    1CD6: 75 82 01    MOV DPL(0x82),#0x01           
    1CD9: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1CDC: 90 D8 12    MOV DPTR,#0xD812              
    1CDF: E4          CLR A                         
    1CE0: F0          MOVX @DPTR,A                  
    1CE1: 75 82 01    MOV DPL(0x82),#0x01           
    1CE4: 22          RET                           

loc_1CE5:
    1CE5: 90 D8 12    MOV DPTR,#0xD812              
    1CE8: E4          CLR A                         
    1CE9: F0          MOVX @DPTR,A                  
    1CEA: 02 1F 16    LJMP 0x1F16                      ; -> 0x1F16

loc_1CED:
    1CED: BA 01 02    CJNE R2,#0x01,0x1CF2             ; -> loc_1CF2
    1CF0: 80 03       SJMP 0x1CF5                      ; -> loc_1CF5

loc_1CF2:
    1CF2: 02 1E 07    LJMP 0x1E07                      ; -> loc_1E07

loc_1CF5:
    1CF5: 75 50 10    MOV 0x50,#0x10                
    1CF8: 75 51 74    MOV 0x51,#0x74                
    1CFB: 75 82 00    MOV DPL(0x82),#0x00           
    1CFE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1D01: 90 D8 15    MOV DPTR,#0xD815              
    1D04: E0          MOVX A,@DPTR                  
    1D05: FA          MOV R2,A                      
    1D06: 43 02 80    ORL 0x02,#0x80                
    1D09: 90 D8 15    MOV DPTR,#0xD815              
    1D0C: EA          MOV A,R2                      
    1D0D: F0          MOVX @DPTR,A                  
    1D0E: 90 D8 13    MOV DPTR,#0xD813              
    1D11: 74 F0       MOV A,#0xF0                   
    1D13: F0          MOVX @DPTR,A                  
    1D14: 90 D6 1C    MOV DPTR,#0xD61C              
    1D17: 74 04       MOV A,#0x04                   
    1D19: F0          MOVX @DPTR,A                  
    1D1A: 90 D6 22    MOV DPTR,#0xD622              
    1D1D: 74 E0       MOV A,#0xE0                   
    1D1F: F0          MOVX @DPTR,A                  
    1D20: 90 D6 23    MOV DPTR,#0xD623              
    1D23: 74 FF       MOV A,#0xFF                   
    1D25: F0          MOVX @DPTR,A                  
    1D26: 90 D6 24    MOV DPTR,#0xD624              
    1D29: 74 20       MOV A,#0x20                   
    1D2B: F0          MOVX @DPTR,A                  
    1D2C: 90 D6 25    MOV DPTR,#0xD625              
    1D2F: E4          CLR A                         
    1D30: F0          MOVX @DPTR,A                  
    1D31: 90 D6 17    MOV DPTR,#0xD617              
    1D34: 74 01       MOV A,#0x01                   
    1D36: F0          MOVX @DPTR,A                  
    1D37: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1D3A: E4          CLR A                         
    1D3B: F0          MOVX @DPTR,A                  
    1D3C: 90 D6 34    MOV DPTR,#0xD634              
    1D3F: E0          MOVX A,@DPTR                  
    1D40: FA          MOV R2,A                      
    1D41: 90 D6 B4    MOV DPTR,#0xD6B4              
    1D44: E0          MOVX A,@DPTR                  
    1D45: 52 02       ANL 0x02,A                    
    1D47: 90 D7 34    MOV DPTR,#0xD734              
    1D4A: E0          MOVX A,@DPTR                  
    1D4B: 52 02       ANL 0x02,A                    
    1D4D: 90 D7 B4    MOV DPTR,#0xD7B4              
    1D50: E0          MOVX A,@DPTR                  
    1D51: FB          MOV R3,A                      
    1D52: 5A          ANL A,R2                      
    1D53: 70 0A       JNZ 0x1D5F                       ; -> 0x1D5F
    1D55: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1D58: E0          MOVX A,@DPTR                  
    1D59: FA          MOV R2,A                      
    1D5A: BA C8 00    CJNE R2,#0xC8,0x1D5D             ; -> 0x1D5D
    1D5D: 40 DD       JC 0x1D3C                        ; -> 0x1D3C
    1D5F: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1D62: E0          MOVX A,@DPTR                  
    1D63: FA          MOV R2,A                      
    1D64: BA C8 00    CJNE R2,#0xC8,0x1D67             ; -> 0x1D67
    1D67: 50 0B       JNC 0x1D74                       ; -> 0x1D74
    1D69: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1D6C: E0          MOVX A,@DPTR                  
    1D6D: FA          MOV R2,A                      
    1D6E: 53 02 1C    ANL 0x02,#0x1C                
    1D71: BA 06 6A    CJNE R2,#0x06,0x1DDE             ; -> loc_1DDE
    1D74: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1D77: E0          MOVX A,@DPTR                  
    1D78: FA          MOV R2,A                      
    1D79: 53 02 E3    ANL 0x02,#0xE3                
    1D7C: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1D7F: EA          MOV A,R2                      
    1D80: F0          MOVX @DPTR,A                  
    1D81: 75 50 10    MOV 0x50,#0x10                
    1D84: 75 51 68    MOV 0x51,#0x68                
    1D87: 75 82 00    MOV DPL(0x82),#0x00           
    1D8A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1D8D: 75 50 10    MOV 0x50,#0x10                
    1D90: 75 51 04    MOV 0x51,#0x04                
    1D93: 75 82 01    MOV DPL(0x82),#0x01           
    1D96: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1D99: 90 D6 34    MOV DPTR,#0xD634              
    1D9C: E0          MOVX A,@DPTR                  
    1D9D: F5 51       MOV 0x51,A                    
    1D9F: 75 50 10    MOV 0x50,#0x10                
    1DA2: 75 82 01    MOV DPL(0x82),#0x01           
    1DA5: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1DA8: 90 D6 B4    MOV DPTR,#0xD6B4              
    1DAB: E0          MOVX A,@DPTR                  
    1DAC: F5 51       MOV 0x51,A                    
    1DAE: 75 50 10    MOV 0x50,#0x10                
    1DB1: 75 82 01    MOV DPL(0x82),#0x01           
    1DB4: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1DB7: 90 D7 34    MOV DPTR,#0xD734              
    1DBA: E0          MOVX A,@DPTR                  
    1DBB: F5 51       MOV 0x51,A                    
    1DBD: 75 50 10    MOV 0x50,#0x10                
    1DC0: 75 82 01    MOV DPL(0x82),#0x01           
    1DC3: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1DC6: 90 D7 B4    MOV DPTR,#0xD7B4              
    1DC9: E0          MOVX A,@DPTR                  
    1DCA: F5 51       MOV 0x51,A                    
    1DCC: 75 50 10    MOV 0x50,#0x10                
    1DCF: 75 82 01    MOV DPL(0x82),#0x01           
    1DD2: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1DD5: 90 D8 13    MOV DPTR,#0xD813              
    1DD8: E4          CLR A                         
    1DD9: F0          MOVX @DPTR,A                  
    1DDA: 75 82 01    MOV DPL(0x82),#0x01           
    1DDD: 22          RET                           

loc_1DDE:
    1DDE: 90 D8 13    MOV DPTR,#0xD813              
    1DE1: E4          CLR A                         
    1DE2: F0          MOVX @DPTR,A                  
    1DE3: 90 D6 3C    MOV DPTR,#0xD63C              
    1DE6: E0          MOVX A,@DPTR                  
    1DE7: 90 D6 09    MOV DPTR,#0xD609              
    1DEA: F0          MOVX @DPTR,A                  
    1DEB: 90 D6 BC    MOV DPTR,#0xD6BC              
    1DEE: E0          MOVX A,@DPTR                  
    1DEF: 90 D6 89    MOV DPTR,#0xD689              
    1DF2: F0          MOVX @DPTR,A                  
    1DF3: 90 D7 3C    MOV DPTR,#0xD73C              
    1DF6: E0          MOVX A,@DPTR                  
    1DF7: 90 D7 09    MOV DPTR,#0xD709              
    1DFA: F0          MOVX @DPTR,A                  
    1DFB: 90 D7 BC    MOV DPTR,#0xD7BC              
    1DFE: E0          MOVX A,@DPTR                  
    1DFF: FA          MOV R2,A                      
    1E00: 90 D7 89    MOV DPTR,#0xD789              
    1E03: F0          MOVX @DPTR,A                  
    1E04: 02 1F 16    LJMP 0x1F16                      ; -> 0x1F16

loc_1E07:
    1E07: 75 50 10    MOV 0x50,#0x10                
    1E0A: 75 51 75    MOV 0x51,#0x75                
    1E0D: 75 82 00    MOV DPL(0x82),#0x00           
    1E10: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1E13: 90 D8 15    MOV DPTR,#0xD815              
    1E16: E0          MOVX A,@DPTR                  
    1E17: FA          MOV R2,A                      
    1E18: 43 02 80    ORL 0x02,#0x80                
    1E1B: 90 D8 15    MOV DPTR,#0xD815              
    1E1E: EA          MOV A,R2                      
    1E1F: F0          MOVX @DPTR,A                  
    1E20: 90 D8 13    MOV DPTR,#0xD813              
    1E23: 74 0F       MOV A,#0x0F                   
    1E25: F0          MOVX @DPTR,A                  
    1E26: 90 D6 1C    MOV DPTR,#0xD61C              
    1E29: 74 03       MOV A,#0x03                   
    1E2B: F0          MOVX @DPTR,A                  
    1E2C: 90 D6 22    MOV DPTR,#0xD622              
    1E2F: 74 E0       MOV A,#0xE0                   
    1E31: F0          MOVX @DPTR,A                  
    1E32: 90 D6 23    MOV DPTR,#0xD623              
    1E35: 74 FF       MOV A,#0xFF                   
    1E37: F0          MOVX @DPTR,A                  
    1E38: 90 D6 24    MOV DPTR,#0xD624              
    1E3B: 74 20       MOV A,#0x20                   
    1E3D: F0          MOVX @DPTR,A                  
    1E3E: 90 D6 25    MOV DPTR,#0xD625              
    1E41: E4          CLR A                         
    1E42: F0          MOVX @DPTR,A                  
    1E43: 90 D6 17    MOV DPTR,#0xD617              
    1E46: 74 01       MOV A,#0x01                   
    1E48: F0          MOVX @DPTR,A                  
    1E49: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1E4C: E4          CLR A                         
    1E4D: F0          MOVX @DPTR,A                  
    1E4E: 90 D6 34    MOV DPTR,#0xD634              
    1E51: E0          MOVX A,@DPTR                  
    1E52: FA          MOV R2,A                      
    1E53: 90 D6 B4    MOV DPTR,#0xD6B4              
    1E56: E0          MOVX A,@DPTR                  
    1E57: 52 02       ANL 0x02,A                    
    1E59: 90 D7 34    MOV DPTR,#0xD734              
    1E5C: E0          MOVX A,@DPTR                  
    1E5D: 52 02       ANL 0x02,A                    
    1E5F: 90 D7 B4    MOV DPTR,#0xD7B4              
    1E62: E0          MOVX A,@DPTR                  
    1E63: FB          MOV R3,A                      
    1E64: 5A          ANL A,R2                      
    1E65: 70 0A       JNZ 0x1E71                       ; -> 0x1E71
    1E67: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1E6A: E0          MOVX A,@DPTR                  
    1E6B: FA          MOV R2,A                      
    1E6C: BA C8 00    CJNE R2,#0xC8,0x1E6F             ; -> 0x1E6F
    1E6F: 40 DD       JC 0x1E4E                        ; -> 0x1E4E
    1E71: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    1E74: E0          MOVX A,@DPTR                  
    1E75: FA          MOV R2,A                      
    1E76: BA C8 00    CJNE R2,#0xC8,0x1E79             ; -> 0x1E79
    1E79: 50 0B       JNC 0x1E86                       ; -> 0x1E86
    1E7B: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1E7E: E0          MOVX A,@DPTR                  
    1E7F: FA          MOV R2,A                      
    1E80: 53 02 1C    ANL 0x02,#0x1C                
    1E83: BA 07 6A    CJNE R2,#0x07,0x1EF0             ; -> loc_1EF0
    1E86: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1E89: E0          MOVX A,@DPTR                  
    1E8A: FA          MOV R2,A                      
    1E8B: 53 02 E3    ANL 0x02,#0xE3                
    1E8E: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    1E91: EA          MOV A,R2                      
    1E92: F0          MOVX @DPTR,A                  
    1E93: 75 50 10    MOV 0x50,#0x10                
    1E96: 75 51 68    MOV 0x51,#0x68                
    1E99: 75 82 00    MOV DPL(0x82),#0x00           
    1E9C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1E9F: 75 50 10    MOV 0x50,#0x10                
    1EA2: 75 51 04    MOV 0x51,#0x04                
    1EA5: 75 82 01    MOV DPL(0x82),#0x01           
    1EA8: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1EAB: 90 D6 34    MOV DPTR,#0xD634              
    1EAE: E0          MOVX A,@DPTR                  
    1EAF: F5 51       MOV 0x51,A                    
    1EB1: 75 50 10    MOV 0x50,#0x10                
    1EB4: 75 82 01    MOV DPL(0x82),#0x01           
    1EB7: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1EBA: 90 D6 B4    MOV DPTR,#0xD6B4              
    1EBD: E0          MOVX A,@DPTR                  
    1EBE: F5 51       MOV 0x51,A                    
    1EC0: 75 50 10    MOV 0x50,#0x10                
    1EC3: 75 82 01    MOV DPL(0x82),#0x01           
    1EC6: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1EC9: 90 D7 34    MOV DPTR,#0xD734              
    1ECC: E0          MOVX A,@DPTR                  
    1ECD: F5 51       MOV 0x51,A                    
    1ECF: 75 50 10    MOV 0x50,#0x10                
    1ED2: 75 82 01    MOV DPL(0x82),#0x01           
    1ED5: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1ED8: 90 D7 B4    MOV DPTR,#0xD7B4              
    1EDB: E0          MOVX A,@DPTR                  
    1EDC: F5 51       MOV 0x51,A                    
    1EDE: 75 50 10    MOV 0x50,#0x10                
    1EE1: 75 82 01    MOV DPL(0x82),#0x01           
    1EE4: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    1EE7: 90 D8 13    MOV DPTR,#0xD813              
    1EEA: E4          CLR A                         
    1EEB: F0          MOVX @DPTR,A                  
    1EEC: 75 82 01    MOV DPL(0x82),#0x01           
    1EEF: 22          RET                           

loc_1EF0:
    1EF0: 90 D8 13    MOV DPTR,#0xD813              
    1EF3: E4          CLR A                         
    1EF4: F0          MOVX @DPTR,A                  
    1EF5: 90 D6 3C    MOV DPTR,#0xD63C              
    1EF8: E0          MOVX A,@DPTR                  
    1EF9: 90 D6 08    MOV DPTR,#0xD608              
    1EFC: F0          MOVX @DPTR,A                  
    1EFD: 90 D6 BC    MOV DPTR,#0xD6BC              
    1F00: E0          MOVX A,@DPTR                  
    1F01: 90 D6 88    MOV DPTR,#0xD688              
    1F04: F0          MOVX @DPTR,A                  
    1F05: 90 D7 3C    MOV DPTR,#0xD73C              
    1F08: E0          MOVX A,@DPTR                  
    1F09: 90 D7 08    MOV DPTR,#0xD708              
    1F0C: F0          MOVX @DPTR,A                  
    1F0D: 90 D7 BC    MOV DPTR,#0xD7BC              
    1F10: E0          MOVX A,@DPTR                  
    1F11: FA          MOV R2,A                      
    1F12: 90 D7 88    MOV DPTR,#0xD788              
    1F15: F0          MOVX @DPTR,A                  
    1F16: 75 82 00    MOV DPL(0x82),#0x00           
    1F19: 22          RET                           

sub_1F1A:
    1F1A: 90 D6 59    MOV DPTR,#0xD659              
    1F1D: E4          CLR A                         
    1F1E: F0          MOVX @DPTR,A                  
    1F1F: 90 D6 D9    MOV DPTR,#0xD6D9              
    1F22: F0          MOVX @DPTR,A                  
    1F23: 90 D7 59    MOV DPTR,#0xD759              
    1F26: F0          MOVX @DPTR,A                  
    1F27: 90 D7 D9    MOV DPTR,#0xD7D9              
    1F2A: F0          MOVX @DPTR,A                  
    1F2B: 90 D6 56    MOV DPTR,#0xD656              
    1F2E: 74 01       MOV A,#0x01                   
    1F30: F0          MOVX @DPTR,A                  
    1F31: 90 D6 D6    MOV DPTR,#0xD6D6              
    1F34: 74 01       MOV A,#0x01                   
    1F36: F0          MOVX @DPTR,A                  
    1F37: 90 D7 56    MOV DPTR,#0xD756              
    1F3A: 74 01       MOV A,#0x01                   
    1F3C: F0          MOVX @DPTR,A                  
    1F3D: 90 D7 D6    MOV DPTR,#0xD7D6              
    1F40: 74 01       MOV A,#0x01                   
    1F42: F0          MOVX @DPTR,A                  
    1F43: 90 D6 1C    MOV DPTR,#0xD61C              
    1F46: E4          CLR A                         
    1F47: F0          MOVX @DPTR,A                  
    1F48: 90 D8 15    MOV DPTR,#0xD815              
    1F4B: E0          MOVX A,@DPTR                  
    1F4C: FA          MOV R2,A                      
    1F4D: 53 02 7F    ANL 0x02,#0x7F                
    1F50: 90 D8 15    MOV DPTR,#0xD815              
    1F53: EA          MOV A,R2                      
    1F54: F0          MOVX @DPTR,A                  
    1F55: 90 D8 10    MOV DPTR,#0xD810              
    1F58: 74 FF       MOV A,#0xFF                   
    1F5A: F0          MOVX @DPTR,A                  
    1F5B: 22          RET                           

sub_1F5C:
    1F5C: 90 7F ED    MOV DPTR,#0x7FED              
    1F5F: E4          CLR A                         
    1F60: F0          MOVX @DPTR,A                  
    1F61: 90 7F ED    MOV DPTR,#0x7FED              
    1F64: E0          MOVX A,@DPTR                  
    1F65: FA          MOV R2,A                      
    1F66: BA 10 00    CJNE R2,#0x10,0x1F69             ; -> 0x1F69
    1F69: 50 19       JNC 0x1F84                       ; -> loc_1F84
    1F6B: 90 7F ED    MOV DPTR,#0x7FED              
    1F6E: E0          MOVX A,@DPTR                  
    1F6F: FA          MOV R2,A                      
    1F70: 24 C0       ADD A,#0xC0                   
    1F72: F5 82       MOV DPL(0x82),A               
    1F74: E4          CLR A                         
    1F75: 34 7F       ADDC A,#0x7F                  
    1F77: F5 83       MOV DPH(0x83),A               
    1F79: E4          CLR A                         
    1F7A: F0          MOVX @DPTR,A                  
    1F7B: 90 7F ED    MOV DPTR,#0x7FED              
    1F7E: E0          MOVX A,@DPTR                  
    1F7F: 24 01       ADD A,#0x01                   
    1F81: F0          MOVX @DPTR,A                  
    1F82: 80 DD       SJMP 0x1F61                      ; -> 0x1F61

loc_1F84:
    1F84: 90 7F DF    MOV DPTR,#0x7FDF              
    1F87: E4          CLR A                         
    1F88: F0          MOVX @DPTR,A                  
    1F89: 90 D2 30    MOV DPTR,#0xD230              
    1F8C: 74 41       MOV A,#0x41                   
    1F8E: F0          MOVX @DPTR,A                  
    1F8F: 75 50 08    MOV 0x50,#0x08                
    1F92: 75 51 69    MOV 0x51,#0x69                
    1F95: 75 82 00    MOV DPL(0x82),#0x00           
    1F98: 02 04 4F    LJMP 0x044F                      ; -> sub_044F

sub_1F9B:
    1F9B: 90 7F EE    MOV DPTR,#0x7FEE              
    1F9E: E0          MOVX A,@DPTR                  
    1F9F: FA          MOV R2,A                      
    1FA0: 30 E0 30    JNB ACC.0,0x1FD3                 ; -> 0x1FD3
    1FA3: 90 7F EF    MOV DPTR,#0x7FEF              
    1FA6: E0          MOVX A,@DPTR                  
    1FA7: FA          MOV R2,A                      
    1FA8: 7B 00       MOV R3,#0x00                  
    1FAA: 74 83       MOV A,#0x83                   
    1FAC: 2A          ADD A,R2                      
    1FAD: FA          MOV R2,A                      
    1FAE: E4          CLR A                         
    1FAF: 3B          ADDC A,R3                     
    1FB0: 24 CA       ADD A,#0xCA                   
    1FB2: FB          MOV R3,A                      
    1FB3: 90 7F EF    MOV DPTR,#0x7FEF              
    1FB6: E0          MOVX A,@DPTR                  
    1FB7: FC          MOV R4,A                      
    1FB8: 7D 00       MOV R5,#0x00                  
    1FBA: 74 83       MOV A,#0x83                   
    1FBC: 2C          ADD A,R4                      
    1FBD: FC          MOV R4,A                      
    1FBE: E4          CLR A                         
    1FBF: 3D          ADDC A,R5                     
    1FC0: FD          MOV R5,A                      
    1FC1: 8C 82       MOV 0x82,R4                   
    1FC3: 74 CA       MOV A,#0xCA                   
    1FC5: 2D          ADD A,R5                      
    1FC6: F5 83       MOV DPH(0x83),A               
    1FC8: E0          MOVX A,@DPTR                  
    1FC9: FC          MOV R4,A                      
    1FCA: 53 04 FE    ANL 0x04,#0xFE                
    1FCD: 8A 82       MOV 0x82,R2                   
    1FCF: 8B 83       MOV 0x83,R3                   
    1FD1: EC          MOV A,R4                      
    1FD2: F0          MOVX @DPTR,A                  
    1FD3: 90 7F EE    MOV DPTR,#0x7FEE              
    1FD6: E0          MOVX A,@DPTR                  
    1FD7: FA          MOV R2,A                      
    1FD8: 30 E1 3C    JNB ACC.1,0x2017                 ; -> 0x2017
    1FDB: 90 7F F0    MOV DPTR,#0x7FF0              
    1FDE: E0          MOVX A,@DPTR                  
    1FDF: FA          MOV R2,A                      
    1FE0: 7B 00       MOV R3,#0x00                  
    1FE2: 74 83       MOV A,#0x83                   
    1FE4: 2A          ADD A,R2                      
    1FE5: FA          MOV R2,A                      
    1FE6: E4          CLR A                         
    1FE7: 3B          ADDC A,R3                     
    1FE8: 24 CA       ADD A,#0xCA                   
    1FEA: FB          MOV R3,A                      
    1FEB: 90 7F F0    MOV DPTR,#0x7FF0              
    1FEE: E0          MOVX A,@DPTR                  
    1FEF: FC          MOV R4,A                      
    1FF0: 7D 00       MOV R5,#0x00                  
    1FF2: 74 83       MOV A,#0x83                   
    1FF4: 2C          ADD A,R4                      
    1FF5: FC          MOV R4,A                      
    1FF6: E4          CLR A                         
    1FF7: 3D          ADDC A,R5                     
    1FF8: FD          MOV R5,A                      
    1FF9: 8C 82       MOV 0x82,R4                   
    1FFB: 74 CA       MOV A,#0xCA                   
    1FFD: 2D          ADD A,R5                      
    1FFE: F5 83       MOV DPH(0x83),A               
    2000: E0          MOVX A,@DPTR                  
    2001: FC          MOV R4,A                      
    2002: 90 D2 5D    MOV DPTR,#0xD25D              
    2005: E0          MOVX A,@DPTR                  
    2006: 54 80       ANL A,#0x80                   
    2008: 23          RL A                          
    2009: 54 01       ANL A,#0x01                   
    200B: FD          MOV R5,A                      
    200C: 74 FE       MOV A,#0xFE                   
    200E: 4D          ORL A,R5                      
    200F: 52 04       ANL 0x04,A                    
    2011: 8A 82       MOV 0x82,R2                   
    2013: 8B 83       MOV 0x83,R3                   
    2015: EC          MOV A,R4                      
    2016: F0          MOVX @DPTR,A                  
    2017: 90 7F EE    MOV DPTR,#0x7FEE              
    201A: E0          MOVX A,@DPTR                  
    201B: FA          MOV R2,A                      
    201C: 20 E2 01    JB ACC.2,0x2020                  ; -> loc_2020
    201F: 22          RET                           

loc_2020:
    2020: 90 7E A9    MOV DPTR,#0x7EA9              
    2023: E0          MOVX A,@DPTR                  
    2024: FA          MOV R2,A                      
    2025: 7B 00       MOV R3,#0x00                  
    2027: 74 83       MOV A,#0x83                   
    2029: 2A          ADD A,R2                      
    202A: FA          MOV R2,A                      
    202B: E4          CLR A                         
    202C: 3B          ADDC A,R3                     
    202D: FB          MOV R3,A                      
    202E: 8A 82       MOV 0x82,R2                   
    2030: 74 CA       MOV A,#0xCA                   
    2032: 2B          ADD A,R3                      
    2033: F5 83       MOV DPH(0x83),A               
    2035: E0          MOVX A,@DPTR                  
    2036: FA          MOV R2,A                      
    2037: 53 02 7F    ANL 0x02,#0x7F                
    203A: BA 02 00    CJNE R2,#0x02,0x203D             ; -> 0x203D
    203D: 50 63       JNC 0x20A2                       ; -> loc_20A2
    203F: 90 7E A9    MOV DPTR,#0x7EA9              
    2042: E0          MOVX A,@DPTR                  
    2043: FA          MOV R2,A                      
    2044: 7B 00       MOV R3,#0x00                  
    2046: 74 83       MOV A,#0x83                   
    2048: 2A          ADD A,R2                      
    2049: FA          MOV R2,A                      
    204A: E4          CLR A                         
    204B: 3B          ADDC A,R3                     
    204C: 24 CA       ADD A,#0xCA                   
    204E: FB          MOV R3,A                      
    204F: 90 7E A9    MOV DPTR,#0x7EA9              
    2052: E0          MOVX A,@DPTR                  
    2053: FC          MOV R4,A                      
    2054: 7D 00       MOV R5,#0x00                  
    2056: 74 83       MOV A,#0x83                   
    2058: 2C          ADD A,R4                      
    2059: FC          MOV R4,A                      
    205A: E4          CLR A                         
    205B: 3D          ADDC A,R5                     
    205C: FD          MOV R5,A                      
    205D: 8C 82       MOV 0x82,R4                   
    205F: 74 CA       MOV A,#0xCA                   
    2061: 2D          ADD A,R5                      
    2062: F5 83       MOV DPH(0x83),A               
    2064: E0          MOVX A,@DPTR                  
    2065: FC          MOV R4,A                      
    2066: 53 04 80    ANL 0x04,#0x80                
    2069: 8A 82       MOV 0x82,R2                   
    206B: 8B 83       MOV 0x83,R3                   
    206D: EC          MOV A,R4                      
    206E: F0          MOVX @DPTR,A                  
    206F: 90 7E A9    MOV DPTR,#0x7EA9              
    2072: E0          MOVX A,@DPTR                  
    2073: FA          MOV R2,A                      
    2074: 7B 00       MOV R3,#0x00                  
    2076: 74 83       MOV A,#0x83                   
    2078: 2A          ADD A,R2                      
    2079: FA          MOV R2,A                      
    207A: E4          CLR A                         
    207B: 3B          ADDC A,R3                     
    207C: 24 CA       ADD A,#0xCA                   
    207E: FB          MOV R3,A                      
    207F: 90 7E A9    MOV DPTR,#0x7EA9              
    2082: E0          MOVX A,@DPTR                  
    2083: FC          MOV R4,A                      
    2084: 7D 00       MOV R5,#0x00                  
    2086: 74 83       MOV A,#0x83                   
    2088: 2C          ADD A,R4                      
    2089: FC          MOV R4,A                      
    208A: E4          CLR A                         
    208B: 3D          ADDC A,R5                     
    208C: FD          MOV R5,A                      
    208D: 8C 82       MOV 0x82,R4                   
    208F: 74 CA       MOV A,#0xCA                   
    2091: 2D          ADD A,R5                      
    2092: F5 83       MOV DPH(0x83),A               
    2094: E0          MOVX A,@DPTR                  
    2095: FC          MOV R4,A                      
    2096: 43 04 02    ORL 0x04,#0x02                
    2099: 8A 82       MOV 0x82,R2                   
    209B: 8B 83       MOV 0x83,R3                   
    209D: EC          MOV A,R4                      
    209E: F0          MOVX @DPTR,A                  
    209F: 02 21 40    LJMP 0x2140                      ; -> 0x2140

loc_20A2:
    20A2: 90 7E A9    MOV DPTR,#0x7EA9              
    20A5: E0          MOVX A,@DPTR                  
    20A6: FA          MOV R2,A                      
    20A7: 7B 00       MOV R3,#0x00                  
    20A9: 74 83       MOV A,#0x83                   
    20AB: 2A          ADD A,R2                      
    20AC: FA          MOV R2,A                      
    20AD: E4          CLR A                         
    20AE: 3B          ADDC A,R3                     
    20AF: 24 CA       ADD A,#0xCA                   
    20B1: FB          MOV R3,A                      
    20B2: 8A 82       MOV 0x82,R2                   
    20B4: 8B 83       MOV 0x83,R3                   
    20B6: E0          MOVX A,@DPTR                  
    20B7: FC          MOV R4,A                      
    20B8: 0C          INC R4                        
    20B9: 8A 82       MOV 0x82,R2                   
    20BB: 8B 83       MOV 0x83,R3                   
    20BD: EC          MOV A,R4                      
    20BE: F0          MOVX @DPTR,A                  
    20BF: 90 7E A9    MOV DPTR,#0x7EA9              
    20C2: E0          MOVX A,@DPTR                  
    20C3: FA          MOV R2,A                      
    20C4: 7B 00       MOV R3,#0x00                  
    20C6: 74 83       MOV A,#0x83                   
    20C8: 2A          ADD A,R2                      
    20C9: FA          MOV R2,A                      
    20CA: E4          CLR A                         
    20CB: 3B          ADDC A,R3                     
    20CC: FB          MOV R3,A                      
    20CD: 8A 82       MOV 0x82,R2                   
    20CF: 74 CA       MOV A,#0xCA                   
    20D1: 2B          ADD A,R3                      
    20D2: F5 83       MOV DPH(0x83),A               
    20D4: E0          MOVX A,@DPTR                  
    20D5: FA          MOV R2,A                      
    20D6: 53 02 7F    ANL 0x02,#0x7F                
    20D9: 74 04       MOV A,#0x04                   
    20DB: B5 02 00    CJNE A,0x02,0x20DE               ; -> 0x20DE
    20DE: 50 60       JNC 0x2140                       ; -> 0x2140
    20E0: 90 7E A9    MOV DPTR,#0x7EA9              
    20E3: E0          MOVX A,@DPTR                  
    20E4: FA          MOV R2,A                      
    20E5: 7B 00       MOV R3,#0x00                  
    20E7: 74 83       MOV A,#0x83                   
    20E9: 2A          ADD A,R2                      
    20EA: FA          MOV R2,A                      
    20EB: E4          CLR A                         
    20EC: 3B          ADDC A,R3                     
    20ED: 24 CA       ADD A,#0xCA                   
    20EF: FB          MOV R3,A                      
    20F0: 90 7E A9    MOV DPTR,#0x7EA9              
    20F3: E0          MOVX A,@DPTR                  
    20F4: FC          MOV R4,A                      
    20F5: 7D 00       MOV R5,#0x00                  
    20F7: 74 83       MOV A,#0x83                   
    20F9: 2C          ADD A,R4                      
    20FA: FC          MOV R4,A                      
    20FB: E4          CLR A                         
    20FC: 3D          ADDC A,R5                     
    20FD: FD          MOV R5,A                      
    20FE: 8C 82       MOV 0x82,R4                   
    2100: 74 CA       MOV A,#0xCA                   
    2102: 2D          ADD A,R5                      
    2103: F5 83       MOV DPH(0x83),A               
    2105: E0          MOVX A,@DPTR                  
    2106: FC          MOV R4,A                      
    2107: 53 04 80    ANL 0x04,#0x80                
    210A: 8A 82       MOV 0x82,R2                   
    210C: 8B 83       MOV 0x83,R3                   
    210E: EC          MOV A,R4                      
    210F: F0          MOVX @DPTR,A                  
    2110: 90 7E A9    MOV DPTR,#0x7EA9              
    2113: E0          MOVX A,@DPTR                  
    2114: FA          MOV R2,A                      
    2115: 7B 00       MOV R3,#0x00                  
    2117: 74 83       MOV A,#0x83                   
    2119: 2A          ADD A,R2                      
    211A: FA          MOV R2,A                      
    211B: E4          CLR A                         
    211C: 3B          ADDC A,R3                     
    211D: 24 CA       ADD A,#0xCA                   
    211F: FB          MOV R3,A                      
    2120: 90 7E A9    MOV DPTR,#0x7EA9              
    2123: E0          MOVX A,@DPTR                  
    2124: FC          MOV R4,A                      
    2125: 7D 00       MOV R5,#0x00                  
    2127: 74 83       MOV A,#0x83                   
    2129: 2C          ADD A,R4                      
    212A: FC          MOV R4,A                      
    212B: E4          CLR A                         
    212C: 3D          ADDC A,R5                     
    212D: FD          MOV R5,A                      
    212E: 8C 82       MOV 0x82,R4                   
    2130: 74 CA       MOV A,#0xCA                   
    2132: 2D          ADD A,R5                      
    2133: F5 83       MOV DPH(0x83),A               
    2135: E0          MOVX A,@DPTR                  
    2136: FC          MOV R4,A                      
    2137: 43 04 04    ORL 0x04,#0x04                
    213A: 8A 82       MOV 0x82,R2                   
    213C: 8B 83       MOV 0x83,R3                   
    213E: EC          MOV A,R4                      
    213F: F0          MOVX @DPTR,A                  
    2140: 90 00 AB    MOV DPTR,#0x00AB              
    2143: E4          CLR A                         
    2144: 93          MOVC A,@A+DPTR                
    2145: FA          MOV R2,A                      
    2146: 30 E7 30    JNB ACC.7,0x2179                 ; -> 0x2179
    2149: 90 7E A9    MOV DPTR,#0x7EA9              
    214C: E0          MOVX A,@DPTR                  
    214D: FA          MOV R2,A                      
    214E: 7B 00       MOV R3,#0x00                  
    2150: 74 83       MOV A,#0x83                   
    2152: 2A          ADD A,R2                      
    2153: FA          MOV R2,A                      
    2154: E4          CLR A                         
    2155: 3B          ADDC A,R3                     
    2156: 24 CA       ADD A,#0xCA                   
    2158: FB          MOV R3,A                      
    2159: 90 7E A9    MOV DPTR,#0x7EA9              
    215C: E0          MOVX A,@DPTR                  
    215D: FC          MOV R4,A                      
    215E: 7D 00       MOV R5,#0x00                  
    2160: 74 83       MOV A,#0x83                   
    2162: 2C          ADD A,R4                      
    2163: FC          MOV R4,A                      
    2164: E4          CLR A                         
    2165: 3D          ADDC A,R5                     
    2166: FD          MOV R5,A                      
    2167: 8C 82       MOV 0x82,R4                   
    2169: 74 CA       MOV A,#0xCA                   
    216B: 2D          ADD A,R5                      
    216C: F5 83       MOV DPH(0x83),A               
    216E: E0          MOVX A,@DPTR                  
    216F: FC          MOV R4,A                      
    2170: 53 04 7F    ANL 0x04,#0x7F                
    2173: 8A 82       MOV 0x82,R2                   
    2175: 8B 83       MOV 0x83,R3                   
    2177: EC          MOV A,R4                      
    2178: F0          MOVX @DPTR,A                  
    2179: 90 7E A9    MOV DPTR,#0x7EA9              
    217C: E0          MOVX A,@DPTR                  
    217D: FA          MOV R2,A                      
    217E: BA 0C 00    CJNE R2,#0x0C,0x2181             ; -> 0x2181
    2181: 40 19       JC 0x219C                        ; -> 0x219C
    2183: 90 CA A3    MOV DPTR,#0xCAA3              
    2186: E0          MOVX A,@DPTR                  
    2187: FA          MOV R2,A                      
    2188: 30 E2 07    JNB ACC.2,0x2192                 ; -> loc_2192
    218B: 90 CA 25    MOV DPTR,#0xCA25                 ; register block CA00
    218E: E0          MOVX A,@DPTR                  
    218F: FA          MOV R2,A                      
    2190: 80 05       SJMP 0x2197                      ; -> 0x2197

loc_2192:
    2192: 90 CA 85    MOV DPTR,#0xCA85                 ; register block CA00
    2195: E0          MOVX A,@DPTR                  
    2196: FA          MOV R2,A                      
    2197: 90 CA 85    MOV DPTR,#0xCA85                 ; register block CA00
    219A: EA          MOV A,R2                      
    219B: F0          MOVX @DPTR,A                  
    219C: 90 7E A9    MOV DPTR,#0x7EA9              
    219F: E0          MOVX A,@DPTR                  
    21A0: FA          MOV R2,A                      
    21A1: BA 0D 00    CJNE R2,#0x0D,0x21A4             ; -> 0x21A4
    21A4: 40 19       JC 0x21BF                        ; -> 0x21BF
    21A6: 90 CA A3    MOV DPTR,#0xCAA3              
    21A9: E0          MOVX A,@DPTR                  
    21AA: FA          MOV R2,A                      
    21AB: 30 E1 07    JNB ACC.1,0x21B5                 ; -> loc_21B5
    21AE: 90 CA 24    MOV DPTR,#0xCA24                 ; register block CA00
    21B1: E0          MOVX A,@DPTR                  
    21B2: FA          MOV R2,A                      
    21B3: 80 05       SJMP 0x21BA                      ; -> 0x21BA

loc_21B5:
    21B5: 90 CA 84    MOV DPTR,#0xCA84                 ; register block CA00
    21B8: E0          MOVX A,@DPTR                  
    21B9: FA          MOV R2,A                      
    21BA: 90 CA 84    MOV DPTR,#0xCA84                 ; register block CA00
    21BD: EA          MOV A,R2                      
    21BE: F0          MOVX @DPTR,A                  
    21BF: 90 7E A9    MOV DPTR,#0x7EA9              
    21C2: E0          MOVX A,@DPTR                  
    21C3: FA          MOV R2,A                      
    21C4: BA 0E 00    CJNE R2,#0x0E,0x21C7             ; -> 0x21C7
    21C7: 40 47       JC 0x2210                        ; -> 0x2210
    21C9: 90 CA A3    MOV DPTR,#0xCAA3              
    21CC: E0          MOVX A,@DPTR                  
    21CD: FA          MOV R2,A                      
    21CE: 30 E0 25    JNB ACC.0,0x21F6                 ; -> 0x21F6
    21D1: 90 7F AF    MOV DPTR,#0x7FAF              
    21D4: E0          MOVX A,@DPTR                  
    21D5: FA          MOV R2,A                      
    21D6: B4 01 00    CJNE A,#0x01,0x21D9              ; -> 0x21D9
    21D9: E4          CLR A                         
    21DA: 33          RLC A                         
    21DB: FA          MOV R2,A                      
    21DC: 70 13       JNZ 0x21F1                       ; -> loc_21F1
    21DE: 90 00 A8    MOV DPTR,#0x00A8              
    21E1: E4          CLR A                         
    21E2: 93          MOVC A,@A+DPTR                
    21E3: 54 80       ANL A,#0x80                   
    21E5: FA          MOV R2,A                      
    21E6: B4 01 00    CJNE A,#0x01,0x21E9              ; -> 0x21E9
    21E9: E4          CLR A                         
    21EA: 33          RLC A                         
    21EB: FA          MOV R2,A                      
    21EC: 70 03       JNZ 0x21F1                       ; -> loc_21F1
    21EE: FA          MOV R2,A                      
    21EF: 80 02       SJMP 0x21F3                      ; -> 0x21F3

loc_21F1:
    21F1: 7A 01       MOV R2,#0x01                  
    21F3: EA          MOV A,R2                      
    21F4: 70 04       JNZ 0x21FA                       ; -> loc_21FA
    21F6: 7A 00       MOV R2,#0x00                  
    21F8: 80 02       SJMP 0x21FC                      ; -> 0x21FC

loc_21FA:
    21FA: 7A 01       MOV R2,#0x01                  
    21FC: EA          MOV A,R2                      
    21FD: 60 07       JZ 0x2206                        ; -> loc_2206
    21FF: 90 CA 23    MOV DPTR,#0xCA23                 ; register block CA00
    2202: E0          MOVX A,@DPTR                  
    2203: FA          MOV R2,A                      
    2204: 80 05       SJMP 0x220B                      ; -> 0x220B

loc_2206:
    2206: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    2209: E0          MOVX A,@DPTR                  
    220A: FA          MOV R2,A                      
    220B: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    220E: EA          MOV A,R2                      
    220F: F0          MOVX @DPTR,A                  
    2210: 22          RET                           

sub_2211:
    2211: AA 82       MOV R2,0x82                   
    2213: 90 7F B7    MOV DPTR,#0x7FB7              
    2216: E0          MOVX A,@DPTR                  
    2217: FB          MOV R3,A                      
    2218: 70 13       JNZ 0x222D                       ; -> 0x222D
    221A: 90 CA 0B    MOV DPTR,#0xCA0B                 ; register block CA00
    221D: 74 01       MOV A,#0x01                   
    221F: F0          MOVX @DPTR,A                  
    2220: 90 CA 0D    MOV DPTR,#0xCA0D                 ; register block CA00
    2223: E0          MOVX A,@DPTR                  
    2224: FB          MOV R3,A                      
    2225: 43 03 01    ORL 0x03,#0x01                
    2228: 90 CA 0D    MOV DPTR,#0xCA0D                 ; register block CA00
    222B: EB          MOV A,R3                      
    222C: F0          MOVX @DPTR,A                  
    222D: 90 7F B7    MOV DPTR,#0x7FB7              
    2230: 74 01       MOV A,#0x01                   
    2232: F0          MOVX @DPTR,A                  
    2233: 90 7F F4    MOV DPTR,#0x7FF4              
    2236: E4          CLR A                         
    2237: F0          MOVX @DPTR,A                  
    2238: EA          MOV A,R2                      
    2239: 60 06       JZ 0x2241                        ; -> 0x2241
    223B: 90 7F 79    MOV DPTR,#0x7F79              
    223E: 74 01       MOV A,#0x01                   
    2240: F0          MOVX @DPTR,A                  
    2241: 22          RET                           

sub_2242:
    2242: 90 C2 00    MOV DPTR,#0xC200              
    2245: E0          MOVX A,@DPTR                  
    2246: FA          MOV R2,A                      
    2247: 43 02 08    ORL 0x02,#0x08                
    224A: 90 C2 00    MOV DPTR,#0xC200              
    224D: EA          MOV A,R2                      
    224E: F0          MOVX @DPTR,A                  
    224F: 90 7F 84    MOV DPTR,#0x7F84              
    2252: E0          MOVX A,@DPTR                  
    2253: FA          MOV R2,A                      
    2254: 70 17       JNZ 0x226D                       ; -> 0x226D
    2256: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2259: E0          MOVX A,@DPTR                  
    225A: FA          MOV R2,A                      
    225B: 53 02 FD    ANL 0x02,#0xFD                
    225E: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2261: EA          MOV A,R2                      
    2262: F0          MOVX @DPTR,A                  
    2263: E0          MOVX A,@DPTR                  
    2264: FA          MOV R2,A                      
    2265: 53 02 FE    ANL 0x02,#0xFE                
    2268: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    226B: EA          MOV A,R2                      
    226C: F0          MOVX @DPTR,A                  
    226D: 22          RET                           

sub_226E:
    226E: 90 D8 68    MOV DPTR,#0xD868              
    2271: 74 05       MOV A,#0x05                   
    2273: F0          MOVX @DPTR,A                  
    2274: 90 00 A7    MOV DPTR,#0x00A7              
    2277: E4          CLR A                         
    2278: 93          MOVC A,@A+DPTR                
    2279: FA          MOV R2,A                      
    227A: 30 E3 01    JNB ACC.3,0x227E                 ; -> loc_227E
    227D: 22          RET                           

loc_227E:
    227E: 90 7F FC    MOV DPTR,#0x7FFC              
    2281: E0          MOVX A,@DPTR                  
    2282: FA          MOV R2,A                      
    2283: 60 46       JZ 0x22CB                        ; -> loc_22CB
    2285: 90 7F 84    MOV DPTR,#0x7F84              
    2288: E0          MOVX A,@DPTR                  
    2289: FA          MOV R2,A                      
    228A: 70 3F       JNZ 0x22CB                       ; -> loc_22CB
    228C: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    228F: E0          MOVX A,@DPTR                  
    2290: FA          MOV R2,A                      
    2291: 30 E2 44    JNB ACC.2,0x22D8                 ; -> 0x22D8
    2294: 90 7F F1    MOV DPTR,#0x7FF1              
    2297: E0          MOVX A,@DPTR                  
    2298: FA          MOV R2,A                      
    2299: 60 18       JZ 0x22B3                        ; -> loc_22B3
    229B: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    229E: E0          MOVX A,@DPTR                  
    229F: FA          MOV R2,A                      
    22A0: 53 02 FE    ANL 0x02,#0xFE                
    22A3: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    22A6: EA          MOV A,R2                      
    22A7: F0          MOVX @DPTR,A                  
    22A8: E0          MOVX A,@DPTR                  
    22A9: FA          MOV R2,A                      
    22AA: 43 02 02    ORL 0x02,#0x02                
    22AD: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    22B0: EA          MOV A,R2                      
    22B1: F0          MOVX @DPTR,A                  
    22B2: 22          RET                           

loc_22B3:
    22B3: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    22B6: E0          MOVX A,@DPTR                  
    22B7: FA          MOV R2,A                      
    22B8: 53 02 FD    ANL 0x02,#0xFD                
    22BB: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    22BE: EA          MOV A,R2                      
    22BF: F0          MOVX @DPTR,A                  
    22C0: E0          MOVX A,@DPTR                  
    22C1: FA          MOV R2,A                      
    22C2: 43 02 01    ORL 0x02,#0x01                
    22C5: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    22C8: EA          MOV A,R2                      
    22C9: F0          MOVX @DPTR,A                  
    22CA: 22          RET                           

loc_22CB:
    22CB: 90 C2 00    MOV DPTR,#0xC200              
    22CE: E0          MOVX A,@DPTR                  
    22CF: FA          MOV R2,A                      
    22D0: 53 02 F7    ANL 0x02,#0xF7                
    22D3: 90 C2 00    MOV DPTR,#0xC200              
    22D6: EA          MOV A,R2                      
    22D7: F0          MOVX @DPTR,A                  
    22D8: 22          RET                           

sub_22D9:
    22D9: AA 82       MOV R2,0x82                   
    22DB: BA 00 02    CJNE R2,#0x00,0x22E0             ; -> loc_22E0
    22DE: 80 0A       SJMP 0x22EA                      ; -> loc_22EA

loc_22E0:
    22E0: BA 01 02    CJNE R2,#0x01,0x22E5             ; -> loc_22E5
    22E3: 80 09       SJMP 0x22EE                      ; -> loc_22EE

loc_22E5:
    22E5: BA 02 0E    CJNE R2,#0x02,0x22F6             ; -> loc_22F6
    22E8: 80 08       SJMP 0x22F2                      ; -> loc_22F2

loc_22EA:
    22EA: 75 82 00    MOV DPL(0x82),#0x00           
    22ED: 22          RET                           

loc_22EE:
    22EE: 75 82 08    MOV DPL(0x82),#0x08           
    22F1: 22          RET                           

loc_22F2:
    22F2: 75 82 10    MOV DPL(0x82),#0x10           
    22F5: 22          RET                           

loc_22F6:
    22F6: 75 82 10    MOV DPL(0x82),#0x10           
    22F9: 22          RET                           

sub_22FA:
    22FA: AA 82       MOV R2,0x82                   
    22FC: BA 00 02    CJNE R2,#0x00,0x2301             ; -> loc_2301
    22FF: 80 05       SJMP 0x2306                      ; -> loc_2306

loc_2301:
    2301: BA 01 0A    CJNE R2,#0x01,0x230E             ; -> loc_230E
    2304: 80 04       SJMP 0x230A                      ; -> loc_230A

loc_2306:
    2306: 7A 11       MOV R2,#0x11                  
    2308: 80 06       SJMP 0x2310                      ; -> 0x2310

loc_230A:
    230A: 7A 12       MOV R2,#0x12                  
    230C: 80 02       SJMP 0x2310                      ; -> 0x2310

loc_230E:
    230E: 7A 12       MOV R2,#0x12                  
    2310: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    2313: E0          MOVX A,@DPTR                  
    2314: FB          MOV R3,A                      
    2315: 53 03 0F    ANL 0x03,#0x0F                
    2318: 74 02       MOV A,#0x02                   
    231A: B5 03 00    CJNE A,0x03,0x231D               ; -> 0x231D
    231D: 50 0D       JNC 0x232C                       ; -> 0x232C
    231F: BA 12 00    CJNE R2,#0x12,0x2322             ; -> 0x2322
    2322: 50 08       JNC 0x232C                       ; -> 0x232C
    2324: 90 7E AD    MOV DPTR,#0x7EAD              
    2327: 74 FF       MOV A,#0xFF                   
    2329: F0          MOVX @DPTR,A                  
    232A: 7A 12       MOV R2,#0x12                  
    232C: BA 11 04    CJNE R2,#0x11,0x2333             ; -> loc_2333
    232F: 7B FF       MOV R3,#0xFF                  
    2331: 80 02       SJMP 0x2335                      ; -> 0x2335

loc_2333:
    2333: 7B 00       MOV R3,#0x00                  
    2335: 90 7E AC    MOV DPTR,#0x7EAC              
    2338: EB          MOV A,R3                      
    2339: F0          MOVX @DPTR,A                  
    233A: 8A 82       MOV 0x82,R2                   
    233C: 22          RET                           

sub_233D:
    233D: 90 7F FB    MOV DPTR,#0x7FFB              
    2340: E0          MOVX A,@DPTR                  
    2341: FA          MOV R2,A                      
    2342: 70 24       JNZ 0x2368                       ; -> loc_2368
    2344: 90 7F 7E    MOV DPTR,#0x7F7E              
    2347: E0          MOVX A,@DPTR                  
    2348: F5 0A       MOV 0x0A,A                    
    234A: 90 7F 7D    MOV DPTR,#0x7F7D              
    234D: E0          MOVX A,@DPTR                  
    234E: F5 0B       MOV 0x0B,A                    
    2350: 90 7F 7C    MOV DPTR,#0x7F7C              
    2353: E0          MOVX A,@DPTR                  
    2354: F5 0C       MOV 0x0C,A                    
    2356: 75 0D 00    MOV 0x0D,#0x00                
    2359: 75 82 0E    MOV DPL(0x82),#0x0E           
    235C: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    235F: 90 7F FB    MOV DPTR,#0x7FFB              
    2362: 74 01       MOV A,#0x01                   
    2364: F0          MOVX @DPTR,A                  
    2365: 02 22 42    LJMP 0x2242                      ; -> sub_2242

loc_2368:
    2368: 22          RET                           

sub_2369:
    2369: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    236C: E0          MOVX A,@DPTR                  
    236D: FA          MOV R2,A                      
    236E: 30 E0 14    JNB ACC.0,0x2385                 ; -> loc_2385
    2371: 90 C2 00    MOV DPTR,#0xC200              
    2374: E0          MOVX A,@DPTR                  
    2375: FA          MOV R2,A                      
    2376: 43 02 08    ORL 0x02,#0x08                
    2379: 90 C2 00    MOV DPTR,#0xC200              
    237C: EA          MOV A,R2                      
    237D: F0          MOVX @DPTR,A                  
    237E: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    2381: 75 82 01    MOV DPL(0x82),#0x01           
    2384: 22          RET                           

loc_2385:
    2385: 75 82 00    MOV DPL(0x82),#0x00           
    2388: 22          RET                           

sub_2389:
    2389: E5 82       MOV A,DPL(0x82)               
    238B: FA          MOV R2,A                      
    238C: 70 06       JNZ 0x2394                       ; -> 0x2394
    238E: 90 CC 94    MOV DPTR,#0xCC94                 ; register block CC00
    2391: E0          MOVX A,@DPTR                  
    2392: 60 6D       JZ 0x2401                        ; -> loc_2401
    2394: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    2397: E0          MOVX A,@DPTR                  
    2398: FA          MOV R2,A                      
    2399: 30 E1 24    JNB ACC.1,0x23C0                 ; -> loc_23C0
    239C: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    239F: E0          MOVX A,@DPTR                  
    23A0: FA          MOV R2,A                      
    23A1: 90 7F ED    MOV DPTR,#0x7FED              
    23A4: F0          MOVX @DPTR,A                  
    23A5: 90 CC 0A    MOV DPTR,#0xCC0A                 ; register block CC00
    23A8: E0          MOVX A,@DPTR                  
    23A9: FA          MOV R2,A                      
    23AA: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    23AD: E0          MOVX A,@DPTR                  
    23AE: FB          MOV R3,A                      
    23AF: EA          MOV A,R2                      
    23B0: B5 03 00    CJNE A,0x03,0x23B3               ; -> 0x23B3
    23B3: 50 4C       JNC 0x2401                       ; -> loc_2401
    23B5: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    23B8: E0          MOVX A,@DPTR                  
    23B9: FA          MOV R2,A                      
    23BA: 90 7F ED    MOV DPTR,#0x7FED              
    23BD: F0          MOVX @DPTR,A                  
    23BE: 80 E5       SJMP 0x23A5                      ; -> 0x23A5

loc_23C0:
    23C0: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    23C3: E0          MOVX A,@DPTR                  
    23C4: FA          MOV R2,A                      
    23C5: 30 E2 09    JNB ACC.2,0x23D1                 ; -> 0x23D1
    23C8: 90 00 A8    MOV DPTR,#0x00A8              
    23CB: E4          CLR A                         
    23CC: 93          MOVC A,@A+DPTR                
    23CD: FA          MOV R2,A                      
    23CE: 30 E5 11    JNB ACC.5,0x23E2                 ; -> loc_23E2
    23D1: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    23D4: E0          MOVX A,@DPTR                  
    23D5: FA          MOV R2,A                      
    23D6: B5 50 00    CJNE A,0x50,0x23D9               ; -> 0x23D9
    23D9: 50 26       JNC 0x2401                       ; -> loc_2401
    23DB: 90 CC 94    MOV DPTR,#0xCC94                 ; register block CC00
    23DE: E0          MOVX A,@DPTR                  
    23DF: 60 F0       JZ 0x23D1                        ; -> 0x23D1
    23E1: 22          RET                           

loc_23E2:
    23E2: 7A 00       MOV R2,#0x00                  
    23E4: BA 0A 00    CJNE R2,#0x0A,0x23E7             ; -> 0x23E7
    23E7: 50 18       JNC 0x2401                       ; -> loc_2401
    23E9: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    23EC: E4          CLR A                         
    23ED: F0          MOVX @DPTR,A                  
    23EE: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    23F1: E0          MOVX A,@DPTR                  
    23F2: FB          MOV R3,A                      
    23F3: B5 50 00    CJNE A,0x50,0x23F6               ; -> 0x23F6
    23F6: 50 06       JNC 0x23FE                       ; -> 0x23FE
    23F8: 90 CC 94    MOV DPTR,#0xCC94                 ; register block CC00
    23FB: E0          MOVX A,@DPTR                  
    23FC: 60 F0       JZ 0x23EE                        ; -> 0x23EE
    23FE: 0A          INC R2                        
    23FF: 80 E3       SJMP 0x23E4                      ; -> 0x23E4

loc_2401:
    2401: 22          RET                           

sub_2402:
    2402: 90 7F 84    MOV DPTR,#0x7F84              
    2405: E0          MOVX A,@DPTR                  
    2406: FA          MOV R2,A                      
    2407: 60 07       JZ 0x2410                        ; -> 0x2410
    2409: 90 7F FC    MOV DPTR,#0x7FFC              
    240C: E0          MOVX A,@DPTR                  
    240D: FA          MOV R2,A                      
    240E: 70 04       JNZ 0x2414                       ; -> loc_2414
    2410: 7A 00       MOV R2,#0x00                  
    2412: 80 02       SJMP 0x2416                      ; -> 0x2416

loc_2414:
    2414: 7A 01       MOV R2,#0x01                  
    2416: 90 7F AD    MOV DPTR,#0x7FAD              
    2419: EA          MOV A,R2                      
    241A: F0          MOVX @DPTR,A                  
    241B: E5 08       MOV A,0x08                    
    241D: 30 E0 5C    JNB ACC.0,0x247C                 ; -> 0x247C
    2420: 90 7F AD    MOV DPTR,#0x7FAD              
    2423: E0          MOVX A,@DPTR                  
    2424: FA          MOV R2,A                      
    2425: 60 24       JZ 0x244B                        ; -> loc_244B
    2427: 75 50 20    MOV 0x50,#0x20                
    242A: 75 51 1C    MOV 0x51,#0x1C                
    242D: 75 82 00    MOV DPL(0x82),#0x00           
    2430: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2433: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    2436: E0          MOVX A,@DPTR                  
    2437: FA          MOV R2,A                      
    2438: BA 12 00    CJNE R2,#0x12,0x243B             ; -> 0x243B
    243B: 50 06       JNC 0x2443                       ; -> 0x2443
    243D: 90 7E AD    MOV DPTR,#0x7EAD              
    2440: 74 FF       MOV A,#0xFF                   
    2442: F0          MOVX @DPTR,A                  
    2443: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    2446: 74 12       MOV A,#0x12                   
    2448: F0          MOVX @DPTR,A                  
    2449: 80 31       SJMP 0x247C                      ; -> 0x247C

loc_244B:
    244B: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    244E: E0          MOVX A,@DPTR                  
    244F: FA          MOV R2,A                      
    2450: 53 02 0F    ANL 0x02,#0x0F                
    2453: BA 02 00    CJNE R2,#0x02,0x2456             ; -> 0x2456
    2456: 50 24       JNC 0x247C                       ; -> 0x247C
    2458: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    245B: E0          MOVX A,@DPTR                  
    245C: FA          MOV R2,A                      
    245D: 74 11       MOV A,#0x11                   
    245F: B5 02 00    CJNE A,0x02,0x2462               ; -> 0x2462
    2462: 50 12       JNC 0x2476                       ; -> 0x2476
    2464: 75 50 20    MOV 0x50,#0x20                
    2467: 75 51 1C    MOV 0x51,#0x1C                
    246A: 75 82 00    MOV DPL(0x82),#0x00           
    246D: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2470: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    2473: 74 11       MOV A,#0x11                   
    2475: F0          MOVX @DPTR,A                  
    2476: 90 7E AC    MOV DPTR,#0x7EAC              
    2479: 74 FF       MOV A,#0xFF                   
    247B: F0          MOVX @DPTR,A                  
    247C: E5 08       MOV A,0x08                    
    247E: 20 E1 03    JB ACC.1,0x2484                  ; -> loc_2484
    2481: 02 25 49    LJMP 0x2549                      ; -> 0x2549

loc_2484:
    2484: 74 08       MOV A,#0x08                   
    2486: 55 08       ANL A,0x08                    
    2488: FA          MOV R2,A                      
    2489: E4          CLR A                         
    248A: C4          SWAP A                        
    248B: 23          RL A                          
    248C: CA          XCH A,R2                      
    248D: C4          SWAP A                        
    248E: 23          RL A                          
    248F: 54 1F       ANL A,#0x1F                   
    2491: 6A          XRL A,R2                      
    2492: CA          XCH A,R2                      
    2493: 54 1F       ANL A,#0x1F                   
    2495: CA          XCH A,R2                      
    2496: 6A          XRL A,R2                      
    2497: CA          XCH A,R2                      
    2498: FB          MOV R3,A                      
    2499: 90 7F AC    MOV DPTR,#0x7FAC              
    249C: 74 83       MOV A,#0x83                   
    249E: 2A          ADD A,R2                      
    249F: F0          MOVX @DPTR,A                  
    24A0: 90 00 AB    MOV DPTR,#0x00AB              
    24A3: E4          CLR A                         
    24A4: 93          MOVC A,@A+DPTR                
    24A5: FA          MOV R2,A                      
    24A6: 54 07       ANL A,#0x07                   
    24A8: 60 40       JZ 0x24EA                        ; -> loc_24EA
    24AA: 90 00 AB    MOV DPTR,#0x00AB              
    24AD: E4          CLR A                         
    24AE: 93          MOVC A,@A+DPTR                
    24AF: FA          MOV R2,A                      
    24B0: 30 E0 10    JNB ACC.0,0x24C3                 ; -> loc_24C3
    24B3: 90 7F AC    MOV DPTR,#0x7FAC              
    24B6: E0          MOVX A,@DPTR                  
    24B7: FA          MOV R2,A                      
    24B8: F5 82       MOV DPL(0x82),A               
    24BA: 75 83 CA    MOV DPH(0x83),#0xCA           
    24BD: 74 14       MOV A,#0x14                   
    24BF: F0          MOVX @DPTR,A                  
    24C0: 02 25 49    LJMP 0x2549                      ; -> 0x2549

loc_24C3:
    24C3: 90 00 AB    MOV DPTR,#0x00AB              
    24C6: E4          CLR A                         
    24C7: 93          MOVC A,@A+DPTR                
    24C8: FA          MOV R2,A                      
    24C9: 30 E1 0F    JNB ACC.1,0x24DB                 ; -> loc_24DB
    24CC: 90 7F AC    MOV DPTR,#0x7FAC              
    24CF: E0          MOVX A,@DPTR                  
    24D0: FA          MOV R2,A                      
    24D1: F5 82       MOV DPL(0x82),A               
    24D3: 75 83 CA    MOV DPH(0x83),#0xCA           
    24D6: 74 0A       MOV A,#0x0A                   
    24D8: F0          MOVX @DPTR,A                  
    24D9: 80 6E       SJMP 0x2549                      ; -> 0x2549

loc_24DB:
    24DB: 90 7F AC    MOV DPTR,#0x7FAC              
    24DE: E0          MOVX A,@DPTR                  
    24DF: FA          MOV R2,A                      
    24E0: F5 82       MOV DPL(0x82),A               
    24E2: 75 83 CA    MOV DPH(0x83),#0xCA           
    24E5: 74 06       MOV A,#0x06                   
    24E7: F0          MOVX @DPTR,A                  
    24E8: 80 5F       SJMP 0x2549                      ; -> 0x2549

loc_24EA:
    24EA: 90 7F AD    MOV DPTR,#0x7FAD              
    24ED: E0          MOVX A,@DPTR                  
    24EE: FA          MOV R2,A                      
    24EF: 60 2D       JZ 0x251E                        ; -> loc_251E
    24F1: 90 7F AC    MOV DPTR,#0x7FAC              
    24F4: E0          MOVX A,@DPTR                  
    24F5: F5 82       MOV DPL(0x82),A               
    24F7: 75 83 CA    MOV DPH(0x83),#0xCA           
    24FA: E0          MOVX A,@DPTR                  
    24FB: FA          MOV R2,A                      
    24FC: 74 14       MOV A,#0x14                   
    24FE: B5 02 00    CJNE A,0x02,0x2501               ; -> 0x2501
    2501: 50 46       JNC 0x2549                       ; -> 0x2549
    2503: 75 50 20    MOV 0x50,#0x20                
    2506: 75 51 1C    MOV 0x51,#0x1C                
    2509: 75 82 00    MOV DPL(0x82),#0x00           
    250C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    250F: 90 7F AC    MOV DPTR,#0x7FAC              
    2512: E0          MOVX A,@DPTR                  
    2513: FA          MOV R2,A                      
    2514: F5 82       MOV DPL(0x82),A               
    2516: 75 83 CA    MOV DPH(0x83),#0xCA           
    2519: 74 14       MOV A,#0x14                   
    251B: F0          MOVX @DPTR,A                  
    251C: 80 2B       SJMP 0x2549                      ; -> 0x2549

loc_251E:
    251E: 90 7F AC    MOV DPTR,#0x7FAC              
    2521: E0          MOVX A,@DPTR                  
    2522: F5 82       MOV DPL(0x82),A               
    2524: 75 83 CA    MOV DPH(0x83),#0xCA           
    2527: E0          MOVX A,@DPTR                  
    2528: FA          MOV R2,A                      
    2529: 74 0A       MOV A,#0x0A                   
    252B: B5 02 00    CJNE A,0x02,0x252E               ; -> 0x252E
    252E: 50 19       JNC 0x2549                       ; -> 0x2549
    2530: 75 50 20    MOV 0x50,#0x20                
    2533: 75 51 1C    MOV 0x51,#0x1C                
    2536: 75 82 00    MOV DPL(0x82),#0x00           
    2539: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    253C: 90 7F AC    MOV DPTR,#0x7FAC              
    253F: E0          MOVX A,@DPTR                  
    2540: FA          MOV R2,A                      
    2541: F5 82       MOV DPL(0x82),A               
    2543: 75 83 CA    MOV DPH(0x83),#0xCA           
    2546: 74 0A       MOV A,#0x0A                   
    2548: F0          MOVX @DPTR,A                  
    2549: E5 08       MOV A,0x08                    
    254B: 20 E2 03    JB ACC.2,0x2551                  ; -> loc_2551
    254E: 02 26 84    LJMP 0x2684                      ; -> 0x2684

loc_2551:
    2551: 74 30       MOV A,#0x30                   
    2553: 55 08       ANL A,0x08                    
    2555: FA          MOV R2,A                      
    2556: E4          CLR A                         
    2557: C4          SWAP A                        
    2558: CA          XCH A,R2                      
    2559: C4          SWAP A                        
    255A: 54 0F       ANL A,#0x0F                   
    255C: 6A          XRL A,R2                      
    255D: CA          XCH A,R2                      
    255E: 54 0F       ANL A,#0x0F                   
    2560: CA          XCH A,R2                      
    2561: 6A          XRL A,R2                      
    2562: CA          XCH A,R2                      
    2563: FB          MOV R3,A                      
    2564: 90 7F AC    MOV DPTR,#0x7FAC              
    2567: 74 83       MOV A,#0x83                   
    2569: 2A          ADD A,R2                      
    256A: F0          MOVX @DPTR,A                  
    256B: 90 00 AB    MOV DPTR,#0x00AB              
    256E: E4          CLR A                         
    256F: 93          MOVC A,@A+DPTR                
    2570: FA          MOV R2,A                      
    2571: 54 18       ANL A,#0x18                   
    2573: 60 49       JZ 0x25BE                        ; -> loc_25BE
    2575: 90 00 AB    MOV DPTR,#0x00AB              
    2578: E4          CLR A                         
    2579: 93          MOVC A,@A+DPTR                
    257A: FA          MOV R2,A                      
    257B: 30 E3 20    JNB ACC.3,0x259E                 ; -> loc_259E
    257E: 90 7F AC    MOV DPTR,#0x7FAC              
    2581: E0          MOVX A,@DPTR                  
    2582: FA          MOV R2,A                      
    2583: 7B CA       MOV R3,#0xCA                  
    2585: 90 7F AC    MOV DPTR,#0x7FAC              
    2588: E0          MOVX A,@DPTR                  
    2589: F5 82       MOV DPL(0x82),A               
    258B: 75 83 CA    MOV DPH(0x83),#0xCA           
    258E: E0          MOVX A,@DPTR                  
    258F: FC          MOV R4,A                      
    2590: 74 E0       MOV A,#0xE0                   
    2592: 5C          ANL A,R4                      
    2593: 44 02       ORL A,#0x02                   
    2595: FC          MOV R4,A                      
    2596: 8A 82       MOV 0x82,R2                   
    2598: 8B 83       MOV 0x83,R3                   
    259A: F0          MOVX @DPTR,A                  
    259B: 02 26 57    LJMP 0x2657                      ; -> 0x2657

loc_259E:
    259E: 90 7F AC    MOV DPTR,#0x7FAC              
    25A1: E0          MOVX A,@DPTR                  
    25A2: FA          MOV R2,A                      
    25A3: 7B CA       MOV R3,#0xCA                  
    25A5: 90 7F AC    MOV DPTR,#0x7FAC              
    25A8: E0          MOVX A,@DPTR                  
    25A9: F5 82       MOV DPL(0x82),A               
    25AB: 75 83 CA    MOV DPH(0x83),#0xCA           
    25AE: E0          MOVX A,@DPTR                  
    25AF: FC          MOV R4,A                      
    25B0: 74 E0       MOV A,#0xE0                   
    25B2: 5C          ANL A,R4                      
    25B3: 44 01       ORL A,#0x01                   
    25B5: FC          MOV R4,A                      
    25B6: 8A 82       MOV 0x82,R2                   
    25B8: 8B 83       MOV 0x83,R3                   
    25BA: F0          MOVX @DPTR,A                  
    25BB: 02 26 57    LJMP 0x2657                      ; -> 0x2657

loc_25BE:
    25BE: 90 7F E7    MOV DPTR,#0x7FE7              
    25C1: E0          MOVX A,@DPTR                  
    25C2: FA          MOV R2,A                      
    25C3: 60 54       JZ 0x2619                        ; -> loc_2619
    25C5: 75 50 20    MOV 0x50,#0x20                
    25C8: 75 51 1C    MOV 0x51,#0x1C                
    25CB: 75 82 00    MOV DPL(0x82),#0x00           
    25CE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    25D1: 90 7F AC    MOV DPTR,#0x7FAC              
    25D4: E0          MOVX A,@DPTR                  
    25D5: F5 82       MOV DPL(0x82),A               
    25D7: 75 83 CA    MOV DPH(0x83),#0xCA           
    25DA: E0          MOVX A,@DPTR                  
    25DB: FA          MOV R2,A                      
    25DC: 90 7F ED    MOV DPTR,#0x7FED              
    25DF: 74 1F       MOV A,#0x1F                   
    25E1: 5A          ANL A,R2                      
    25E2: F0          MOVX @DPTR,A                  
    25E3: 90 7F ED    MOV DPTR,#0x7FED              
    25E6: E0          MOVX A,@DPTR                  
    25E7: FA          MOV R2,A                      
    25E8: 74 02       MOV A,#0x02                   
    25EA: B5 02 00    CJNE A,0x02,0x25ED               ; -> 0x25ED
    25ED: 50 06       JNC 0x25F5                       ; -> 0x25F5
    25EF: 90 7F ED    MOV DPTR,#0x7FED              
    25F2: 74 02       MOV A,#0x02                   
    25F4: F0          MOVX @DPTR,A                  
    25F5: 90 7F AC    MOV DPTR,#0x7FAC              
    25F8: E0          MOVX A,@DPTR                  
    25F9: FA          MOV R2,A                      
    25FA: 7B CA       MOV R3,#0xCA                  
    25FC: 90 7F AC    MOV DPTR,#0x7FAC              
    25FF: E0          MOVX A,@DPTR                  
    2600: F5 82       MOV DPL(0x82),A               
    2602: 75 83 CA    MOV DPH(0x83),#0xCA           
    2605: E0          MOVX A,@DPTR                  
    2606: FC          MOV R4,A                      
    2607: 53 04 E0    ANL 0x04,#0xE0                
    260A: 90 7F ED    MOV DPTR,#0x7FED              
    260D: E0          MOVX A,@DPTR                  
    260E: FD          MOV R5,A                      
    260F: 42 04       ORL 0x04,A                    
    2611: 8A 82       MOV 0x82,R2                   
    2613: 8B 83       MOV 0x83,R3                   
    2615: EC          MOV A,R4                      
    2616: F0          MOVX @DPTR,A                  
    2617: 80 3E       SJMP 0x2657                      ; -> 0x2657

loc_2619:
    2619: 90 7F AC    MOV DPTR,#0x7FAC              
    261C: E0          MOVX A,@DPTR                  
    261D: F5 82       MOV DPL(0x82),A               
    261F: 75 83 CA    MOV DPH(0x83),#0xCA           
    2622: E0          MOVX A,@DPTR                  
    2623: FA          MOV R2,A                      
    2624: 53 02 1F    ANL 0x02,#0x1F                
    2627: 74 04       MOV A,#0x04                   
    2629: B5 02 00    CJNE A,0x02,0x262C               ; -> 0x262C
    262C: 50 29       JNC 0x2657                       ; -> 0x2657
    262E: 75 50 20    MOV 0x50,#0x20                
    2631: 75 51 1C    MOV 0x51,#0x1C                
    2634: 75 82 00    MOV DPL(0x82),#0x00           
    2637: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    263A: 90 7F AC    MOV DPTR,#0x7FAC              
    263D: E0          MOVX A,@DPTR                  
    263E: FA          MOV R2,A                      
    263F: 7B CA       MOV R3,#0xCA                  
    2641: 90 7F AC    MOV DPTR,#0x7FAC              
    2644: E0          MOVX A,@DPTR                  
    2645: F5 82       MOV DPL(0x82),A               
    2647: 75 83 CA    MOV DPH(0x83),#0xCA           
    264A: E0          MOVX A,@DPTR                  
    264B: FC          MOV R4,A                      
    264C: 74 E0       MOV A,#0xE0                   
    264E: 5C          ANL A,R4                      
    264F: 44 04       ORL A,#0x04                   
    2651: FC          MOV R4,A                      
    2652: 8A 82       MOV 0x82,R2                   
    2654: 8B 83       MOV 0x83,R3                   
    2656: F0          MOVX @DPTR,A                  
    2657: 90 7F AD    MOV DPTR,#0x7FAD              
    265A: E0          MOVX A,@DPTR                  
    265B: FA          MOV R2,A                      
    265C: 70 26       JNZ 0x2684                       ; -> 0x2684
    265E: 75 50 20    MOV 0x50,#0x20                
    2661: 75 51 1C    MOV 0x51,#0x1C                
    2664: F5 82       MOV DPL(0x82),A               
    2666: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2669: 90 7F AC    MOV DPTR,#0x7FAC              
    266C: E0          MOVX A,@DPTR                  
    266D: FA          MOV R2,A                      
    266E: 7B CA       MOV R3,#0xCA                  
    2670: 90 7F AC    MOV DPTR,#0x7FAC              
    2673: E0          MOVX A,@DPTR                  
    2674: F5 82       MOV DPL(0x82),A               
    2676: 75 83 CA    MOV DPH(0x83),#0xCA           
    2679: E0          MOVX A,@DPTR                  
    267A: FC          MOV R4,A                      
    267B: 53 04 BF    ANL 0x04,#0xBF                
    267E: 8A 82       MOV 0x82,R2                   
    2680: 8B 83       MOV 0x83,R3                   
    2682: EC          MOV A,R4                      
    2683: F0          MOVX @DPTR,A                  
    2684: E5 08       MOV A,0x08                    
    2686: 30 E6 34    JNB ACC.6,0x26BD                 ; -> 0x26BD
    2689: 74 80       MOV A,#0x80                   
    268B: 55 08       ANL A,0x08                    
    268D: FA          MOV R2,A                      
    268E: 74 01       MOV A,#0x01                   
    2690: 55 09       ANL A,0x09                    
    2692: A2 E7       MOV C,ACC.7                   
    2694: CA          XCH A,R2                      
    2695: 33          RLC A                         
    2696: CA          XCH A,R2                      
    2697: 33          RLC A                         
    2698: CA          XCH A,R2                      
    2699: 54 01       ANL A,#0x01                   
    269B: 90 7F AC    MOV DPTR,#0x7FAC              
    269E: 74 83       MOV A,#0x83                   
    26A0: 2A          ADD A,R2                      
    26A1: F0          MOVX @DPTR,A                  
    26A2: 90 7F AC    MOV DPTR,#0x7FAC              
    26A5: E0          MOVX A,@DPTR                  
    26A6: FA          MOV R2,A                      
    26A7: 7B CA       MOV R3,#0xCA                  
    26A9: 90 7F AC    MOV DPTR,#0x7FAC              
    26AC: E0          MOVX A,@DPTR                  
    26AD: F5 82       MOV DPL(0x82),A               
    26AF: 75 83 CA    MOV DPH(0x83),#0xCA           
    26B2: E0          MOVX A,@DPTR                  
    26B3: FC          MOV R4,A                      
    26B4: 53 04 7F    ANL 0x04,#0x7F                
    26B7: 8A 82       MOV 0x82,R2                   
    26B9: 8B 83       MOV 0x83,R3                   
    26BB: EC          MOV A,R4                      
    26BC: F0          MOVX @DPTR,A                  
    26BD: 22          RET                           

sub_26BE:
    26BE: AA 82       MOV R2,0x82                   
    26C0: BA 01 2F    CJNE R2,#0x01,0x26F2             ; -> 0x26F2
    26C3: 90 7E AB    MOV DPTR,#0x7EAB              
    26C6: E4          CLR A                         
    26C7: F0          MOVX @DPTR,A                  
    26C8: E5 0A       MOV A,0x0A                    
    26CA: 60 04       JZ 0x26D0                        ; -> loc_26D0
    26CC: 7B 01       MOV R3,#0x01                  
    26CE: 80 02       SJMP 0x26D2                      ; -> 0x26D2

loc_26D0:
    26D0: 7B 00       MOV R3,#0x00                  
    26D2: 90 7E AB    MOV DPTR,#0x7EAB              
    26D5: E0          MOVX A,@DPTR                  
    26D6: FC          MOV R4,A                      
    26D7: 4B          ORL A,R3                      
    26D8: F0          MOVX @DPTR,A                  
    26D9: E5 0A       MOV A,0x0A                    
    26DB: 60 04       JZ 0x26E1                        ; -> loc_26E1
    26DD: 7B 66       MOV R3,#0x66                  
    26DF: 80 02       SJMP 0x26E3                      ; -> 0x26E3

loc_26E1:
    26E1: 7B 67       MOV R3,#0x67                  
    26E3: 75 50 01    MOV 0x50,#0x01                
    26E6: 8B 51       MOV 0x51,R3                   
    26E8: 75 82 00    MOV DPL(0x82),#0x00           
    26EB: C0 02       PUSH 0x02                     
    26ED: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    26F0: D0 02       POP 0x02                      
    26F2: E5 0B       MOV A,0x0B                    
    26F4: 45 0A       ORL A,0x0A                    
    26F6: 45 0C       ORL A,0x0C                    
    26F8: 90 CC 31    MOV DPTR,#0xCC31                 ; register block CC00
    26FB: F0          MOVX @DPTR,A                  
    26FC: 90 CC 32    MOV DPTR,#0xCC32                 ; register block CC00
    26FF: EA          MOV A,R2                      
    2700: F0          MOVX @DPTR,A                  
    2701: 90 CC 33    MOV DPTR,#0xCC33                 ; register block CC00
    2704: E5 0D       MOV A,0x0D                    
    2706: F0          MOVX @DPTR,A                  
    2707: 90 CC 30    MOV DPTR,#0xCC30                 ; register block CC00
    270A: 74 01       MOV A,#0x01                   
    270C: F0          MOVX @DPTR,A                  
    270D: 22          RET                           

sub_270E:
    270E: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    2711: 90 7F 84    MOV DPTR,#0x7F84              
    2714: E0          MOVX A,@DPTR                  
    2715: FA          MOV R2,A                      
    2716: 70 18       JNZ 0x2730                       ; -> 0x2730
    2718: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    271B: E0          MOVX A,@DPTR                  
    271C: FA          MOV R2,A                      
    271D: 54 0F       ANL A,#0x0F                   
    271F: 60 02       JZ 0x2723                        ; -> loc_2723
    2721: 80 0D       SJMP 0x2730                      ; -> 0x2730

loc_2723:
    2723: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2726: E0          MOVX A,@DPTR                  
    2727: FA          MOV R2,A                      
    2728: 53 02 DF    ANL 0x02,#0xDF                
    272B: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    272E: EA          MOV A,R2                      
    272F: F0          MOVX @DPTR,A                  
    2730: 90 7F A2    MOV DPTR,#0x7FA2              
    2733: E4          CLR A                         
    2734: F0          MOVX @DPTR,A                  
    2735: 90 CC 97    MOV DPTR,#0xCC97              
    2738: F0          MOVX @DPTR,A                  
    2739: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    273C: 74 80       MOV A,#0x80                   
    273E: F0          MOVX @DPTR,A                  
    273F: 90 7F 93    MOV DPTR,#0x7F93              
    2742: 74 E7       MOV A,#0xE7                   
    2744: F0          MOVX @DPTR,A                  
    2745: 90 7F 88    MOV DPTR,#0x7F88              
    2748: E0          MOVX A,@DPTR                  
    2749: 44 80       ORL A,#0x80                   
    274B: F0          MOVX @DPTR,A                  
    274C: 90 7F 8D    MOV DPTR,#0x7F8D              
    274F: E4          CLR A                         
    2750: F0          MOVX @DPTR,A                  
    2751: 90 7F F9    MOV DPTR,#0x7FF9              
    2754: F0          MOVX @DPTR,A                  
    2755: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    2758: F0          MOVX @DPTR,A                  
    2759: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    275C: F0          MOVX @DPTR,A                  
    275D: 90 7F 7D    MOV DPTR,#0x7F7D              
    2760: E0          MOVX A,@DPTR                  
    2761: FA          MOV R2,A                      
    2762: B4 01 00    CJNE A,#0x01,0x2765              ; -> 0x2765
    2765: E4          CLR A                         
    2766: 33          RLC A                         
    2767: FA          MOV R2,A                      
    2768: 60 04       JZ 0x276E                        ; -> loc_276E
    276A: 7A 00       MOV R2,#0x00                  
    276C: 80 10       SJMP 0x277E                      ; -> 0x277E

loc_276E:
    276E: 90 7F 7D    MOV DPTR,#0x7F7D              
    2771: E0          MOVX A,@DPTR                  
    2772: FB          MOV R3,A                      
    2773: BB 08 04    CJNE R3,#0x08,0x277A             ; -> loc_277A
    2776: 7B 01       MOV R3,#0x01                  
    2778: 80 02       SJMP 0x277C                      ; -> 0x277C

loc_277A:
    277A: 7B 02       MOV R3,#0x02                  
    277C: 8B 02       MOV 0x02,R3                   
    277E: 90 D8 02    MOV DPTR,#0xD802              
    2781: EA          MOV A,R2                      
    2782: F0          MOVX @DPTR,A                  
    2783: 75 82 00    MOV DPL(0x82),#0x00           
    2786: 12 0C FA    LCALL 0x0CFA                     ; -> sub_0CFA
    2789: 7A 00       MOV R2,#0x00                  
    278B: BA 04 00    CJNE R2,#0x04,0x278E             ; -> 0x278E
    278E: 50 47       JNC 0x27D7                       ; -> loc_27D7
    2790: EA          MOV A,R2                      
    2791: C4          SWAP A                        
    2792: 03          RR A                          
    2793: 54 F8       ANL A,#0xF8                   
    2795: 90 7F ED    MOV DPTR,#0x7FED              
    2798: F0          MOVX @DPTR,A                  
    2799: 90 7F ED    MOV DPTR,#0x7FED              
    279C: E0          MOVX A,@DPTR                  
    279D: FB          MOV R3,A                      
    279E: 7C 00       MOV R4,#0x00                  
    27A0: 74 06       MOV A,#0x06                   
    27A2: 2B          ADD A,R3                      
    27A3: FB          MOV R3,A                      
    27A4: E4          CLR A                         
    27A5: 3C          ADDC A,R4                     
    27A6: FC          MOV R4,A                      
    27A7: 8B 82       MOV 0x82,R3                   
    27A9: 74 CE       MOV A,#0xCE                   
    27AB: 2C          ADD A,R4                      
    27AC: F5 83       MOV DPH(0x83),A               
    27AE: E0          MOVX A,@DPTR                  
    27AF: FB          MOV R3,A                      
    27B0: 53 03 E7    ANL 0x03,#0xE7                
    27B3: 90 7F 7D    MOV DPTR,#0x7F7D              
    27B6: E0          MOVX A,@DPTR                  
    27B7: FC          MOV R4,A                      
    27B8: 74 80       MOV A,#0x80                   
    27BA: 4C          ORL A,R4                      
    27BB: 42 03       ORL 0x03,A                    
    27BD: 90 7F ED    MOV DPTR,#0x7FED              
    27C0: E0          MOVX A,@DPTR                  
    27C1: FC          MOV R4,A                      
    27C2: 7D 00       MOV R5,#0x00                  
    27C4: 74 06       MOV A,#0x06                   
    27C6: 2C          ADD A,R4                      
    27C7: FC          MOV R4,A                      
    27C8: E4          CLR A                         
    27C9: 3D          ADDC A,R5                     
    27CA: FD          MOV R5,A                      
    27CB: 8C 82       MOV 0x82,R4                   
    27CD: 74 CE       MOV A,#0xCE                   
    27CF: 2D          ADD A,R5                      
    27D0: F5 83       MOV DPH(0x83),A               
    27D2: EB          MOV A,R3                      
    27D3: F0          MOVX @DPTR,A                  
    27D4: 0A          INC R2                        
    27D5: 80 B4       SJMP 0x278B                      ; -> 0x278B

loc_27D7:
    27D7: 90 7F 84    MOV DPTR,#0x7F84              
    27DA: E0          MOVX A,@DPTR                  
    27DB: FA          MOV R2,A                      
    27DC: 70 2A       JNZ 0x2808                       ; -> loc_2808
    27DE: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    27E1: E0          MOVX A,@DPTR                  
    27E2: FA          MOV R2,A                      
    27E3: 30 E5 22    JNB ACC.5,0x2808                 ; -> loc_2808
    27E6: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    27E9: E0          MOVX A,@DPTR                  
    27EA: FA          MOV R2,A                      
    27EB: 53 02 DF    ANL 0x02,#0xDF                
    27EE: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    27F1: EA          MOV A,R2                      
    27F2: F0          MOVX @DPTR,A                  
    27F3: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    27F6: 74 01       MOV A,#0x01                   
    27F8: F0          MOVX @DPTR,A                  
    27F9: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    27FC: E0          MOVX A,@DPTR                  
    27FD: FA          MOV R2,A                      
    27FE: 43 02 20    ORL 0x02,#0x20                
    2801: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    2804: EA          MOV A,R2                      
    2805: F0          MOVX @DPTR,A                  
    2806: 80 06       SJMP 0x280E                      ; -> 0x280E

loc_2808:
    2808: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    280B: 74 01       MOV A,#0x01                   
    280D: F0          MOVX @DPTR,A                  
    280E: 90 D8 0B    MOV DPTR,#0xD80B              
    2811: E4          CLR A                         
    2812: F0          MOVX @DPTR,A                  
    2813: 90 D8 0A    MOV DPTR,#0xD80A              
    2816: F0          MOVX @DPTR,A                  
    2817: 90 D8 04    MOV DPTR,#0xD804              
    281A: F0          MOVX @DPTR,A                  
    281B: 7A 3C       MOV R2,#0x3C                  
    281D: DA FE       DJNZ R2,0x281D                   ; -> 0x281D
    281F: 22          RET                           

sub_2820:
    2820: E5 82       MOV A,DPL(0x82)               
    2822: FA          MOV R2,A                      
    2823: 70 19       JNZ 0x283E                       ; -> loc_283E
    2825: 90 7F 7E    MOV DPTR,#0x7F7E              
    2828: E0          MOVX A,@DPTR                  
    2829: FB          MOV R3,A                      
    282A: 8B F0       MOV 0xF0,R3                   
    282C: 05 F0       INC B(0xF0)                   
    282E: 74 01       MOV A,#0x01                   
    2830: 80 02       SJMP 0x2834                      ; -> 0x2834

loc_2832:
    2832: 25 E0       ADD A,ACC(0xE0)               
    2834: D5 F0 FB    DJNZ B(0xF0),0x2832              ; -> loc_2832
    2837: 14          DEC A                         
    2838: 90 7F ED    MOV DPTR,#0x7FED              
    283B: F0          MOVX @DPTR,A                  
    283C: 80 05       SJMP 0x2843                      ; -> 0x2843

loc_283E:
    283E: 90 7F ED    MOV DPTR,#0x7FED              
    2841: EA          MOV A,R2                      
    2842: F0          MOVX @DPTR,A                  
    2843: 90 7F ED    MOV DPTR,#0x7FED              
    2846: E0          MOVX A,@DPTR                  
    2847: FA          MOV R2,A                      
    2848: 53 02 0F    ANL 0x02,#0x0F                
    284B: 90 D8 04    MOV DPTR,#0xD804              
    284E: EA          MOV A,R2                      
    284F: F0          MOVX @DPTR,A                  
    2850: 90 7F ED    MOV DPTR,#0x7FED              
    2853: E0          MOVX A,@DPTR                  
    2854: FA          MOV R2,A                      
    2855: 53 02 0F    ANL 0x02,#0x0F                
    2858: 90 D8 15    MOV DPTR,#0xD815              
    285B: EA          MOV A,R2                      
    285C: F0          MOVX @DPTR,A                  
    285D: 90 7F ED    MOV DPTR,#0x7FED              
    2860: E0          MOVX A,@DPTR                  
    2861: FA          MOV R2,A                      
    2862: 53 02 0F    ANL 0x02,#0x0F                
    2865: 90 D8 0A    MOV DPTR,#0xD80A              
    2868: EA          MOV A,R2                      
    2869: F0          MOVX @DPTR,A                  
    286A: 90 7F ED    MOV DPTR,#0x7FED              
    286D: E0          MOVX A,@DPTR                  
    286E: FA          MOV R2,A                      
    286F: 53 02 0F    ANL 0x02,#0x0F                
    2872: 90 D8 0B    MOV DPTR,#0xD80B              
    2875: EA          MOV A,R2                      
    2876: F0          MOVX @DPTR,A                  
    2877: 22          RET                           

sub_2878:
    2878: AA 82       MOV R2,0x82                   
    287A: 75 16 00    MOV 0x16,#0x00                
    287D: 75 17 00    MOV 0x17,#0x00                
    2880: 75 1A 00    MOV 0x1A,#0x00                
    2883: 75 27 00    MOV 0x27,#0x00                
    2886: 75 28 08    MOV 0x28,#0x08                
    2889: 75 29 01    MOV 0x29,#0x01                
    288C: 75 2A 00    MOV 0x2A,#0x00                
    288F: 75 2B 07    MOV 0x2B,#0x07                
    2892: 75 2C 00    MOV 0x2C,#0x00                
    2895: 75 2D 04    MOV 0x2D,#0x04                
    2898: 75 2E 40    MOV 0x2E,#0x40                
    289B: 75 2F 44    MOV 0x2F,#0x44                
    289E: 90 7F FB    MOV DPTR,#0x7FFB              
    28A1: E4          CLR A                         
    28A2: F0          MOVX @DPTR,A                  
    28A3: BA 09 02    CJNE R2,#0x09,0x28A8             ; -> loc_28A8
    28A6: 80 03       SJMP 0x28AB                      ; -> loc_28AB

loc_28A8:
    28A8: 02 34 B1    LJMP 0x34B1                      ; -> loc_34B1

loc_28AB:
    28AB: 75 23 00    MOV 0x23,#0x00                
    28AE: 75 24 00    MOV 0x24,#0x00                
    28B1: 75 25 00    MOV 0x25,#0x00                
    28B4: 75 26 00    MOV 0x26,#0x00                
    28B7: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    28BA: E0          MOVX A,@DPTR                  
    28BB: FA          MOV R2,A                      
    28BC: BA 0F 03    CJNE R2,#0x0F,0x28C2             ; -> loc_28C2
    28BF: 02 34 6D    LJMP 0x346D                      ; -> loc_346D

loc_28C2:
    28C2: 74 0E       MOV A,#0x0E                   
    28C4: B5 10 04    CJNE A,0x10,0x28CB               ; -> loc_28CB
    28C7: 74 01       MOV A,#0x01                   
    28C9: 80 01       SJMP 0x28CC                      ; -> 0x28CC

loc_28CB:
    28CB: E4          CLR A                         
    28CC: F5 3A       MOV 0x3A,A                    
    28CE: 74 0F       MOV A,#0x0F                   
    28D0: B5 10 04    CJNE A,0x10,0x28D7               ; -> loc_28D7
    28D3: 74 01       MOV A,#0x01                   
    28D5: 80 01       SJMP 0x28D8                      ; -> 0x28D8

loc_28D7:
    28D7: E4          CLR A                         
    28D8: F5 36       MOV 0x36,A                    
    28DA: 85 11 34    MOV 0x34,0x11                 
    28DD: 85 12 35    MOV 0x35,0x12                 
    28E0: 75 14 00    MOV 0x14,#0x00                
    28E3: E5 14       MOV A,0x14                    
    28E5: B5 13 00    CJNE A,0x13,0x28E8               ; -> 0x28E8
    28E8: 40 03       JC 0x28ED                        ; -> loc_28ED
    28EA: 02 34 6D    LJMP 0x346D                      ; -> loc_346D

loc_28ED:
    28ED: 90 CA 40    MOV DPTR,#0xCA40                 ; register block CA00
    28F0: E0          MOVX A,@DPTR                  
    28F1: FF          MOV R7,A                      
    28F2: 30 E4 14    JNB ACC.4,0x2909                 ; -> 0x2909
    28F5: 12 41 F1    LCALL 0x41F1                     ; -> sub_41F1
    28F8: 90 CA 0E    MOV DPTR,#0xCA0E                 ; register block CA00
    28FB: 74 01       MOV A,#0x01                   
    28FD: F0          MOVX @DPTR,A                  
    28FE: 90 7F 78    MOV DPTR,#0x7F78              
    2901: E4          CLR A                         
    2902: F0          MOVX @DPTR,A                  
    2903: 90 7F 77    MOV DPTR,#0x7F77              
    2906: 74 01       MOV A,#0x01                   
    2908: F0          MOVX @DPTR,A                  
    2909: 75 0E 01    MOV 0x0E,#0x01                
    290C: E4          CLR A                         
    290D: F5 18       MOV 0x18,A                    
    290F: F5 15       MOV 0x15,A                    
    2911: E5 10       MOV A,0x10                    
    2913: 60 03       JZ 0x2918                        ; -> loc_2918
    2915: 02 32 93    LJMP 0x3293                      ; -> loc_3293

loc_2918:
    2918: E4          CLR A                         
    2919: B5 34 02    CJNE A,0x34,0x291E               ; -> loc_291E
    291C: 80 42       SJMP 0x2960                      ; -> loc_2960

loc_291E:
    291E: 74 01       MOV A,#0x01                   
    2920: B5 34 03    CJNE A,0x34,0x2926               ; -> loc_2926
    2923: 02 2B 5E    LJMP 0x2B5E                      ; -> loc_2B5E

loc_2926:
    2926: 74 02       MOV A,#0x02                   
    2928: B5 34 03    CJNE A,0x34,0x292E               ; -> loc_292E
    292B: 02 2C C0    LJMP 0x2CC0                      ; -> loc_2CC0

loc_292E:
    292E: 74 03       MOV A,#0x03                   
    2930: B5 34 03    CJNE A,0x34,0x2936               ; -> loc_2936
    2933: 02 32 8D    LJMP 0x328D                      ; -> loc_328D

loc_2936:
    2936: 74 04       MOV A,#0x04                   
    2938: B5 34 03    CJNE A,0x34,0x293E               ; -> loc_293E
    293B: 02 32 8D    LJMP 0x328D                      ; -> loc_328D

loc_293E:
    293E: 74 05       MOV A,#0x05                   
    2940: B5 34 03    CJNE A,0x34,0x2946               ; -> loc_2946
    2943: 02 31 DD    LJMP 0x31DD                      ; -> loc_31DD

loc_2946:
    2946: 74 06       MOV A,#0x06                   
    2948: B5 34 03    CJNE A,0x34,0x294E               ; -> loc_294E
    294B: 02 31 F1    LJMP 0x31F1                      ; -> loc_31F1

loc_294E:
    294E: 74 20       MOV A,#0x20                   
    2950: B5 34 03    CJNE A,0x34,0x2956               ; -> loc_2956
    2953: 02 32 2C    LJMP 0x322C                      ; -> loc_322C

loc_2956:
    2956: 74 22       MOV A,#0x22                   
    2958: B5 34 02    CJNE A,0x34,0x295D               ; -> loc_295D
    295B: 80 03       SJMP 0x2960                      ; -> loc_2960

loc_295D:
    295D: 02 32 8D    LJMP 0x328D                      ; -> loc_328D

loc_2960:
    2960: 74 22       MOV A,#0x22                   
    2962: B5 34 1C    CJNE A,0x34,0x2981               ; -> loc_2981
    2965: 90 00 AB    MOV DPTR,#0x00AB              
    2968: E4          CLR A                         
    2969: 93          MOVC A,@A+DPTR                
    296A: FF          MOV R7,A                      
    296B: 20 E7 0D    JB ACC.7,0x297B                  ; -> 0x297B
    296E: E5 35       MOV A,0x35                    
    2970: 70 0F       JNZ 0x2981                       ; -> loc_2981
    2972: 90 00 A8    MOV DPTR,#0x00A8              
    2975: E4          CLR A                         
    2976: 93          MOVC A,@A+DPTR                
    2977: FF          MOV R7,A                      
    2978: 30 E7 06    JNB ACC.7,0x2981                 ; -> loc_2981
    297B: 75 0E 00    MOV 0x0E,#0x00                
    297E: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2981:
    2981: E5 35       MOV A,0x35                    
    2983: 70 14       JNZ 0x2999                       ; -> loc_2999
    2985: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    2988: E0          MOVX A,@DPTR                  
    2989: 54 F0       ANL A,#0xF0                   
    298B: C4          SWAP A                        
    298C: 54 0F       ANL A,#0x0F                   
    298E: F5 82       MOV DPL(0x82),A               
    2990: 12 22 FA    LCALL 0x22FA                     ; -> sub_22FA
    2993: 85 82 15    MOV 0x15,DPL(0x82)            
    2996: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2999:
    2999: 74 01       MOV A,#0x01                   
    299B: B5 35 35    CJNE A,0x35,0x29D3               ; -> loc_29D3
    299E: 90 C8 0B    MOV DPTR,#0xC80B                 ; control + status register block
    29A1: E0          MOVX A,@DPTR                  
    29A2: FF          MOV R7,A                      
    29A3: 54 1F       ANL A,#0x1F                   
    29A5: 70 23       JNZ 0x29CA                       ; -> loc_29CA
    29A7: 90 7F 7F    MOV DPTR,#0x7F7F              
    29AA: E0          MOVX A,@DPTR                  
    29AB: FF          MOV R7,A                      
    29AC: BF 10 04    CJNE R7,#0x10,0x29B3             ; -> loc_29B3
    29AF: 7F 14       MOV R7,#0x14                  
    29B1: 80 12       SJMP 0x29C5                      ; -> 0x29C5

loc_29B3:
    29B3: 90 7F 7F    MOV DPTR,#0x7F7F              
    29B6: E0          MOVX A,@DPTR                  
    29B7: FA          MOV R2,A                      
    29B8: BA 08 05    CJNE R2,#0x08,0x29C0             ; -> loc_29C0
    29BB: 75 37 0A    MOV 0x37,#0x0A                
    29BE: 80 03       SJMP 0x29C3                      ; -> 0x29C3

loc_29C0:
    29C0: 75 37 06    MOV 0x37,#0x06                
    29C3: AF 37       MOV R7,0x37                   
    29C5: 8F 15       MOV 0x15,R7                   
    29C7: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_29CA:
    29CA: 90 C8 0B    MOV DPTR,#0xC80B                 ; control + status register block
    29CD: E0          MOVX A,@DPTR                  
    29CE: F5 15       MOV 0x15,A                    
    29D0: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_29D3:
    29D3: 74 02       MOV A,#0x02                   
    29D5: B5 35 02    CJNE A,0x35,0x29DA               ; -> loc_29DA
    29D8: 80 03       SJMP 0x29DD                      ; -> loc_29DD

loc_29DA:
    29DA: 02 2A 5D    LJMP 0x2A5D                      ; -> loc_2A5D

loc_29DD:
    29DD: 90 D2 5D    MOV DPTR,#0xD25D              
    29E0: E0          MOVX A,@DPTR                  
    29E1: 54 70       ANL A,#0x70                   
    29E3: C4          SWAP A                        
    29E4: 54 0F       ANL A,#0x0F                   
    29E6: FF          MOV R7,A                      
    29E7: 8F F0       MOV 0xF0,R7                   
    29E9: 05 F0       INC B(0xF0)                   
    29EB: 74 01       MOV A,#0x01                   
    29ED: 80 02       SJMP 0x29F1                      ; -> 0x29F1

loc_29EF:
    29EF: 25 E0       ADD A,ACC(0xE0)               
    29F1: D5 F0 FB    DJNZ B(0xF0),0x29EF              ; -> loc_29EF
    29F4: F5 15       MOV 0x15,A                    
    29F6: 90 D2 5E    MOV DPTR,#0xD25E              
    29F9: E0          MOVX A,@DPTR                  
    29FA: FF          MOV R7,A                      
    29FB: 74 C0       MOV A,#0xC0                   
    29FD: 5F          ANL A,R7                      
    29FE: 42 15       ORL 0x15,A                    
    2A00: 90 00 AB    MOV DPTR,#0x00AB              
    2A03: E4          CLR A                         
    2A04: 93          MOVC A,@A+DPTR                
    2A05: FF          MOV R7,A                      
    2A06: 54 18       ANL A,#0x18                   
    2A08: 60 1F       JZ 0x2A29                        ; -> loc_2A29
    2A0A: 90 00 AB    MOV DPTR,#0x00AB              
    2A0D: E4          CLR A                         
    2A0E: 93          MOVC A,@A+DPTR                
    2A0F: FF          MOV R7,A                      
    2A10: 30 E3 0B    JNB ACC.3,0x2A1E                 ; -> loc_2A1E
    2A13: 74 E0       MOV A,#0xE0                   
    2A15: 55 15       ANL A,0x15                    
    2A17: 44 02       ORL A,#0x02                   
    2A19: F5 15       MOV 0x15,A                    
    2A1B: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2A1E:
    2A1E: 74 E0       MOV A,#0xE0                   
    2A20: 55 15       ANL A,0x15                    
    2A22: 44 01       ORL A,#0x01                   
    2A24: F5 15       MOV 0x15,A                    
    2A26: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2A29:
    2A29: 90 7F E7    MOV DPTR,#0x7FE7              
    2A2C: E0          MOVX A,@DPTR                  
    2A2D: FF          MOV R7,A                      
    2A2E: 70 03       JNZ 0x2A33                       ; -> loc_2A33
    2A30: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2A33:
    2A33: 90 7F ED    MOV DPTR,#0x7FED              
    2A36: 74 1F       MOV A,#0x1F                   
    2A38: 55 15       ANL A,0x15                    
    2A3A: F0          MOVX @DPTR,A                  
    2A3B: 90 7F ED    MOV DPTR,#0x7FED              
    2A3E: E0          MOVX A,@DPTR                  
    2A3F: FF          MOV R7,A                      
    2A40: 74 02       MOV A,#0x02                   
    2A42: B5 07 00    CJNE A,0x07,0x2A45               ; -> 0x2A45
    2A45: 50 06       JNC 0x2A4D                       ; -> 0x2A4D
    2A47: 90 7F ED    MOV DPTR,#0x7FED              
    2A4A: 74 02       MOV A,#0x02                   
    2A4C: F0          MOVX @DPTR,A                  
    2A4D: 74 E0       MOV A,#0xE0                   
    2A4F: 55 15       ANL A,0x15                    
    2A51: FF          MOV R7,A                      
    2A52: 90 7F ED    MOV DPTR,#0x7FED              
    2A55: E0          MOVX A,@DPTR                  
    2A56: FA          MOV R2,A                      
    2A57: 4F          ORL A,R7                      
    2A58: F5 15       MOV 0x15,A                    
    2A5A: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2A5D:
    2A5D: 74 03       MOV A,#0x03                   
    2A5F: B5 35 06    CJNE A,0x35,0x2A68               ; -> loc_2A68
    2A62: 75 15 00    MOV 0x15,#0x00                
    2A65: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2A68:
    2A68: 74 0E       MOV A,#0x0E                   
    2A6A: B5 35 73    CJNE A,0x35,0x2AE0               ; -> loc_2AE0
    2A6D: 90 00 A8    MOV DPTR,#0x00A8              
    2A70: E4          CLR A                         
    2A71: 93          MOVC A,@A+DPTR                
    2A72: FF          MOV R7,A                      
    2A73: 30 E6 16    JNB ACC.6,0x2A8C                 ; -> loc_2A8C
    2A76: 75 82 01    MOV DPL(0x82),#0x01           
    2A79: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2A7C: 90 7E A9    MOV DPTR,#0x7EA9              
    2A7F: E5 14       MOV A,0x14                    
    2A81: F0          MOVX @DPTR,A                  
    2A82: 90 7F EE    MOV DPTR,#0x7FEE              
    2A85: E0          MOVX A,@DPTR                  
    2A86: FF          MOV R7,A                      
    2A87: 44 04       ORL A,#0x04                   
    2A89: F0          MOVX @DPTR,A                  
    2A8A: 80 44       SJMP 0x2AD0                      ; -> 0x2AD0

loc_2A8C:
    2A8C: 90 00 A8    MOV DPTR,#0x00A8              
    2A8F: E4          CLR A                         
    2A90: 93          MOVC A,@A+DPTR                
    2A91: FF          MOV R7,A                      
    2A92: 30 E0 04    JNB ACC.0,0x2A99                 ; -> loc_2A99
    2A95: 7F 01       MOV R7,#0x01                  
    2A97: 80 35       SJMP 0x2ACE                      ; -> 0x2ACE

loc_2A99:
    2A99: 90 00 A8    MOV DPTR,#0x00A8              
    2A9C: E4          CLR A                         
    2A9D: 93          MOVC A,@A+DPTR                
    2A9E: FA          MOV R2,A                      
    2A9F: 30 E1 05    JNB ACC.1,0x2AA7                 ; -> loc_2AA7
    2AA2: 75 37 02    MOV 0x37,#0x02                
    2AA5: 80 25       SJMP 0x2ACC                      ; -> 0x2ACC

loc_2AA7:
    2AA7: 90 00 A8    MOV DPTR,#0x00A8              
    2AAA: E4          CLR A                         
    2AAB: 93          MOVC A,@A+DPTR                
    2AAC: FA          MOV R2,A                      
    2AAD: 30 E2 05    JNB ACC.2,0x2AB5                 ; -> loc_2AB5
    2AB0: 75 38 03    MOV 0x38,#0x03                
    2AB3: 80 14       SJMP 0x2AC9                      ; -> 0x2AC9

loc_2AB5:
    2AB5: 90 00 A8    MOV DPTR,#0x00A8              
    2AB8: E4          CLR A                         
    2AB9: 93          MOVC A,@A+DPTR                
    2ABA: FA          MOV R2,A                      
    2ABB: 30 E3 05    JNB ACC.3,0x2AC3                 ; -> loc_2AC3
    2ABE: 75 39 04    MOV 0x39,#0x04                
    2AC1: 80 03       SJMP 0x2AC6                      ; -> 0x2AC6

loc_2AC3:
    2AC3: 75 39 00    MOV 0x39,#0x00                
    2AC6: 85 39 38    MOV 0x38,0x39                 
    2AC9: 85 38 37    MOV 0x37,0x38                 
    2ACC: AF 37       MOV R7,0x37                   
    2ACE: 8F 15       MOV 0x15,R7                   
    2AD0: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    2AD3: E0          MOVX A,@DPTR                  
    2AD4: FF          MOV R7,A                      
    2AD5: 43 07 02    ORL 0x07,#0x02                
    2AD8: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    2ADB: EF          MOV A,R7                      
    2ADC: F0          MOVX @DPTR,A                  
    2ADD: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2AE0:
    2AE0: 74 57       MOV A,#0x57                   
    2AE2: B5 35 2A    CJNE A,0x35,0x2B0F               ; -> loc_2B0F
    2AE5: 75 50 20    MOV 0x50,#0x20                
    2AE8: 75 51 31    MOV 0x51,#0x31                
    2AEB: 75 82 00    MOV DPL(0x82),#0x00           
    2AEE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2AF1: 90 CA D0    MOV DPTR,#0xCAD0              
    2AF4: 74 01       MOV A,#0x01                   
    2AF6: F0          MOVX @DPTR,A                  
    2AF7: 75 82 01    MOV DPL(0x82),#0x01           
    2AFA: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2AFD: 90 7F 7A    MOV DPTR,#0x7F7A              
    2B00: 74 01       MOV A,#0x01                   
    2B02: F0          MOVX @DPTR,A                  
    2B03: 75 15 00    MOV 0x15,#0x00                
    2B06: 75 18 1E    MOV 0x18,#0x1E                
    2B09: D5 18 FD    DJNZ 0x18,0x2B09                 ; -> 0x2B09
    2B0C: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2B0F:
    2B0F: 74 20       MOV A,#0x20                   
    2B11: B5 35 17    CJNE A,0x35,0x2B2B               ; -> loc_2B2B
    2B14: 75 82 01    MOV DPL(0x82),#0x01           
    2B17: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2B1A: 90 7F EF    MOV DPTR,#0x7FEF              
    2B1D: E5 14       MOV A,0x14                    
    2B1F: F0          MOVX @DPTR,A                  
    2B20: 90 7F EE    MOV DPTR,#0x7FEE              
    2B23: E0          MOVX A,@DPTR                  
    2B24: FF          MOV R7,A                      
    2B25: 44 01       ORL A,#0x01                   
    2B27: F0          MOVX @DPTR,A                  
    2B28: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2B2B:
    2B2B: 74 21       MOV A,#0x21                   
    2B2D: B5 35 28    CJNE A,0x35,0x2B58               ; -> loc_2B58
    2B30: 90 7F 79    MOV DPTR,#0x7F79              
    2B33: E0          MOVX A,@DPTR                  
    2B34: FF          MOV R7,A                      
    2B35: 70 06       JNZ 0x2B3D                       ; -> 0x2B3D
    2B37: 75 82 01    MOV DPL(0x82),#0x01           
    2B3A: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2B3D: 90 7F 84    MOV DPTR,#0x7F84              
    2B40: E0          MOVX A,@DPTR                  
    2B41: FF          MOV R7,A                      
    2B42: 60 03       JZ 0x2B47                        ; -> loc_2B47
    2B44: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2B47:
    2B47: 90 7F EE    MOV DPTR,#0x7FEE              
    2B4A: E0          MOVX A,@DPTR                  
    2B4B: FF          MOV R7,A                      
    2B4C: 44 02       ORL A,#0x02                   
    2B4E: F0          MOVX @DPTR,A                  
    2B4F: 90 7F F0    MOV DPTR,#0x7FF0              
    2B52: E5 14       MOV A,0x14                    
    2B54: F0          MOVX @DPTR,A                  
    2B55: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2B58:
    2B58: 75 0E 00    MOV 0x0E,#0x00                
    2B5B: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2B5E:
    2B5E: E4          CLR A                         
    2B5F: B5 35 03    CJNE A,0x35,0x2B65               ; -> loc_2B65
    2B62: 02 2B E8    LJMP 0x2BE8                      ; -> loc_2BE8

loc_2B65:
    2B65: 74 01       MOV A,#0x01                   
    2B67: B5 35 03    CJNE A,0x35,0x2B6D               ; -> loc_2B6D
    2B6A: 02 2C 0B    LJMP 0x2C0B                      ; -> loc_2C0B

loc_2B6D:
    2B6D: 74 02       MOV A,#0x02                   
    2B6F: B5 35 03    CJNE A,0x35,0x2B75               ; -> loc_2B75
    2B72: 02 2C 21    LJMP 0x2C21                      ; -> loc_2C21

loc_2B75:
    2B75: 74 03       MOV A,#0x03                   
    2B77: B5 35 03    CJNE A,0x35,0x2B7D               ; -> loc_2B7D
    2B7A: 02 2C 31    LJMP 0x2C31                      ; -> 0x2C31

loc_2B7D:
    2B7D: 74 04       MOV A,#0x04                   
    2B7F: B5 35 03    CJNE A,0x35,0x2B85               ; -> loc_2B85
    2B82: 02 2C 2F    LJMP 0x2C2F                      ; -> 0x2C2F

loc_2B85:
    2B85: 74 05       MOV A,#0x05                   
    2B87: B5 35 03    CJNE A,0x35,0x2B8D               ; -> loc_2B8D
    2B8A: 02 2C 2D    LJMP 0x2C2D                      ; -> 0x2C2D

loc_2B8D:
    2B8D: 74 06       MOV A,#0x06                   
    2B8F: B5 35 03    CJNE A,0x35,0x2B95               ; -> loc_2B95
    2B92: 02 2C 2A    LJMP 0x2C2A                      ; -> loc_2C2A

loc_2B95:
    2B95: 74 07       MOV A,#0x07                   
    2B97: B5 35 03    CJNE A,0x35,0x2B9D               ; -> loc_2B9D
    2B9A: 02 2C 42    LJMP 0x2C42                      ; -> loc_2C42

loc_2B9D:
    2B9D: 74 08       MOV A,#0x08                   
    2B9F: B5 35 03    CJNE A,0x35,0x2BA5               ; -> loc_2BA5
    2BA2: 02 2C 87    LJMP 0x2C87                      ; -> loc_2C87

loc_2BA5:
    2BA5: 74 0B       MOV A,#0x0B                   
    2BA7: B5 35 03    CJNE A,0x35,0x2BAD               ; -> loc_2BAD
    2BAA: 02 2C 4B    LJMP 0x2C4B                      ; -> loc_2C4B

loc_2BAD:
    2BAD: 74 0C       MOV A,#0x0C                   
    2BAF: B5 35 03    CJNE A,0x35,0x2BB5               ; -> loc_2BB5
    2BB2: 02 2C 4B    LJMP 0x2C4B                      ; -> loc_2C4B

loc_2BB5:
    2BB5: 74 0D       MOV A,#0x0D                   
    2BB7: B5 35 03    CJNE A,0x35,0x2BBD               ; -> loc_2BBD
    2BBA: 02 2C 4B    LJMP 0x2C4B                      ; -> loc_2C4B

loc_2BBD:
    2BBD: 74 0E       MOV A,#0x0E                   
    2BBF: B5 35 03    CJNE A,0x35,0x2BC5               ; -> loc_2BC5
    2BC2: 02 2C 4B    LJMP 0x2C4B                      ; -> loc_2C4B

loc_2BC5:
    2BC5: 74 0F       MOV A,#0x0F                   
    2BC7: B5 35 03    CJNE A,0x35,0x2BCD               ; -> loc_2BCD
    2BCA: 02 2C 60    LJMP 0x2C60                      ; -> loc_2C60

loc_2BCD:
    2BCD: 74 10       MOV A,#0x10                   
    2BCF: B5 35 03    CJNE A,0x35,0x2BD5               ; -> loc_2BD5
    2BD2: 02 2C 60    LJMP 0x2C60                      ; -> loc_2C60

loc_2BD5:
    2BD5: 74 11       MOV A,#0x11                   
    2BD7: B5 35 03    CJNE A,0x35,0x2BDD               ; -> loc_2BDD
    2BDA: 02 2C 72    LJMP 0x2C72                      ; -> loc_2C72

loc_2BDD:
    2BDD: 74 57       MOV A,#0x57                   
    2BDF: B5 35 03    CJNE A,0x35,0x2BE5               ; -> loc_2BE5
    2BE2: 02 2C 90    LJMP 0x2C90                      ; -> loc_2C90

loc_2BE5:
    2BE5: 02 2C BA    LJMP 0x2CBA                      ; -> loc_2CBA

loc_2BE8:
    2BE8: 90 7F 7D    MOV DPTR,#0x7F7D              
    2BEB: E0          MOVX A,@DPTR                  
    2BEC: FF          MOV R7,A                      
    2BED: BF 10 04    CJNE R7,#0x10,0x2BF4             ; -> loc_2BF4
    2BF0: 7F 14       MOV R7,#0x14                  
    2BF2: 80 12       SJMP 0x2C06                      ; -> 0x2C06

loc_2BF4:
    2BF4: 90 7F 7D    MOV DPTR,#0x7F7D              
    2BF7: E0          MOVX A,@DPTR                  
    2BF8: FA          MOV R2,A                      
    2BF9: BA 08 05    CJNE R2,#0x08,0x2C01             ; -> loc_2C01
    2BFC: 75 39 0A    MOV 0x39,#0x0A                
    2BFF: 80 03       SJMP 0x2C04                      ; -> 0x2C04

loc_2C01:
    2C01: 75 39 06    MOV 0x39,#0x06                
    2C04: AF 39       MOV R7,0x39                   
    2C06: 8F 15       MOV 0x15,R7                   
    2C08: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C0B:
    2C0B: 90 7F 7C    MOV DPTR,#0x7F7C              
    2C0E: E0          MOVX A,@DPTR                  
    2C0F: 54 20       ANL A,#0x20                   
    2C11: 25 E0       ADD A,ACC(0xE0)               
    2C13: 25 E0       ADD A,ACC(0xE0)               
    2C15: FF          MOV R7,A                      
    2C16: 90 7F 7E    MOV DPTR,#0x7F7E              
    2C19: E0          MOVX A,@DPTR                  
    2C1A: FA          MOV R2,A                      
    2C1B: 4F          ORL A,R7                      
    2C1C: F5 15       MOV 0x15,A                    
    2C1E: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C21:
    2C21: 90 7F 86    MOV DPTR,#0x7F86              
    2C24: E0          MOVX A,@DPTR                  
    2C25: F5 15       MOV 0x15,A                    
    2C27: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C2A:
    2C2A: 75 18 01    MOV 0x18,#0x01                
    2C2D: 05 18       INC 0x18                      
    2C2F: 05 18       INC 0x18                      
    2C31: E5 18       MOV A,0x18                    
    2C33: 24 80       ADD A,#0x80                   
    2C35: F5 82       MOV DPL(0x82),A               
    2C37: E4          CLR A                         
    2C38: 34 7F       ADDC A,#0x7F                  
    2C3A: F5 83       MOV DPH(0x83),A               
    2C3C: E0          MOVX A,@DPTR                  
    2C3D: F5 15       MOV 0x15,A                    
    2C3F: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C42:
    2C42: 90 7F 8A    MOV DPTR,#0x7F8A              
    2C45: E0          MOVX A,@DPTR                  
    2C46: F5 15       MOV 0x15,A                    
    2C48: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C4B:
    2C4B: 75 50 20    MOV 0x50,#0x20                
    2C4E: 75 51 3A    MOV 0x51,#0x3A                
    2C51: 75 82 00    MOV DPL(0x82),#0x00           
    2C54: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2C57: 75 82 01    MOV DPL(0x82),#0x01           
    2C5A: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2C5D: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C60:
    2C60: 75 50 20    MOV 0x50,#0x20                
    2C63: 75 51 3B    MOV 0x51,#0x3B                
    2C66: 75 82 00    MOV DPL(0x82),#0x00           
    2C69: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2C6C: 75 15 00    MOV 0x15,#0x00                
    2C6F: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C72:
    2C72: 75 50 20    MOV 0x50,#0x20                
    2C75: 75 51 34    MOV 0x51,#0x34                
    2C78: 75 82 00    MOV DPL(0x82),#0x00           
    2C7B: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2C7E: 75 82 01    MOV DPL(0x82),#0x01           
    2C81: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2C84: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C87:
    2C87: 90 7F 99    MOV DPTR,#0x7F99              
    2C8A: E0          MOVX A,@DPTR                  
    2C8B: F5 15       MOV 0x15,A                    
    2C8D: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2C90:
    2C90: 75 50 20    MOV 0x50,#0x20                
    2C93: 75 51 31    MOV 0x51,#0x31                
    2C96: 75 82 00    MOV DPL(0x82),#0x00           
    2C99: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2C9C: 90 CA D0    MOV DPTR,#0xCAD0              
    2C9F: 74 01       MOV A,#0x01                   
    2CA1: F0          MOVX @DPTR,A                  
    2CA2: 75 82 01    MOV DPL(0x82),#0x01           
    2CA5: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    2CA8: 90 7F 7A    MOV DPTR,#0x7F7A              
    2CAB: 74 01       MOV A,#0x01                   
    2CAD: F0          MOVX @DPTR,A                  
    2CAE: 75 15 00    MOV 0x15,#0x00                
    2CB1: 75 18 1E    MOV 0x18,#0x1E                
    2CB4: D5 18 FD    DJNZ 0x18,0x2CB4                 ; -> 0x2CB4
    2CB7: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2CBA:
    2CBA: 75 0E 00    MOV 0x0E,#0x00                
    2CBD: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2CC0:
    2CC0: 74 02       MOV A,#0x02                   
    2CC2: B5 35 03    CJNE A,0x35,0x2CC8               ; -> loc_2CC8
    2CC5: 02 2D 6B    LJMP 0x2D6B                      ; -> loc_2D6B

loc_2CC8:
    2CC8: 74 03       MOV A,#0x03                   
    2CCA: B5 35 03    CJNE A,0x35,0x2CD0               ; -> loc_2CD0
    2CCD: 02 2D 5B    LJMP 0x2D5B                      ; -> loc_2D5B

loc_2CD0:
    2CD0: 74 04       MOV A,#0x04                   
    2CD2: B5 35 03    CJNE A,0x35,0x2CD8               ; -> loc_2CD8
    2CD5: 02 2F 3F    LJMP 0x2F3F                      ; -> loc_2F3F

loc_2CD8:
    2CD8: 74 05       MOV A,#0x05                   
    2CDA: B5 35 03    CJNE A,0x35,0x2CE0               ; -> loc_2CE0
    2CDD: 02 30 95    LJMP 0x3095                      ; -> loc_3095

loc_2CE0:
    2CE0: 74 06       MOV A,#0x06                   
    2CE2: B5 35 03    CJNE A,0x35,0x2CE8               ; -> loc_2CE8
    2CE5: 02 30 07    LJMP 0x3007                      ; -> 0x3007

loc_2CE8:
    2CE8: 74 07       MOV A,#0x07                   
    2CEA: B5 35 03    CJNE A,0x35,0x2CF0               ; -> loc_2CF0
    2CED: 02 30 04    LJMP 0x3004                      ; -> loc_3004

loc_2CF0:
    2CF0: 74 0C       MOV A,#0x0C                   
    2CF2: B5 35 03    CJNE A,0x35,0x2CF8               ; -> loc_2CF8
    2CF5: 02 30 83    LJMP 0x3083                      ; -> loc_3083

loc_2CF8:
    2CF8: 74 4A       MOV A,#0x4A                   
    2CFA: B5 35 03    CJNE A,0x35,0x2D00               ; -> loc_2D00
    2CFD: 02 31 51    LJMP 0x3151                      ; -> loc_3151

loc_2D00:
    2D00: 74 4B       MOV A,#0x4B                   
    2D02: B5 35 03    CJNE A,0x35,0x2D08               ; -> loc_2D08
    2D05: 02 31 51    LJMP 0x3151                      ; -> loc_3151

loc_2D08:
    2D08: 74 50       MOV A,#0x50                   
    2D0A: B5 35 03    CJNE A,0x35,0x2D10               ; -> loc_2D10
    2D0D: 02 31 91    LJMP 0x3191                      ; -> loc_3191

loc_2D10:
    2D10: 74 51       MOV A,#0x51                   
    2D12: B5 35 03    CJNE A,0x35,0x2D18               ; -> loc_2D18
    2D15: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D18:
    2D18: 74 52       MOV A,#0x52                   
    2D1A: B5 35 03    CJNE A,0x35,0x2D20               ; -> loc_2D20
    2D1D: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D20:
    2D20: 74 53       MOV A,#0x53                   
    2D22: B5 35 03    CJNE A,0x35,0x2D28               ; -> loc_2D28
    2D25: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D28:
    2D28: 74 54       MOV A,#0x54                   
    2D2A: B5 35 03    CJNE A,0x35,0x2D30               ; -> loc_2D30
    2D2D: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D30:
    2D30: 74 55       MOV A,#0x55                   
    2D32: B5 35 03    CJNE A,0x35,0x2D38               ; -> loc_2D38
    2D35: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D38:
    2D38: 74 56       MOV A,#0x56                   
    2D3A: B5 35 03    CJNE A,0x35,0x2D40               ; -> loc_2D40
    2D3D: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D40:
    2D40: 74 57       MOV A,#0x57                   
    2D42: B5 35 03    CJNE A,0x35,0x2D48               ; -> loc_2D48
    2D45: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D48:
    2D48: 74 58       MOV A,#0x58                   
    2D4A: B5 35 03    CJNE A,0x35,0x2D50               ; -> loc_2D50
    2D4D: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D50:
    2D50: 74 59       MOV A,#0x59                   
    2D52: B5 35 03    CJNE A,0x35,0x2D58               ; -> loc_2D58
    2D55: 02 31 9D    LJMP 0x319D                      ; -> 0x319D

loc_2D58:
    2D58: 02 30 95    LJMP 0x3095                      ; -> loc_3095

loc_2D5B:
    2D5B: 75 18 02    MOV 0x18,#0x02                
    2D5E: 90 7F 7E    MOV DPTR,#0x7F7E              
    2D61: E0          MOVX A,@DPTR                  
    2D62: FF          MOV R7,A                      
    2D63: BF 04 00    CJNE R7,#0x04,0x2D66             ; -> 0x2D66
    2D66: 50 03       JNC 0x2D6B                       ; -> loc_2D6B
    2D68: 02 2F 07    LJMP 0x2F07                      ; -> 0x2F07

loc_2D6B:
    2D6B: 75 50 04    MOV 0x50,#0x04                
    2D6E: 75 51 16    MOV 0x51,#0x16                
    2D71: 75 82 00    MOV DPL(0x82),#0x00           
    2D74: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2D77: 90 7F A8    MOV DPTR,#0x7FA8              
    2D7A: E4          CLR A                         
    2D7B: F0          MOVX @DPTR,A                  
    2D7C: 90 7F AA    MOV DPTR,#0x7FAA              
    2D7F: E0          MOVX A,@DPTR                  
    2D80: FF          MOV R7,A                      
    2D81: BF 04 00    CJNE R7,#0x04,0x2D84             ; -> 0x2D84
    2D84: E4          CLR A                         
    2D85: 33          RLC A                         
    2D86: FF          MOV R7,A                      
    2D87: 90 7F AB    MOV DPTR,#0x7FAB              
    2D8A: E0          MOVX A,@DPTR                  
    2D8B: FA          MOV R2,A                      
    2D8C: 90 7F A9    MOV DPTR,#0x7FA9              
    2D8F: EF          MOV A,R7                      
    2D90: 5A          ANL A,R2                      
    2D91: F0          MOVX @DPTR,A                  
    2D92: 90 7F B5    MOV DPTR,#0x7FB5              
    2D95: E0          MOVX A,@DPTR                  
    2D96: FA          MOV R2,A                      
    2D97: 70 0E       JNZ 0x2DA7                       ; -> 0x2DA7
    2D99: 90 7F B4    MOV DPTR,#0x7FB4              
    2D9C: E0          MOVX A,@DPTR                  
    2D9D: FF          MOV R7,A                      
    2D9E: 70 07       JNZ 0x2DA7                       ; -> 0x2DA7
    2DA0: 90 7F A9    MOV DPTR,#0x7FA9              
    2DA3: E0          MOVX A,@DPTR                  
    2DA4: FF          MOV R7,A                      
    2DA5: 60 1A       JZ 0x2DC1                        ; -> loc_2DC1
    2DA7: 90 7F A9    MOV DPTR,#0x7FA9              
    2DAA: E0          MOVX A,@DPTR                  
    2DAB: FF          MOV R7,A                      
    2DAC: 60 0D       JZ 0x2DBB                        ; -> 0x2DBB
    2DAE: 90 7F AA    MOV DPTR,#0x7FAA              
    2DB1: E0          MOVX A,@DPTR                  
    2DB2: 24 01       ADD A,#0x01                   
    2DB4: F0          MOVX @DPTR,A                  
    2DB5: 90 7F A8    MOV DPTR,#0x7FA8              
    2DB8: 74 01       MOV A,#0x01                   
    2DBA: F0          MOVX @DPTR,A                  
    2DBB: 75 15 11    MOV 0x15,#0x11                
    2DBE: 02 2E CC    LJMP 0x2ECC                      ; -> 0x2ECC

loc_2DC1:
    2DC1: 90 7F A2    MOV DPTR,#0x7FA2              
    2DC4: E0          MOVX A,@DPTR                  
    2DC5: FF          MOV R7,A                      
    2DC6: BF 03 13    CJNE R7,#0x03,0x2DDC             ; -> loc_2DDC
    2DC9: 90 7F FA    MOV DPTR,#0x7FFA              
    2DCC: E0          MOVX A,@DPTR                  
    2DCD: FF          MOV R7,A                      
    2DCE: 60 06       JZ 0x2DD6                        ; -> loc_2DD6
    2DD0: 75 15 11    MOV 0x15,#0x11                
    2DD3: 02 2E CC    LJMP 0x2ECC                      ; -> 0x2ECC

loc_2DD6:
    2DD6: 75 15 00    MOV 0x15,#0x00                
    2DD9: 02 2E CC    LJMP 0x2ECC                      ; -> 0x2ECC

loc_2DDC:
    2DDC: 90 7F A2    MOV DPTR,#0x7FA2              
    2DDF: E0          MOVX A,@DPTR                  
    2DE0: FF          MOV R7,A                      
    2DE1: BF 04 02    CJNE R7,#0x04,0x2DE6             ; -> loc_2DE6
    2DE4: 80 03       SJMP 0x2DE9                      ; -> loc_2DE9

loc_2DE6:
    2DE6: 02 2E 72    LJMP 0x2E72                      ; -> loc_2E72

loc_2DE9:
    2DE9: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    2DEC: E0          MOVX A,@DPTR                  
    2DED: 54 0C       ANL A,#0x0C                   
    2DEF: 03          RR A                          
    2DF0: 03          RR A                          
    2DF1: 54 3F       ANL A,#0x3F                   
    2DF3: 90 7F E2    MOV DPTR,#0x7FE2              
    2DF6: F0          MOVX @DPTR,A                  
    2DF7: 90 7F 9E    MOV DPTR,#0x7F9E              
    2DFA: E0          MOVX A,@DPTR                  
    2DFB: FF          MOV R7,A                      
    2DFC: 90 7F E2    MOV DPTR,#0x7FE2              
    2DFF: E0          MOVX A,@DPTR                  
    2E00: FA          MOV R2,A                      
    2E01: EF          MOV A,R7                      
    2E02: B5 02 00    CJNE A,0x02,0x2E05               ; -> 0x2E05
    2E05: 40 07       JC 0x2E0E                        ; -> 0x2E0E
    2E07: 90 7F 9F    MOV DPTR,#0x7F9F              
    2E0A: E0          MOVX A,@DPTR                  
    2E0B: FF          MOV R7,A                      
    2E0C: 60 2C       JZ 0x2E3A                        ; -> loc_2E3A
    2E0E: 75 50 04    MOV 0x50,#0x04                
    2E11: 75 51 17    MOV 0x51,#0x17                
    2E14: 75 82 00    MOV DPL(0x82),#0x00           
    2E17: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2E1A: 90 7F 9F    MOV DPTR,#0x7F9F              
    2E1D: E0          MOVX A,@DPTR                  
    2E1E: FF          MOV R7,A                      
    2E1F: 70 0A       JNZ 0x2E2B                       ; -> 0x2E2B
    2E21: 90 7F 9E    MOV DPTR,#0x7F9E              
    2E24: E0          MOVX A,@DPTR                  
    2E25: FF          MOV R7,A                      
    2E26: 90 7F 9E    MOV DPTR,#0x7F9E              
    2E29: 04          INC A                         
    2E2A: F0          MOVX @DPTR,A                  
    2E2B: 90 7F 9F    MOV DPTR,#0x7F9F              
    2E2E: 74 01       MOV A,#0x01                   
    2E30: F0          MOVX @DPTR,A                  
    2E31: 90 7F A0    MOV DPTR,#0x7FA0              
    2E34: 74 01       MOV A,#0x01                   
    2E36: F0          MOVX @DPTR,A                  
    2E37: 02 2E CC    LJMP 0x2ECC                      ; -> 0x2ECC

loc_2E3A:
    2E3A: 90 D8 0D    MOV DPTR,#0xD80D              
    2E3D: E0          MOVX A,@DPTR                  
    2E3E: FF          MOV R7,A                      
    2E3F: 74 0F       MOV A,#0x0F                   
    2E41: 5F          ANL A,R7                      
    2E42: F5 30       MOV 0x30,A                    
    2E44: 90 D8 04    MOV DPTR,#0xD804              
    2E47: E0          MOVX A,@DPTR                  
    2E48: 54 0F       ANL A,#0x0F                   
    2E4A: F4          CPL A                         
    2E4B: 90 7F E2    MOV DPTR,#0x7FE2              
    2E4E: 45 30       ORL A,0x30                    
    2E50: F0          MOVX @DPTR,A                  
    2E51: 90 7F E2    MOV DPTR,#0x7FE2              
    2E54: E0          MOVX A,@DPTR                  
    2E55: FF          MOV R7,A                      
    2E56: E4          CLR A                         
    2E57: BF FF 01    CJNE R7,#0xFF,0x2E5B             ; -> 0x2E5B
    2E5A: 04          INC A                         
    2E5B: F5 31       MOV 0x31,A                    
    2E5D: 90 7F FA    MOV DPTR,#0x7FFA              
    2E60: E0          MOVX A,@DPTR                  
    2E61: FF          MOV R7,A                      
    2E62: 60 09       JZ 0x2E6D                        ; -> loc_2E6D
    2E64: E5 31       MOV A,0x31                    
    2E66: 60 05       JZ 0x2E6D                        ; -> loc_2E6D
    2E68: 75 15 33    MOV 0x15,#0x33                
    2E6B: 80 5F       SJMP 0x2ECC                      ; -> 0x2ECC

loc_2E6D:
    2E6D: 75 15 11    MOV 0x15,#0x11                
    2E70: 80 5A       SJMP 0x2ECC                      ; -> 0x2ECC

loc_2E72:
    2E72: 90 7F A2    MOV DPTR,#0x7FA2              
    2E75: E0          MOVX A,@DPTR                  
    2E76: FF          MOV R7,A                      
    2E77: 60 53       JZ 0x2ECC                        ; -> 0x2ECC
    2E79: E5 18       MOV A,0x18                    
    2E7B: 70 28       JNZ 0x2EA5                       ; -> loc_2EA5
    2E7D: 90 D8 04    MOV DPTR,#0xD804              
    2E80: E0          MOVX A,@DPTR                  
    2E81: FF          MOV R7,A                      
    2E82: 90 D8 0D    MOV DPTR,#0xD80D              
    2E85: E0          MOVX A,@DPTR                  
    2E86: 5F          ANL A,R7                      
    2E87: 54 01       ANL A,#0x01                   
    2E89: 25 E0       ADD A,ACC(0xE0)               
    2E8B: FA          MOV R2,A                      
    2E8C: 90 D8 04    MOV DPTR,#0xD804              
    2E8F: E0          MOVX A,@DPTR                  
    2E90: F5 39       MOV 0x39,A                    
    2E92: 90 D8 0D    MOV DPTR,#0xD80D              
    2E95: E0          MOVX A,@DPTR                  
    2E96: 55 39       ANL A,0x39                    
    2E98: 54 02       ANL A,#0x02                   
    2E9A: C4          SWAP A                        
    2E9B: 54 F0       ANL A,#0xF0                   
    2E9D: FF          MOV R7,A                      
    2E9E: 4A          ORL A,R2                      
    2E9F: 44 11       ORL A,#0x11                   
    2EA1: F5 15       MOV 0x15,A                    
    2EA3: 80 27       SJMP 0x2ECC                      ; -> 0x2ECC

loc_2EA5:
    2EA5: 90 D8 04    MOV DPTR,#0xD804              
    2EA8: E0          MOVX A,@DPTR                  
    2EA9: FF          MOV R7,A                      
    2EAA: 90 D8 0D    MOV DPTR,#0xD80D              
    2EAD: E0          MOVX A,@DPTR                  
    2EAE: 5F          ANL A,R7                      
    2EAF: 54 04       ANL A,#0x04                   
    2EB1: C3          CLR C                         
    2EB2: 13          RRC A                         
    2EB3: FA          MOV R2,A                      
    2EB4: 90 D8 04    MOV DPTR,#0xD804              
    2EB7: E0          MOVX A,@DPTR                  
    2EB8: F5 39       MOV 0x39,A                    
    2EBA: 90 D8 0D    MOV DPTR,#0xD80D              
    2EBD: E0          MOVX A,@DPTR                  
    2EBE: 55 39       ANL A,0x39                    
    2EC0: 54 08       ANL A,#0x08                   
    2EC2: 25 E0       ADD A,ACC(0xE0)               
    2EC4: 25 E0       ADD A,ACC(0xE0)               
    2EC6: FF          MOV R7,A                      
    2EC7: 4A          ORL A,R2                      
    2EC8: 44 11       ORL A,#0x11                   
    2ECA: F5 15       MOV 0x15,A                    
    2ECC: 90 7F FA    MOV DPTR,#0x7FFA              
    2ECF: 74 01       MOV A,#0x01                   
    2ED1: F0          MOVX @DPTR,A                  
    2ED2: 90 C6 06    MOV DPTR,#0xC606              
    2ED5: E0          MOVX A,@DPTR                  
    2ED6: 90 7F E3    MOV DPTR,#0x7FE3              
    2ED9: F0          MOVX @DPTR,A                  
    2EDA: 90 7F A8    MOV DPTR,#0x7FA8              
    2EDD: E0          MOVX A,@DPTR                  
    2EDE: FF          MOV R7,A                      
    2EDF: 70 1B       JNZ 0x2EFC                       ; -> 0x2EFC
    2EE1: 90 7F E3    MOV DPTR,#0x7FE3              
    2EE4: E0          MOVX A,@DPTR                  
    2EE5: FF          MOV R7,A                      
    2EE6: 85 18 F0    MOV B(0xF0),0x18              
    2EE9: 05 F0       INC B(0xF0)                   
    2EEB: EF          MOV A,R7                      
    2EEC: 80 02       SJMP 0x2EF0                      ; -> 0x2EF0

loc_2EEE:
    2EEE: C3          CLR C                         
    2EEF: 13          RRC A                         
    2EF0: D5 F0 FB    DJNZ B(0xF0),0x2EEE              ; -> loc_2EEE
    2EF3: 54 03       ANL A,#0x03                   
    2EF5: 24 2C       ADD A,#0x2C                   
    2EF7: F8          MOV R0,A                      
    2EF8: E6          MOV A,@R0                     
    2EF9: FF          MOV R7,A                      
    2EFA: 42 15       ORL 0x15,A                    
    2EFC: 90 7F 7E    MOV DPTR,#0x7F7E              
    2EFF: E0          MOVX A,@DPTR                  
    2F00: FF          MOV R7,A                      
    2F01: BF 01 03    CJNE R7,#0x01,0x2F07             ; -> 0x2F07
    2F04: 53 15 0F    ANL 0x15,#0x0F                
    2F07: E5 18       MOV A,0x18                    
    2F09: C3          CLR C                         
    2F0A: 13          RRC A                         
    2F0B: FF          MOV R7,A                      
    2F0C: 24 8E       ADD A,#0x8E                   
    2F0E: F5 82       MOV DPL(0x82),A               
    2F10: E4          CLR A                         
    2F11: 34 7F       ADDC A,#0x7F                  
    2F13: F5 83       MOV DPH(0x83),A               
    2F15: E0          MOVX A,@DPTR                  
    2F16: FA          MOV R2,A                      
    2F17: B5 15 03    CJNE A,0x15,0x2F1D               ; -> loc_2F1D
    2F1A: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2F1D:
    2F1D: 90 7F 9F    MOV DPTR,#0x7F9F              
    2F20: E0          MOVX A,@DPTR                  
    2F21: FA          MOV R2,A                      
    2F22: 60 03       JZ 0x2F27                        ; -> loc_2F27
    2F24: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2F27:
    2F27: EF          MOV A,R7                      
    2F28: 24 8E       ADD A,#0x8E                   
    2F2A: F5 82       MOV DPL(0x82),A               
    2F2C: E4          CLR A                         
    2F2D: 34 7F       ADDC A,#0x7F                  
    2F2F: F5 83       MOV DPH(0x83),A               
    2F31: E5 15       MOV A,0x15                    
    2F33: F0          MOVX @DPTR,A                  
    2F34: 90 7F 88    MOV DPTR,#0x7F88              
    2F37: E0          MOVX A,@DPTR                  
    2F38: FA          MOV R2,A                      
    2F39: 44 80       ORL A,#0x80                   
    2F3B: F0          MOVX @DPTR,A                  
    2F3C: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_2F3F:
    2F3F: 75 50 04    MOV 0x50,#0x04                
    2F42: 75 51 19    MOV 0x51,#0x19                
    2F45: 75 82 00    MOV DPL(0x82),#0x00           
    2F48: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    2F4B: 90 C6 06    MOV DPTR,#0xC606              
    2F4E: E0          MOVX A,@DPTR                  
    2F4F: 90 7F 8D    MOV DPTR,#0x7F8D              
    2F52: F0          MOVX @DPTR,A                  
    2F53: 90 7F 8D    MOV DPTR,#0x7F8D              
    2F56: E0          MOVX A,@DPTR                  
    2F57: FA          MOV R2,A                      
    2F58: 30 E4 04    JNB ACC.4,0x2F5F                 ; -> loc_2F5F
    2F5B: 7A 01       MOV R2,#0x01                  
    2F5D: 80 02       SJMP 0x2F61                      ; -> 0x2F61

loc_2F5F:
    2F5F: 7A 00       MOV R2,#0x00                  
    2F61: 90 7F 8D    MOV DPTR,#0x7F8D              
    2F64: EA          MOV A,R2                      
    2F65: F0          MOVX @DPTR,A                  
    2F66: 90 D8 04    MOV DPTR,#0xD804              
    2F69: E0          MOVX A,@DPTR                  
    2F6A: FA          MOV R2,A                      
    2F6B: 90 7F ED    MOV DPTR,#0x7FED              
    2F6E: 74 0F       MOV A,#0x0F                   
    2F70: 5A          ANL A,R2                      
    2F71: F0          MOVX @DPTR,A                  
    2F72: 90 D8 0D    MOV DPTR,#0xD80D              
    2F75: E0          MOVX A,@DPTR                  
    2F76: FA          MOV R2,A                      
    2F77: 53 02 0F    ANL 0x02,#0x0F                
    2F7A: 90 7F ED    MOV DPTR,#0x7FED              
    2F7D: E0          MOVX A,@DPTR                  
    2F7E: 52 02       ANL 0x02,A                    
    2F80: 90 7F ED    MOV DPTR,#0x7FED              
    2F83: E0          MOVX A,@DPTR                  
    2F84: FF          MOV R7,A                      
    2F85: EA          MOV A,R2                      
    2F86: B5 07 04    CJNE A,0x07,0x2F8D               ; -> loc_2F8D
    2F89: 74 01       MOV A,#0x01                   
    2F8B: 80 01       SJMP 0x2F8E                      ; -> 0x2F8E

loc_2F8D:
    2F8D: E4          CLR A                         
    2F8E: FA          MOV R2,A                      
    2F8F: 90 7F 8D    MOV DPTR,#0x7F8D              
    2F92: E0          MOVX A,@DPTR                  
    2F93: 5A          ANL A,R2                      
    2F94: F0          MOVX @DPTR,A                  
    2F95: 90 7F A9    MOV DPTR,#0x7FA9              
    2F98: E0          MOVX A,@DPTR                  
    2F99: F4          CPL A                         
    2F9A: FA          MOV R2,A                      
    2F9B: 90 7F 8D    MOV DPTR,#0x7F8D              
    2F9E: E0          MOVX A,@DPTR                  
    2F9F: FF          MOV R7,A                      
    2FA0: 5A          ANL A,R2                      
    2FA1: F0          MOVX @DPTR,A                  
    2FA2: 90 7F 8D    MOV DPTR,#0x7F8D              
    2FA5: E0          MOVX A,@DPTR                  
    2FA6: FA          MOV R2,A                      
    2FA7: 60 0C       JZ 0x2FB5                        ; -> 0x2FB5
    2FA9: 90 D8 68    MOV DPTR,#0xD868              
    2FAC: 74 03       MOV A,#0x03                   
    2FAE: F0          MOVX @DPTR,A                  
    2FAF: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    2FB2: 74 84       MOV A,#0x84                   
    2FB4: F0          MOVX @DPTR,A                  
    2FB5: 90 7F 88    MOV DPTR,#0x7F88              
    2FB8: E0          MOVX A,@DPTR                  
    2FB9: FA          MOV R2,A                      
    2FBA: 53 02 FE    ANL 0x02,#0xFE                
    2FBD: 90 7F 8D    MOV DPTR,#0x7F8D              
    2FC0: E0          MOVX A,@DPTR                  
    2FC1: 42 02       ORL 0x02,A                    
    2FC3: 90 7F 89    MOV DPTR,#0x7F89              
    2FC6: E0          MOVX A,@DPTR                  
    2FC7: FF          MOV R7,A                      
    2FC8: 4A          ORL A,R2                      
    2FC9: F5 15       MOV 0x15,A                    
    2FCB: 90 7F 92    MOV DPTR,#0x7F92              
    2FCE: E0          MOVX A,@DPTR                  
    2FCF: 54 7F       ANL A,#0x7F                   
    2FD1: FA          MOV R2,A                      
    2FD2: B5 15 0E    CJNE A,0x15,0x2FE3               ; -> 0x2FE3
    2FD5: 90 7F 9C    MOV DPTR,#0x7F9C              
    2FD8: E0          MOVX A,@DPTR                  
    2FD9: FA          MOV R2,A                      
    2FDA: 70 07       JNZ 0x2FE3                       ; -> 0x2FE3
    2FDC: 90 7F 85    MOV DPTR,#0x7F85              
    2FDF: E0          MOVX A,@DPTR                  
    2FE0: FA          MOV R2,A                      
    2FE1: 60 08       JZ 0x2FEB                        ; -> 0x2FEB
    2FE3: 90 7F 85    MOV DPTR,#0x7F85              
    2FE6: E4          CLR A                         
    2FE7: F0          MOVX @DPTR,A                  
    2FE8: 43 15 80    ORL 0x15,#0x80                
    2FEB: 90 7F 9F    MOV DPTR,#0x7F9F              
    2FEE: E0          MOVX A,@DPTR                  
    2FEF: FA          MOV R2,A                      
    2FF0: 70 06       JNZ 0x2FF8                       ; -> 0x2FF8
    2FF2: 90 7F 92    MOV DPTR,#0x7F92              
    2FF5: E5 15       MOV A,0x15                    
    2FF7: F0          MOVX @DPTR,A                  
    2FF8: 90 7F 88    MOV DPTR,#0x7F88              
    2FFB: E4          CLR A                         
    2FFC: F0          MOVX @DPTR,A                  
    2FFD: 90 7F 89    MOV DPTR,#0x7F89              
    3000: F0          MOVX @DPTR,A                  
    3001: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3004:
    3004: 75 18 02    MOV 0x18,#0x02                
    3007: 75 50 20    MOV 0x50,#0x20                
    300A: 75 51 1A    MOV 0x51,#0x1A                
    300D: 75 82 00    MOV DPL(0x82),#0x00           
    3010: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3013: E5 18       MOV A,0x18                    
    3015: C3          CLR C                         
    3016: 13          RRC A                         
    3017: 90 7F E2    MOV DPTR,#0x7FE2              
    301A: F0          MOVX @DPTR,A                  
    301B: 90 7F E2    MOV DPTR,#0x7FE2              
    301E: E0          MOVX A,@DPTR                  
    301F: 24 94       ADD A,#0x94                   
    3021: F5 82       MOV DPL(0x82),A               
    3023: E4          CLR A                         
    3024: 34 7F       ADDC A,#0x7F                  
    3026: F5 83       MOV DPH(0x83),A               
    3028: E0          MOVX A,@DPTR                  
    3029: F5 15       MOV 0x15,A                    
    302B: 90 7F A4    MOV DPTR,#0x7FA4              
    302E: E0          MOVX A,@DPTR                  
    302F: FA          MOV R2,A                      
    3030: 70 32       JNZ 0x3064                       ; -> 0x3064
    3032: 90 7F 9C    MOV DPTR,#0x7F9C              
    3035: E0          MOVX A,@DPTR                  
    3036: FA          MOV R2,A                      
    3037: 60 0E       JZ 0x3047                        ; -> 0x3047
    3039: 90 7F 9C    MOV DPTR,#0x7F9C              
    303C: E4          CLR A                         
    303D: F0          MOVX @DPTR,A                  
    303E: 90 7F 9B    MOV DPTR,#0x7F9B              
    3041: E0          MOVX A,@DPTR                  
    3042: FA          MOV R2,A                      
    3043: 90 7F 9A    MOV DPTR,#0x7F9A              
    3046: F0          MOVX @DPTR,A                  
    3047: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    304A: E0          MOVX A,@DPTR                  
    304B: FA          MOV R2,A                      
    304C: 30 E0 0F    JNB ACC.0,0x305E                 ; -> loc_305E
    304F: 90 7F 8D    MOV DPTR,#0x7F8D              
    3052: E0          MOVX A,@DPTR                  
    3053: FA          MOV R2,A                      
    3054: 60 08       JZ 0x305E                        ; -> loc_305E
    3056: 90 7F 90    MOV DPTR,#0x7F90              
    3059: E0          MOVX A,@DPTR                  
    305A: F5 15       MOV 0x15,A                    
    305C: 80 06       SJMP 0x3064                      ; -> 0x3064

loc_305E:
    305E: 90 7F 9A    MOV DPTR,#0x7F9A              
    3061: E0          MOVX A,@DPTR                  
    3062: F5 15       MOV 0x15,A                    
    3064: 90 7F 9A    MOV DPTR,#0x7F9A              
    3067: E5 15       MOV A,0x15                    
    3069: F0          MOVX @DPTR,A                  
    306A: 90 7F E2    MOV DPTR,#0x7FE2              
    306D: E0          MOVX A,@DPTR                  
    306E: FA          MOV R2,A                      
    306F: 24 90       ADD A,#0x90                   
    3071: F5 82       MOV DPL(0x82),A               
    3073: E4          CLR A                         
    3074: 34 7F       ADDC A,#0x7F                  
    3076: F5 83       MOV DPH(0x83),A               
    3078: E5 15       MOV A,0x15                    
    307A: F0          MOVX @DPTR,A                  
    307B: 90 7F 9E    MOV DPTR,#0x7F9E              
    307E: E4          CLR A                         
    307F: F0          MOVX @DPTR,A                  
    3080: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3083:
    3083: 75 50 20    MOV 0x50,#0x20                
    3086: 75 51 3C    MOV 0x51,#0x3C                
    3089: 75 82 00    MOV DPL(0x82),#0x00           
    308C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    308F: 75 15 00    MOV 0x15,#0x00                
    3092: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3095:
    3095: 74 F0       MOV A,#0xF0                   
    3097: 25 35       ADD A,0x35                    
    3099: 40 03       JC 0x309E                        ; -> loc_309E
    309B: 02 31 4B    LJMP 0x314B                      ; -> loc_314B

loc_309E:
    309E: 74 17       MOV A,#0x17                   
    30A0: B5 35 00    CJNE A,0x35,0x30A3               ; -> 0x30A3
    30A3: 50 03       JNC 0x30A8                       ; -> loc_30A8
    30A5: 02 31 4B    LJMP 0x314B                      ; -> loc_314B

loc_30A8:
    30A8: E5 35       MOV A,0x35                    
    30AA: 24 F0       ADD A,#0xF0                   
    30AC: F5 18       MOV 0x18,A                    
    30AE: C3          CLR C                         
    30AF: 13          RRC A                         
    30B0: 90 7F ED    MOV DPTR,#0x7FED              
    30B3: F0          MOVX @DPTR,A                  
    30B4: 90 7F ED    MOV DPTR,#0x7FED              
    30B7: E0          MOVX A,@DPTR                  
    30B8: FA          MOV R2,A                      
    30B9: 24 23       ADD A,#0x23                   
    30BB: F8          MOV R0,A                      
    30BC: E6          MOV A,@R0                     
    30BD: 70 77       JNZ 0x3136                       ; -> 0x3136
    30BF: 74 01       MOV A,#0x01                   
    30C1: 45 18       ORL A,0x18                    
    30C3: F5 32       MOV 0x32,A                    
    30C5: 74 FE       MOV A,#0xFE                   
    30C7: 55 18       ANL A,0x18                    
    30C9: F5 33       MOV 0x33,A                    
    30CB: 90 7F ED    MOV DPTR,#0x7FED              
    30CE: E0          MOVX A,@DPTR                  
    30CF: FF          MOV R7,A                      
    30D0: 8F F0       MOV 0xF0,R7                   
    30D2: 05 F0       INC B(0xF0)                   
    30D4: 74 01       MOV A,#0x01                   
    30D6: 80 02       SJMP 0x30DA                      ; -> 0x30DA

loc_30D8:
    30D8: 25 E0       ADD A,ACC(0xE0)               
    30DA: D5 F0 FB    DJNZ B(0xF0),0x30D8              ; -> loc_30D8
    30DD: FF          MOV R7,A                      
    30DE: 90 CC 7D    MOV DPTR,#0xCC7D                 ; register block CC00
    30E1: F0          MOVX @DPTR,A                  
    30E2: E5 33       MOV A,0x33                    
    30E4: 24 1B       ADD A,#0x1B                   
    30E6: F5 39       MOV 0x39,A                    
    30E8: E5 33       MOV A,0x33                    
    30EA: 24 18       ADD A,#0x18                   
    30EC: F5 3B       MOV 0x3B,A                    
    30EE: E4          CLR A                         
    30EF: 34 CD       ADDC A,#0xCD                  
    30F1: F5 3C       MOV 0x3C,A                    
    30F3: 75 3D 00    MOV 0x3D,#0x00                
    30F6: 85 3B 82    MOV DPL(0x82),0x3B            
    30F9: 85 3C 83    MOV DPH(0x83),0x3C            
    30FC: 85 3D F0    MOV B(0xF0),0x3D              
    30FF: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    3102: FA          MOV R2,A                      
    3103: A8 39       MOV R0,0x39                   
    3105: A6 02       MOV @R0,0x02                  
    3107: E5 32       MOV A,0x32                    
    3109: 24 1B       ADD A,#0x1B                   
    310B: F5 3B       MOV 0x3B,A                    
    310D: E5 32       MOV A,0x32                    
    310F: 24 18       ADD A,#0x18                   
    3111: F5 3E       MOV 0x3E,A                    
    3113: E4          CLR A                         
    3114: 34 CD       ADDC A,#0xCD                  
    3116: F5 3F       MOV 0x3F,A                    
    3118: 75 40 00    MOV 0x40,#0x00                
    311B: 85 3E 82    MOV DPL(0x82),0x3E            
    311E: 85 3F 83    MOV DPH(0x83),0x3F            
    3121: 85 40 F0    MOV B(0xF0),0x40              
    3124: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    3127: FA          MOV R2,A                      
    3128: A8 3B       MOV R0,0x3B                   
    312A: A6 02       MOV @R0,0x02                  
    312C: 90 7F ED    MOV DPTR,#0x7FED              
    312F: E0          MOVX A,@DPTR                  
    3130: FA          MOV R2,A                      
    3131: 24 23       ADD A,#0x23                   
    3133: F8          MOV R0,A                      
    3134: 76 02       MOV @R0,#0x02                 
    3136: E5 18       MOV A,0x18                    
    3138: 24 1B       ADD A,#0x1B                   
    313A: F8          MOV R0,A                      
    313B: 86 15       MOV 0x15,@R0                  
    313D: 90 7F ED    MOV DPTR,#0x7FED              
    3140: E0          MOVX A,@DPTR                  
    3141: 24 23       ADD A,#0x23                   
    3143: F8          MOV R0,A                      
    3144: E6          MOV A,@R0                     
    3145: FA          MOV R2,A                      
    3146: 14          DEC A                         
    3147: F6          MOV @R0,A                     
    3148: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_314B:
    314B: 75 0E 00    MOV 0x0E,#0x00                
    314E: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3151:
    3151: 75 50 20    MOV 0x50,#0x20                
    3154: 75 51 33    MOV 0x51,#0x33                
    3157: 75 82 00    MOV DPL(0x82),#0x00           
    315A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    315D: 90 7F FB    MOV DPTR,#0x7FFB              
    3160: E0          MOVX A,@DPTR                  
    3161: FA          MOV R2,A                      
    3162: 60 03       JZ 0x3167                        ; -> loc_3167
    3164: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3167:
    3167: 90 7F 7E    MOV DPTR,#0x7F7E              
    316A: E0          MOVX A,@DPTR                  
    316B: F5 0A       MOV 0x0A,A                    
    316D: 90 7F 7D    MOV DPTR,#0x7F7D              
    3170: E0          MOVX A,@DPTR                  
    3171: F5 0B       MOV 0x0B,A                    
    3173: 90 7F 7C    MOV DPTR,#0x7F7C              
    3176: E0          MOVX A,@DPTR                  
    3177: F5 0C       MOV 0x0C,A                    
    3179: 75 0D 01    MOV 0x0D,#0x01                
    317C: 75 82 0E    MOV DPL(0x82),#0x0E           
    317F: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3182: 90 7F 79    MOV DPTR,#0x7F79              
    3185: 74 01       MOV A,#0x01                   
    3187: F0          MOVX @DPTR,A                  
    3188: 90 7F FB    MOV DPTR,#0x7FFB              
    318B: 74 01       MOV A,#0x01                   
    318D: F0          MOVX @DPTR,A                  
    318E: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3191:
    3191: 75 50 20    MOV 0x50,#0x20                
    3194: 75 51 35    MOV 0x51,#0x35                
    3197: 75 82 00    MOV DPL(0x82),#0x00           
    319A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    319D: 75 50 20    MOV 0x50,#0x20                
    31A0: 75 51 36    MOV 0x51,#0x36                
    31A3: 75 82 00    MOV DPL(0x82),#0x00           
    31A6: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    31A9: 90 7F FB    MOV DPTR,#0x7FFB              
    31AC: E0          MOVX A,@DPTR                  
    31AD: FA          MOV R2,A                      
    31AE: 60 03       JZ 0x31B3                        ; -> loc_31B3
    31B0: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_31B3:
    31B3: 90 7F 7E    MOV DPTR,#0x7F7E              
    31B6: E0          MOVX A,@DPTR                  
    31B7: F5 0A       MOV 0x0A,A                    
    31B9: 90 7F 7D    MOV DPTR,#0x7F7D              
    31BC: E0          MOVX A,@DPTR                  
    31BD: F5 0B       MOV 0x0B,A                    
    31BF: 90 7F 7C    MOV DPTR,#0x7F7C              
    31C2: E0          MOVX A,@DPTR                  
    31C3: F5 0C       MOV 0x0C,A                    
    31C5: 75 0D 02    MOV 0x0D,#0x02                
    31C8: 75 82 0E    MOV DPL(0x82),#0x0E           
    31CB: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    31CE: 90 7F 79    MOV DPTR,#0x7F79              
    31D1: 74 01       MOV A,#0x01                   
    31D3: F0          MOVX @DPTR,A                  
    31D4: 90 7F FB    MOV DPTR,#0x7FFB              
    31D7: 74 01       MOV A,#0x01                   
    31D9: F0          MOVX @DPTR,A                  
    31DA: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_31DD:
    31DD: 74 10       MOV A,#0x10                   
    31DF: B5 35 09    CJNE A,0x35,0x31EB               ; -> loc_31EB
    31E2: 90 7F 75    MOV DPTR,#0x7F75              
    31E5: E0          MOVX A,@DPTR                  
    31E6: F5 15       MOV 0x15,A                    
    31E8: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_31EB:
    31EB: 75 0E 00    MOV 0x0E,#0x00                
    31EE: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_31F1:
    31F1: E5 35       MOV A,0x35                    
    31F3: 70 31       JNZ 0x3226                       ; -> loc_3226
    31F5: 90 7F A7    MOV DPTR,#0x7FA7              
    31F8: E0          MOVX A,@DPTR                  
    31F9: F5 15       MOV 0x15,A                    
    31FB: 90 7F A7    MOV DPTR,#0x7FA7              
    31FE: E0          MOVX A,@DPTR                  
    31FF: FA          MOV R2,A                      
    3200: BA 01 02    CJNE R2,#0x01,0x3205             ; -> loc_3205
    3203: 80 03       SJMP 0x3208                      ; -> loc_3208

loc_3205:
    3205: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3208:
    3208: 90 7F 7E    MOV DPTR,#0x7F7E              
    320B: E0          MOVX A,@DPTR                  
    320C: F5 0A       MOV 0x0A,A                    
    320E: 90 7F 7D    MOV DPTR,#0x7F7D              
    3211: E0          MOVX A,@DPTR                  
    3212: F5 0B       MOV 0x0B,A                    
    3214: 90 7F 7C    MOV DPTR,#0x7F7C              
    3217: E0          MOVX A,@DPTR                  
    3218: F5 0C       MOV 0x0C,A                    
    321A: 75 0D 01    MOV 0x0D,#0x01                
    321D: 75 82 08    MOV DPL(0x82),#0x08           
    3220: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3223: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3226:
    3226: 75 0E 00    MOV 0x0E,#0x00                
    3229: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_322C:
    322C: 74 02       MOV A,#0x02                   
    322E: B5 35 26    CJNE A,0x35,0x3257               ; -> loc_3257
    3231: 90 00 A7    MOV DPTR,#0x00A7              
    3234: E4          CLR A                         
    3235: 93          MOVC A,@A+DPTR                
    3236: FA          MOV R2,A                      
    3237: 53 02 20    ANL 0x02,#0x20                
    323A: 90 7E AD    MOV DPTR,#0x7EAD              
    323D: E0          MOVX A,@DPTR                  
    323E: FF          MOV R7,A                      
    323F: 5A          ANL A,R2                      
    3240: 60 15       JZ 0x3257                        ; -> loc_3257
    3242: 75 50 20    MOV 0x50,#0x20                
    3245: 75 51 54    MOV 0x51,#0x54                
    3248: 75 82 00    MOV DPL(0x82),#0x00           
    324B: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    324E: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    3251: E0          MOVX A,@DPTR                  
    3252: F5 15       MOV 0x15,A                    
    3254: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3257:
    3257: 74 02       MOV A,#0x02                   
    3259: B5 35 00    CJNE A,0x35,0x325C               ; -> 0x325C
    325C: 50 29       JNC 0x3287                       ; -> loc_3287
    325E: 74 FA       MOV A,#0xFA                   
    3260: 25 35       ADD A,0x35                    
    3262: 40 23       JC 0x3287                        ; -> loc_3287
    3264: 90 00 A7    MOV DPTR,#0x00A7              
    3267: E4          CLR A                         
    3268: 93          MOVC A,@A+DPTR                
    3269: FA          MOV R2,A                      
    326A: 53 02 20    ANL 0x02,#0x20                
    326D: 90 7E AD    MOV DPTR,#0x7EAD              
    3270: E0          MOVX A,@DPTR                  
    3271: FF          MOV R7,A                      
    3272: 5A          ANL A,R2                      
    3273: 60 12       JZ 0x3287                        ; -> loc_3287
    3275: 75 50 20    MOV 0x50,#0x20                
    3278: 75 51 54    MOV 0x51,#0x54                
    327B: 75 82 00    MOV DPL(0x82),#0x00           
    327E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3281: 75 15 00    MOV 0x15,#0x00                
    3284: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3287:
    3287: 75 0E 00    MOV 0x0E,#0x00                
    328A: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_328D:
    328D: 75 0E 00    MOV 0x0E,#0x00                
    3290: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3293:
    3293: E5 3A       MOV A,0x3A                    
    3295: 70 03       JNZ 0x329A                       ; -> loc_329A
    3297: 02 34 2B    LJMP 0x342B                      ; -> loc_342B

loc_329A:
    329A: E4          CLR A                         
    329B: B5 34 02    CJNE A,0x34,0x32A0               ; -> loc_32A0
    329E: 80 03       SJMP 0x32A3                      ; -> loc_32A3

loc_32A0:
    32A0: 02 34 26    LJMP 0x3426                      ; -> loc_3426

loc_32A3:
    32A3: 90 00 A7    MOV DPTR,#0x00A7              
    32A6: E4          CLR A                         
    32A7: 93          MOVC A,@A+DPTR                
    32A8: FA          MOV R2,A                      
    32A9: 20 E6 06    JB ACC.6,0x32B2                  ; -> loc_32B2
    32AC: 75 0E 00    MOV 0x0E,#0x00                
    32AF: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_32B2:
    32B2: E5 35       MOV A,0x35                    
    32B4: 70 06       JNZ 0x32BC                       ; -> loc_32BC
    32B6: 75 15 98    MOV 0x15,#0x98                
    32B9: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_32BC:
    32BC: 85 35 41    MOV 0x41,0x35                 
    32BF: E4          CLR A                         
    32C0: F5 42       MOV 0x42,A                    
    32C2: F5 43       MOV 0x43,A                    
    32C4: F5 44       MOV 0x44,A                    
    32C6: 74 01       MOV A,#0x01                   
    32C8: B5 41 0E    CJNE A,0x41,0x32D9               ; -> loc_32D9
    32CB: E4          CLR A                         
    32CC: B5 42 0A    CJNE A,0x42,0x32D9               ; -> loc_32D9
    32CF: E4          CLR A                         
    32D0: B5 43 06    CJNE A,0x43,0x32D9               ; -> loc_32D9
    32D3: E4          CLR A                         
    32D4: B5 44 02    CJNE A,0x44,0x32D9               ; -> loc_32D9
    32D7: 80 02       SJMP 0x32DB                      ; -> loc_32DB

loc_32D9:
    32D9: 80 06       SJMP 0x32E1                      ; -> loc_32E1

loc_32DB:
    32DB: 75 15 4F    MOV 0x15,#0x4F                
    32DE: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_32E1:
    32E1: 74 02       MOV A,#0x02                   
    32E3: B5 41 0E    CJNE A,0x41,0x32F4               ; -> loc_32F4
    32E6: E4          CLR A                         
    32E7: B5 42 0A    CJNE A,0x42,0x32F4               ; -> loc_32F4
    32EA: E4          CLR A                         
    32EB: B5 43 06    CJNE A,0x43,0x32F4               ; -> loc_32F4
    32EE: E4          CLR A                         
    32EF: B5 44 02    CJNE A,0x44,0x32F4               ; -> loc_32F4
    32F2: 80 02       SJMP 0x32F6                      ; -> loc_32F6

loc_32F4:
    32F4: 80 06       SJMP 0x32FC                      ; -> loc_32FC

loc_32F6:
    32F6: 75 15 EE    MOV 0x15,#0xEE                
    32F9: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_32FC:
    32FC: 74 03       MOV A,#0x03                   
    32FE: B5 41 0E    CJNE A,0x41,0x330F               ; -> loc_330F
    3301: E4          CLR A                         
    3302: B5 42 0A    CJNE A,0x42,0x330F               ; -> loc_330F
    3305: E4          CLR A                         
    3306: B5 43 06    CJNE A,0x43,0x330F               ; -> loc_330F
    3309: E4          CLR A                         
    330A: B5 44 02    CJNE A,0x44,0x330F               ; -> loc_330F
    330D: 80 02       SJMP 0x3311                      ; -> loc_3311

loc_330F:
    330F: 80 06       SJMP 0x3317                      ; -> loc_3317

loc_3311:
    3311: 75 15 41    MOV 0x15,#0x41                
    3314: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3317:
    3317: 74 04       MOV A,#0x04                   
    3319: B5 41 0E    CJNE A,0x41,0x332A               ; -> loc_332A
    331C: E4          CLR A                         
    331D: B5 42 0A    CJNE A,0x42,0x332A               ; -> loc_332A
    3320: E4          CLR A                         
    3321: B5 43 06    CJNE A,0x43,0x332A               ; -> loc_332A
    3324: E4          CLR A                         
    3325: B5 44 02    CJNE A,0x44,0x332A               ; -> loc_332A
    3328: 80 02       SJMP 0x332C                      ; -> loc_332C

loc_332A:
    332A: 80 06       SJMP 0x3332                      ; -> loc_3332

loc_332C:
    332C: 75 15 52    MOV 0x15,#0x52                
    332F: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3332:
    3332: 74 05       MOV A,#0x05                   
    3334: B5 41 0E    CJNE A,0x41,0x3345               ; -> loc_3345
    3337: E4          CLR A                         
    3338: B5 42 0A    CJNE A,0x42,0x3345               ; -> loc_3345
    333B: E4          CLR A                         
    333C: B5 43 06    CJNE A,0x43,0x3345               ; -> loc_3345
    333F: E4          CLR A                         
    3340: B5 44 02    CJNE A,0x44,0x3345               ; -> loc_3345
    3343: 80 02       SJMP 0x3347                      ; -> loc_3347

loc_3345:
    3345: 80 06       SJMP 0x334D                      ; -> loc_334D

loc_3347:
    3347: 75 15 00    MOV 0x15,#0x00                
    334A: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_334D:
    334D: 74 06       MOV A,#0x06                   
    334F: B5 41 0E    CJNE A,0x41,0x3360               ; -> loc_3360
    3352: E4          CLR A                         
    3353: B5 42 0A    CJNE A,0x42,0x3360               ; -> loc_3360
    3356: E4          CLR A                         
    3357: B5 43 06    CJNE A,0x43,0x3360               ; -> loc_3360
    335A: E4          CLR A                         
    335B: B5 44 02    CJNE A,0x44,0x3360               ; -> loc_3360
    335E: 80 02       SJMP 0x3362                      ; -> loc_3362

loc_3360:
    3360: 80 06       SJMP 0x3368                      ; -> loc_3368

loc_3362:
    3362: 75 15 00    MOV 0x15,#0x00                
    3365: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3368:
    3368: 74 07       MOV A,#0x07                   
    336A: B5 41 0E    CJNE A,0x41,0x337B               ; -> loc_337B
    336D: E4          CLR A                         
    336E: B5 42 0A    CJNE A,0x42,0x337B               ; -> loc_337B
    3371: E4          CLR A                         
    3372: B5 43 06    CJNE A,0x43,0x337B               ; -> loc_337B
    3375: E4          CLR A                         
    3376: B5 44 02    CJNE A,0x44,0x337B               ; -> loc_337B
    3379: 80 02       SJMP 0x337D                      ; -> loc_337D

loc_337B:
    337B: 80 06       SJMP 0x3383                      ; -> loc_3383

loc_337D:
    337D: 75 15 00    MOV 0x15,#0x00                
    3380: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_3383:
    3383: 74 08       MOV A,#0x08                   
    3385: B5 41 0E    CJNE A,0x41,0x3396               ; -> loc_3396
    3388: E4          CLR A                         
    3389: B5 42 0A    CJNE A,0x42,0x3396               ; -> loc_3396
    338C: E4          CLR A                         
    338D: B5 43 06    CJNE A,0x43,0x3396               ; -> loc_3396
    3390: E4          CLR A                         
    3391: B5 44 02    CJNE A,0x44,0x3396               ; -> loc_3396
    3394: 80 02       SJMP 0x3398                      ; -> loc_3398

loc_3396:
    3396: 80 06       SJMP 0x339E                      ; -> loc_339E

loc_3398:
    3398: 75 15 00    MOV 0x15,#0x00                
    339B: 02 34 4E    LJMP 0x344E                      ; -> 0x344E

loc_339E:
    339E: 74 09       MOV A,#0x09                   
    33A0: B5 41 0E    CJNE A,0x41,0x33B1               ; -> loc_33B1
    33A3: E4          CLR A                         
    33A4: B5 42 0A    CJNE A,0x42,0x33B1               ; -> loc_33B1
    33A7: E4          CLR A                         
    33A8: B5 43 06    CJNE A,0x43,0x33B1               ; -> loc_33B1
    33AB: E4          CLR A                         
    33AC: B5 44 02    CJNE A,0x44,0x33B1               ; -> loc_33B1
    33AF: 80 02       SJMP 0x33B3                      ; -> loc_33B3

loc_33B1:
    33B1: 80 22       SJMP 0x33D5                      ; -> loc_33D5

loc_33B3:
    33B3: 90 00 A9    MOV DPTR,#0x00A9              
    33B6: E4          CLR A                         
    33B7: 93          MOVC A,@A+DPTR                
    33B8: FA          MOV R2,A                      
    33B9: 30 E6 04    JNB ACC.6,0x33C0                 ; -> loc_33C0
    33BC: 7A A1       MOV R2,#0xA1                  
    33BE: 80 11       SJMP 0x33D1                      ; -> 0x33D1

loc_33C0:
    33C0: 90 00 A9    MOV DPTR,#0x00A9              
    33C3: E4          CLR A                         
    33C4: 93          MOVC A,@A+DPTR                
    33C5: FF          MOV R7,A                      
    33C6: 30 E7 04    JNB ACC.7,0x33CD                 ; -> loc_33CD
    33C9: 7F C0       MOV R7,#0xC0                  
    33CB: 80 02       SJMP 0x33CF                      ; -> 0x33CF

loc_33CD:
    33CD: 7F B1       MOV R7,#0xB1                  
    33CF: 8F 02       MOV 0x02,R7                   
    33D1: 8A 15       MOV 0x15,R2                   
    33D3: 80 79       SJMP 0x344E                      ; -> 0x344E

loc_33D5:
    33D5: 74 0A       MOV A,#0x0A                   
    33D7: B5 41 0E    CJNE A,0x41,0x33E8               ; -> loc_33E8
    33DA: E4          CLR A                         
    33DB: B5 42 0A    CJNE A,0x42,0x33E8               ; -> loc_33E8
    33DE: E4          CLR A                         
    33DF: B5 43 06    CJNE A,0x43,0x33E8               ; -> loc_33E8
    33E2: E4          CLR A                         
    33E3: B5 44 02    CJNE A,0x44,0x33E8               ; -> loc_33E8
    33E6: 80 02       SJMP 0x33EA                      ; -> loc_33EA

loc_33E8:
    33E8: 80 05       SJMP 0x33EF                      ; -> loc_33EF

loc_33EA:
    33EA: 75 15 31    MOV 0x15,#0x31                
    33ED: 80 5F       SJMP 0x344E                      ; -> 0x344E

loc_33EF:
    33EF: 74 0B       MOV A,#0x0B                   
    33F1: B5 41 0E    CJNE A,0x41,0x3402               ; -> loc_3402
    33F4: E4          CLR A                         
    33F5: B5 42 0A    CJNE A,0x42,0x3402               ; -> loc_3402
    33F8: E4          CLR A                         
    33F9: B5 43 06    CJNE A,0x43,0x3402               ; -> loc_3402
    33FC: E4          CLR A                         
    33FD: B5 44 02    CJNE A,0x44,0x3402               ; -> loc_3402
    3400: 80 02       SJMP 0x3404                      ; -> loc_3404

loc_3402:
    3402: 80 05       SJMP 0x3409                      ; -> loc_3409

loc_3404:
    3404: 75 15 00    MOV 0x15,#0x00                
    3407: 80 45       SJMP 0x344E                      ; -> 0x344E

loc_3409:
    3409: 74 0C       MOV A,#0x0C                   
    340B: B5 41 0E    CJNE A,0x41,0x341C               ; -> loc_341C
    340E: E4          CLR A                         
    340F: B5 42 0A    CJNE A,0x42,0x341C               ; -> loc_341C
    3412: E4          CLR A                         
    3413: B5 43 06    CJNE A,0x43,0x341C               ; -> loc_341C
    3416: E4          CLR A                         
    3417: B5 44 02    CJNE A,0x44,0x341C               ; -> loc_341C
    341A: 80 02       SJMP 0x341E                      ; -> loc_341E

loc_341C:
    341C: 80 30       SJMP 0x344E                      ; -> 0x344E

loc_341E:
    341E: 90 7E AB    MOV DPTR,#0x7EAB              
    3421: E0          MOVX A,@DPTR                  
    3422: F5 15       MOV 0x15,A                    
    3424: 80 28       SJMP 0x344E                      ; -> 0x344E

loc_3426:
    3426: 75 0E 00    MOV 0x0E,#0x00                
    3429: 80 23       SJMP 0x344E                      ; -> 0x344E

loc_342B:
    342B: E5 36       MOV A,0x36                    
    342D: 60 1C       JZ 0x344B                        ; -> loc_344B
    342F: E4          CLR A                         
    3430: B5 34 02    CJNE A,0x34,0x3435               ; -> loc_3435
    3433: 80 0C       SJMP 0x3441                      ; -> 0x3441

loc_3435:
    3435: 74 01       MOV A,#0x01                   
    3437: B5 34 02    CJNE A,0x34,0x343C               ; -> loc_343C
    343A: 80 05       SJMP 0x3441                      ; -> 0x3441

loc_343C:
    343C: 74 02       MOV A,#0x02                   
    343E: B5 34 05    CJNE A,0x34,0x3446               ; -> loc_3446
    3441: 75 15 00    MOV 0x15,#0x00                
    3444: 80 08       SJMP 0x344E                      ; -> 0x344E

loc_3446:
    3446: 75 0E 00    MOV 0x0E,#0x00                
    3449: 80 03       SJMP 0x344E                      ; -> 0x344E

loc_344B:
    344B: 75 0E 00    MOV 0x0E,#0x00                
    344E: E5 0E       MOV A,0x0E                    
    3450: 60 0E       JZ 0x3460                        ; -> 0x3460
    3452: E5 14       MOV A,0x14                    
    3454: 24 23       ADD A,#0x23                   
    3456: F5 82       MOV DPL(0x82),A               
    3458: E4          CLR A                         
    3459: 34 CA       ADDC A,#0xCA                  
    345B: F5 83       MOV DPH(0x83),A               
    345D: E5 15       MOV A,0x15                    
    345F: F0          MOVX @DPTR,A                  
    3460: 05 35       INC 0x35                      
    3462: E5 35       MOV A,0x35                    
    3464: 70 02       JNZ 0x3468                       ; -> 0x3468
    3466: 05 34       INC 0x34                      
    3468: 05 14       INC 0x14                      
    346A: 02 28 E3    LJMP 0x28E3                      ; -> 0x28E3

loc_346D:
    346D: 90 7F EC    MOV DPTR,#0x7FEC              
    3470: E0          MOVX A,@DPTR                  
    3471: FA          MOV R2,A                      
    3472: BA 01 0D    CJNE R2,#0x01,0x3482             ; -> 0x3482
    3475: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    3478: E4          CLR A                         
    3479: F0          MOVX @DPTR,A                  
    347A: E5 13       MOV A,0x13                    
    347C: 04          INC A                         
    347D: FA          MOV R2,A                      
    347E: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    3481: F0          MOVX @DPTR,A                  
    3482: 90 7F EC    MOV DPTR,#0x7FEC              
    3485: E0          MOVX A,@DPTR                  
    3486: FA          MOV R2,A                      
    3487: BA 01 02    CJNE R2,#0x01,0x348C             ; -> loc_348C
    348A: 80 01       SJMP 0x348D                      ; -> loc_348D

loc_348C:
    348C: 22          RET                           

loc_348D:
    348D: 90 7F 77    MOV DPTR,#0x7F77              
    3490: E0          MOVX A,@DPTR                  
    3491: FA          MOV R2,A                      
    3492: 60 01       JZ 0x3495                        ; -> loc_3495
    3494: 22          RET                           

loc_3495:
    3495: 90 7F 79    MOV DPTR,#0x7F79              
    3498: E0          MOVX A,@DPTR                  
    3499: FA          MOV R2,A                      
    349A: 60 01       JZ 0x349D                        ; -> loc_349D
    349C: 22          RET                           

loc_349D:
    349D: 90 7F 9F    MOV DPTR,#0x7F9F              
    34A0: E0          MOVX A,@DPTR                  
    34A1: FA          MOV R2,A                      
    34A2: 60 01       JZ 0x34A5                        ; -> loc_34A5
    34A4: 22          RET                           

loc_34A5:
    34A5: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    34A8: 74 01       MOV A,#0x01                   
    34AA: F0          MOVX @DPTR,A                  
    34AB: 90 7F 9D    MOV DPTR,#0x7F9D              
    34AE: E4          CLR A                         
    34AF: F0          MOVX @DPTR,A                  
    34B0: 22          RET                           

loc_34B1:
    34B1: 74 0F       MOV A,#0x0F                   
    34B3: B5 10 04    CJNE A,0x10,0x34BA               ; -> loc_34BA
    34B6: 74 01       MOV A,#0x01                   
    34B8: 80 01       SJMP 0x34BB                      ; -> 0x34BB

loc_34BA:
    34BA: E4          CLR A                         
    34BB: FA          MOV R2,A                      
    34BC: AF 11       MOV R7,0x11                   
    34BE: 85 12 41    MOV 0x41,0x12                 
    34C1: 75 14 00    MOV 0x14,#0x00                
    34C4: E5 14       MOV A,0x14                    
    34C6: B5 13 00    CJNE A,0x13,0x34C9               ; -> 0x34C9
    34C9: 40 03       JC 0x34CE                        ; -> loc_34CE
    34CB: 02 40 16    LJMP 0x4016                      ; -> loc_4016

loc_34CE:
    34CE: 75 18 00    MOV 0x18,#0x00                
    34D1: AB 14       MOV R3,0x14                   
    34D3: 7E 00       MOV R6,#0x00                  
    34D5: 74 66       MOV A,#0x66                   
    34D7: 2B          ADD A,R3                      
    34D8: FB          MOV R3,A                      
    34D9: E4          CLR A                         
    34DA: 3E          ADDC A,R6                     
    34DB: FE          MOV R6,A                      
    34DC: 8B 82       MOV 0x82,R3                   
    34DE: 74 CA       MOV A,#0xCA                   
    34E0: 2E          ADD A,R6                      
    34E1: F5 83       MOV DPH(0x83),A               
    34E3: E0          MOVX A,@DPTR                  
    34E4: F5 15       MOV 0x15,A                    
    34E6: E5 10       MOV A,0x10                    
    34E8: 60 03       JZ 0x34ED                        ; -> loc_34ED
    34EA: 02 3F F4    LJMP 0x3FF4                      ; -> loc_3FF4

loc_34ED:
    34ED: BF 01 02    CJNE R7,#0x01,0x34F2             ; -> loc_34F2
    34F0: 80 0F       SJMP 0x3501                      ; -> loc_3501

loc_34F2:
    34F2: BF 05 03    CJNE R7,#0x05,0x34F8             ; -> loc_34F8
    34F5: 02 3F 32    LJMP 0x3F32                      ; -> loc_3F32

loc_34F8:
    34F8: BF 06 03    CJNE R7,#0x06,0x34FE             ; -> loc_34FE
    34FB: 02 3F 57    LJMP 0x3F57                      ; -> loc_3F57

loc_34FE:
    34FE: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3501:
    3501: E4          CLR A                         
    3502: B5 41 03    CJNE A,0x41,0x3508               ; -> loc_3508
    3505: 02 35 A3    LJMP 0x35A3                      ; -> loc_35A3

loc_3508:
    3508: 74 01       MOV A,#0x01                   
    350A: B5 41 03    CJNE A,0x41,0x3510               ; -> loc_3510
    350D: 02 36 28    LJMP 0x3628                      ; -> loc_3628

loc_3510:
    3510: 74 02       MOV A,#0x02                   
    3512: B5 41 03    CJNE A,0x41,0x3518               ; -> loc_3518
    3515: 02 36 A3    LJMP 0x36A3                      ; -> loc_36A3

loc_3518:
    3518: 74 03       MOV A,#0x03                   
    351A: B5 41 03    CJNE A,0x41,0x3520               ; -> loc_3520
    351D: 02 3C 3D    LJMP 0x3C3D                      ; -> 0x3C3D

loc_3520:
    3520: 74 04       MOV A,#0x04                   
    3522: B5 41 03    CJNE A,0x41,0x3528               ; -> loc_3528
    3525: 02 3C 3B    LJMP 0x3C3B                      ; -> 0x3C3B

loc_3528:
    3528: 74 05       MOV A,#0x05                   
    352A: B5 41 03    CJNE A,0x41,0x3530               ; -> loc_3530
    352D: 02 3C 39    LJMP 0x3C39                      ; -> 0x3C39

loc_3530:
    3530: 74 06       MOV A,#0x06                   
    3532: B5 41 03    CJNE A,0x41,0x3538               ; -> loc_3538
    3535: 02 3C 36    LJMP 0x3C36                      ; -> loc_3C36

loc_3538:
    3538: 74 07       MOV A,#0x07                   
    353A: B5 41 03    CJNE A,0x41,0x3540               ; -> loc_3540
    353D: 02 3C 68    LJMP 0x3C68                      ; -> loc_3C68

loc_3540:
    3540: 74 08       MOV A,#0x08                   
    3542: B5 41 03    CJNE A,0x41,0x3548               ; -> loc_3548
    3545: 02 3C A7    LJMP 0x3CA7                      ; -> loc_3CA7

loc_3548:
    3548: 74 0B       MOV A,#0x0B                   
    354A: B5 41 03    CJNE A,0x41,0x3550               ; -> loc_3550
    354D: 02 3C B0    LJMP 0x3CB0                      ; -> loc_3CB0

loc_3550:
    3550: 74 0C       MOV A,#0x0C                   
    3552: B5 41 03    CJNE A,0x41,0x3558               ; -> loc_3558
    3555: 02 3C D3    LJMP 0x3CD3                      ; -> loc_3CD3

loc_3558:
    3558: 74 0D       MOV A,#0x0D                   
    355A: B5 41 03    CJNE A,0x41,0x3560               ; -> loc_3560
    355D: 02 3C F6    LJMP 0x3CF6                      ; -> loc_3CF6

loc_3560:
    3560: 74 0E       MOV A,#0x0E                   
    3562: B5 41 03    CJNE A,0x41,0x3568               ; -> loc_3568
    3565: 02 3D 19    LJMP 0x3D19                      ; -> loc_3D19

loc_3568:
    3568: 74 0F       MOV A,#0x0F                   
    356A: B5 41 03    CJNE A,0x41,0x3570               ; -> loc_3570
    356D: 02 3D 3C    LJMP 0x3D3C                      ; -> loc_3D3C

loc_3570:
    3570: 74 10       MOV A,#0x10                   
    3572: B5 41 03    CJNE A,0x41,0x3578               ; -> loc_3578
    3575: 02 3D 3C    LJMP 0x3D3C                      ; -> loc_3D3C

loc_3578:
    3578: 74 11       MOV A,#0x11                   
    357A: B5 41 03    CJNE A,0x41,0x3580               ; -> loc_3580
    357D: 02 3D 53    LJMP 0x3D53                      ; -> loc_3D53

loc_3580:
    3580: 74 57       MOV A,#0x57                   
    3582: B5 41 03    CJNE A,0x41,0x3588               ; -> loc_3588
    3585: 02 3D C1    LJMP 0x3DC1                      ; -> loc_3DC1

loc_3588:
    3588: 74 C0       MOV A,#0xC0                   
    358A: B5 41 03    CJNE A,0x41,0x3590               ; -> loc_3590
    358D: 02 3D F0    LJMP 0x3DF0                      ; -> loc_3DF0

loc_3590:
    3590: 74 C1       MOV A,#0xC1                   
    3592: B5 41 03    CJNE A,0x41,0x3598               ; -> loc_3598
    3595: 02 3E 26    LJMP 0x3E26                      ; -> loc_3E26

loc_3598:
    3598: 74 C2       MOV A,#0xC2                   
    359A: B5 41 03    CJNE A,0x41,0x35A0               ; -> loc_35A0
    359D: 02 3E 5E    LJMP 0x3E5E                      ; -> loc_3E5E

loc_35A0:
    35A0: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_35A3:
    35A3: 74 14       MOV A,#0x14                   
    35A5: B5 15 04    CJNE A,0x15,0x35AC               ; -> loc_35AC
    35A8: 74 01       MOV A,#0x01                   
    35AA: 80 01       SJMP 0x35AD                      ; -> 0x35AD

loc_35AC:
    35AC: E4          CLR A                         
    35AD: FB          MOV R3,A                      
    35AE: 60 04       JZ 0x35B4                        ; -> loc_35B4
    35B0: 7E 2A       MOV R6,#0x2A                  
    35B2: 80 0F       SJMP 0x35C3                      ; -> 0x35C3

loc_35B4:
    35B4: 74 06       MOV A,#0x06                   
    35B6: B5 15 05    CJNE A,0x15,0x35BE               ; -> loc_35BE
    35B9: 75 3E 28    MOV 0x3E,#0x28                
    35BC: 80 03       SJMP 0x35C1                      ; -> 0x35C1

loc_35BE:
    35BE: 75 3E 29    MOV 0x3E,#0x29                
    35C1: AE 3E       MOV R6,0x3E                   
    35C3: 75 50 01    MOV 0x50,#0x01                
    35C6: 8E 51       MOV 0x51,R6                   
    35C8: 75 82 00    MOV DPL(0x82),#0x00           
    35CB: C0 02       PUSH 0x02                     
    35CD: C0 03       PUSH 0x03                     
    35CF: C0 07       PUSH 0x07                     
    35D1: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    35D4: D0 07       POP 0x07                      
    35D6: D0 03       POP 0x03                      
    35D8: D0 02       POP 0x02                      
    35DA: EB          MOV A,R3                      
    35DB: 60 04       JZ 0x35E1                        ; -> loc_35E1
    35DD: 7B 10       MOV R3,#0x10                  
    35DF: 80 0D       SJMP 0x35EE                      ; -> 0x35EE

loc_35E1:
    35E1: 74 06       MOV A,#0x06                   
    35E3: B5 15 04    CJNE A,0x15,0x35EA               ; -> loc_35EA
    35E6: 7E 00       MOV R6,#0x00                  
    35E8: 80 02       SJMP 0x35EC                      ; -> 0x35EC

loc_35EA:
    35EA: 7E 08       MOV R6,#0x08                  
    35EC: 8E 03       MOV 0x03,R6                   
    35EE: 8B 16       MOV 0x16,R3                   
    35F0: 43 1A 01    ORL 0x1A,#0x01                
    35F3: E5 16       MOV A,0x16                    
    35F5: 60 05       JZ 0x35FC                        ; -> 0x35FC
    35F7: 74 08       MOV A,#0x08                   
    35F9: B5 16 17    CJNE A,0x16,0x3613               ; -> loc_3613
    35FC: 90 D8 2A    MOV DPTR,#0xD82A              
    35FF: E0          MOVX A,@DPTR                  
    3600: 90 D8 2A    MOV DPTR,#0xD82A              
    3603: 74 FF       MOV A,#0xFF                   
    3605: F0          MOVX @DPTR,A                  
    3606: 90 D8 2B    MOV DPTR,#0xD82B              
    3609: E0          MOVX A,@DPTR                  
    360A: 90 D8 2B    MOV DPTR,#0xD82B              
    360D: 74 FF       MOV A,#0xFF                   
    360F: F0          MOVX @DPTR,A                  
    3610: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3613:
    3613: 90 D8 2A    MOV DPTR,#0xD82A              
    3616: E0          MOVX A,@DPTR                  
    3617: 90 D8 2A    MOV DPTR,#0xD82A              
    361A: E4          CLR A                         
    361B: F0          MOVX @DPTR,A                  
    361C: 90 D8 2B    MOV DPTR,#0xD82B              
    361F: E0          MOVX A,@DPTR                  
    3620: 90 D8 2B    MOV DPTR,#0xD82B              
    3623: E4          CLR A                         
    3624: F0          MOVX @DPTR,A                  
    3625: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3628:
    3628: 74 0F       MOV A,#0x0F                   
    362A: 55 15       ANL A,0x15                    
    362C: F5 17       MOV 0x17,A                    
    362E: 74 04       MOV A,#0x04                   
    3630: B5 17 04    CJNE A,0x17,0x3637               ; -> loc_3637
    3633: 7B 65       MOV R3,#0x65                  
    3635: 80 1A       SJMP 0x3651                      ; -> 0x3651

loc_3637:
    3637: 74 02       MOV A,#0x02                   
    3639: B5 17 04    CJNE A,0x17,0x3640               ; -> loc_3640
    363C: 7E 64       MOV R6,#0x64                  
    363E: 80 0F       SJMP 0x364F                      ; -> 0x364F

loc_3640:
    3640: 74 01       MOV A,#0x01                   
    3642: B5 17 05    CJNE A,0x17,0x364A               ; -> loc_364A
    3645: 75 3E 63    MOV 0x3E,#0x63                
    3648: 80 03       SJMP 0x364D                      ; -> 0x364D

loc_364A:
    364A: 75 3E 62    MOV 0x3E,#0x62                
    364D: AE 3E       MOV R6,0x3E                   
    364F: 8E 03       MOV 0x03,R6                   
    3651: 75 50 01    MOV 0x50,#0x01                
    3654: 8B 51       MOV 0x51,R3                   
    3656: 75 82 00    MOV DPL(0x82),#0x00           
    3659: C0 02       PUSH 0x02                     
    365B: C0 07       PUSH 0x07                     
    365D: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3660: D0 07       POP 0x07                      
    3662: D0 02       POP 0x02                      
    3664: 90 7F 7C    MOV DPTR,#0x7F7C              
    3667: E0          MOVX A,@DPTR                  
    3668: FB          MOV R3,A                      
    3669: 53 03 DF    ANL 0x03,#0xDF                
    366C: 74 80       MOV A,#0x80                   
    366E: 55 15       ANL A,0x15                    
    3670: 03          RR A                          
    3671: 03          RR A                          
    3672: 54 3F       ANL A,#0x3F                   
    3674: FE          MOV R6,A                      
    3675: 90 7F 7C    MOV DPTR,#0x7F7C              
    3678: 4B          ORL A,R3                      
    3679: F0          MOVX @DPTR,A                  
    367A: 90 7F 7C    MOV DPTR,#0x7F7C              
    367D: E0          MOVX A,@DPTR                  
    367E: FB          MOV R3,A                      
    367F: 60 0F       JZ 0x3690                        ; -> loc_3690
    3681: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3684: E0          MOVX A,@DPTR                  
    3685: FB          MOV R3,A                      
    3686: 43 03 01    ORL 0x03,#0x01                
    3689: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    368C: EB          MOV A,R3                      
    368D: F0          MOVX @DPTR,A                  
    368E: 80 0D       SJMP 0x369D                      ; -> 0x369D

loc_3690:
    3690: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3693: E0          MOVX A,@DPTR                  
    3694: FB          MOV R3,A                      
    3695: 53 03 FE    ANL 0x03,#0xFE                
    3698: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    369B: EB          MOV A,R3                      
    369C: F0          MOVX @DPTR,A                  
    369D: 43 1A 02    ORL 0x1A,#0x02                
    36A0: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_36A3:
    36A3: 90 7F 86    MOV DPTR,#0x7F86              
    36A6: E5 15       MOV A,0x15                    
    36A8: F0          MOVX @DPTR,A                  
    36A9: 90 7F 87    MOV DPTR,#0x7F87              
    36AC: 74 01       MOV A,#0x01                   
    36AE: F0          MOVX @DPTR,A                  
    36AF: 90 7F FA    MOV DPTR,#0x7FFA              
    36B2: E4          CLR A                         
    36B3: F0          MOVX @DPTR,A                  
    36B4: 75 0F 00    MOV 0x0F,#0x00                
    36B7: 74 0C       MOV A,#0x0C                   
    36B9: 55 15       ANL A,0x15                    
    36BB: FB          MOV R3,A                      
    36BC: 90 7F E2    MOV DPTR,#0x7FE2              
    36BF: F0          MOVX @DPTR,A                  
    36C0: EB          MOV A,R3                      
    36C1: 70 0A       JNZ 0x36CD                       ; -> loc_36CD
    36C3: 90 7F F9    MOV DPTR,#0x7FF9              
    36C6: E0          MOVX A,@DPTR                  
    36C7: FB          MOV R3,A                      
    36C8: 70 03       JNZ 0x36CD                       ; -> loc_36CD
    36CA: 02 38 F7    LJMP 0x38F7                      ; -> 0x38F7

loc_36CD:
    36CD: 90 7F FF    MOV DPTR,#0x7FFF              
    36D0: E0          MOVX A,@DPTR                  
    36D1: FB          MOV R3,A                      
    36D2: 60 03       JZ 0x36D7                        ; -> loc_36D7
    36D4: 02 38 F7    LJMP 0x38F7                      ; -> 0x38F7

loc_36D7:
    36D7: 75 0F 01    MOV 0x0F,#0x01                
    36DA: 90 7F E2    MOV DPTR,#0x7FE2              
    36DD: E0          MOVX A,@DPTR                  
    36DE: 03          RR A                          
    36DF: 03          RR A                          
    36E0: 54 3F       ANL A,#0x3F                   
    36E2: FB          MOV R3,A                      
    36E3: 74 03       MOV A,#0x03                   
    36E5: B5 03 00    CJNE A,0x03,0x36E8               ; -> 0x36E8
    36E8: 50 03       JNC 0x36ED                       ; -> loc_36ED
    36EA: 02 38 DA    LJMP 0x38DA                      ; -> 0x38DA

loc_36ED:
    36ED: EB          MOV A,R3                      
    36EE: 2B          ADD A,R3                      
    36EF: 2B          ADD A,R3                      
    36F0: 90 36 F4    MOV DPTR,#0x36F4              
    36F3: 73          JMP @A+DPTR                   
    36F4: 02 37 00    LJMP 0x3700                      ; -> 0x3700
    36F7: 02          DB 0x02                       ; data
    36F8: 37          DB 0x37                       ; data
    36F9: A0          DB 0xA0                       ; data
    36FA: 02          DB 0x02                       ; data
    36FB: 37          DB 0x37                       ; data
    36FC: F5          DB 0xF5                       ; data
    36FD: 02          DB 0x02                       ; data
    36FE: 38          DB 0x38                       ; data
    36FF: 77          DB 0x77                       ; data
    3700: 90 7F F9    MOV DPTR,#0x7FF9              
    3703: E4          CLR A                         
    3704: F0          MOVX @DPTR,A                  
    3705: 90 7F 93    MOV DPTR,#0x7F93              
    3708: E0          MOVX A,@DPTR                  
    3709: 44 08       ORL A,#0x08                   
    370B: F0          MOVX @DPTR,A                  
    370C: 90 CE 71    MOV DPTR,#0xCE71              
    370F: E0          MOVX A,@DPTR                  
    3710: FB          MOV R3,A                      
    3711: 53 03 FE    ANL 0x03,#0xFE                
    3714: 90 CE 71    MOV DPTR,#0xCE71              
    3717: EB          MOV A,R3                      
    3718: F0          MOVX @DPTR,A                  
    3719: 90 C2 00    MOV DPTR,#0xC200              
    371C: E0          MOVX A,@DPTR                  
    371D: FB          MOV R3,A                      
    371E: 53 03 F7    ANL 0x03,#0xF7                
    3721: 90 C2 00    MOV DPTR,#0xC200              
    3724: EB          MOV A,R3                      
    3725: F0          MOVX @DPTR,A                  
    3726: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    3729: 74 84       MOV A,#0x84                   
    372B: F0          MOVX @DPTR,A                  
    372C: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    372F: E0          MOVX A,@DPTR                  
    3730: FB          MOV R3,A                      
    3731: 53 03 0F    ANL 0x03,#0x0F                
    3734: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    3737: EB          MOV A,R3                      
    3738: F0          MOVX @DPTR,A                  
    3739: E0          MOVX A,@DPTR                  
    373A: FB          MOV R3,A                      
    373B: 74 C0       MOV A,#0xC0                   
    373D: 55 15       ANL A,0x15                    
    373F: 23          RL A                          
    3740: 23          RL A                          
    3741: 54 03       ANL A,#0x03                   
    3743: 24 28       ADD A,#0x28                   
    3745: F8          MOV R0,A                      
    3746: 86 06       MOV 0x06,@R0                  
    3748: 53 06 0F    ANL 0x06,#0x0F                
    374B: EE          MOV A,R6                      
    374C: C4          SWAP A                        
    374D: 54 F0       ANL A,#0xF0                   
    374F: FE          MOV R6,A                      
    3750: 42 03       ORL 0x03,A                    
    3752: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    3755: EB          MOV A,R3                      
    3756: F0          MOVX @DPTR,A                  
    3757: 90 CC 7C    MOV DPTR,#0xCC7C                 ; register block CC00
    375A: E0          MOVX A,@DPTR                  
    375B: FB          MOV R3,A                      
    375C: 43 03 0F    ORL 0x03,#0x0F                
    375F: 90 CC 7C    MOV DPTR,#0xCC7C                 ; register block CC00
    3762: EB          MOV A,R3                      
    3763: F0          MOVX @DPTR,A                  
    3764: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    3767: E4          CLR A                         
    3768: F0          MOVX @DPTR,A                  
    3769: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    376C: F0          MOVX @DPTR,A                  
    376D: 75 19 00    MOV 0x19,#0x00                
    3770: 74 FC       MOV A,#0xFC                   
    3772: 25 19       ADD A,0x19                    
    3774: 50 03       JNC 0x3779                       ; -> loc_3779
    3776: 02 38 DA    LJMP 0x38DA                      ; -> 0x38DA

loc_3779:
    3779: AE 19       MOV R6,0x19                   
    377B: 7D 00       MOV R5,#0x00                  
    377D: 74 28       MOV A,#0x28                   
    377F: 2E          ADD A,R6                      
    3780: FE          MOV R6,A                      
    3781: E4          CLR A                         
    3782: 3D          ADDC A,R5                     
    3783: FD          MOV R5,A                      
    3784: 8E 04       MOV 0x04,R6                   
    3786: 74 CE       MOV A,#0xCE                   
    3788: 2D          ADD A,R5                      
    3789: FB          MOV R3,A                      
    378A: 8E 82       MOV 0x82,R6                   
    378C: 74 CE       MOV A,#0xCE                   
    378E: 2D          ADD A,R5                      
    378F: F5 83       MOV DPH(0x83),A               
    3791: E0          MOVX A,@DPTR                  
    3792: FD          MOV R5,A                      
    3793: 53 05 CF    ANL 0x05,#0xCF                
    3796: 8C 82       MOV 0x82,R4                   
    3798: 8B 83       MOV 0x83,R3                   
    379A: ED          MOV A,R5                      
    379B: F0          MOVX @DPTR,A                  
    379C: 05 19       INC 0x19                      
    379E: 80 D0       SJMP 0x3770                      ; -> 0x3770
    37A0: 90          DB 0x90                       ; data
    37A1: 7F          DB 0x7F                       ; data
    37A2: F9          DB 0xF9                       ; data
    37A3: 74          DB 0x74                       ; data
    37A4: 01          DB 0x01                       ; data
    37A5: F0          DB 0xF0                       ; data
    37A6: 90          DB 0x90                       ; data
    37A7: 7F          DB 0x7F                       ; data
    37A8: 93          DB 0x93                       ; data
    37A9: E0          DB 0xE0                       ; data
    37AA: 54          DB 0x54                       ; data
    37AB: F7          DB 0xF7                       ; data
    37AC: F0          DB 0xF0                       ; data
    37AD: 75          DB 0x75                       ; data
    37AE: 82          DB 0x82                       ; data
    37AF: 00          DB 0x00                       ; data
    37B0: C0          DB 0xC0                       ; data
    37B1: 02          DB 0x02                       ; data
    37B2: C0          DB 0xC0                       ; data
    37B3: 07          DB 0x07                       ; data
    37B4: 12          DB 0x12                       ; data
    37B5: 28          DB 0x28                       ; data
    37B6: 20          DB 0x20                       ; data
    37B7: D0          DB 0xD0                       ; data
    37B8: 07          DB 0x07                       ; data
    37B9: D0          DB 0xD0                       ; data
    37BA: 02          DB 0x02                       ; data
    37BB: 90          DB 0x90                       ; data
    37BC: C8          DB 0xC8                       ; data
    37BD: 0F          DB 0x0F                       ; data
    37BE: E0          DB 0xE0                       ; data
    37BF: FB          DB 0xFB                       ; data
    37C0: 53          DB 0x53                       ; data
    37C1: 03          DB 0x03                       ; data
    37C2: FD          DB 0xFD                       ; data
    37C3: 90          DB 0x90                       ; data
    37C4: C8          DB 0xC8                       ; data
    37C5: 0F          DB 0x0F                       ; data
    37C6: EB          DB 0xEB                       ; data
    37C7: F0          DB 0xF0                       ; data
    37C8: 90          DB 0x90                       ; data
    37C9: CC          DB 0xCC                       ; data
    37CA: 00          DB 0x00                       ; data
    37CB: E4          DB 0xE4                       ; data
    37CC: F0          DB 0xF0                       ; data
    37CD: 90          DB 0x90                       ; data
    37CE: CE          DB 0xCE                       ; data
    37CF: 71          DB 0x71                       ; data
    37D0: E0          DB 0xE0                       ; data
    37D1: FB          DB 0xFB                       ; data
    37D2: 43          DB 0x43                       ; data
    37D3: 03          DB 0x03                       ; data
    37D4: 01          DB 0x01                       ; data
    37D5: 90          DB 0x90                       ; data
    37D6: CE          DB 0xCE                       ; data
    37D7: 71          DB 0x71                       ; data
    37D8: EB          DB 0xEB                       ; data
    37D9: F0          DB 0xF0                       ; data
    37DA: 90          DB 0x90                       ; data
    37DB: C2          DB 0xC2                       ; data
    37DC: 00          DB 0x00                       ; data
    37DD: E0          DB 0xE0                       ; data
    37DE: FB          DB 0xFB                       ; data
    37DF: 43          DB 0x43                       ; data
    37E0: 03          DB 0x03                       ; data
    37E1: 08          DB 0x08                       ; data
    37E2: 90          DB 0x90                       ; data
    37E3: C2          DB 0xC2                       ; data
    37E4: 00          DB 0x00                       ; data
    37E5: EB          DB 0xEB                       ; data
    37E6: F0          DB 0xF0                       ; data
    37E7: 90          DB 0x90                       ; data
    37E8: C8          DB 0xC8                       ; data
    37E9: 04          DB 0x04                       ; data
    37EA: 74          DB 0x74                       ; data
    37EB: 85          DB 0x85                       ; data
    37EC: F0          DB 0xF0                       ; data
    37ED: 90          DB 0x90                       ; data
    37EE: CC          DB 0xCC                       ; data
    37EF: 5E          DB 0x5E                       ; data
    37F0: E4          DB 0xE4                       ; data
    37F1: F0          DB 0xF0                       ; data
    37F2: 02          DB 0x02                       ; data
    37F3: 38          DB 0x38                       ; data
    37F4: DA          DB 0xDA                       ; data
    37F5: 90          DB 0x90                       ; data
    37F6: 7F          DB 0x7F                       ; data
    37F7: F9          DB 0xF9                       ; data
    37F8: 74          DB 0x74                       ; data
    37F9: 02          DB 0x02                       ; data
    37FA: F0          DB 0xF0                       ; data
    37FB: 90          DB 0x90                       ; data
    37FC: 7F          DB 0x7F                       ; data
    37FD: 93          DB 0x93                       ; data
    37FE: E0          DB 0xE0                       ; data
    37FF: 54          DB 0x54                       ; data
    3800: F7          DB 0xF7                       ; data
    3801: F0          DB 0xF0                       ; data
    3802: 75          DB 0x75                       ; data
    3803: 82          DB 0x82                       ; data
    3804: 00          DB 0x00                       ; data
    3805: C0          DB 0xC0                       ; data
    3806: 02          DB 0x02                       ; data
    3807: C0          DB 0xC0                       ; data
    3808: 07          DB 0x07                       ; data
    3809: 12          DB 0x12                       ; data
    380A: 28          DB 0x28                       ; data
    380B: 20          DB 0x20                       ; data
    380C: D0          DB 0xD0                       ; data
    380D: 07          DB 0x07                       ; data
    380E: D0          DB 0xD0                       ; data
    380F: 02          DB 0x02                       ; data
    3810: 90          DB 0x90                       ; data
    3811: C8          DB 0xC8                       ; data
    3812: 0F          DB 0x0F                       ; data
    3813: E0          DB 0xE0                       ; data
    3814: FB          DB 0xFB                       ; data
    3815: 53          DB 0x53                       ; data
    3816: 03          DB 0x03                       ; data
    3817: FD          DB 0xFD                       ; data
    3818: 90          DB 0x90                       ; data
    3819: C8          DB 0xC8                       ; data
    381A: 0F          DB 0x0F                       ; data
    381B: EB          DB 0xEB                       ; data
    381C: F0          DB 0xF0                       ; data
    381D: 90          DB 0x90                       ; data
    381E: CC          DB 0xCC                       ; data
    381F: 00          DB 0x00                       ; data
    3820: E4          DB 0xE4                       ; data
    3821: F0          DB 0xF0                       ; data
    3822: 90          DB 0x90                       ; data
    3823: C8          DB 0xC8                       ; data
    3824: 4B          DB 0x4B                       ; data
    3825: E0          DB 0xE0                       ; data
    3826: FB          DB 0xFB                       ; data
    3827: 30          DB 0x30                       ; data
    3828: E0          DB 0xE0                       ; data
    3829: 34          DB 0x34                       ; data
    382A: 90          DB 0x90                       ; data
    382B: C8          DB 0xC8                       ; data
    382C: 7D          DB 0x7D                       ; data
    382D: 74          DB 0x74                       ; data
    382E: 20          DB 0x20                       ; data
    382F: F0          DB 0xF0                       ; data
    3830: 90          DB 0x90                       ; data
    3831: C8          DB 0xC8                       ; data
    3832: 7E          DB 0x7E                       ; data
    3833: 74          DB 0x74                       ; data
    3834: FF          DB 0xFF                       ; data
    3835: F0          DB 0xF0                       ; data
    3836: 90          DB 0x90                       ; data
    3837: C8          DB 0xC8                       ; data
    3838: 7F          DB 0x7F                       ; data
    3839: 74          DB 0x74                       ; data
    383A: 01          DB 0x01                       ; data
    383B: F0          DB 0xF0                       ; data
    383C: 90          DB 0x90                       ; data
    383D: D8          DB 0xD8                       ; data
    383E: 04          DB 0x04                       ; data
    383F: E0          DB 0xE0                       ; data
    3840: FB          DB 0xFB                       ; data
    3841: 53          DB 0x53                       ; data
    3842: 03          DB 0x03                       ; data
    3843: 0F          DB 0x0F                       ; data
    3844: 90          DB 0x90                       ; data
    3845: C8          DB 0xC8                       ; data
    3846: 70          DB 0x70                       ; data
    3847: EB          DB 0xEB                       ; data
    3848: F0          DB 0xF0                       ; data
    3849: 90          DB 0x90                       ; data
    384A: C8          DB 0xC8                       ; data
    384B: 71          DB 0x71                       ; data
    384C: 74          DB 0x74                       ; data
    384D: 80          DB 0x80                       ; data
    384E: F0          DB 0xF0                       ; data
    384F: 90          DB 0x90                       ; data
    3850: C8          DB 0xC8                       ; data
    3851: 63          DB 0x63                       ; data
    3852: E0          DB 0xE0                       ; data
    3853: FB          DB 0xFB                       ; data
    3854: 43          DB 0x43                       ; data
    3855: 03          DB 0x03                       ; data
    3856: 10          DB 0x10                       ; data
    3857: 90          DB 0x90                       ; data
    3858: C8          DB 0xC8                       ; data
    3859: 63          DB 0x63                       ; data
    385A: EB          DB 0xEB                       ; data
    385B: F0          DB 0xF0                       ; data
    385C: 80          DB 0x80                       ; data
    385D: 7C          DB 0x7C                       ; data
    385E: 90          DB 0x90                       ; data
    385F: CC          DB 0xCC                       ; data
    3860: 5E          DB 0x5E                       ; data
    3861: E0          DB 0xE0                       ; data
    3862: FB          DB 0xFB                       ; data
    3863: 53          DB 0x53                       ; data
    3864: 03          DB 0x03                       ; data
    3865: 0F          DB 0x0F                       ; data
    3866: 90          DB 0x90                       ; data
    3867: CC          DB 0xCC                       ; data
    3868: 5E          DB 0x5E                       ; data
    3869: EB          DB 0xEB                       ; data
    386A: F0          DB 0xF0                       ; data
    386B: E0          DB 0xE0                       ; data
    386C: FB          DB 0xFB                       ; data
    386D: 43          DB 0x43                       ; data
    386E: 03          DB 0x03                       ; data
    386F: 70          DB 0x70                       ; data
    3870: 90          DB 0x90                       ; data
    3871: CC          DB 0xCC                       ; data
    3872: 5E          DB 0x5E                       ; data
    3873: EB          DB 0xEB                       ; data
    3874: F0          DB 0xF0                       ; data
    3875: 80          DB 0x80                       ; data
    3876: 63          DB 0x63                       ; data
    3877: 90          DB 0x90                       ; data
    3878: 7F          DB 0x7F                       ; data
    3879: F9          DB 0xF9                       ; data
    387A: 74          DB 0x74                       ; data
    387B: 03          DB 0x03                       ; data
    387C: F0          DB 0xF0                       ; data
    387D: 90          DB 0x90                       ; data
    387E: 7F          DB 0x7F                       ; data
    387F: 93          DB 0x93                       ; data
    3880: E0          DB 0xE0                       ; data
    3881: 54          DB 0x54                       ; data
    3882: F7          DB 0xF7                       ; data
    3883: F0          DB 0xF0                       ; data
    3884: 75          DB 0x75                       ; data
    3885: 82          DB 0x82                       ; data
    3886: 00          DB 0x00                       ; data
    3887: C0          DB 0xC0                       ; data
    3888: 02          DB 0x02                       ; data
    3889: C0          DB 0xC0                       ; data
    388A: 07          DB 0x07                       ; data
    388B: 12          DB 0x12                       ; data
    388C: 28          DB 0x28                       ; data
    388D: 20          DB 0x20                       ; data
    388E: D0          DB 0xD0                       ; data
    388F: 07          DB 0x07                       ; data
    3890: D0          DB 0xD0                       ; data
    3891: 02          DB 0x02                       ; data
    3892: 90          DB 0x90                       ; data
    3893: C8          DB 0xC8                       ; data
    3894: 0F          DB 0x0F                       ; data
    3895: E0          DB 0xE0                       ; data
    3896: FB          DB 0xFB                       ; data
    3897: 53          DB 0x53                       ; data
    3898: 03          DB 0x03                       ; data
    3899: FD          DB 0xFD                       ; data
    389A: 90          DB 0x90                       ; data
    389B: C8          DB 0xC8                       ; data
    389C: 0F          DB 0x0F                       ; data
    389D: EB          DB 0xEB                       ; data
    389E: F0          DB 0xF0                       ; data
    389F: 90          DB 0x90                       ; data
    38A0: CC          DB 0xCC                       ; data
    38A1: 00          DB 0x00                       ; data
    38A2: E4          DB 0xE4                       ; data
    38A3: F0          DB 0xF0                       ; data
    38A4: 90          DB 0x90                       ; data
    38A5: D8          DB 0xD8                       ; data
    38A6: 04          DB 0x04                       ; data
    38A7: E0          DB 0xE0                       ; data
    38A8: 54          DB 0x54                       ; data
    38A9: 0F          DB 0x0F                       ; data
    38AA: C4          DB 0xC4                       ; data
    38AB: 54          DB 0x54                       ; data
    38AC: F0          DB 0xF0                       ; data
    38AD: FB          DB 0xFB                       ; data
    38AE: 53          DB 0x53                       ; data
    38AF: 03          DB 0x03                       ; data
    38B0: F0          DB 0xF0                       ; data
    38B1: 90          DB 0x90                       ; data
    38B2: C8          DB 0xC8                       ; data
    38B3: 70          DB 0x70                       ; data
    38B4: EB          DB 0xEB                       ; data
    38B5: F0          DB 0xF0                       ; data
    38B6: 90          DB 0x90                       ; data
    38B7: C8          DB 0xC8                       ; data
    38B8: 71          DB 0x71                       ; data
    38B9: E0          DB 0xE0                       ; data
    38BA: FB          DB 0xFB                       ; data
    38BB: 53          DB 0x53                       ; data
    38BC: 03          DB 0x03                       ; data
    38BD: BF          DB 0xBF                       ; data
    38BE: 90          DB 0x90                       ; data
    38BF: C8          DB 0xC8                       ; data
    38C0: 71          DB 0x71                       ; data
    38C1: EB          DB 0xEB                       ; data
    38C2: F0          DB 0xF0                       ; data
    38C3: E0          DB 0xE0                       ; data
    38C4: FB          DB 0xFB                       ; data
    38C5: 43          DB 0x43                       ; data
    38C6: 03          DB 0x03                       ; data
    38C7: 80          DB 0x80                       ; data
    38C8: 90          DB 0x90                       ; data
    38C9: C8          DB 0xC8                       ; data
    38CA: 71          DB 0x71                       ; data
    38CB: EB          DB 0xEB                       ; data
    38CC: F0          DB 0xF0                       ; data
    38CD: 90          DB 0x90                       ; data
    38CE: C8          DB 0xC8                       ; data
    38CF: 63          DB 0x63                       ; data
    38D0: E0          DB 0xE0                       ; data
    38D1: FB          DB 0xFB                       ; data
    38D2: 43          DB 0x43                       ; data
    38D3: 03          DB 0x03                       ; data
    38D4: 10          DB 0x10                       ; data
    38D5: 90          DB 0x90                       ; data
    38D6: C8          DB 0xC8                       ; data
    38D7: 63          DB 0x63                       ; data
    38D8: EB          DB 0xEB                       ; data
    38D9: F0          DB 0xF0                       ; data
    38DA: 90 7F A2    MOV DPTR,#0x7FA2              
    38DD: E0          MOVX A,@DPTR                  
    38DE: FB          MOV R3,A                      
    38DF: BB 05 00    CJNE R3,#0x05,0x38E2             ; -> 0x38E2
    38E2: 40 13       JC 0x38F7                        ; -> 0x38F7
    38E4: E5 15       MOV A,0x15                    
    38E6: 30 E5 04    JNB ACC.5,0x38ED                 ; -> loc_38ED
    38E9: 7B 01       MOV R3,#0x01                  
    38EB: 80 02       SJMP 0x38EF                      ; -> 0x38EF

loc_38ED:
    38ED: 7B 00       MOV R3,#0x00                  
    38EF: 53 03 01    ANL 0x03,#0x01                
    38F2: 90 C6 00    MOV DPTR,#0xC600              
    38F5: EB          MOV A,R3                      
    38F6: F0          MOVX @DPTR,A                  
    38F7: 74 03       MOV A,#0x03                   
    38F9: 55 15       ANL A,0x15                    
    38FB: FB          MOV R3,A                      
    38FC: 74 03       MOV A,#0x03                   
    38FE: B5 03 00    CJNE A,0x03,0x3901               ; -> 0x3901
    3901: 50 03       JNC 0x3906                       ; -> loc_3906
    3903: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3906:
    3906: EB          MOV A,R3                      
    3907: 2B          ADD A,R3                      
    3908: 2B          ADD A,R3                      
    3909: 90 39 0D    MOV DPTR,#0x390D              
    390C: 73          JMP @A+DPTR                   
    390D: 02 39 19    LJMP 0x3919                      ; -> 0x3919
    3910: 02          DB 0x02                       ; data
    3911: 3A          DB 0x3A                       ; data
    3912: 8D          DB 0x8D                       ; data
    3913: 02          DB 0x02                       ; data
    3914: 3B          DB 0x3B                       ; data
    3915: 65          DB 0x65                       ; data
    3916: 02          DB 0x02                       ; data
    3917: 3B          DB 0x3B                       ; data
    3918: 65          DB 0x65                       ; data
    3919: 75 50 04    MOV 0x50,#0x04                
    391C: 75 51 11    MOV 0x51,#0x11                
    391F: 75 82 00    MOV DPL(0x82),#0x00           
    3922: C0 02       PUSH 0x02                     
    3924: C0 07       PUSH 0x07                     
    3926: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3929: D0 07       POP 0x07                      
    392B: D0 02       POP 0x02                      
    392D: E5 15       MOV A,0x15                    
    392F: 30 E5 04    JNB ACC.5,0x3936                 ; -> loc_3936
    3932: 7B 01       MOV R3,#0x01                  
    3934: 80 02       SJMP 0x3938                      ; -> 0x3938

loc_3936:
    3936: 7B 00       MOV R3,#0x00                  
    3938: 53 03 01    ANL 0x03,#0x01                
    393B: 90 C6 00    MOV DPTR,#0xC600              
    393E: EB          MOV A,R3                      
    393F: F0          MOVX @DPTR,A                  
    3940: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    3943: E0          MOVX A,@DPTR                  
    3944: FB          MOV R3,A                      
    3945: 90 7F E2    MOV DPTR,#0x7FE2              
    3948: 74 01       MOV A,#0x01                   
    394A: 5B          ANL A,R3                      
    394B: F0          MOVX @DPTR,A                  
    394C: 90 7F E2    MOV DPTR,#0x7FE2              
    394F: E0          MOVX A,@DPTR                  
    3950: FB          MOV R3,A                      
    3951: 60 73       JZ 0x39C6                        ; -> 0x39C6
    3953: C0 02       PUSH 0x02                     
    3955: C0 07       PUSH 0x07                     
    3957: 12 12 9A    LCALL 0x129A                     ; -> sub_129A
    395A: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    395D: E4          CLR A                         
    395E: F0          MOVX @DPTR,A                  
    395F: 90 7F A5    MOV DPTR,#0x7FA5              
    3962: E0          MOVX A,@DPTR                  
    3963: 90 CE 76    MOV DPTR,#0xCE76              
    3966: F0          MOVX @DPTR,A                  
    3967: 75 82 00    MOV DPL(0x82),#0x00           
    396A: 12 28 20    LCALL 0x2820                     ; -> sub_2820
    396D: D0 07       POP 0x07                      
    396F: D0 02       POP 0x02                      
    3971: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    3974: E0          MOVX A,@DPTR                  
    3975: FB          MOV R3,A                      
    3976: 53 03 FD    ANL 0x03,#0xFD                
    3979: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    397C: EB          MOV A,R3                      
    397D: F0          MOVX @DPTR,A                  
    397E: E5 15       MOV A,0x15                    
    3980: 30 E5 04    JNB ACC.5,0x3987                 ; -> loc_3987
    3983: 7B 01       MOV R3,#0x01                  
    3985: 80 02       SJMP 0x3989                      ; -> 0x3989

loc_3987:
    3987: 7B 00       MOV R3,#0x00                  
    3989: 53 03 01    ANL 0x03,#0x01                
    398C: 43 03 20    ORL 0x03,#0x20                
    398F: 90 C6 00    MOV DPTR,#0xC600              
    3992: EB          MOV A,R3                      
    3993: F0          MOVX @DPTR,A                  
    3994: 90 D8 0D    MOV DPTR,#0xD80D              
    3997: E0          MOVX A,@DPTR                  
    3998: FB          MOV R3,A                      
    3999: 53 03 0F    ANL 0x03,#0x0F                
    399C: 90 D8 04    MOV DPTR,#0xD804              
    399F: E0          MOVX A,@DPTR                  
    39A0: F4          CPL A                         
    39A1: FC          MOV R4,A                      
    39A2: 42 03       ORL 0x03,A                    
    39A4: BB 0F 02    CJNE R3,#0x0F,0x39A9             ; -> loc_39A9
    39A7: 80 15       SJMP 0x39BE                      ; -> loc_39BE

loc_39A9:
    39A9: 90 D8 0D    MOV DPTR,#0xD80D              
    39AC: E0          MOVX A,@DPTR                  
    39AD: FC          MOV R4,A                      
    39AE: 53 04 0F    ANL 0x04,#0x0F                
    39B1: 90 D8 04    MOV DPTR,#0xD804              
    39B4: E0          MOVX A,@DPTR                  
    39B5: F4          CPL A                         
    39B6: FD          MOV R5,A                      
    39B7: 74 0F       MOV A,#0x0F                   
    39B9: 5D          ANL A,R5                      
    39BA: 4C          ORL A,R4                      
    39BB: FB          MOV R3,A                      
    39BC: 80 E6       SJMP 0x39A4                      ; -> 0x39A4

loc_39BE:
    39BE: 7B 05       MOV R3,#0x05                  
    39C0: DB FE       DJNZ R3,0x39C0                   ; -> 0x39C0
    39C2: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    39C5: E0          MOVX A,@DPTR                  
    39C6: 90 7F A2    MOV DPTR,#0x7FA2              
    39C9: E0          MOVX A,@DPTR                  
    39CA: FB          MOV R3,A                      
    39CB: E4          CLR A                         
    39CC: BB 04 01    CJNE R3,#0x04,0x39D0             ; -> 0x39D0
    39CF: 04          INC A                         
    39D0: FB          MOV R3,A                      
    39D1: 90 7F E2    MOV DPTR,#0x7FE2              
    39D4: E0          MOVX A,@DPTR                  
    39D5: FC          MOV R4,A                      
    39D6: 4B          ORL A,R3                      
    39D7: 70 03       JNZ 0x39DC                       ; -> loc_39DC
    39D9: 02 3A 67    LJMP 0x3A67                      ; -> loc_3A67

loc_39DC:
    39DC: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    39DF: E0          MOVX A,@DPTR                  
    39E0: FB          MOV R3,A                      
    39E1: 43 03 10    ORL 0x03,#0x10                
    39E4: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    39E7: EB          MOV A,R3                      
    39E8: F0          MOVX @DPTR,A                  
    39E9: 90 7F E2    MOV DPTR,#0x7FE2              
    39EC: E0          MOVX A,@DPTR                  
    39ED: FB          MOV R3,A                      
    39EE: 90 7F 8D    MOV DPTR,#0x7F8D              
    39F1: E0          MOVX A,@DPTR                  
    39F2: FC          MOV R4,A                      
    39F3: 4B          ORL A,R3                      
    39F4: F0          MOVX @DPTR,A                  
    39F5: 90 7F A2    MOV DPTR,#0x7FA2              
    39F8: 74 02       MOV A,#0x02                   
    39FA: F0          MOVX @DPTR,A                  
    39FB: 75 27 01    MOV 0x27,#0x01                
    39FE: 90 7F F9    MOV DPTR,#0x7FF9              
    3A01: E0          MOVX A,@DPTR                  
    3A02: FB          MOV R3,A                      
    3A03: 70 2B       JNZ 0x3A30                       ; -> 0x3A30
    3A05: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    3A08: E0          MOVX A,@DPTR                  
    3A09: FB          MOV R3,A                      
    3A0A: 53 03 0F    ANL 0x03,#0x0F                
    3A0D: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    3A10: EB          MOV A,R3                      
    3A11: F0          MOVX @DPTR,A                  
    3A12: E0          MOVX A,@DPTR                  
    3A13: FB          MOV R3,A                      
    3A14: 74 C0       MOV A,#0xC0                   
    3A16: 55 15       ANL A,0x15                    
    3A18: 23          RL A                          
    3A19: 23          RL A                          
    3A1A: 54 03       ANL A,#0x03                   
    3A1C: 24 28       ADD A,#0x28                   
    3A1E: F8          MOV R0,A                      
    3A1F: 86 04       MOV 0x04,@R0                  
    3A21: 53 04 0F    ANL 0x04,#0x0F                
    3A24: EC          MOV A,R4                      
    3A25: C4          SWAP A                        
    3A26: 54 F0       ANL A,#0xF0                   
    3A28: FC          MOV R4,A                      
    3A29: 42 03       ORL 0x03,A                    
    3A2B: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    3A2E: EB          MOV A,R3                      
    3A2F: F0          MOVX @DPTR,A                  
    3A30: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    3A33: E0          MOVX A,@DPTR                  
    3A34: FB          MOV R3,A                      
    3A35: 54 0F       ANL A,#0x0F                   
    3A37: 70 0D       JNZ 0x3A46                       ; -> 0x3A46
    3A39: 90 CA A3    MOV DPTR,#0xCAA3              
    3A3C: E0          MOVX A,@DPTR                  
    3A3D: FB          MOV R3,A                      
    3A3E: 53 03 FD    ANL 0x03,#0xFD                
    3A41: 90 CA A3    MOV DPTR,#0xCAA3              
    3A44: EB          MOV A,R3                      
    3A45: F0          MOVX @DPTR,A                  
    3A46: 90 7F 9C    MOV DPTR,#0x7F9C              
    3A49: E4          CLR A                         
    3A4A: F0          MOVX @DPTR,A                  
    3A4B: 90 7F 85    MOV DPTR,#0x7F85              
    3A4E: F0          MOVX @DPTR,A                  
    3A4F: 90 7F 9E    MOV DPTR,#0x7F9E              
    3A52: F0          MOVX @DPTR,A                  
    3A53: 90 7F 9F    MOV DPTR,#0x7F9F              
    3A56: F0          MOVX @DPTR,A                  
    3A57: 90 7F A0    MOV DPTR,#0x7FA0              
    3A5A: E4          CLR A                         
    3A5B: F0          MOVX @DPTR,A                  
    3A5C: 90 7F A1    MOV DPTR,#0x7FA1              
    3A5F: F0          MOVX @DPTR,A                  
    3A60: 90 7F BC    MOV DPTR,#0x7FBC              
    3A63: F0          MOVX @DPTR,A                  
    3A64: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3A67:
    3A67: 90 7F 7E    MOV DPTR,#0x7F7E              
    3A6A: E0          MOVX A,@DPTR                  
    3A6B: F5 0A       MOV 0x0A,A                    
    3A6D: 90 7F 7D    MOV DPTR,#0x7F7D              
    3A70: E0          MOVX A,@DPTR                  
    3A71: F5 0B       MOV 0x0B,A                    
    3A73: 90 7F 7C    MOV DPTR,#0x7F7C              
    3A76: E0          MOVX A,@DPTR                  
    3A77: F5 0C       MOV 0x0C,A                    
    3A79: 85 15 0D    MOV 0x0D,0x15                 
    3A7C: 75 82 05    MOV DPL(0x82),#0x05           
    3A7F: C0 02       PUSH 0x02                     
    3A81: C0 07       PUSH 0x07                     
    3A83: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3A86: D0 07       POP 0x07                      
    3A88: D0 02       POP 0x02                      
    3A8A: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3A8D:
    3A8D: 75 50 04    MOV 0x50,#0x04                
    3A90: 75 51 12    MOV 0x51,#0x12                
    3A93: 75 82 00    MOV DPL(0x82),#0x00           
    3A96: C0 02       PUSH 0x02                     
    3A98: C0 07       PUSH 0x07                     
    3A9A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3A9D: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    3AA0: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    3AA3: 74 01       MOV A,#0x01                   
    3AA5: F0          MOVX @DPTR,A                  
    3AA6: 90 D8 0B    MOV DPTR,#0xD80B              
    3AA9: E4          CLR A                         
    3AAA: F0          MOVX @DPTR,A                  
    3AAB: 90 D8 0A    MOV DPTR,#0xD80A              
    3AAE: F0          MOVX @DPTR,A                  
    3AAF: 90 D8 04    MOV DPTR,#0xD804              
    3AB2: F0          MOVX @DPTR,A                  
    3AB3: 90 7F B4    MOV DPTR,#0x7FB4              
    3AB6: F0          MOVX @DPTR,A                  
    3AB7: 90 7E B9    MOV DPTR,#0x7EB9              
    3ABA: E4          CLR A                         
    3ABB: F0          MOVX @DPTR,A                  
    3ABC: 90 7F AB    MOV DPTR,#0x7FAB              
    3ABF: F0          MOVX @DPTR,A                  
    3AC0: 90 7F A9    MOV DPTR,#0x7FA9              
    3AC3: F0          MOVX @DPTR,A                  
    3AC4: 90 7F AA    MOV DPTR,#0x7FAA              
    3AC7: F0          MOVX @DPTR,A                  
    3AC8: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    3ACB: E0          MOVX A,@DPTR                  
    3ACC: FB          MOV R3,A                      
    3ACD: 53 03 FD    ANL 0x03,#0xFD                
    3AD0: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    3AD3: EB          MOV A,R3                      
    3AD4: F0          MOVX @DPTR,A                  
    3AD5: 12 12 9A    LCALL 0x129A                     ; -> sub_129A
    3AD8: 75 82 00    MOV DPL(0x82),#0x00           
    3ADB: 12 28 20    LCALL 0x2820                     ; -> sub_2820
    3ADE: D0 07       POP 0x07                      
    3AE0: D0 02       POP 0x02                      
    3AE2: 90 7F 74    MOV DPTR,#0x7F74              
    3AE5: 74 FF       MOV A,#0xFF                   
    3AE7: F0          MOVX @DPTR,A                  
    3AE8: 75 27 00    MOV 0x27,#0x00                
    3AEB: 90 7F FF    MOV DPTR,#0x7FFF              
    3AEE: E4          CLR A                         
    3AEF: F0          MOVX @DPTR,A                  
    3AF0: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    3AF3: E0          MOVX A,@DPTR                  
    3AF4: FB          MOV R3,A                      
    3AF5: 53 03 EF    ANL 0x03,#0xEF                
    3AF8: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    3AFB: EB          MOV A,R3                      
    3AFC: F0          MOVX @DPTR,A                  
    3AFD: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    3B00: E0          MOVX A,@DPTR                  
    3B01: FB          MOV R3,A                      
    3B02: 20 E1 1A    JB ACC.1,0x3B1F                  ; -> 0x3B1F
    3B05: 75 0A 00    MOV 0x0A,#0x00                
    3B08: 75 0B 00    MOV 0x0B,#0x00                
    3B0B: 75 0C 00    MOV 0x0C,#0x00                
    3B0E: 75 0D 00    MOV 0x0D,#0x00                
    3B11: 75 82 01    MOV DPL(0x82),#0x01           
    3B14: C0 02       PUSH 0x02                     
    3B16: C0 07       PUSH 0x07                     
    3B18: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3B1B: D0 07       POP 0x07                      
    3B1D: D0 02       POP 0x02                      
    3B1F: 90 7F A2    MOV DPTR,#0x7FA2              
    3B22: E0          MOVX A,@DPTR                  
    3B23: FB          MOV R3,A                      
    3B24: BB 03 02    CJNE R3,#0x03,0x3B29             ; -> loc_3B29
    3B27: 80 06       SJMP 0x3B2F                      ; -> 0x3B2F

loc_3B29:
    3B29: 90 7F A3    MOV DPTR,#0x7FA3              
    3B2C: 74 01       MOV A,#0x01                   
    3B2E: F0          MOVX @DPTR,A                  
    3B2F: 90 7F A2    MOV DPTR,#0x7FA2              
    3B32: 74 03       MOV A,#0x03                   
    3B34: F0          MOVX @DPTR,A                  
    3B35: 90 CC 97    MOV DPTR,#0xCC97              
    3B38: 74 01       MOV A,#0x01                   
    3B3A: F0          MOVX @DPTR,A                  
    3B3B: C0 02       PUSH 0x02                     
    3B3D: C0 07       PUSH 0x07                     
    3B3F: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    3B42: D0 07       POP 0x07                      
    3B44: D0 02       POP 0x02                      
    3B46: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    3B49: 74 81       MOV A,#0x81                   
    3B4B: F0          MOVX @DPTR,A                  
    3B4C: 7B 00       MOV R3,#0x00                  
    3B4E: BB 04 00    CJNE R3,#0x04,0x3B51             ; -> 0x3B51
    3B51: 40 03       JC 0x3B56                        ; -> loc_3B56
    3B53: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3B56:
    3B56: EB          MOV A,R3                      
    3B57: 24 80       ADD A,#0x80                   
    3B59: F5 82       MOV DPL(0x82),A               
    3B5B: E4          CLR A                         
    3B5C: 34 7F       ADDC A,#0x7F                  
    3B5E: F5 83       MOV DPH(0x83),A               
    3B60: E4          CLR A                         
    3B61: F0          MOVX @DPTR,A                  
    3B62: 0B          INC R3                        
    3B63: 80 E9       SJMP 0x3B4E                      ; -> 0x3B4E

loc_3B65:
    3B65: 75 50 04    MOV 0x50,#0x04                
    3B68: 75 51 13    MOV 0x51,#0x13                
    3B6B: 75 82 00    MOV DPL(0x82),#0x00           
    3B6E: C0 02       PUSH 0x02                     
    3B70: C0 07       PUSH 0x07                     
    3B72: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3B75: D0 07       POP 0x07                      
    3B77: D0 02       POP 0x02                      
    3B79: 74 03       MOV A,#0x03                   
    3B7B: 55 15       ANL A,0x15                    
    3B7D: FB          MOV R3,A                      
    3B7E: BB 03 32    CJNE R3,#0x03,0x3BB3             ; -> loc_3BB3
    3B81: 90 7F 7C    MOV DPTR,#0x7F7C              
    3B84: E0          MOVX A,@DPTR                  
    3B85: 44 40       ORL A,#0x40                   
    3B87: F0          MOVX @DPTR,A                  
    3B88: 90 7F 7C    MOV DPTR,#0x7F7C              
    3B8B: E0          MOVX A,@DPTR                  
    3B8C: FB          MOV R3,A                      
    3B8D: 60 0F       JZ 0x3B9E                        ; -> loc_3B9E
    3B8F: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3B92: E0          MOVX A,@DPTR                  
    3B93: FB          MOV R3,A                      
    3B94: 43 03 01    ORL 0x03,#0x01                
    3B97: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3B9A: EB          MOV A,R3                      
    3B9B: F0          MOVX @DPTR,A                  
    3B9C: 80 0D       SJMP 0x3BAB                      ; -> 0x3BAB

loc_3B9E:
    3B9E: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BA1: E0          MOVX A,@DPTR                  
    3BA2: FB          MOV R3,A                      
    3BA3: 53 03 FE    ANL 0x03,#0xFE                
    3BA6: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BA9: EB          MOV A,R3                      
    3BAA: F0          MOVX @DPTR,A                  
    3BAB: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    3BAE: 74 83       MOV A,#0x83                   
    3BB0: F0          MOVX @DPTR,A                  
    3BB1: 80 30       SJMP 0x3BE3                      ; -> 0x3BE3

loc_3BB3:
    3BB3: 90 7F 7C    MOV DPTR,#0x7F7C              
    3BB6: E0          MOVX A,@DPTR                  
    3BB7: 54 BF       ANL A,#0xBF                   
    3BB9: F0          MOVX @DPTR,A                  
    3BBA: 90 7F 7C    MOV DPTR,#0x7F7C              
    3BBD: E0          MOVX A,@DPTR                  
    3BBE: FB          MOV R3,A                      
    3BBF: 60 0F       JZ 0x3BD0                        ; -> loc_3BD0
    3BC1: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BC4: E0          MOVX A,@DPTR                  
    3BC5: FB          MOV R3,A                      
    3BC6: 43 03 01    ORL 0x03,#0x01                
    3BC9: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BCC: EB          MOV A,R3                      
    3BCD: F0          MOVX @DPTR,A                  
    3BCE: 80 0D       SJMP 0x3BDD                      ; -> 0x3BDD

loc_3BD0:
    3BD0: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BD3: E0          MOVX A,@DPTR                  
    3BD4: FB          MOV R3,A                      
    3BD5: 53 03 FE    ANL 0x03,#0xFE                
    3BD8: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    3BDB: EB          MOV A,R3                      
    3BDC: F0          MOVX @DPTR,A                  
    3BDD: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    3BE0: 74 82       MOV A,#0x82                   
    3BE2: F0          MOVX @DPTR,A                  
    3BE3: 90 7F A2    MOV DPTR,#0x7FA2              
    3BE6: E0          MOVX A,@DPTR                  
    3BE7: FB          MOV R3,A                      
    3BE8: BB 04 02    CJNE R3,#0x04,0x3BED             ; -> loc_3BED
    3BEB: 80 06       SJMP 0x3BF3                      ; -> 0x3BF3

loc_3BED:
    3BED: 90 7F A3    MOV DPTR,#0x7FA3              
    3BF0: 74 01       MOV A,#0x01                   
    3BF2: F0          MOVX @DPTR,A                  
    3BF3: 90 7F A2    MOV DPTR,#0x7FA2              
    3BF6: 74 04       MOV A,#0x04                   
    3BF8: F0          MOVX @DPTR,A                  
    3BF9: 90 7F 9E    MOV DPTR,#0x7F9E              
    3BFC: E4          CLR A                         
    3BFD: F0          MOVX @DPTR,A                  
    3BFE: 90 7F A5    MOV DPTR,#0x7FA5              
    3C01: E0          MOVX A,@DPTR                  
    3C02: 90 CE 76    MOV DPTR,#0xCE76              
    3C05: F0          MOVX @DPTR,A                  
    3C06: 90 7F B5    MOV DPTR,#0x7FB5              
    3C09: E0          MOVX A,@DPTR                  
    3C0A: FB          MOV R3,A                      
    3C0B: 60 08       JZ 0x3C15                        ; -> loc_3C15
    3C0D: 90 7F B3    MOV DPTR,#0x7FB3              
    3C10: 74 01       MOV A,#0x01                   
    3C12: F0          MOVX @DPTR,A                  
    3C13: 80 0B       SJMP 0x3C20                      ; -> 0x3C20

loc_3C15:
    3C15: C0 02       PUSH 0x02                     
    3C17: C0 07       PUSH 0x07                     
    3C19: 12 14 03    LCALL 0x1403                     ; -> sub_1403
    3C1C: D0 07       POP 0x07                      
    3C1E: D0 02       POP 0x02                      
    3C20: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    3C23: E0          MOVX A,@DPTR                  
    3C24: FB          MOV R3,A                      
    3C25: 53 03 FD    ANL 0x03,#0xFD                
    3C28: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    3C2B: EB          MOV A,R3                      
    3C2C: F0          MOVX @DPTR,A                  
    3C2D: 90 C6 00    MOV DPTR,#0xC600              
    3C30: 74 21       MOV A,#0x21                   
    3C32: F0          MOVX @DPTR,A                  
    3C33: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3C36:
    3C36: 75 18 01    MOV 0x18,#0x01                
    3C39: 05 18       INC 0x18                      
    3C3B: 05 18       INC 0x18                      
    3C3D: 75 50 04    MOV 0x50,#0x04                
    3C40: 75 51 15    MOV 0x51,#0x15                
    3C43: 75 82 00    MOV DPL(0x82),#0x00           
    3C46: C0 02       PUSH 0x02                     
    3C48: C0 07       PUSH 0x07                     
    3C4A: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3C4D: D0 07       POP 0x07                      
    3C4F: D0 02       POP 0x02                      
    3C51: E5 18       MOV A,0x18                    
    3C53: 24 80       ADD A,#0x80                   
    3C55: F5 82       MOV DPL(0x82),A               
    3C57: E4          CLR A                         
    3C58: 34 7F       ADDC A,#0x7F                  
    3C5A: F5 83       MOV DPH(0x83),A               
    3C5C: E5 15       MOV A,0x15                    
    3C5E: F0          MOVX @DPTR,A                  
    3C5F: 90 7F A3    MOV DPTR,#0x7FA3              
    3C62: 74 01       MOV A,#0x01                   
    3C64: F0          MOVX @DPTR,A                  
    3C65: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3C68:
    3C68: 90 7F 8A    MOV DPTR,#0x7F8A              
    3C6B: E5 15       MOV A,0x15                    
    3C6D: F0          MOVX @DPTR,A                  
    3C6E: E0          MOVX A,@DPTR                  
    3C6F: FB          MOV R3,A                      
    3C70: 30 E4 04    JNB ACC.4,0x3C77                 ; -> loc_3C77
    3C73: 7B 01       MOV R3,#0x01                  
    3C75: 80 02       SJMP 0x3C79                      ; -> 0x3C79

loc_3C77:
    3C77: 7B 00       MOV R3,#0x00                  
    3C79: 53 03 01    ANL 0x03,#0x01                
    3C7C: 90 CC 0E    MOV DPTR,#0xCC0E                 ; register block CC00
    3C7F: EB          MOV A,R3                      
    3C80: F0          MOVX @DPTR,A                  
    3C81: 90 7F 7E    MOV DPTR,#0x7F7E              
    3C84: E0          MOVX A,@DPTR                  
    3C85: F5 0A       MOV 0x0A,A                    
    3C87: 90 7F 7D    MOV DPTR,#0x7F7D              
    3C8A: E0          MOVX A,@DPTR                  
    3C8B: F5 0B       MOV 0x0B,A                    
    3C8D: 90 7F 7C    MOV DPTR,#0x7F7C              
    3C90: E0          MOVX A,@DPTR                  
    3C91: F5 0C       MOV 0x0C,A                    
    3C93: 85 15 0D    MOV 0x0D,0x15                 
    3C96: 75 82 07    MOV DPL(0x82),#0x07           
    3C99: C0 02       PUSH 0x02                     
    3C9B: C0 07       PUSH 0x07                     
    3C9D: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3CA0: D0 07       POP 0x07                      
    3CA2: D0 02       POP 0x02                      
    3CA4: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3CA7:
    3CA7: 90 7F 99    MOV DPTR,#0x7F99              
    3CAA: E5 15       MOV A,0x15                    
    3CAC: F0          MOVX @DPTR,A                  
    3CAD: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3CB0:
    3CB0: 75 50 04    MOV 0x50,#0x04                
    3CB3: 75 51 37    MOV 0x51,#0x37                
    3CB6: 75 82 00    MOV DPL(0x82),#0x00           
    3CB9: C0 02       PUSH 0x02                     
    3CBB: C0 07       PUSH 0x07                     
    3CBD: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3CC0: 12 23 3D    LCALL 0x233D                     ; -> sub_233D
    3CC3: D0 07       POP 0x07                      
    3CC5: D0 02       POP 0x02                      
    3CC7: 74 80       MOV A,#0x80                   
    3CC9: 45 15       ORL A,0x15                    
    3CCB: FB          MOV R3,A                      
    3CCC: 90 7F F5    MOV DPTR,#0x7FF5              
    3CCF: F0          MOVX @DPTR,A                  
    3CD0: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3CD3:
    3CD3: 75 50 04    MOV 0x50,#0x04                
    3CD6: 75 51 38    MOV 0x51,#0x38                
    3CD9: 75 82 00    MOV DPL(0x82),#0x00           
    3CDC: C0 02       PUSH 0x02                     
    3CDE: C0 07       PUSH 0x07                     
    3CE0: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3CE3: 12 23 3D    LCALL 0x233D                     ; -> sub_233D
    3CE6: D0 07       POP 0x07                      
    3CE8: D0 02       POP 0x02                      
    3CEA: 74 80       MOV A,#0x80                   
    3CEC: 45 15       ORL A,0x15                    
    3CEE: FB          MOV R3,A                      
    3CEF: 90 7F F6    MOV DPTR,#0x7FF6              
    3CF2: F0          MOVX @DPTR,A                  
    3CF3: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3CF6:
    3CF6: 75 50 04    MOV 0x50,#0x04                
    3CF9: 75 51 39    MOV 0x51,#0x39                
    3CFC: 75 82 00    MOV DPL(0x82),#0x00           
    3CFF: C0 02       PUSH 0x02                     
    3D01: C0 07       PUSH 0x07                     
    3D03: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3D06: 12 23 3D    LCALL 0x233D                     ; -> sub_233D
    3D09: D0 07       POP 0x07                      
    3D0B: D0 02       POP 0x02                      
    3D0D: 74 80       MOV A,#0x80                   
    3D0F: 45 15       ORL A,0x15                    
    3D11: FB          MOV R3,A                      
    3D12: 90 7F F7    MOV DPTR,#0x7FF7              
    3D15: F0          MOVX @DPTR,A                  
    3D16: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3D19:
    3D19: 75 50 04    MOV 0x50,#0x04                
    3D1C: 75 51 3A    MOV 0x51,#0x3A                
    3D1F: 75 82 00    MOV DPL(0x82),#0x00           
    3D22: C0 02       PUSH 0x02                     
    3D24: C0 07       PUSH 0x07                     
    3D26: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3D29: 12 23 3D    LCALL 0x233D                     ; -> sub_233D
    3D2C: D0 07       POP 0x07                      
    3D2E: D0 02       POP 0x02                      
    3D30: 74 80       MOV A,#0x80                   
    3D32: 45 15       ORL A,0x15                    
    3D34: FB          MOV R3,A                      
    3D35: 90 7F F8    MOV DPTR,#0x7FF8              
    3D38: F0          MOVX @DPTR,A                  
    3D39: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3D3C:
    3D3C: 75 50 04    MOV 0x50,#0x04                
    3D3F: 75 51 3B    MOV 0x51,#0x3B                
    3D42: 75 82 00    MOV DPL(0x82),#0x00           
    3D45: C0 02       PUSH 0x02                     
    3D47: C0 07       PUSH 0x07                     
    3D49: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3D4C: D0 07       POP 0x07                      
    3D4E: D0 02       POP 0x02                      
    3D50: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3D53:
    3D53: 75 50 20    MOV 0x50,#0x20                
    3D56: 75 51 34    MOV 0x51,#0x34                
    3D59: 75 82 00    MOV DPL(0x82),#0x00           
    3D5C: C0 02       PUSH 0x02                     
    3D5E: C0 07       PUSH 0x07                     
    3D60: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3D63: D0 07       POP 0x07                      
    3D65: D0 02       POP 0x02                      
    3D67: 74 01       MOV A,#0x01                   
    3D69: 55 15       ANL A,0x15                    
    3D6B: FB          MOV R3,A                      
    3D6C: 90 7F F1    MOV DPTR,#0x7FF1              
    3D6F: E0          MOVX A,@DPTR                  
    3D70: FC          MOV R4,A                      
    3D71: EB          MOV A,R3                      
    3D72: B5 04 02    CJNE A,0x04,0x3D77               ; -> loc_3D77
    3D75: 80 2B       SJMP 0x3DA2                      ; -> loc_3DA2

loc_3D77:
    3D77: 90 7F 7E    MOV DPTR,#0x7F7E              
    3D7A: E0          MOVX A,@DPTR                  
    3D7B: F5 0A       MOV 0x0A,A                    
    3D7D: 90 7F 7D    MOV DPTR,#0x7F7D              
    3D80: E0          MOVX A,@DPTR                  
    3D81: F5 0B       MOV 0x0B,A                    
    3D83: 90 7F 7C    MOV DPTR,#0x7F7C              
    3D86: E0          MOVX A,@DPTR                  
    3D87: F5 0C       MOV 0x0C,A                    
    3D89: 85 15 0D    MOV 0x0D,0x15                 
    3D8C: 75 82 0F    MOV DPL(0x82),#0x0F           
    3D8F: C0 02       PUSH 0x02                     
    3D91: C0 07       PUSH 0x07                     
    3D93: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3D96: D0 07       POP 0x07                      
    3D98: D0 02       POP 0x02                      
    3D9A: 90 7F E0    MOV DPTR,#0x7FE0              
    3D9D: 74 01       MOV A,#0x01                   
    3D9F: F0          MOVX @DPTR,A                  
    3DA0: 80 0E       SJMP 0x3DB0                      ; -> 0x3DB0

loc_3DA2:
    3DA2: 75 82 01    MOV DPL(0x82),#0x01           
    3DA5: C0 02       PUSH 0x02                     
    3DA7: C0 07       PUSH 0x07                     
    3DA9: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    3DAC: D0 07       POP 0x07                      
    3DAE: D0 02       POP 0x02                      
    3DB0: 90 7F F1    MOV DPTR,#0x7FF1              
    3DB3: 74 01       MOV A,#0x01                   
    3DB5: 55 15       ANL A,0x15                    
    3DB7: F0          MOVX @DPTR,A                  
    3DB8: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    3DBB: 74 01       MOV A,#0x01                   
    3DBD: F0          MOVX @DPTR,A                  
    3DBE: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3DC1:
    3DC1: 75 50 20    MOV 0x50,#0x20                
    3DC4: 75 51 30    MOV 0x51,#0x30                
    3DC7: 75 82 00    MOV DPL(0x82),#0x00           
    3DCA: C0 02       PUSH 0x02                     
    3DCC: C0 07       PUSH 0x07                     
    3DCE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3DD1: 90 CA D0    MOV DPTR,#0xCAD0              
    3DD4: 74 01       MOV A,#0x01                   
    3DD6: F0          MOVX @DPTR,A                  
    3DD7: 90 7F E0    MOV DPTR,#0x7FE0              
    3DDA: 74 01       MOV A,#0x01                   
    3DDC: F0          MOVX @DPTR,A                  
    3DDD: 75 82 00    MOV DPL(0x82),#0x00           
    3DE0: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    3DE3: D0 07       POP 0x07                      
    3DE5: D0 02       POP 0x02                      
    3DE7: 90 7F F2    MOV DPTR,#0x7FF2              
    3DEA: 74 01       MOV A,#0x01                   
    3DEC: F0          MOVX @DPTR,A                  
    3DED: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3DF0:
    3DF0: E5 15       MOV A,0x15                    
    3DF2: 14          DEC A                         
    3DF3: 90 7F DE    MOV DPTR,#0x7FDE              
    3DF6: F0          MOVX @DPTR,A                  
    3DF7: 75 50 08    MOV 0x50,#0x08                
    3DFA: 75 51 3D    MOV 0x51,#0x3D                
    3DFD: 75 82 00    MOV DPL(0x82),#0x00           
    3E00: C0 02       PUSH 0x02                     
    3E02: C0 07       PUSH 0x07                     
    3E04: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3E07: 75 82 01    MOV DPL(0x82),#0x01           
    3E0A: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    3E0D: D0 07       POP 0x07                      
    3E0F: D0 02       POP 0x02                      
    3E11: E5 15       MOV A,0x15                    
    3E13: 70 09       JNZ 0x3E1E                       ; -> loc_3E1E
    3E15: 90 7F DD    MOV DPTR,#0x7FDD              
    3E18: 74 01       MOV A,#0x01                   
    3E1A: F0          MOVX @DPTR,A                  
    3E1B: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3E1E:
    3E1E: 90 7F DD    MOV DPTR,#0x7FDD              
    3E21: E4          CLR A                         
    3E22: F0          MOVX @DPTR,A                  
    3E23: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3E26:
    3E26: 75 50 08    MOV 0x50,#0x08                
    3E29: 75 51 3E    MOV 0x51,#0x3E                
    3E2C: 75 82 00    MOV DPL(0x82),#0x00           
    3E2F: C0 02       PUSH 0x02                     
    3E31: C0 07       PUSH 0x07                     
    3E33: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3E36: D0 07       POP 0x07                      
    3E38: D0 02       POP 0x02                      
    3E3A: 90 7F 79    MOV DPTR,#0x7F79              
    3E3D: E0          MOVX A,@DPTR                  
    3E3E: FB          MOV R3,A                      
    3E3F: 70 0E       JNZ 0x3E4F                       ; -> 0x3E4F
    3E41: 75 82 01    MOV DPL(0x82),#0x01           
    3E44: C0 02       PUSH 0x02                     
    3E46: C0 07       PUSH 0x07                     
    3E48: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    3E4B: D0 07       POP 0x07                      
    3E4D: D0 02       POP 0x02                      
    3E4F: E5 15       MOV A,0x15                    
    3E51: 70 03       JNZ 0x3E56                       ; -> loc_3E56
    3E53: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3E56:
    3E56: 90 7F DD    MOV DPTR,#0x7FDD              
    3E59: E4          CLR A                         
    3E5A: F0          MOVX @DPTR,A                  
    3E5B: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3E5E:
    3E5E: 90 7F DE    MOV DPTR,#0x7FDE              
    3E61: E0          MOVX A,@DPTR                  
    3E62: FB          MOV R3,A                      
    3E63: BB 10 00    CJNE R3,#0x10,0x3E66             ; -> 0x3E66
    3E66: 50 38       JNC 0x3EA0                       ; -> 0x3EA0
    3E68: 90 7F DE    MOV DPTR,#0x7FDE              
    3E6B: E0          MOVX A,@DPTR                  
    3E6C: 24 C0       ADD A,#0xC0                   
    3E6E: F5 82       MOV DPL(0x82),A               
    3E70: E4          CLR A                         
    3E71: 34 7F       ADDC A,#0x7F                  
    3E73: F5 83       MOV DPH(0x83),A               
    3E75: E0          MOVX A,@DPTR                  
    3E76: FB          MOV R3,A                      
    3E77: 90 7F DF    MOV DPTR,#0x7FDF              
    3E7A: E0          MOVX A,@DPTR                  
    3E7B: FC          MOV R4,A                      
    3E7C: C3          CLR C                         
    3E7D: 9B          SUBB A,R3                     
    3E7E: 90 7F DF    MOV DPTR,#0x7FDF              
    3E81: 25 15       ADD A,0x15                    
    3E83: F0          MOVX @DPTR,A                  
    3E84: 90 7F DE    MOV DPTR,#0x7FDE              
    3E87: E0          MOVX A,@DPTR                  
    3E88: 24 C0       ADD A,#0xC0                   
    3E8A: F5 82       MOV DPL(0x82),A               
    3E8C: E4          CLR A                         
    3E8D: 34 7F       ADDC A,#0x7F                  
    3E8F: F5 83       MOV DPH(0x83),A               
    3E91: E5 15       MOV A,0x15                    
    3E93: F0          MOVX @DPTR,A                  
    3E94: 90 7F DF    MOV DPTR,#0x7FDF              
    3E97: E0          MOVX A,@DPTR                  
    3E98: 04          INC A                         
    3E99: 54 3F       ANL A,#0x3F                   
    3E9B: FB          MOV R3,A                      
    3E9C: 90 D2 30    MOV DPTR,#0xD230              
    3E9F: F0          MOVX @DPTR,A                  
    3EA0: 75 50 08    MOV 0x50,#0x08                
    3EA3: 75 51 3F    MOV 0x51,#0x3F                
    3EA6: 75 82 00    MOV DPL(0x82),#0x00           
    3EA9: C0 02       PUSH 0x02                     
    3EAB: C0 07       PUSH 0x07                     
    3EAD: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3EB0: 75 50 08    MOV 0x50,#0x08                
    3EB3: 75 51 68    MOV 0x51,#0x68                
    3EB6: 75 82 00    MOV DPL(0x82),#0x00           
    3EB9: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3EBC: 75 50 08    MOV 0x50,#0x08                
    3EBF: 75 51 03    MOV 0x51,#0x03                
    3EC2: 75 82 01    MOV DPL(0x82),#0x01           
    3EC5: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3EC8: 90 7F DE    MOV DPTR,#0x7FDE              
    3ECB: E0          MOVX A,@DPTR                  
    3ECC: F5 51       MOV 0x51,A                    
    3ECE: 75 50 08    MOV 0x50,#0x08                
    3ED1: 75 82 01    MOV DPL(0x82),#0x01           
    3ED4: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3ED7: 75 50 08    MOV 0x50,#0x08                
    3EDA: 85 15 51    MOV 0x51,0x15                 
    3EDD: 75 82 01    MOV DPL(0x82),#0x01           
    3EE0: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3EE3: 90 D2 30    MOV DPTR,#0xD230              
    3EE6: E0          MOVX A,@DPTR                  
    3EE7: F5 51       MOV 0x51,A                    
    3EE9: 75 50 08    MOV 0x50,#0x08                
    3EEC: 75 82 01    MOV DPL(0x82),#0x01           
    3EEF: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    3EF2: D0 07       POP 0x07                      
    3EF4: D0 02       POP 0x02                      
    3EF6: 90 7F 79    MOV DPTR,#0x7F79              
    3EF9: E0          MOVX A,@DPTR                  
    3EFA: FB          MOV R3,A                      
    3EFB: 70 0E       JNZ 0x3F0B                       ; -> 0x3F0B
    3EFD: 75 82 01    MOV DPL(0x82),#0x01           
    3F00: C0 02       PUSH 0x02                     
    3F02: C0 07       PUSH 0x07                     
    3F04: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    3F07: D0 07       POP 0x07                      
    3F09: D0 02       POP 0x02                      
    3F0B: 74 3F       MOV A,#0x3F                   
    3F0D: B5 15 02    CJNE A,0x15,0x3F12               ; -> loc_3F12
    3F10: 80 03       SJMP 0x3F15                      ; -> loc_3F15

loc_3F12:
    3F12: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F15:
    3F15: 90 7F DD    MOV DPTR,#0x7FDD              
    3F18: E0          MOVX A,@DPTR                  
    3F19: FB          MOV R3,A                      
    3F1A: 70 03       JNZ 0x3F1F                       ; -> loc_3F1F
    3F1C: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F1F:
    3F1F: 90 7F DD    MOV DPTR,#0x7FDD              
    3F22: E4          CLR A                         
    3F23: F0          MOVX @DPTR,A                  
    3F24: C0 02       PUSH 0x02                     
    3F26: C0 07       PUSH 0x07                     
    3F28: 12 1F 5C    LCALL 0x1F5C                     ; -> sub_1F5C
    3F2B: D0 07       POP 0x07                      
    3F2D: D0 02       POP 0x02                      
    3F2F: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F32:
    3F32: 74 10       MOV A,#0x10                   
    3F34: B5 41 02    CJNE A,0x41,0x3F39               ; -> loc_3F39
    3F37: 80 03       SJMP 0x3F3C                      ; -> loc_3F3C

loc_3F39:
    3F39: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F3C:
    3F3C: 90 7F 75    MOV DPTR,#0x7F75              
    3F3F: E5 15       MOV A,0x15                    
    3F41: F0          MOVX @DPTR,A                  
    3F42: E5 15       MOV A,0x15                    
    3F44: 60 09       JZ 0x3F4F                        ; -> loc_3F4F
    3F46: 90 CA A9    MOV DPTR,#0xCAA9              
    3F49: 74 FF       MOV A,#0xFF                   
    3F4B: F0          MOVX @DPTR,A                  
    3F4C: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F4F:
    3F4F: 90 CA A9    MOV DPTR,#0xCAA9              
    3F52: E4          CLR A                         
    3F53: F0          MOVX @DPTR,A                  
    3F54: 02 40 0A    LJMP 0x400A                      ; -> 0x400A

loc_3F57:
    3F57: E5 41       MOV A,0x41                    
    3F59: 60 03       JZ 0x3F5E                        ; -> loc_3F5E
    3F5B: 02 3F EF    LJMP 0x3FEF                      ; -> loc_3FEF

loc_3F5E:
    3F5E: 90 7F A7    MOV DPTR,#0x7FA7              
    3F61: 74 07       MOV A,#0x07                   
    3F63: 55 15       ANL A,0x15                    
    3F65: F0          MOVX @DPTR,A                  
    3F66: 90 7F A7    MOV DPTR,#0x7FA7              
    3F69: E0          MOVX A,@DPTR                  
    3F6A: FB          MOV R3,A                      
    3F6B: BB 02 0D    CJNE R3,#0x02,0x3F7B             ; -> loc_3F7B
    3F6E: C0 02       PUSH 0x02                     
    3F70: C0 07       PUSH 0x07                     
    3F72: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    3F75: D0 07       POP 0x07                      
    3F77: D0 02       POP 0x02                      
    3F79: 80 4F       SJMP 0x3FCA                      ; -> 0x3FCA

loc_3F7B:
    3F7B: 90 7F A7    MOV DPTR,#0x7FA7              
    3F7E: E0          MOVX A,@DPTR                  
    3F7F: FB          MOV R3,A                      
    3F80: BB 05 34    CJNE R3,#0x05,0x3FB7             ; -> loc_3FB7
    3F83: 90 7E AD    MOV DPTR,#0x7EAD              
    3F86: E0          MOVX A,@DPTR                  
    3F87: FB          MOV R3,A                      
    3F88: 70 14       JNZ 0x3F9E                       ; -> 0x3F9E
    3F8A: 90 7F 84    MOV DPTR,#0x7F84              
    3F8D: E0          MOVX A,@DPTR                  
    3F8E: FB          MOV R3,A                      
    3F8F: 70 19       JNZ 0x3FAA                       ; -> 0x3FAA
    3F91: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    3F94: E0          MOVX A,@DPTR                  
    3F95: FB          MOV R3,A                      
    3F96: 53 03 0F    ANL 0x03,#0x0F                
    3F99: BB 03 00    CJNE R3,#0x03,0x3F9C             ; -> 0x3F9C
    3F9C: 50 0C       JNC 0x3FAA                       ; -> 0x3FAA
    3F9E: 53 15 F8    ANL 0x15,#0xF8                
    3FA1: 43 15 02    ORL 0x15,#0x02                
    3FA4: 90 7F A7    MOV DPTR,#0x7FA7              
    3FA7: 74 02       MOV A,#0x02                   
    3FA9: F0          MOVX @DPTR,A                  
    3FAA: C0 02       PUSH 0x02                     
    3FAC: C0 07       PUSH 0x07                     
    3FAE: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    3FB1: D0 07       POP 0x07                      
    3FB3: D0 02       POP 0x02                      
    3FB5: 80 13       SJMP 0x3FCA                      ; -> 0x3FCA

loc_3FB7:
    3FB7: 90 7F A2    MOV DPTR,#0x7FA2              
    3FBA: E0          MOVX A,@DPTR                  
    3FBB: FB          MOV R3,A                      
    3FBC: BB 06 0B    CJNE R3,#0x06,0x3FCA             ; -> 0x3FCA
    3FBF: C0 02       PUSH 0x02                     
    3FC1: C0 07       PUSH 0x07                     
    3FC3: 12 22 6E    LCALL 0x226E                     ; -> sub_226E
    3FC6: D0 07       POP 0x07                      
    3FC8: D0 02       POP 0x02                      
    3FCA: 90 7F 7E    MOV DPTR,#0x7F7E              
    3FCD: E0          MOVX A,@DPTR                  
    3FCE: F5 0A       MOV 0x0A,A                    
    3FD0: 90 7F 7D    MOV DPTR,#0x7F7D              
    3FD3: E0          MOVX A,@DPTR                  
    3FD4: F5 0B       MOV 0x0B,A                    
    3FD6: 90 7F 7C    MOV DPTR,#0x7F7C              
    3FD9: E0          MOVX A,@DPTR                  
    3FDA: F5 0C       MOV 0x0C,A                    
    3FDC: 85 15 0D    MOV 0x0D,0x15                 
    3FDF: 75 82 08    MOV DPL(0x82),#0x08           
    3FE2: C0 02       PUSH 0x02                     
    3FE4: C0 07       PUSH 0x07                     
    3FE6: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    3FE9: D0 07       POP 0x07                      
    3FEB: D0 02       POP 0x02                      
    3FED: 80 1B       SJMP 0x400A                      ; -> 0x400A

loc_3FEF:
    3FEF: 75 0E 00    MOV 0x0E,#0x00                
    3FF2: 80 16       SJMP 0x400A                      ; -> 0x400A

loc_3FF4:
    3FF4: EA          MOV A,R2                      
    3FF5: 60 13       JZ 0x400A                        ; -> 0x400A
    3FF7: BF 00 02    CJNE R7,#0x00,0x3FFC             ; -> loc_3FFC
    3FFA: 80 08       SJMP 0x4004                      ; -> 0x4004

loc_3FFC:
    3FFC: BF 01 02    CJNE R7,#0x01,0x4001             ; -> loc_4001
    3FFF: 80 03       SJMP 0x4004                      ; -> 0x4004

loc_4001:
    4001: BF 02 06    CJNE R7,#0x02,0x400A             ; -> 0x400A
    4004: 90 7E A8    MOV DPTR,#0x7EA8              
    4007: 74 01       MOV A,#0x01                   
    4009: F0          MOVX @DPTR,A                  
    400A: 05 41       INC 0x41                      
    400C: E5 41       MOV A,0x41                    
    400E: 70 01       JNZ 0x4011                       ; -> 0x4011
    4010: 0F          INC R7                        
    4011: 05 14       INC 0x14                      
    4013: 02 34 C4    LJMP 0x34C4                      ; -> 0x34C4

loc_4016:
    4016: 90 7F EC    MOV DPTR,#0x7FEC              
    4019: E0          MOVX A,@DPTR                  
    401A: FA          MOV R2,A                      
    401B: BA 01 28    CJNE R2,#0x01,0x4046             ; -> loc_4046
    401E: 90 7E A8    MOV DPTR,#0x7EA8              
    4021: E0          MOVX A,@DPTR                  
    4022: FA          MOV R2,A                      
    4023: 60 21       JZ 0x4046                        ; -> loc_4046
    4025: 90 7E A8    MOV DPTR,#0x7EA8              
    4028: E4          CLR A                         
    4029: F0          MOVX @DPTR,A                  
    402A: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    402D: 74 02       MOV A,#0x02                   
    402F: F0          MOVX @DPTR,A                  
    4030: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    4033: 74 01       MOV A,#0x01                   
    4035: F0          MOVX @DPTR,A                  
    4036: 90 CA 22    MOV DPTR,#0xCA22                 ; register block CA00
    4039: E4          CLR A                         
    403A: F0          MOVX @DPTR,A                  
    403B: 90 CA 23    MOV DPTR,#0xCA23                 ; register block CA00
    403E: F0          MOVX @DPTR,A                  
    403F: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    4042: 74 01       MOV A,#0x01                   
    4044: F0          MOVX @DPTR,A                  
    4045: 22          RET                           

loc_4046:
    4046: 90 7F EC    MOV DPTR,#0x7FEC              
    4049: E0          MOVX A,@DPTR                  
    404A: FA          MOV R2,A                      
    404B: BA 01 2B    CJNE R2,#0x01,0x4079             ; -> 0x4079
    404E: 90 7F E0    MOV DPTR,#0x7FE0              
    4051: E0          MOVX A,@DPTR                  
    4052: FA          MOV R2,A                      
    4053: 70 24       JNZ 0x4079                       ; -> 0x4079
    4055: 90 7F FB    MOV DPTR,#0x7FFB              
    4058: E0          MOVX A,@DPTR                  
    4059: FA          MOV R2,A                      
    405A: 70 1D       JNZ 0x4079                       ; -> 0x4079
    405C: 90 7F 79    MOV DPTR,#0x7F79              
    405F: E0          MOVX A,@DPTR                  
    4060: FA          MOV R2,A                      
    4061: 70 16       JNZ 0x4079                       ; -> 0x4079
    4063: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    4066: 74 01       MOV A,#0x01                   
    4068: F0          MOVX @DPTR,A                  
    4069: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    406C: E4          CLR A                         
    406D: F0          MOVX @DPTR,A                  
    406E: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    4071: 74 01       MOV A,#0x01                   
    4073: F0          MOVX @DPTR,A                  
    4074: 90 7F 9D    MOV DPTR,#0x7F9D              
    4077: E4          CLR A                         
    4078: F0          MOVX @DPTR,A                  
    4079: E5 1A       MOV A,0x1A                    
    407B: 30 E0 08    JNB ACC.0,0x4086                 ; -> 0x4086
    407E: 90 7F 7D    MOV DPTR,#0x7F7D              
    4081: E0          MOVX A,@DPTR                  
    4082: FA          MOV R2,A                      
    4083: B5 16 0F    CJNE A,0x16,0x4095               ; -> 0x4095
    4086: E5 1A       MOV A,0x1A                    
    4088: 30 E1 29    JNB ACC.1,0x40B4                 ; -> loc_40B4
    408B: 90 7F 7E    MOV DPTR,#0x7F7E              
    408E: E0          MOVX A,@DPTR                  
    408F: FA          MOV R2,A                      
    4090: B5 17 00    CJNE A,0x17,0x4093               ; -> 0x4093
    4093: 50 1F       JNC 0x40B4                       ; -> loc_40B4
    4095: E5 1A       MOV A,0x1A                    
    4097: 30 E0 06    JNB ACC.0,0x40A0                 ; -> 0x40A0
    409A: 90 7F 7D    MOV DPTR,#0x7F7D              
    409D: E5 16       MOV A,0x16                    
    409F: F0          MOVX @DPTR,A                  
    40A0: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    40A3: E5 1A       MOV A,0x1A                    
    40A5: 20 E1 03    JB ACC.1,0x40AB                  ; -> loc_40AB
    40A8: 02 41 54    LJMP 0x4154                      ; -> 0x4154

loc_40AB:
    40AB: 90 7F 7E    MOV DPTR,#0x7F7E              
    40AE: E5 17       MOV A,0x17                    
    40B0: F0          MOVX @DPTR,A                  
    40B1: 02 41 54    LJMP 0x4154                      ; -> 0x4154

loc_40B4:
    40B4: E5 1A       MOV A,0x1A                    
    40B6: 20 E1 03    JB ACC.1,0x40BC                  ; -> loc_40BC
    40B9: 02 41 54    LJMP 0x4154                      ; -> 0x4154

loc_40BC:
    40BC: 90 7F 7E    MOV DPTR,#0x7F7E              
    40BF: E0          MOVX A,@DPTR                  
    40C0: FA          MOV R2,A                      
    40C1: E5 17       MOV A,0x17                    
    40C3: B5 02 00    CJNE A,0x02,0x40C6               ; -> 0x40C6
    40C6: 40 03       JC 0x40CB                        ; -> loc_40CB
    40C8: 02 41 54    LJMP 0x4154                      ; -> 0x4154

loc_40CB:
    40CB: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    40CE: 85 17 F0    MOV B(0xF0),0x17              
    40D1: 05 F0       INC B(0xF0)                   
    40D3: 74 01       MOV A,#0x01                   
    40D5: 80 02       SJMP 0x40D9                      ; -> 0x40D9

loc_40D7:
    40D7: 25 E0       ADD A,ACC(0xE0)               
    40D9: D5 F0 FB    DJNZ B(0xF0),0x40D7              ; -> loc_40D7
    40DC: 14          DEC A                         
    40DD: 90 7F ED    MOV DPTR,#0x7FED              
    40E0: F0          MOVX @DPTR,A                  
    40E1: 90 7F ED    MOV DPTR,#0x7FED              
    40E4: E0          MOVX A,@DPTR                  
    40E5: 90 D8 0B    MOV DPTR,#0xD80B              
    40E8: F0          MOVX @DPTR,A                  
    40E9: 90 7F ED    MOV DPTR,#0x7FED              
    40EC: E0          MOVX A,@DPTR                  
    40ED: 90 D8 0A    MOV DPTR,#0xD80A              
    40F0: F0          MOVX @DPTR,A                  
    40F1: 90 7F ED    MOV DPTR,#0x7FED              
    40F4: E0          MOVX A,@DPTR                  
    40F5: 90 D8 04    MOV DPTR,#0xD804              
    40F8: F0          MOVX @DPTR,A                  
    40F9: 90 CC 05    MOV DPTR,#0xCC05                 ; register block CC00
    40FC: 74 01       MOV A,#0x01                   
    40FE: F0          MOVX @DPTR,A                  
    40FF: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    4102: E0          MOVX A,@DPTR                  
    4103: FA          MOV R2,A                      
    4104: 53 02 F7    ANL 0x02,#0xF7                
    4107: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    410A: EA          MOV A,R2                      
    410B: F0          MOVX @DPTR,A                  
    410C: 90 CC 05    MOV DPTR,#0xCC05                 ; register block CC00
    410F: E0          MOVX A,@DPTR                  
    4110: FA          MOV R2,A                      
    4111: 53 02 FE    ANL 0x02,#0xFE                
    4114: 90 CC 05    MOV DPTR,#0xCC05                 ; register block CC00
    4117: EA          MOV A,R2                      
    4118: F0          MOVX @DPTR,A                  
    4119: 90 CC 7C    MOV DPTR,#0xCC7C                 ; register block CC00
    411C: 74 0F       MOV A,#0x0F                   
    411E: F0          MOVX @DPTR,A                  
    411F: 90 CC 7D    MOV DPTR,#0xCC7D                 ; register block CC00
    4122: 74 0F       MOV A,#0x0F                   
    4124: F0          MOVX @DPTR,A                  
    4125: 90 7F 7E    MOV DPTR,#0x7F7E              
    4128: E5 17       MOV A,0x17                    
    412A: F0          MOVX @DPTR,A                  
    412B: 90 7F A2    MOV DPTR,#0x7FA2              
    412E: E0          MOVX A,@DPTR                  
    412F: FA          MOV R2,A                      
    4130: BA 05 00    CJNE R2,#0x05,0x4133             ; -> 0x4133
    4133: 40 1F       JC 0x4154                        ; -> 0x4154
    4135: E5 17       MOV A,0x17                    
    4137: 60 1B       JZ 0x4154                        ; -> 0x4154
    4139: 90 7F 7E    MOV DPTR,#0x7F7E              
    413C: E0          MOVX A,@DPTR                  
    413D: F5 0A       MOV 0x0A,A                    
    413F: 90 7F 7D    MOV DPTR,#0x7F7D              
    4142: E0          MOVX A,@DPTR                  
    4143: F5 0B       MOV 0x0B,A                    
    4145: 90 7F 7C    MOV DPTR,#0x7F7C              
    4148: E0          MOVX A,@DPTR                  
    4149: F5 0C       MOV 0x0C,A                    
    414B: 75 0D 00    MOV 0x0D,#0x00                
    414E: 75 82 06    MOV DPL(0x82),#0x06           
    4151: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    4154: E5 27       MOV A,0x27                    
    4156: 70 01       JNZ 0x4159                       ; -> loc_4159
    4158: 22          RET                           

loc_4159:
    4159: 90 7F 8D    MOV DPTR,#0x7F8D              
    415C: E0          MOVX A,@DPTR                  
    415D: FA          MOV R2,A                      
    415E: 70 03       JNZ 0x4163                       ; -> loc_4163
    4160: 02 41 E1    LJMP 0x41E1                      ; -> loc_41E1

loc_4163:
    4163: 90 CC 7C    MOV DPTR,#0xCC7C                 ; register block CC00
    4166: 74 0F       MOV A,#0x0F                   
    4168: F0          MOVX @DPTR,A                  
    4169: 90 7F F9    MOV DPTR,#0x7FF9              
    416C: E0          MOVX A,@DPTR                  
    416D: FA          MOV R2,A                      
    416E: 70 08       JNZ 0x4178                       ; -> 0x4178
    4170: 90 7F 93    MOV DPTR,#0x7F93              
    4173: E0          MOVX A,@DPTR                  
    4174: FA          MOV R2,A                      
    4175: 44 08       ORL A,#0x08                   
    4177: F0          MOVX @DPTR,A                  
    4178: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    417B: 74 84       MOV A,#0x84                   
    417D: F0          MOVX @DPTR,A                  
    417E: 90 7F A2    MOV DPTR,#0x7FA2              
    4181: 74 05       MOV A,#0x05                   
    4183: F0          MOVX @DPTR,A                  
    4184: 90 CC 9A    MOV DPTR,#0xCC9A              
    4187: E0          MOVX A,@DPTR                  
    4188: FA          MOV R2,A                      
    4189: 43 02 01    ORL 0x02,#0x01                
    418C: 90 CC 9A    MOV DPTR,#0xCC9A              
    418F: EA          MOV A,R2                      
    4190: F0          MOVX @DPTR,A                  
    4191: 90 7F AB    MOV DPTR,#0x7FAB              
    4194: E0          MOVX A,@DPTR                  
    4195: FA          MOV R2,A                      
    4196: 70 58       JNZ 0x41F0                       ; -> loc_41F0
    4198: 75 50 01    MOV 0x50,#0x01                
    419B: 75 51 09    MOV 0x51,#0x09                
    419E: F5 82       MOV DPL(0x82),A               
    41A0: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    41A3: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    41A6: E4          CLR A                         
    41A7: F0          MOVX @DPTR,A                  
    41A8: 90 CC 9A    MOV DPTR,#0xCC9A              
    41AB: E0          MOVX A,@DPTR                  
    41AC: FA          MOV R2,A                      
    41AD: 43 02 02    ORL 0x02,#0x02                
    41B0: 90 CC 9A    MOV DPTR,#0xCC9A              
    41B3: EA          MOV A,R2                      
    41B4: F0          MOVX @DPTR,A                  
    41B5: 90 7F A2    MOV DPTR,#0x7FA2              
    41B8: 74 06       MOV A,#0x06                   
    41BA: F0          MOVX @DPTR,A                  
    41BB: 90 7F 84    MOV DPTR,#0x7F84              
    41BE: E0          MOVX A,@DPTR                  
    41BF: FA          MOV R2,A                      
    41C0: 70 0D       JNZ 0x41CF                       ; -> 0x41CF
    41C2: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    41C5: E0          MOVX A,@DPTR                  
    41C6: FA          MOV R2,A                      
    41C7: 43 02 20    ORL 0x02,#0x20                
    41CA: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    41CD: EA          MOV A,R2                      
    41CE: F0          MOVX @DPTR,A                  
    41CF: 90 00 A6    MOV DPTR,#0x00A6              
    41D2: E4          CLR A                         
    41D3: 93          MOVC A,@A+DPTR                
    41D4: FA          MOV R2,A                      
    41D5: 20 E4 03    JB ACC.4,0x41DB                  ; -> 0x41DB
    41D8: 12 22 6E    LCALL 0x226E                     ; -> sub_226E
    41DB: 90 7F A1    MOV DPTR,#0x7FA1              
    41DE: E4          CLR A                         
    41DF: F0          MOVX @DPTR,A                  
    41E0: 22          RET                           

loc_41E1:
    41E1: 75 50 01    MOV 0x50,#0x01                
    41E4: 75 51 08    MOV 0x51,#0x08                
    41E7: 75 82 00    MOV DPL(0x82),#0x00           
    41EA: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    41ED: 02 27 0E    LJMP 0x270E                      ; -> sub_270E

loc_41F0:
    41F0: 22          RET                           

sub_41F1:
    41F1: 75 50 20    MOV 0x50,#0x20                
    41F4: 75 51 18    MOV 0x51,#0x18                
    41F7: 75 82 00    MOV DPL(0x82),#0x00           
    41FA: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    41FD: 90 CA 1C    MOV DPTR,#0xCA1C                 ; register block CA00
    4200: 74 20       MOV A,#0x20                   
    4202: F0          MOVX @DPTR,A                  
    4203: 90 CA 0A    MOV DPTR,#0xCA0A                 ; register block CA00
    4206: 74 01       MOV A,#0x01                   
    4208: F0          MOVX @DPTR,A                  
    4209: 90 7F 9F    MOV DPTR,#0x7F9F              
    420C: E0          MOVX A,@DPTR                  
    420D: FA          MOV R2,A                      
    420E: 70 07       JNZ 0x4217                       ; -> 0x4217
    4210: 90 7F 9D    MOV DPTR,#0x7F9D              
    4213: E0          MOVX A,@DPTR                  
    4214: 24 01       ADD A,#0x01                   
    4216: F0          MOVX @DPTR,A                  
    4217: 90 7F 9F    MOV DPTR,#0x7F9F              
    421A: E4          CLR A                         
    421B: F0          MOVX @DPTR,A                  
    421C: 22          RET                           

sub_421D:
    421D: 85 82 51    MOV 0x51,DPL(0x82)            
    4220: 75 50 01    MOV 0x50,#0x01                
    4223: 75 82 00    MOV DPL(0x82),#0x00           
    4226: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4229: 90 7E B7    MOV DPTR,#0x7EB7              
    422C: E0          MOVX A,@DPTR                  
    422D: FA          MOV R2,A                      
    422E: 60 0E       JZ 0x423E                        ; -> loc_423E
    4230: 75 50 20    MOV 0x50,#0x20                
    4233: 75 51 2D    MOV 0x51,#0x2D                
    4236: 75 82 00    MOV DPL(0x82),#0x00           
    4239: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    423C: 80 EB       SJMP 0x4229                      ; -> 0x4229

loc_423E:
    423E: 90 CC 8F    MOV DPTR,#0xCC8F                 ; register block CC00
    4241: E0          MOVX A,@DPTR                  
    4242: 60 13       JZ 0x4257                        ; -> loc_4257
    4244: 90 CC 20    MOV DPTR,#0xCC20                 ; register block CC00
    4247: E4          CLR A                         
    4248: F0          MOVX @DPTR,A                  
    4249: 90 CC 1F    MOV DPTR,#0xCC1F                 ; register block CC00
    424C: 74 1D       MOV A,#0x1D                   
    424E: F0          MOVX @DPTR,A                  
    424F: 90 CC 1E    MOV DPTR,#0xCC1E                 ; register block CC00
    4252: 74 4C       MOV A,#0x4C                   
    4254: F0          MOVX @DPTR,A                  
    4255: 80 12       SJMP 0x4269                      ; -> 0x4269

loc_4257:
    4257: 90 CC 20    MOV DPTR,#0xCC20                 ; register block CC00
    425A: 74 01       MOV A,#0x01                   
    425C: F0          MOVX @DPTR,A                  
    425D: 90 CC 1F    MOV DPTR,#0xCC1F                 ; register block CC00
    4260: 74 24       MOV A,#0x24                   
    4262: F0          MOVX @DPTR,A                  
    4263: 90 CC 1E    MOV DPTR,#0xCC1E                 ; register block CC00
    4266: 74 F8       MOV A,#0xF8                   
    4268: F0          MOVX @DPTR,A                  
    4269: 90 CC 21    MOV DPTR,#0xCC21                 ; register block CC00
    426C: 74 01       MOV A,#0x01                   
    426E: F0          MOVX @DPTR,A                  
    426F: 75 50 04    MOV 0x50,#0x04                
    4272: 75 51 0A    MOV 0x51,#0x0A                
    4275: 75 82 00    MOV DPL(0x82),#0x00           
    4278: 02 04 4F    LJMP 0x044F                      ; -> sub_044F

sub_427B:
    427B: 90 CC 8F    MOV DPTR,#0xCC8F                 ; register block CC00
    427E: E0          MOVX A,@DPTR                  
    427F: 60 13       JZ 0x4294                        ; -> loc_4294
    4281: 90 CC 20    MOV DPTR,#0xCC20                 ; register block CC00
    4284: E4          CLR A                         
    4285: F0          MOVX @DPTR,A                  
    4286: 90 CC 1F    MOV DPTR,#0xCC1F                 ; register block CC00
    4289: 74 75       MOV A,#0x75                   
    428B: F0          MOVX @DPTR,A                  
    428C: 90 CC 1E    MOV DPTR,#0xCC1E                 ; register block CC00
    428F: 74 30       MOV A,#0x30                   
    4291: F0          MOVX @DPTR,A                  
    4292: 80 12       SJMP 0x42A6                      ; -> 0x42A6

loc_4294:
    4294: 90 CC 20    MOV DPTR,#0xCC20                 ; register block CC00
    4297: 74 02       MOV A,#0x02                   
    4299: F0          MOVX @DPTR,A                  
    429A: 90 CC 1F    MOV DPTR,#0xCC1F                 ; register block CC00
    429D: 74 49       MOV A,#0x49                   
    429F: F0          MOVX @DPTR,A                  
    42A0: 90 CC 1E    MOV DPTR,#0xCC1E                 ; register block CC00
    42A3: 74 F0       MOV A,#0xF0                   
    42A5: F0          MOVX @DPTR,A                  
    42A6: 90 CC 21    MOV DPTR,#0xCC21                 ; register block CC00
    42A9: 74 01       MOV A,#0x01                   
    42AB: F0          MOVX @DPTR,A                  
    42AC: 75 50 20    MOV 0x50,#0x20                
    42AF: 75 51 0B    MOV 0x51,#0x0B                
    42B2: 75 82 00    MOV DPL(0x82),#0x00           
    42B5: 02 04 4F    LJMP 0x044F                      ; -> sub_044F

sub_42B8:
    42B8: 90 7F AE    MOV DPTR,#0x7FAE              
    42BB: E4          CLR A                         
    42BC: F0          MOVX @DPTR,A                  
    42BD: 90 7F AF    MOV DPTR,#0x7FAF              
    42C0: F0          MOVX @DPTR,A                  
    42C1: 90 7F B0    MOV DPTR,#0x7FB0              
    42C4: F0          MOVX @DPTR,A                  
    42C5: 90 7F B1    MOV DPTR,#0x7FB1              
    42C8: F0          MOVX @DPTR,A                  
    42C9: 90 7F B2    MOV DPTR,#0x7FB2              
    42CC: E4          CLR A                         
    42CD: F0          MOVX @DPTR,A                  
    42CE: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    42D1: E0          MOVX A,@DPTR                  
    42D2: 90 7F B2    MOV DPTR,#0x7FB2              
    42D5: F0          MOVX @DPTR,A                  
    42D6: 90 CA 60    MOV DPTR,#0xCA60                 ; register block CA00
    42D9: E0          MOVX A,@DPTR                  
    42DA: FA          MOV R2,A                      
    42DB: 90 CA 65    MOV DPTR,#0xCA65                 ; register block CA00
    42DE: E0          MOVX A,@DPTR                  
    42DF: 90 7F B1    MOV DPTR,#0x7FB1              
    42E2: 04          INC A                         
    42E3: F0          MOVX @DPTR,A                  
    42E4: 90 7F B1    MOV DPTR,#0x7FB1              
    42E7: E0          MOVX A,@DPTR                  
    42E8: FB          MOV R3,A                      
    42E9: 8B 45       MOV 0x45,R3                   
    42EB: 90 7F 78    MOV DPTR,#0x7F78              
    42EE: E4          CLR A                         
    42EF: F0          MOVX @DPTR,A                  
    42F0: 90 7F 79    MOV DPTR,#0x7F79              
    42F3: F0          MOVX @DPTR,A                  
    42F4: 90 7F 7A    MOV DPTR,#0x7F7A              
    42F7: F0          MOVX @DPTR,A                  
    42F8: 90 7F FB    MOV DPTR,#0x7FFB              
    42FB: F0          MOVX @DPTR,A                  
    42FC: 90 7F EE    MOV DPTR,#0x7FEE              
    42FF: E4          CLR A                         
    4300: F0          MOVX @DPTR,A                  
    4301: 90 7F B7    MOV DPTR,#0x7FB7              
    4304: F0          MOVX @DPTR,A                  
    4305: 90 CA 41    MOV DPTR,#0xCA41                 ; register block CA00
    4308: E0          MOVX A,@DPTR                  
    4309: FB          MOV R3,A                      
    430A: 20 E0 36    JB ACC.0,0x4343                  ; -> loc_4343
    430D: 90 7F B1    MOV DPTR,#0x7FB1              
    4310: E0          MOVX A,@DPTR                  
    4311: FB          MOV R3,A                      
    4312: 74 10       MOV A,#0x10                   
    4314: B5 03 00    CJNE A,0x03,0x4317               ; -> 0x4317
    4317: 40 2A       JC 0x4343                        ; -> loc_4343
    4319: 90 7F B2    MOV DPTR,#0x7FB2              
    431C: E0          MOVX A,@DPTR                  
    431D: FB          MOV R3,A                      
    431E: 30 E3 2F    JNB ACC.3,0x4350                 ; -> loc_4350
    4321: 90 7F B2    MOV DPTR,#0x7FB2              
    4324: E0          MOVX A,@DPTR                  
    4325: FB          MOV R3,A                      
    4326: 74 01       MOV A,#0x01                   
    4328: 5B          ANL A,R3                      
    4329: 24 45       ADD A,#0x45                   
    432B: F8          MOV R0,A                      
    432C: 86 03       MOV 0x03,@R0                  
    432E: 7C 00       MOV R4,#0x00                  
    4330: 74 04       MOV A,#0x04                   
    4332: 2B          ADD A,R3                      
    4333: FB          MOV R3,A                      
    4334: E4          CLR A                         
    4335: 3C          ADDC A,R4                     
    4336: FC          MOV R4,A                      
    4337: 7D 00       MOV R5,#0x00                  
    4339: EA          MOV A,R2                      
    433A: B5 03 06    CJNE A,0x03,0x4343               ; -> loc_4343
    433D: ED          MOV A,R5                      
    433E: B5 04 02    CJNE A,0x04,0x4343               ; -> loc_4343
    4341: 80 0D       SJMP 0x4350                      ; -> loc_4350

loc_4343:
    4343: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    4346: 74 01       MOV A,#0x01                   
    4348: F0          MOVX @DPTR,A                  
    4349: 90 CA 0E    MOV DPTR,#0xCA0E                 ; register block CA00
    434C: 74 02       MOV A,#0x02                   
    434E: F0          MOVX @DPTR,A                  
    434F: 22          RET                           

loc_4350:
    4350: 90 CA 62    MOV DPTR,#0xCA62                 ; register block CA00
    4353: E0          MOVX A,@DPTR                  
    4354: 90 7F B0    MOV DPTR,#0x7FB0              
    4357: F0          MOVX @DPTR,A                  
    4358: 90 CA 63    MOV DPTR,#0xCA63                 ; register block CA00
    435B: E0          MOVX A,@DPTR                  
    435C: 90 7F AF    MOV DPTR,#0x7FAF              
    435F: F0          MOVX @DPTR,A                  
    4360: 90 CA 64    MOV DPTR,#0xCA64                 ; register block CA00
    4363: E0          MOVX A,@DPTR                  
    4364: 90 7F AE    MOV DPTR,#0x7FAE              
    4367: F0          MOVX @DPTR,A                  
    4368: E4          CLR A                         
    4369: F5 08       MOV 0x08,A                    
    436B: F5 09       MOV 0x09,A                    
    436D: 90 7F B0    MOV DPTR,#0x7FB0              
    4370: E0          MOVX A,@DPTR                  
    4371: FA          MOV R2,A                      
    4372: 60 03       JZ 0x4377                        ; -> loc_4377
    4374: 02 44 4D    LJMP 0x444D                      ; -> 0x444D

loc_4377:
    4377: 90 7F AF    MOV DPTR,#0x7FAF              
    437A: E0          MOVX A,@DPTR                  
    437B: FA          MOV R2,A                      
    437C: 60 19       JZ 0x4397                        ; -> loc_4397
    437E: 90 7F AF    MOV DPTR,#0x7FAF              
    4381: E0          MOVX A,@DPTR                  
    4382: FA          MOV R2,A                      
    4383: BA 22 02    CJNE R2,#0x22,0x4388             ; -> loc_4388
    4386: 80 03       SJMP 0x438B                      ; -> loc_438B

loc_4388:
    4388: 02 44 4D    LJMP 0x444D                      ; -> 0x444D

loc_438B:
    438B: 90 00 AB    MOV DPTR,#0x00AB              
    438E: E4          CLR A                         
    438F: 93          MOVC A,@A+DPTR                
    4390: FA          MOV R2,A                      
    4391: 30 E7 03    JNB ACC.7,0x4397                 ; -> loc_4397
    4394: 02 44 4D    LJMP 0x444D                      ; -> 0x444D

loc_4397:
    4397: 90 7F AE    MOV DPTR,#0x7FAE              
    439A: E0          MOVX A,@DPTR                  
    439B: FA          MOV R2,A                      
    439C: 74 03       MOV A,#0x03                   
    439E: B5 02 00    CJNE A,0x02,0x43A1               ; -> 0x43A1
    43A1: 50 03       JNC 0x43A6                       ; -> loc_43A6
    43A3: 02 44 48    LJMP 0x4448                      ; -> 0x4448

loc_43A6:
    43A6: EA          MOV A,R2                      
    43A7: 2A          ADD A,R2                      
    43A8: 2A          ADD A,R2                      
    43A9: 90 43 AD    MOV DPTR,#0x43AD              
    43AC: 73          JMP @A+DPTR                   
    43AD: 02 43 B9    LJMP 0x43B9                      ; -> 0x43B9
    43B0: 02          DB 0x02                       ; data
    43B1: 44          DB 0x44                       ; data
    43B2: 01          DB 0x01                       ; data
    43B3: 02          DB 0x02                       ; data
    43B4: 44          DB 0x44                       ; data
    43B5: 28          DB 0x28                       ; data
    43B6: 02          DB 0x02                       ; data
    43B7: 44          DB 0x44                       ; data
    43B8: 40          DB 0x40                       ; data
    43B9: 90 7F B1    MOV DPTR,#0x7FB1              
    43BC: E0          MOVX A,@DPTR                  
    43BD: FA          MOV R2,A                      
    43BE: BA 01 02    CJNE R2,#0x01,0x43C3             ; -> loc_43C3
    43C1: 80 0A       SJMP 0x43CD                      ; -> loc_43CD

loc_43C3:
    43C3: BA 02 02    CJNE R2,#0x02,0x43C8             ; -> loc_43C8
    43C6: 80 0D       SJMP 0x43D5                      ; -> loc_43D5

loc_43C8:
    43C8: BA 03 1A    CJNE R2,#0x03,0x43E5             ; -> loc_43E5
    43CB: 80 10       SJMP 0x43DD                      ; -> loc_43DD

loc_43CD:
    43CD: 75 08 01    MOV 0x08,#0x01                
    43D0: 75 09 00    MOV 0x09,#0x00                
    43D3: 80 16       SJMP 0x43EB                      ; -> 0x43EB

loc_43D5:
    43D5: 75 08 0B    MOV 0x08,#0x0B                
    43D8: 75 09 00    MOV 0x09,#0x00                
    43DB: 80 0E       SJMP 0x43EB                      ; -> 0x43EB

loc_43DD:
    43DD: 75 08 2F    MOV 0x08,#0x2F                
    43E0: 75 09 00    MOV 0x09,#0x00                
    43E3: 80 06       SJMP 0x43EB                      ; -> 0x43EB

loc_43E5:
    43E5: 75 08 EF    MOV 0x08,#0xEF                
    43E8: 75 09 01    MOV 0x09,#0x01                
    43EB: 90 7F AF    MOV DPTR,#0x7FAF              
    43EE: E0          MOVX A,@DPTR                  
    43EF: FA          MOV R2,A                      
    43F0: BA 22 5A    CJNE R2,#0x22,0x444D             ; -> 0x444D
    43F3: 90 00 A8    MOV DPTR,#0x00A8              
    43F6: E4          CLR A                         
    43F7: 93          MOVC A,@A+DPTR                
    43F8: FA          MOV R2,A                      
    43F9: 30 E7 51    JNB ACC.7,0x444D                 ; -> 0x444D
    43FC: 53 08 FE    ANL 0x08,#0xFE                
    43FF: 80 4C       SJMP 0x444D                      ; -> 0x444D

loc_4401:
    4401: 90 7F B1    MOV DPTR,#0x7FB1              
    4404: E0          MOVX A,@DPTR                  
    4405: FA          MOV R2,A                      
    4406: BA 01 02    CJNE R2,#0x01,0x440B             ; -> loc_440B
    4409: 80 05       SJMP 0x4410                      ; -> loc_4410

loc_440B:
    440B: BA 02 12    CJNE R2,#0x02,0x4420             ; -> loc_4420
    440E: 80 08       SJMP 0x4418                      ; -> loc_4418

loc_4410:
    4410: 75 08 02    MOV 0x08,#0x02                
    4413: 75 09 00    MOV 0x09,#0x00                
    4416: 80 35       SJMP 0x444D                      ; -> 0x444D

loc_4418:
    4418: 75 08 16    MOV 0x08,#0x16                
    441B: 75 09 00    MOV 0x09,#0x00                
    441E: 80 2D       SJMP 0x444D                      ; -> 0x444D

loc_4420:
    4420: 75 08 56    MOV 0x08,#0x56                
    4423: 75 09 01    MOV 0x09,#0x01                
    4426: 80 25       SJMP 0x444D                      ; -> 0x444D
    4428: 90          DB 0x90                       ; data
    4429: 7F          DB 0x7F                       ; data
    442A: B1          DB 0xB1                       ; data
    442B: E0          DB 0xE0                       ; data
    442C: FA          DB 0xFA                       ; data
    442D: BA          DB 0xBA                       ; data
    442E: 01          DB 0x01                       ; data
    442F: 08          DB 0x08                       ; data
    4430: 75          DB 0x75                       ; data
    4431: 08          DB 0x08                       ; data
    4432: 04          DB 0x04                       ; data
    4433: 75          DB 0x75                       ; data
    4434: 09          DB 0x09                       ; data
    4435: 00          DB 0x00                       ; data
    4436: 80          DB 0x80                       ; data
    4437: 15          DB 0x15                       ; data
    4438: 75          DB 0x75                       ; data
    4439: 08          DB 0x08                       ; data
    443A: C4          DB 0xC4                       ; data
    443B: 75          DB 0x75                       ; data
    443C: 09          DB 0x09                       ; data
    443D: 00          DB 0x00                       ; data
    443E: 80          DB 0x80                       ; data
    443F: 0D          DB 0x0D                       ; data
    4440: 75          DB 0x75                       ; data
    4441: 08          DB 0x08                       ; data
    4442: 40          DB 0x40                       ; data
    4443: 75          DB 0x75                       ; data
    4444: 09          DB 0x09                       ; data
    4445: 00          DB 0x00                       ; data
    4446: 80          DB 0x80                       ; data
    4447: 05          DB 0x05                       ; data
    4448: E4          CLR A                         
    4449: F5 08       MOV 0x08,A                    
    444B: F5 09       MOV 0x09,A                    
    444D: 90 7F B2    MOV DPTR,#0x7FB2              
    4450: E0          MOVX A,@DPTR                  
    4451: FA          MOV R2,A                      
    4452: 20 E3 03    JB ACC.3,0x4458                  ; -> loc_4458
    4455: 02 48 4B    LJMP 0x484B                      ; -> loc_484B

loc_4458:
    4458: 90 7F 7B    MOV DPTR,#0x7F7B              
    445B: E4          CLR A                         
    445C: F0          MOVX @DPTR,A                  
    445D: 90 7F BF    MOV DPTR,#0x7FBF              
    4460: F0          MOVX @DPTR,A                  
    4461: 90 7F B2    MOV DPTR,#0x7FB2              
    4464: E0          MOVX A,@DPTR                  
    4465: FA          MOV R2,A                      
    4466: BA 08 1D    CJNE R2,#0x08,0x4486             ; -> 0x4486
    4469: 90 7F B0    MOV DPTR,#0x7FB0              
    446C: E0          MOVX A,@DPTR                  
    446D: FA          MOV R2,A                      
    446E: 70 16       JNZ 0x4486                       ; -> 0x4486
    4470: 90 7F AF    MOV DPTR,#0x7FAF              
    4473: E0          MOVX A,@DPTR                  
    4474: FA          MOV R2,A                      
    4475: BA 01 0E    CJNE R2,#0x01,0x4486             ; -> 0x4486
    4478: 90 7F AE    MOV DPTR,#0x7FAE              
    447B: E0          MOVX A,@DPTR                  
    447C: FA          MOV R2,A                      
    447D: BA C0 06    CJNE R2,#0xC0,0x4486             ; -> 0x4486
    4480: 90 CC 97    MOV DPTR,#0xCC97              
    4483: 74 01       MOV A,#0x01                   
    4485: F0          MOVX @DPTR,A                  
    4486: 90 CA 9F    MOV DPTR,#0xCA9F              
    4489: E0          MOVX A,@DPTR                  
    448A: 60 19       JZ 0x44A5                        ; -> loc_44A5
    448C: 90 7F 84    MOV DPTR,#0x7F84              
    448F: E0          MOVX A,@DPTR                  
    4490: FA          MOV R2,A                      
    4491: 70 09       JNZ 0x449C                       ; -> 0x449C
    4493: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    4496: E0          MOVX A,@DPTR                  
    4497: FA          MOV R2,A                      
    4498: 54 0F       ANL A,#0x0F                   
    449A: 60 09       JZ 0x44A5                        ; -> loc_44A5
    449C: 90 7F EC    MOV DPTR,#0x7FEC              
    449F: 74 01       MOV A,#0x01                   
    44A1: F0          MOVX @DPTR,A                  
    44A2: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_44A5:
    44A5: 90 7F B0    MOV DPTR,#0x7FB0              
    44A8: E0          MOVX A,@DPTR                  
    44A9: FA          MOV R2,A                      
    44AA: 70 6B       JNZ 0x4517                       ; -> loc_4517
    44AC: 90 7F AF    MOV DPTR,#0x7FAF              
    44AF: E0          MOVX A,@DPTR                  
    44B0: FA          MOV R2,A                      
    44B1: 70 2E       JNZ 0x44E1                       ; -> 0x44E1
    44B3: 90 7F AE    MOV DPTR,#0x7FAE              
    44B6: E0          MOVX A,@DPTR                  
    44B7: FA          MOV R2,A                      
    44B8: 74 21       MOV A,#0x21                   
    44BA: B5 02 00    CJNE A,0x02,0x44BD               ; -> 0x44BD
    44BD: 40 22       JC 0x44E1                        ; -> 0x44E1
    44BF: 90 7F AE    MOV DPTR,#0x7FAE              
    44C2: E0          MOVX A,@DPTR                  
    44C3: FA          MOV R2,A                      
    44C4: 7B 00       MOV R3,#0x00                  
    44C6: 90 7F B1    MOV DPTR,#0x7FB1              
    44C9: E0          MOVX A,@DPTR                  
    44CA: FC          MOV R4,A                      
    44CB: 7D 00       MOV R5,#0x00                  
    44CD: 2A          ADD A,R2                      
    44CE: FA          MOV R2,A                      
    44CF: ED          MOV A,R5                      
    44D0: 3B          ADDC A,R3                     
    44D1: FB          MOV R3,A                      
    44D2: C3          CLR C                         
    44D3: 74 20       MOV A,#0x20                   
    44D5: 9A          SUBB A,R2                     
    44D6: 74 80       MOV A,#0x80                   
    44D8: 8B F0       MOV 0xF0,R3                   
    44DA: 63 F0 80    XRL B(0xF0),#0x80             
    44DD: 95 F0       SUBB A,B(0xF0)                
    44DF: 40 2D       JC 0x450E                        ; -> 0x450E
    44E1: 90 7F 84    MOV DPTR,#0x7F84              
    44E4: E0          MOVX A,@DPTR                  
    44E5: FA          MOV R2,A                      
    44E6: 70 2F       JNZ 0x4517                       ; -> loc_4517
    44E8: 90 7F B2    MOV DPTR,#0x7FB2              
    44EB: E0          MOVX A,@DPTR                  
    44EC: FA          MOV R2,A                      
    44ED: BA 08 27    CJNE R2,#0x08,0x4517             ; -> loc_4517
    44F0: 90 7F AF    MOV DPTR,#0x7FAF              
    44F3: E0          MOVX A,@DPTR                  
    44F4: FA          MOV R2,A                      
    44F5: BA 01 1F    CJNE R2,#0x01,0x4517             ; -> loc_4517
    44F8: 90 7F AE    MOV DPTR,#0x7FAE              
    44FB: E0          MOVX A,@DPTR                  
    44FC: FA          MOV R2,A                      
    44FD: 74 C2       MOV A,#0xC2                   
    44FF: B5 02 00    CJNE A,0x02,0x4502               ; -> 0x4502
    4502: 40 13       JC 0x4517                        ; -> loc_4517
    4504: 90 7F AE    MOV DPTR,#0x7FAE              
    4507: E0          MOVX A,@DPTR                  
    4508: FA          MOV R2,A                      
    4509: BA C0 00    CJNE R2,#0xC0,0x450C             ; -> 0x450C
    450C: 40 09       JC 0x4517                        ; -> loc_4517
    450E: 90 7F EC    MOV DPTR,#0x7FEC              
    4511: 74 01       MOV A,#0x01                   
    4513: F0          MOVX @DPTR,A                  
    4514: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_4517:
    4517: 90 7F B2    MOV DPTR,#0x7FB2              
    451A: E0          MOVX A,@DPTR                  
    451B: FA          MOV R2,A                      
    451C: BA 09 2D    CJNE R2,#0x09,0x454C             ; -> loc_454C
    451F: 90 7F B0    MOV DPTR,#0x7FB0              
    4522: E0          MOVX A,@DPTR                  
    4523: FA          MOV R2,A                      
    4524: BA 0E 25    CJNE R2,#0x0E,0x454C             ; -> loc_454C
    4527: 90 7F AF    MOV DPTR,#0x7FAF              
    452A: E0          MOVX A,@DPTR                  
    452B: FA          MOV R2,A                      
    452C: 70 1E       JNZ 0x454C                       ; -> loc_454C
    452E: 90 7F AE    MOV DPTR,#0x7FAE              
    4531: E0          MOVX A,@DPTR                  
    4532: FA          MOV R2,A                      
    4533: 74 0C       MOV A,#0x0C                   
    4535: B5 02 00    CJNE A,0x02,0x4538               ; -> 0x4538
    4538: 40 12       JC 0x454C                        ; -> loc_454C
    453A: 90 00 A7    MOV DPTR,#0x00A7              
    453D: E4          CLR A                         
    453E: 93          MOVC A,@A+DPTR                
    453F: FA          MOV R2,A                      
    4540: 30 E6 09    JNB ACC.6,0x454C                 ; -> loc_454C
    4543: 90 7F EC    MOV DPTR,#0x7FEC              
    4546: 74 01       MOV A,#0x01                   
    4548: F0          MOVX @DPTR,A                  
    4549: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_454C:
    454C: 90 7F B2    MOV DPTR,#0x7FB2              
    454F: E0          MOVX A,@DPTR                  
    4550: FA          MOV R2,A                      
    4551: BA 09 02    CJNE R2,#0x09,0x4556             ; -> loc_4556
    4554: 80 08       SJMP 0x455E                      ; -> 0x455E

loc_4556:
    4556: 90 7F B2    MOV DPTR,#0x7FB2              
    4559: E0          MOVX A,@DPTR                  
    455A: FA          MOV R2,A                      
    455B: BA 08 1D    CJNE R2,#0x08,0x457B             ; -> loc_457B
    455E: 90 7F B0    MOV DPTR,#0x7FB0              
    4561: E0          MOVX A,@DPTR                  
    4562: FA          MOV R2,A                      
    4563: BA 0F 15    CJNE R2,#0x0F,0x457B             ; -> loc_457B
    4566: 90 7F AF    MOV DPTR,#0x7FAF              
    4569: E0          MOVX A,@DPTR                  
    456A: FA          MOV R2,A                      
    456B: 74 02       MOV A,#0x02                   
    456D: B5 02 00    CJNE A,0x02,0x4570               ; -> 0x4570
    4570: 40 09       JC 0x457B                        ; -> loc_457B
    4572: 90 7F EC    MOV DPTR,#0x7FEC              
    4575: 74 01       MOV A,#0x01                   
    4577: F0          MOVX @DPTR,A                  
    4578: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_457B:
    457B: 90 7F B0    MOV DPTR,#0x7FB0              
    457E: E0          MOVX A,@DPTR                  
    457F: FA          MOV R2,A                      
    4580: 70 2A       JNZ 0x45AC                       ; -> loc_45AC
    4582: 90 7F AF    MOV DPTR,#0x7FAF              
    4585: E0          MOVX A,@DPTR                  
    4586: FA          MOV R2,A                      
    4587: BA 20 22    CJNE R2,#0x20,0x45AC             ; -> loc_45AC
    458A: 90 7F AE    MOV DPTR,#0x7FAE              
    458D: E0          MOVX A,@DPTR                  
    458E: FA          MOV R2,A                      
    458F: BA 02 1A    CJNE R2,#0x02,0x45AC             ; -> loc_45AC
    4592: 90 00 A7    MOV DPTR,#0x00A7              
    4595: E4          CLR A                         
    4596: 93          MOVC A,@A+DPTR                
    4597: FA          MOV R2,A                      
    4598: 53 02 20    ANL 0x02,#0x20                
    459B: 90 7E AD    MOV DPTR,#0x7EAD              
    459E: E0          MOVX A,@DPTR                  
    459F: FB          MOV R3,A                      
    45A0: 5A          ANL A,R2                      
    45A1: 60 09       JZ 0x45AC                        ; -> loc_45AC
    45A3: 90 7F EC    MOV DPTR,#0x7FEC              
    45A6: 74 01       MOV A,#0x01                   
    45A8: F0          MOVX @DPTR,A                  
    45A9: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_45AC:
    45AC: 90 7F B0    MOV DPTR,#0x7FB0              
    45AF: E0          MOVX A,@DPTR                  
    45B0: FA          MOV R2,A                      
    45B1: 60 03       JZ 0x45B6                        ; -> loc_45B6
    45B3: 02 46 9B    LJMP 0x469B                      ; -> loc_469B

loc_45B6:
    45B6: 90 7F AF    MOV DPTR,#0x7FAF              
    45B9: E0          MOVX A,@DPTR                  
    45BA: FA          MOV R2,A                      
    45BB: BA 20 02    CJNE R2,#0x20,0x45C0             ; -> loc_45C0
    45BE: 80 03       SJMP 0x45C3                      ; -> loc_45C3

loc_45C0:
    45C0: 02 46 9B    LJMP 0x469B                      ; -> loc_469B

loc_45C3:
    45C3: 90 7F AE    MOV DPTR,#0x7FAE              
    45C6: E0          MOVX A,@DPTR                  
    45C7: FA          MOV R2,A                      
    45C8: 74 0E       MOV A,#0x0E                   
    45CA: B5 02 00    CJNE A,0x02,0x45CD               ; -> 0x45CD
    45CD: 50 03       JNC 0x45D2                       ; -> loc_45D2
    45CF: 02 46 9B    LJMP 0x469B                      ; -> loc_469B

loc_45D2:
    45D2: 90 7F AE    MOV DPTR,#0x7FAE              
    45D5: E0          MOVX A,@DPTR                  
    45D6: FA          MOV R2,A                      
    45D7: 7B 00       MOV R3,#0x00                  
    45D9: 90 7F B1    MOV DPTR,#0x7FB1              
    45DC: E0          MOVX A,@DPTR                  
    45DD: FC          MOV R4,A                      
    45DE: 7D 00       MOV R5,#0x00                  
    45E0: 2A          ADD A,R2                      
    45E1: FA          MOV R2,A                      
    45E2: ED          MOV A,R5                      
    45E3: 3B          ADDC A,R3                     
    45E4: FB          MOV R3,A                      
    45E5: C3          CLR C                         
    45E6: 74 0C       MOV A,#0x0C                   
    45E8: 9A          SUBB A,R2                     
    45E9: 74 80       MOV A,#0x80                   
    45EB: 8B F0       MOV 0xF0,R3                   
    45ED: 63 F0 80    XRL B(0xF0),#0x80             
    45F0: 95 F0       SUBB A,B(0xF0)                
    45F2: 40 03       JC 0x45F7                        ; -> loc_45F7
    45F4: 02 46 9B    LJMP 0x469B                      ; -> loc_469B

loc_45F7:
    45F7: 90 7F AE    MOV DPTR,#0x7FAE              
    45FA: E0          MOVX A,@DPTR                  
    45FB: FA          MOV R2,A                      
    45FC: BA 0A 00    CJNE R2,#0x0A,0x45FF             ; -> 0x45FF
    45FF: 50 08       JNC 0x4609                       ; -> loc_4609
    4601: 90 7F AF    MOV DPTR,#0x7FAF              
    4604: 74 01       MOV A,#0x01                   
    4606: F0          MOVX @DPTR,A                  
    4607: 80 06       SJMP 0x460F                      ; -> 0x460F

loc_4609:
    4609: 90 7F AF    MOV DPTR,#0x7FAF              
    460C: 74 02       MOV A,#0x02                   
    460E: F0          MOVX @DPTR,A                  
    460F: 90 7F AE    MOV DPTR,#0x7FAE              
    4612: E0          MOVX A,@DPTR                  
    4613: 24 F6       ADD A,#0xF6                   
    4615: 90 7F AE    MOV DPTR,#0x7FAE              
    4618: F0          MOVX @DPTR,A                  
    4619: 90 CA AB    MOV DPTR,#0xCAAB              
    461C: E0          MOVX A,@DPTR                  
    461D: 90 7F E1    MOV DPTR,#0x7FE1              
    4620: F0          MOVX @DPTR,A                  
    4621: 90 CA AA    MOV DPTR,#0xCAAA              
    4624: E0          MOVX A,@DPTR                  
    4625: 90 7F E2    MOV DPTR,#0x7FE2              
    4628: F0          MOVX @DPTR,A                  
    4629: 90 CA A9    MOV DPTR,#0xCAA9              
    462C: E0          MOVX A,@DPTR                  
    462D: 90 7F E3    MOV DPTR,#0x7FE3              
    4630: F0          MOVX @DPTR,A                  
    4631: 90 CA A8    MOV DPTR,#0xCAA8              
    4634: E0          MOVX A,@DPTR                  
    4635: 90 7F E4    MOV DPTR,#0x7FE4              
    4638: F0          MOVX @DPTR,A                  
    4639: 90 CA AB    MOV DPTR,#0xCAAB              
    463C: 74 1C       MOV A,#0x1C                   
    463E: F0          MOVX @DPTR,A                  
    463F: 90 CA AA    MOV DPTR,#0xCAAA              
    4642: E4          CLR A                         
    4643: F0          MOVX @DPTR,A                  
    4644: 90 CA A9    MOV DPTR,#0xCAA9              
    4647: F0          MOVX @DPTR,A                  
    4648: 90 CA A8    MOV DPTR,#0xCAA8              
    464B: F0          MOVX @DPTR,A                  
    464C: 90 CA C0    MOV DPTR,#0xCAC0              
    464F: 74 A2       MOV A,#0xA2                   
    4651: F0          MOVX @DPTR,A                  
    4652: 90 7F AE    MOV DPTR,#0x7FAE              
    4655: E0          MOVX A,@DPTR                  
    4656: 90 CA C1    MOV DPTR,#0xCAC1              
    4659: F0          MOVX @DPTR,A                  
    465A: 90 7F B1    MOV DPTR,#0x7FB1              
    465D: E0          MOVX A,@DPTR                  
    465E: FA          MOV R2,A                      
    465F: 1A          DEC R2                        
    4660: 90 CA C2    MOV DPTR,#0xCAC2              
    4663: EA          MOV A,R2                      
    4664: F0          MOVX @DPTR,A                  
    4665: 90 CA C3    MOV DPTR,#0xCAC3              
    4668: 74 01       MOV A,#0x01                   
    466A: F0          MOVX @DPTR,A                  
    466B: 90 CA 50    MOV DPTR,#0xCA50                 ; register block CA00
    466E: E0          MOVX A,@DPTR                  
    466F: FA          MOV R2,A                      
    4670: 90 7F EC    MOV DPTR,#0x7FEC              
    4673: F0          MOVX @DPTR,A                  
    4674: EA          MOV A,R2                      
    4675: 60 F4       JZ 0x466B                        ; -> 0x466B
    4677: 90 7F E1    MOV DPTR,#0x7FE1              
    467A: E0          MOVX A,@DPTR                  
    467B: 90 CA AB    MOV DPTR,#0xCAAB              
    467E: F0          MOVX @DPTR,A                  
    467F: 90 7F E2    MOV DPTR,#0x7FE2              
    4682: E0          MOVX A,@DPTR                  
    4683: 90 CA AA    MOV DPTR,#0xCAAA              
    4686: F0          MOVX @DPTR,A                  
    4687: 90 7F E3    MOV DPTR,#0x7FE3              
    468A: E0          MOVX A,@DPTR                  
    468B: 90 CA A9    MOV DPTR,#0xCAA9              
    468E: F0          MOVX @DPTR,A                  
    468F: 90 7F E4    MOV DPTR,#0x7FE4              
    4692: E0          MOVX A,@DPTR                  
    4693: FA          MOV R2,A                      
    4694: 90 CA A8    MOV DPTR,#0xCAA8              
    4697: F0          MOVX @DPTR,A                  
    4698: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_469B:
    469B: 90 00 AB    MOV DPTR,#0x00AB              
    469E: E4          CLR A                         
    469F: 93          MOVC A,@A+DPTR                
    46A0: FA          MOV R2,A                      
    46A1: 30 E7 03    JNB ACC.7,0x46A7                 ; -> loc_46A7
    46A4: 02 47 26    LJMP 0x4726                      ; -> loc_4726

loc_46A7:
    46A7: 90 7F B0    MOV DPTR,#0x7FB0              
    46AA: E0          MOVX A,@DPTR                  
    46AB: FA          MOV R2,A                      
    46AC: 70 78       JNZ 0x4726                       ; -> loc_4726
    46AE: 90 7F AF    MOV DPTR,#0x7FAF              
    46B1: E0          MOVX A,@DPTR                  
    46B2: FA          MOV R2,A                      
    46B3: BA 22 70    CJNE R2,#0x22,0x4726             ; -> loc_4726
    46B6: 90 00 A8    MOV DPTR,#0x00A8              
    46B9: E4          CLR A                         
    46BA: 93          MOVC A,@A+DPTR                
    46BB: FA          MOV R2,A                      
    46BC: 30 E7 15    JNB ACC.7,0x46D4                 ; -> 0x46D4
    46BF: 90 CA A3    MOV DPTR,#0xCAA3              
    46C2: E0          MOVX A,@DPTR                  
    46C3: 90 7F E1    MOV DPTR,#0x7FE1              
    46C6: F0          MOVX @DPTR,A                  
    46C7: 90 CA A3    MOV DPTR,#0xCAA3              
    46CA: E0          MOVX A,@DPTR                  
    46CB: FA          MOV R2,A                      
    46CC: 53 02 FE    ANL 0x02,#0xFE                
    46CF: 90 CA A3    MOV DPTR,#0xCAA3              
    46D2: EA          MOV A,R2                      
    46D3: F0          MOVX @DPTR,A                  
    46D4: 90 7F AF    MOV DPTR,#0x7FAF              
    46D7: E4          CLR A                         
    46D8: F0          MOVX @DPTR,A                  
    46D9: E0          MOVX A,@DPTR                  
    46DA: FA          MOV R2,A                      
    46DB: 53 02 07    ANL 0x02,#0x07                
    46DE: 90 CA C0    MOV DPTR,#0xCAC0              
    46E1: EA          MOV A,R2                      
    46E2: F0          MOVX @DPTR,A                  
    46E3: 90 7F AE    MOV DPTR,#0x7FAE              
    46E6: E0          MOVX A,@DPTR                  
    46E7: 90 CA C1    MOV DPTR,#0xCAC1              
    46EA: F0          MOVX @DPTR,A                  
    46EB: 90 7F B1    MOV DPTR,#0x7FB1              
    46EE: E0          MOVX A,@DPTR                  
    46EF: FA          MOV R2,A                      
    46F0: 1A          DEC R2                        
    46F1: 90 CA C2    MOV DPTR,#0xCAC2              
    46F4: EA          MOV A,R2                      
    46F5: F0          MOVX @DPTR,A                  
    46F6: 90 CA C3    MOV DPTR,#0xCAC3              
    46F9: 74 01       MOV A,#0x01                   
    46FB: F0          MOVX @DPTR,A                  
    46FC: 90 CA 50    MOV DPTR,#0xCA50                 ; register block CA00
    46FF: E0          MOVX A,@DPTR                  
    4700: FA          MOV R2,A                      
    4701: 90 7F EC    MOV DPTR,#0x7FEC              
    4704: F0          MOVX @DPTR,A                  
    4705: EA          MOV A,R2                      
    4706: 60 F4       JZ 0x46FC                        ; -> 0x46FC
    4708: 90 7F AF    MOV DPTR,#0x7FAF              
    470B: 74 22       MOV A,#0x22                   
    470D: F0          MOVX @DPTR,A                  
    470E: 90 00 A8    MOV DPTR,#0x00A8              
    4711: E4          CLR A                         
    4712: 93          MOVC A,@A+DPTR                
    4713: FA          MOV R2,A                      
    4714: 20 E7 03    JB ACC.7,0x471A                  ; -> loc_471A
    4717: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_471A:
    471A: 90 7F E1    MOV DPTR,#0x7FE1              
    471D: E0          MOVX A,@DPTR                  
    471E: FA          MOV R2,A                      
    471F: 90 CA A3    MOV DPTR,#0xCAA3              
    4722: F0          MOVX @DPTR,A                  
    4723: 02 47 F5    LJMP 0x47F5                      ; -> 0x47F5

loc_4726:
    4726: 90 7F B2    MOV DPTR,#0x7FB2              
    4729: E0          MOVX A,@DPTR                  
    472A: FA          MOV R2,A                      
    472B: BA 09 74    CJNE R2,#0x09,0x47A2             ; -> loc_47A2
    472E: 90 7F B0    MOV DPTR,#0x7FB0              
    4731: E0          MOVX A,@DPTR                  
    4732: FA          MOV R2,A                      
    4733: 70 6D       JNZ 0x47A2                       ; -> loc_47A2
    4735: 90 7F AF    MOV DPTR,#0x7FAF              
    4738: E0          MOVX A,@DPTR                  
    4739: FA          MOV R2,A                      
    473A: BA 02 65    CJNE R2,#0x02,0x47A2             ; -> loc_47A2
    473D: 90 7F AE    MOV DPTR,#0x7FAE              
    4740: E0          MOVX A,@DPTR                  
    4741: FA          MOV R2,A                      
    4742: BA C0 5D    CJNE R2,#0xC0,0x47A2             ; -> loc_47A2
    4745: 90 7F BF    MOV DPTR,#0x7FBF              
    4748: 74 01       MOV A,#0x01                   
    474A: F0          MOVX @DPTR,A                  
    474B: 90 CC 97    MOV DPTR,#0xCC97              
    474E: E0          MOVX A,@DPTR                  
    474F: 60 49       JZ 0x479A                        ; -> loc_479A
    4751: 90 7F A2    MOV DPTR,#0x7FA2              
    4754: E0          MOVX A,@DPTR                  
    4755: FA          MOV R2,A                      
    4756: BA 05 02    CJNE R2,#0x05,0x475B             ; -> loc_475B
    4759: 80 0A       SJMP 0x4765                      ; -> 0x4765

loc_475B:
    475B: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    475E: E0          MOVX A,@DPTR                  
    475F: FA          MOV R2,A                      
    4760: BA 3F 00    CJNE R2,#0x3F,0x4763             ; -> 0x4763
    4763: 50 35       JNC 0x479A                       ; -> loc_479A
    4765: 90 7F EC    MOV DPTR,#0x7FEC              
    4768: 74 01       MOV A,#0x01                   
    476A: F0          MOVX @DPTR,A                  
    476B: 90 7F E1    MOV DPTR,#0x7FE1              
    476E: 74 23       MOV A,#0x23                   
    4770: F0          MOVX @DPTR,A                  
    4771: 90 7F E1    MOV DPTR,#0x7FE1              
    4774: E0          MOVX A,@DPTR                  
    4775: FA          MOV R2,A                      
    4776: 74 32       MOV A,#0x32                   
    4778: B5 02 00    CJNE A,0x02,0x477B               ; -> 0x477B
    477B: 40 15       JC 0x4792                        ; -> loc_4792
    477D: 90 7F E1    MOV DPTR,#0x7FE1              
    4780: E0          MOVX A,@DPTR                  
    4781: FA          MOV R2,A                      
    4782: F5 82       MOV DPL(0x82),A               
    4784: 75 83 CA    MOV DPH(0x83),#0xCA           
    4787: E4          CLR A                         
    4788: F0          MOVX @DPTR,A                  
    4789: 90 7F E1    MOV DPTR,#0x7FE1              
    478C: E0          MOVX A,@DPTR                  
    478D: 24 01       ADD A,#0x01                   
    478F: F0          MOVX @DPTR,A                  
    4790: 80 DF       SJMP 0x4771                      ; -> 0x4771

loc_4792:
    4792: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    4795: 74 0F       MOV A,#0x0F                   
    4797: F0          MOVX @DPTR,A                  
    4798: 80 5B       SJMP 0x47F5                      ; -> 0x47F5

loc_479A:
    479A: 90 7F EC    MOV DPTR,#0x7FEC              
    479D: 74 02       MOV A,#0x02                   
    479F: F0          MOVX @DPTR,A                  
    47A0: 80 53       SJMP 0x47F5                      ; -> 0x47F5

loc_47A2:
    47A2: 90 7F B0    MOV DPTR,#0x7FB0              
    47A5: E0          MOVX A,@DPTR                  
    47A6: FA          MOV R2,A                      
    47A7: 70 12       JNZ 0x47BB                       ; -> 0x47BB
    47A9: 90 7F AF    MOV DPTR,#0x7FAF              
    47AC: E0          MOVX A,@DPTR                  
    47AD: FA          MOV R2,A                      
    47AE: 54 F8       ANL A,#0xF8                   
    47B0: 70 09       JNZ 0x47BB                       ; -> 0x47BB
    47B2: 90 7F AE    MOV DPTR,#0x7FAE              
    47B5: E0          MOVX A,@DPTR                  
    47B6: FA          MOV R2,A                      
    47B7: 54 E0       ANL A,#0xE0                   
    47B9: 60 08       JZ 0x47C3                        ; -> loc_47C3
    47BB: 90 7F EC    MOV DPTR,#0x7FEC              
    47BE: 74 02       MOV A,#0x02                   
    47C0: F0          MOVX @DPTR,A                  
    47C1: 80 32       SJMP 0x47F5                      ; -> 0x47F5

loc_47C3:
    47C3: 90 7F AF    MOV DPTR,#0x7FAF              
    47C6: E0          MOVX A,@DPTR                  
    47C7: FA          MOV R2,A                      
    47C8: 53 02 07    ANL 0x02,#0x07                
    47CB: 90 CA C0    MOV DPTR,#0xCAC0              
    47CE: EA          MOV A,R2                      
    47CF: F0          MOVX @DPTR,A                  
    47D0: 90 7F AE    MOV DPTR,#0x7FAE              
    47D3: E0          MOVX A,@DPTR                  
    47D4: 90 CA C1    MOV DPTR,#0xCAC1              
    47D7: F0          MOVX @DPTR,A                  
    47D8: 90 7F B1    MOV DPTR,#0x7FB1              
    47DB: E0          MOVX A,@DPTR                  
    47DC: FA          MOV R2,A                      
    47DD: 1A          DEC R2                        
    47DE: 90 CA C2    MOV DPTR,#0xCAC2              
    47E1: EA          MOV A,R2                      
    47E2: F0          MOVX @DPTR,A                  
    47E3: 90 CA C3    MOV DPTR,#0xCAC3              
    47E6: 74 01       MOV A,#0x01                   
    47E8: F0          MOVX @DPTR,A                  
    47E9: 90 CA 50    MOV DPTR,#0xCA50                 ; register block CA00
    47EC: E0          MOVX A,@DPTR                  
    47ED: FA          MOV R2,A                      
    47EE: 90 7F EC    MOV DPTR,#0x7FEC              
    47F1: F0          MOVX @DPTR,A                  
    47F2: EA          MOV A,R2                      
    47F3: 60 F4       JZ 0x47E9                        ; -> 0x47E9
    47F5: 90 7F EC    MOV DPTR,#0x7FEC              
    47F8: E0          MOVX A,@DPTR                  
    47F9: FA          MOV R2,A                      
    47FA: BA 01 02    CJNE R2,#0x01,0x47FF             ; -> loc_47FF
    47FD: 80 11       SJMP 0x4810                      ; -> 0x4810

loc_47FF:
    47FF: 75 82 00    MOV DPL(0x82),#0x00           
    4802: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    4805: 90 7F 76    MOV DPTR,#0x7F76              
    4808: E4          CLR A                         
    4809: F0          MOVX @DPTR,A                  
    480A: 90 7F 78    MOV DPTR,#0x7F78              
    480D: 74 01       MOV A,#0x01                   
    480F: F0          MOVX @DPTR,A                  
    4810: 90 7F EC    MOV DPTR,#0x7FEC              
    4813: E0          MOVX A,@DPTR                  
    4814: FA          MOV R2,A                      
    4815: BA 02 01    CJNE R2,#0x02,0x4819             ; -> loc_4819
    4818: 22          RET                           

loc_4819:
    4819: 90 7F B2    MOV DPTR,#0x7FB2              
    481C: E0          MOVX A,@DPTR                  
    481D: FA          MOV R2,A                      
    481E: 90 7F B0    MOV DPTR,#0x7FB0              
    4821: E0          MOVX A,@DPTR                  
    4822: F5 10       MOV 0x10,A                    
    4824: 90 7F AF    MOV DPTR,#0x7FAF              
    4827: E0          MOVX A,@DPTR                  
    4828: F5 11       MOV 0x11,A                    
    482A: 90 7F AE    MOV DPTR,#0x7FAE              
    482D: E0          MOVX A,@DPTR                  
    482E: F5 12       MOV 0x12,A                    
    4830: 90 7F B1    MOV DPTR,#0x7FB1              
    4833: E0          MOVX A,@DPTR                  
    4834: F5 13       MOV 0x13,A                    
    4836: 8A 82       MOV 0x82,R2                   
    4838: 12 28 78    LCALL 0x2878                     ; -> sub_2878
    483B: 90 7F 74    MOV DPTR,#0x7F74              
    483E: E0          MOVX A,@DPTR                  
    483F: FA          MOV R2,A                      
    4840: 60 25       JZ 0x4867                        ; -> loc_4867
    4842: 12 14 65    LCALL 0x1465                     ; -> sub_1465
    4845: 90 7F 74    MOV DPTR,#0x7F74              
    4848: E4          CLR A                         
    4849: F0          MOVX @DPTR,A                  
    484A: 22          RET                           

loc_484B:
    484B: 90 7F EC    MOV DPTR,#0x7FEC              
    484E: 74 02       MOV A,#0x02                   
    4850: F0          MOVX @DPTR,A                  
    4851: 90 7F 7B    MOV DPTR,#0x7F7B              
    4854: 74 01       MOV A,#0x01                   
    4856: F0          MOVX @DPTR,A                  
    4857: 90 7F 78    MOV DPTR,#0x7F78              
    485A: 74 01       MOV A,#0x01                   
    485C: F0          MOVX @DPTR,A                  
    485D: E4          CLR A                         
    485E: F5 08       MOV 0x08,A                    
    4860: F5 09       MOV 0x09,A                    
    4862: F5 82       MOV DPL(0x82),A               
    4864: 02 22 11    LJMP 0x2211                      ; -> sub_2211

loc_4867:
    4867: 22          RET                           

loc_4868:
    4868: 75 4D 00    MOV 0x4D,#0x00                
    486B: 78 00       MOV R0,#0x00                  
    486D: 79 00       MOV R1,#0x00                  
    486F: 7A 00       MOV R2,#0x00                  
    4871: 7B 00       MOV R3,#0x00                  
    4873: 7C 00       MOV R4,#0x00                  
    4875: 7D 00       MOV R5,#0x00                  
    4877: 7E 00       MOV R6,#0x00                  
    4879: 7F 00       MOV R7,#0x00                  
    487B: 90 7F E6    MOV DPTR,#0x7FE6              
    487E: E4          CLR A                         
    487F: F0          MOVX @DPTR,A                  
    4880: 90 CC 99    MOV DPTR,#0xCC99              
    4883: F0          MOVX @DPTR,A                  
    4884: 90 CC 18    MOV DPTR,#0xCC18                 ; register block CC00
    4887: 74 06       MOV A,#0x06                   
    4889: F0          MOVX @DPTR,A                  
    488A: 75 50 01    MOV 0x50,#0x01                
    488D: 75 51 01    MOV 0x51,#0x01                
    4890: 75 82 00    MOV DPL(0x82),#0x00           
    4893: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4896: 90 00 A7    MOV DPTR,#0x00A7              
    4899: E4          CLR A                         
    489A: 93          MOVC A,@A+DPTR                
    489B: FB          MOV R3,A                      
    489C: 30 E0 06    JNB ACC.0,0x48A5                 ; -> 0x48A5
    489F: 75 82 00    MOV DPL(0x82),#0x00           
    48A2: 12 05 DB    LCALL 0x05DB                     ; -> sub_05DB
    48A5: 90 CC 99    MOV DPTR,#0xCC99              
    48A8: E0          MOVX A,@DPTR                  
    48A9: FB          MOV R3,A                      
    48AA: 0B          INC R3                        
    48AB: 90 CC 99    MOV DPTR,#0xCC99              
    48AE: EB          MOV A,R3                      
    48AF: F0          MOVX @DPTR,A                  
    48B0: 90 D8 06    MOV DPTR,#0xD806              
    48B3: E0          MOVX A,@DPTR                  
    48B4: FB          MOV R3,A                      
    48B5: 53 03 FE    ANL 0x03,#0xFE                
    48B8: 90 D8 06    MOV DPTR,#0xD806              
    48BB: EB          MOV A,R3                      
    48BC: F0          MOVX @DPTR,A                  
    48BD: 90 D8 15    MOV DPTR,#0xD815              
    48C0: E4          CLR A                         
    48C1: F0          MOVX @DPTR,A                  
    48C2: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    48C5: E0          MOVX A,@DPTR                  
    48C6: FB          MOV R3,A                      
    48C7: 30 E0 0A    JNB ACC.0,0x48D4                 ; -> 0x48D4
    48CA: 90 CC 9B    MOV DPTR,#0xCC9B              
    48CD: E0          MOVX A,@DPTR                  
    48CE: FB          MOV R3,A                      
    48CF: BB 0A 00    CJNE R3,#0x0A,0x48D2             ; -> 0x48D2
    48D2: 40 08       JC 0x48DC                        ; -> 0x48DC
    48D4: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    48D7: E0          MOVX A,@DPTR                  
    48D8: FB          MOV R3,A                      
    48D9: 30 E0 0E    JNB ACC.0,0x48EA                 ; -> loc_48EA
    48DC: 75 50 20    MOV 0x50,#0x20                
    48DF: 75 51 40    MOV 0x51,#0x40                
    48E2: 75 82 00    MOV DPL(0x82),#0x00           
    48E5: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    48E8: 80 D8       SJMP 0x48C2                      ; -> 0x48C2

loc_48EA:
    48EA: 90 D8 6A    MOV DPTR,#0xD86A              
    48ED: E0          MOVX A,@DPTR                  
    48EE: FB          MOV R3,A                      
    48EF: 30 E4 12    JNB ACC.4,0x4904                 ; -> 0x4904
    48F2: 90 CA 10    MOV DPTR,#0xCA10                 ; register block CA00
    48F5: 74 03       MOV A,#0x03                   
    48F7: F0          MOVX @DPTR,A                  
    48F8: 90 CA 15    MOV DPTR,#0xCA15                 ; register block CA00
    48FB: 74 20       MOV A,#0x20                   
    48FD: F0          MOVX @DPTR,A                  
    48FE: 90 CA 14    MOV DPTR,#0xCA14                 ; register block CA00
    4901: 74 07       MOV A,#0x07                   
    4903: F0          MOVX @DPTR,A                  
    4904: 90 00 A6    MOV DPTR,#0x00A6              
    4907: E4          CLR A                         
    4908: 93          MOVC A,@A+DPTR                
    4909: FB          MOV R3,A                      
    490A: 30 E6 10    JNB ACC.6,0x491D                 ; -> 0x491D
    490D: 90 00 AA    MOV DPTR,#0x00AA              
    4910: E4          CLR A                         
    4911: 93          MOVC A,@A+DPTR                
    4912: FB          MOV R3,A                      
    4913: 90 CA 18    MOV DPTR,#0xCA18                 ; register block CA00
    4916: F0          MOVX @DPTR,A                  
    4917: 90 CA 19    MOV DPTR,#0xCA19                 ; register block CA00
    491A: 74 FF       MOV A,#0xFF                   
    491C: F0          MOVX @DPTR,A                  
    491D: 90 CC 0C    MOV DPTR,#0xCC0C                 ; register block CC00
    4920: 74 C7       MOV A,#0xC7                   
    4922: F0          MOVX @DPTR,A                  
    4923: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4926: E4          CLR A                         
    4927: F0          MOVX @DPTR,A                  
    4928: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    492B: F0          MOVX @DPTR,A                  
    492C: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    492F: 74 02       MOV A,#0x02                   
    4931: F0          MOVX @DPTR,A                  
    4932: 90 D8 6A    MOV DPTR,#0xD86A              
    4935: E0          MOVX A,@DPTR                  
    4936: FB          MOV R3,A                      
    4937: 30 E3 08    JNB ACC.3,0x4942                 ; -> loc_4942
    493A: 90 D8 A0    MOV DPTR,#0xD8A0              
    493D: 74 0D       MOV A,#0x0D                   
    493F: F0          MOVX @DPTR,A                  
    4940: 80 06       SJMP 0x4948                      ; -> 0x4948

loc_4942:
    4942: 90 C8 A0    MOV DPTR,#0xC8A0                 ; control + status register block
    4945: 74 0E       MOV A,#0x0E                   
    4947: F0          MOVX @DPTR,A                  
    4948: 90 D8 35    MOV DPTR,#0xD835              
    494B: 74 02       MOV A,#0x02                   
    494D: F0          MOVX @DPTR,A                  
    494E: 90 D4 00    MOV DPTR,#0xD400              
    4951: E0          MOVX A,@DPTR                  
    4952: FB          MOV R3,A                      
    4953: 43 03 01    ORL 0x03,#0x01                
    4956: 90 D4 00    MOV DPTR,#0xD400              
    4959: EB          MOV A,R3                      
    495A: F0          MOVX @DPTR,A                  
    495B: E0          MOVX A,@DPTR                  
    495C: FB          MOV R3,A                      
    495D: 53 03 FE    ANL 0x03,#0xFE                
    4960: 90 D4 00    MOV DPTR,#0xD400              
    4963: EB          MOV A,R3                      
    4964: F0          MOVX @DPTR,A                  
    4965: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    4968: E0          MOVX A,@DPTR                  
    4969: FB          MOV R3,A                      
    496A: 53 03 FD    ANL 0x03,#0xFD                
    496D: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    4970: EB          MOV A,R3                      
    4971: F0          MOVX @DPTR,A                  
    4972: 75 50 20    MOV 0x50,#0x20                
    4975: 75 51 01    MOV 0x51,#0x01                
    4978: 75 82 00    MOV DPL(0x82),#0x00           
    497B: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    497E: 90 C8 01    MOV DPTR,#0xC801                 ; control + status register block
    4981: E0          MOVX A,@DPTR                  
    4982: FB          MOV R3,A                      
    4983: 90 7F 84    MOV DPTR,#0x7F84              
    4986: 74 80       MOV A,#0x80                   
    4988: 5B          ANL A,R3                      
    4989: F0          MOVX @DPTR,A                  
    498A: 90 7F 84    MOV DPTR,#0x7F84              
    498D: E0          MOVX A,@DPTR                  
    498E: FB          MOV R3,A                      
    498F: 70 1F       JNZ 0x49B0                       ; -> 0x49B0
    4991: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    4994: 74 FF       MOV A,#0xFF                   
    4996: F0          MOVX @DPTR,A                  
    4997: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    499A: 74 FF       MOV A,#0xFF                   
    499C: F0          MOVX @DPTR,A                  
    499D: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    49A0: E0          MOVX A,@DPTR                  
    49A1: FB          MOV R3,A                      
    49A2: 53 03 DF    ANL 0x03,#0xDF                
    49A5: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    49A8: EB          MOV A,R3                      
    49A9: F0          MOVX @DPTR,A                  
    49AA: 90 D2 38    MOV DPTR,#0xD238              
    49AD: 74 04       MOV A,#0x04                   
    49AF: F0          MOVX @DPTR,A                  
    49B0: 90 CC 8E    MOV DPTR,#0xCC8E                 ; register block CC00
    49B3: E0          MOVX A,@DPTR                  
    49B4: FB          MOV R3,A                      
    49B5: 90 7F A4    MOV DPTR,#0x7FA4              
    49B8: 74 04       MOV A,#0x04                   
    49BA: 5B          ANL A,R3                      
    49BB: F0          MOVX @DPTR,A                  
    49BC: 90 CC 8C    MOV DPTR,#0xCC8C                 ; register block CC00
    49BF: E0          MOVX A,@DPTR                  
    49C0: 90 7F 94    MOV DPTR,#0x7F94              
    49C3: F0          MOVX @DPTR,A                  
    49C4: 90 CC 8D    MOV DPTR,#0xCC8D                 ; register block CC00
    49C7: E0          MOVX A,@DPTR                  
    49C8: 90 7F 95    MOV DPTR,#0x7F95              
    49CB: F0          MOVX @DPTR,A                  
    49CC: 90 C8 28    MOV DPTR,#0xC828                 ; control + status register block
    49CF: E0          MOVX A,@DPTR                  
    49D0: 90 7F 96    MOV DPTR,#0x7F96              
    49D3: F0          MOVX @DPTR,A                  
    49D4: 90 C8 29    MOV DPTR,#0xC829                 ; control + status register block
    49D7: E0          MOVX A,@DPTR                  
    49D8: 90 7F 97    MOV DPTR,#0x7F97              
    49DB: F0          MOVX @DPTR,A                  
    49DC: 90 C8 2A    MOV DPTR,#0xC82A                 ; control + status register block
    49DF: E0          MOVX A,@DPTR                  
    49E0: FB          MOV R3,A                      
    49E1: 90 7F 98    MOV DPTR,#0x7F98              
    49E4: F0          MOVX @DPTR,A                  
    49E5: 90 CC 92    MOV DPTR,#0xCC92                 ; register block CC00
    49E8: E0          MOVX A,@DPTR                  
    49E9: 60 0A       JZ 0x49F5                        ; -> loc_49F5
    49EB: 90 CC 92    MOV DPTR,#0xCC92                 ; register block CC00
    49EE: E0          MOVX A,@DPTR                  
    49EF: FB          MOV R3,A                      
    49F0: 53 03 7F    ANL 0x03,#0x7F                
    49F3: 80 02       SJMP 0x49F7                      ; -> 0x49F7

loc_49F5:
    49F5: 7B 02       MOV R3,#0x02                  
    49F7: 90 7F A6    MOV DPTR,#0x7FA6              
    49FA: EB          MOV A,R3                      
    49FB: F0          MOVX @DPTR,A                  
    49FC: 90 CC 91    MOV DPTR,#0xCC91                 ; register block CC00
    49FF: E0          MOVX A,@DPTR                  
    4A00: 90 7F A5    MOV DPTR,#0x7FA5              
    4A03: F0          MOVX @DPTR,A                  
    4A04: 90 CC 93    MOV DPTR,#0xCC93                 ; register block CC00
    4A07: 74 06       MOV A,#0x06                   
    4A09: F0          MOVX @DPTR,A                  
    4A0A: 90 7F 84    MOV DPTR,#0x7F84              
    4A0D: E0          MOVX A,@DPTR                  
    4A0E: FB          MOV R3,A                      
    4A0F: 60 17       JZ 0x4A28                        ; -> loc_4A28
    4A11: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    4A14: E0          MOVX A,@DPTR                  
    4A15: FB          MOV R3,A                      
    4A16: 20 E3 0F    JB ACC.3,0x4A28                  ; -> loc_4A28
    4A19: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    4A1C: E0          MOVX A,@DPTR                  
    4A1D: FB          MOV R3,A                      
    4A1E: 53 03 FB    ANL 0x03,#0xFB                
    4A21: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    4A24: EB          MOV A,R3                      
    4A25: F0          MOVX @DPTR,A                  
    4A26: 80 0D       SJMP 0x4A35                      ; -> 0x4A35

loc_4A28:
    4A28: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    4A2B: E0          MOVX A,@DPTR                  
    4A2C: FB          MOV R3,A                      
    4A2D: 43 03 04    ORL 0x03,#0x04                
    4A30: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    4A33: EB          MOV A,R3                      
    4A34: F0          MOVX @DPTR,A                  
    4A35: 90 D8 5B    MOV DPTR,#0xD85B              
    4A38: E0          MOVX A,@DPTR                  
    4A39: FB          MOV R3,A                      
    4A3A: 53 03 FB    ANL 0x03,#0xFB                
    4A3D: 90 D8 5B    MOV DPTR,#0xD85B              
    4A40: EB          MOV A,R3                      
    4A41: F0          MOVX @DPTR,A                  
    4A42: 90 D8 13    MOV DPTR,#0xD813              
    4A45: E0          MOVX A,@DPTR                  
    4A46: FB          MOV R3,A                      
    4A47: 53 03 0F    ANL 0x03,#0x0F                
    4A4A: 90 D8 13    MOV DPTR,#0xD813              
    4A4D: EB          MOV A,R3                      
    4A4E: F0          MOVX @DPTR,A                  
    4A4F: 90 00 A9    MOV DPTR,#0x00A9              
    4A52: E4          CLR A                         
    4A53: 93          MOVC A,@A+DPTR                
    4A54: FB          MOV R3,A                      
    4A55: 30 E6 04    JNB ACC.6,0x4A5C                 ; -> loc_4A5C
    4A58: 7B 02       MOV R3,#0x02                  
    4A5A: 80 11       SJMP 0x4A6D                      ; -> 0x4A6D

loc_4A5C:
    4A5C: 90 00 A9    MOV DPTR,#0x00A9              
    4A5F: E4          CLR A                         
    4A60: 93          MOVC A,@A+DPTR                
    4A61: FC          MOV R4,A                      
    4A62: 30 E7 04    JNB ACC.7,0x4A69                 ; -> loc_4A69
    4A65: 7C 23       MOV R4,#0x23                  
    4A67: 80 02       SJMP 0x4A6B                      ; -> 0x4A6B

loc_4A69:
    4A69: 7C 03       MOV R4,#0x03                  
    4A6B: 8C 03       MOV 0x03,R4                   
    4A6D: 90 D6 09    MOV DPTR,#0xD609              
    4A70: EB          MOV A,R3                      
    4A71: F0          MOVX @DPTR,A                  
    4A72: 90 00 A9    MOV DPTR,#0x00A9              
    4A75: E4          CLR A                         
    4A76: 93          MOVC A,@A+DPTR                
    4A77: FB          MOV R3,A                      
    4A78: 30 E6 04    JNB ACC.6,0x4A7F                 ; -> loc_4A7F
    4A7B: 7B 02       MOV R3,#0x02                  
    4A7D: 80 11       SJMP 0x4A90                      ; -> 0x4A90

loc_4A7F:
    4A7F: 90 00 A9    MOV DPTR,#0x00A9              
    4A82: E4          CLR A                         
    4A83: 93          MOVC A,@A+DPTR                
    4A84: FC          MOV R4,A                      
    4A85: 30 E7 04    JNB ACC.7,0x4A8C                 ; -> loc_4A8C
    4A88: 7C 23       MOV R4,#0x23                  
    4A8A: 80 02       SJMP 0x4A8E                      ; -> 0x4A8E

loc_4A8C:
    4A8C: 7C 03       MOV R4,#0x03                  
    4A8E: 8C 03       MOV 0x03,R4                   
    4A90: 90 D6 89    MOV DPTR,#0xD689              
    4A93: EB          MOV A,R3                      
    4A94: F0          MOVX @DPTR,A                  
    4A95: 90 00 A9    MOV DPTR,#0x00A9              
    4A98: E4          CLR A                         
    4A99: 93          MOVC A,@A+DPTR                
    4A9A: FB          MOV R3,A                      
    4A9B: 30 E6 04    JNB ACC.6,0x4AA2                 ; -> loc_4AA2
    4A9E: 7B 02       MOV R3,#0x02                  
    4AA0: 80 11       SJMP 0x4AB3                      ; -> 0x4AB3

loc_4AA2:
    4AA2: 90 00 A9    MOV DPTR,#0x00A9              
    4AA5: E4          CLR A                         
    4AA6: 93          MOVC A,@A+DPTR                
    4AA7: FC          MOV R4,A                      
    4AA8: 30 E7 04    JNB ACC.7,0x4AAF                 ; -> loc_4AAF
    4AAB: 7C 23       MOV R4,#0x23                  
    4AAD: 80 02       SJMP 0x4AB1                      ; -> 0x4AB1

loc_4AAF:
    4AAF: 7C 03       MOV R4,#0x03                  
    4AB1: 8C 03       MOV 0x03,R4                   
    4AB3: 90 D7 09    MOV DPTR,#0xD709              
    4AB6: EB          MOV A,R3                      
    4AB7: F0          MOVX @DPTR,A                  
    4AB8: 90 00 A9    MOV DPTR,#0x00A9              
    4ABB: E4          CLR A                         
    4ABC: 93          MOVC A,@A+DPTR                
    4ABD: FB          MOV R3,A                      
    4ABE: 30 E6 04    JNB ACC.6,0x4AC5                 ; -> loc_4AC5
    4AC1: 7B 02       MOV R3,#0x02                  
    4AC3: 80 11       SJMP 0x4AD6                      ; -> 0x4AD6

loc_4AC5:
    4AC5: 90 00 A9    MOV DPTR,#0x00A9              
    4AC8: E4          CLR A                         
    4AC9: 93          MOVC A,@A+DPTR                
    4ACA: FC          MOV R4,A                      
    4ACB: 30 E7 04    JNB ACC.7,0x4AD2                 ; -> loc_4AD2
    4ACE: 7C 23       MOV R4,#0x23                  
    4AD0: 80 02       SJMP 0x4AD4                      ; -> 0x4AD4

loc_4AD2:
    4AD2: 7C 03       MOV R4,#0x03                  
    4AD4: 8C 03       MOV 0x03,R4                   
    4AD6: 90 D7 89    MOV DPTR,#0xD789              
    4AD9: EB          MOV A,R3                      
    4ADA: F0          MOVX @DPTR,A                  
    4ADB: 90 00 A9    MOV DPTR,#0x00A9              
    4ADE: E4          CLR A                         
    4ADF: 93          MOVC A,@A+DPTR                
    4AE0: FB          MOV R3,A                      
    4AE1: 30 E7 18    JNB ACC.7,0x4AFC                 ; -> 0x4AFC
    4AE4: 90 D6 06    MOV DPTR,#0xD606              
    4AE7: 74 02       MOV A,#0x02                   
    4AE9: F0          MOVX @DPTR,A                  
    4AEA: 90 D6 86    MOV DPTR,#0xD686              
    4AED: 74 02       MOV A,#0x02                   
    4AEF: F0          MOVX @DPTR,A                  
    4AF0: 90 D7 06    MOV DPTR,#0xD706              
    4AF3: 74 02       MOV A,#0x02                   
    4AF5: F0          MOVX @DPTR,A                  
    4AF6: 90 D7 86    MOV DPTR,#0xD786              
    4AF9: 74 02       MOV A,#0x02                   
    4AFB: F0          MOVX @DPTR,A                  
    4AFC: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    4AFF: E0          MOVX A,@DPTR                  
    4B00: FB          MOV R3,A                      
    4B01: 53 03 FD    ANL 0x03,#0xFD                
    4B04: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    4B07: EB          MOV A,R3                      
    4B08: F0          MOVX @DPTR,A                  
    4B09: 90 D8 6D    MOV DPTR,#0xD86D              
    4B0C: E0          MOVX A,@DPTR                  
    4B0D: FB          MOV R3,A                      
    4B0E: 43 03 01    ORL 0x03,#0x01                
    4B11: 90 D8 6D    MOV DPTR,#0xD86D              
    4B14: EB          MOV A,R3                      
    4B15: F0          MOVX @DPTR,A                  
    4B16: 90 D8 06    MOV DPTR,#0xD806              
    4B19: E0          MOVX A,@DPTR                  
    4B1A: FB          MOV R3,A                      
    4B1B: 43 03 01    ORL 0x03,#0x01                
    4B1E: 90 D8 06    MOV DPTR,#0xD806              
    4B21: EB          MOV A,R3                      
    4B22: F0          MOVX @DPTR,A                  
    4B23: 90 D8 30    MOV DPTR,#0xD830              
    4B26: 74 01       MOV A,#0x01                   
    4B28: F0          MOVX @DPTR,A                  
    4B29: 75 50 10    MOV 0x50,#0x10                
    4B2C: 75 51 70    MOV 0x51,#0x70                
    4B2F: 75 82 00    MOV DPL(0x82),#0x00           
    4B32: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4B35: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4B38: E4          CLR A                         
    4B39: F0          MOVX @DPTR,A                  
    4B3A: 90 D8 30    MOV DPTR,#0xD830              
    4B3D: E0          MOVX A,@DPTR                  
    4B3E: FB          MOV R3,A                      
    4B3F: 20 E1 0A    JB ACC.1,0x4B4C                  ; -> 0x4B4C
    4B42: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4B45: E0          MOVX A,@DPTR                  
    4B46: FB          MOV R3,A                      
    4B47: BB C8 00    CJNE R3,#0xC8,0x4B4A             ; -> 0x4B4A
    4B4A: 40 EE       JC 0x4B3A                        ; -> 0x4B3A
    4B4C: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4B4F: E0          MOVX A,@DPTR                  
    4B50: FB          MOV R3,A                      
    4B51: BB C8 00    CJNE R3,#0xC8,0x4B54             ; -> 0x4B54
    4B54: 50 0B       JNC 0x4B61                       ; -> 0x4B61
    4B56: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    4B59: E0          MOVX A,@DPTR                  
    4B5A: FB          MOV R3,A                      
    4B5B: 53 03 1C    ANL 0x03,#0x1C                
    4B5E: BB 01 2D    CJNE R3,#0x01,0x4B8E             ; -> loc_4B8E
    4B61: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    4B64: E0          MOVX A,@DPTR                  
    4B65: FB          MOV R3,A                      
    4B66: 53 03 E3    ANL 0x03,#0xE3                
    4B69: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    4B6C: EB          MOV A,R3                      
    4B6D: F0          MOVX @DPTR,A                  
    4B6E: 90 D8 6D    MOV DPTR,#0xD86D              
    4B71: E0          MOVX A,@DPTR                  
    4B72: FB          MOV R3,A                      
    4B73: 53 03 FE    ANL 0x03,#0xFE                
    4B76: 90 D8 6D    MOV DPTR,#0xD86D              
    4B79: EB          MOV A,R3                      
    4B7A: F0          MOVX @DPTR,A                  
    4B7B: 90 D8 30    MOV DPTR,#0xD830              
    4B7E: E0          MOVX A,@DPTR                  
    4B7F: FB          MOV R3,A                      
    4B80: 53 03 FE    ANL 0x03,#0xFE                
    4B83: 90 D8 30    MOV DPTR,#0xD830              
    4B86: EB          MOV A,R3                      
    4B87: F0          MOVX @DPTR,A                  
    4B88: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    4B8B: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_4B8E:
    4B8E: 90 D8 6D    MOV DPTR,#0xD86D              
    4B91: E0          MOVX A,@DPTR                  
    4B92: FB          MOV R3,A                      
    4B93: 53 03 FE    ANL 0x03,#0xFE                
    4B96: 90 D8 6D    MOV DPTR,#0xD86D              
    4B99: EB          MOV A,R3                      
    4B9A: F0          MOVX @DPTR,A                  
    4B9B: 12 16 03    LCALL 0x1603                     ; -> sub_1603
    4B9E: E5 82       MOV A,DPL(0x82)               
    4BA0: 60 06       JZ 0x4BA8                        ; -> loc_4BA8
    4BA2: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    4BA5: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_4BA8:
    4BA8: 90 D8 6D    MOV DPTR,#0xD86D              
    4BAB: E0          MOVX A,@DPTR                  
    4BAC: FB          MOV R3,A                      
    4BAD: 43 03 01    ORL 0x03,#0x01                
    4BB0: 90 D8 6D    MOV DPTR,#0xD86D              
    4BB3: EB          MOV A,R3                      
    4BB4: F0          MOVX @DPTR,A                  
    4BB5: 90 D8 30    MOV DPTR,#0xD830              
    4BB8: E0          MOVX A,@DPTR                  
    4BB9: FB          MOV R3,A                      
    4BBA: 53 03 FE    ANL 0x03,#0xFE                
    4BBD: 90 D8 30    MOV DPTR,#0xD830              
    4BC0: EB          MOV A,R3                      
    4BC1: F0          MOVX @DPTR,A                  
    4BC2: 90 7F 7D    MOV DPTR,#0x7F7D              
    4BC5: 74 10       MOV A,#0x10                   
    4BC7: F0          MOVX @DPTR,A                  
    4BC8: 75 82 01    MOV DPL(0x82),#0x01           
    4BCB: 12 0C FA    LCALL 0x0CFA                     ; -> sub_0CFA
    4BCE: 90 D8 02    MOV DPTR,#0xD802              
    4BD1: 74 02       MOV A,#0x02                   
    4BD3: F0          MOVX @DPTR,A                  
    4BD4: 90 CE 06    MOV DPTR,#0xCE06              
    4BD7: 74 10       MOV A,#0x10                   
    4BD9: F0          MOVX @DPTR,A                  
    4BDA: 90 D8 01    MOV DPTR,#0xD801              
    4BDD: 74 81       MOV A,#0x81                   
    4BDF: F0          MOVX @DPTR,A                  
    4BE0: 90 D8 03    MOV DPTR,#0xD803              
    4BE3: 74 F0       MOV A,#0xF0                   
    4BE5: F0          MOVX @DPTR,A                  
    4BE6: 90 D8 30    MOV DPTR,#0xD830              
    4BE9: E4          CLR A                         
    4BEA: F0          MOVX @DPTR,A                  
    4BEB: 90 7F 7E    MOV DPTR,#0x7F7E              
    4BEE: 74 04       MOV A,#0x04                   
    4BF0: F0          MOVX @DPTR,A                  
    4BF1: 75 82 00    MOV DPL(0x82),#0x00           
    4BF4: 12 28 20    LCALL 0x2820                     ; -> sub_2820
    4BF7: 90 7F E6    MOV DPTR,#0x7FE6              
    4BFA: E0          MOVX A,@DPTR                  
    4BFB: FB          MOV R3,A                      
    4BFC: 70 2B       JNZ 0x4C29                       ; -> 0x4C29
    4BFE: 12 1A C6    LCALL 0x1AC6                     ; -> sub_1AC6
    4C01: 75 82 00    MOV DPL(0x82),#0x00           
    4C04: 12 1B 66    LCALL 0x1B66                     ; -> sub_1B66
    4C07: E5 82       MOV A,DPL(0x82)               
    4C09: 60 06       JZ 0x4C11                        ; -> loc_4C11
    4C0B: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    4C0E: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_4C11:
    4C11: 90 D8 4F    MOV DPTR,#0xD84F              
    4C14: E4          CLR A                         
    4C15: F0          MOVX @DPTR,A                  
    4C16: 75 82 02    MOV DPL(0x82),#0x02           
    4C19: 12 1B 66    LCALL 0x1B66                     ; -> sub_1B66
    4C1C: E5 82       MOV A,DPL(0x82)               
    4C1E: 60 06       JZ 0x4C26                        ; -> loc_4C26
    4C20: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    4C23: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_4C26:
    4C26: 12 1F 1A    LCALL 0x1F1A                     ; -> sub_1F1A
    4C29: 90 7F E6    MOV DPTR,#0x7FE6              
    4C2C: 74 01       MOV A,#0x01                   
    4C2E: F0          MOVX @DPTR,A                  
    4C2F: 90 D8 50    MOV DPTR,#0xD850              
    4C32: 74 0F       MOV A,#0x0F                   
    4C34: F0          MOVX @DPTR,A                  
    4C35: 90 D8 52    MOV DPTR,#0xD852              
    4C38: 74 1F       MOV A,#0x1F                   
    4C3A: F0          MOVX @DPTR,A                  
    4C3B: 90 D8 53    MOV DPTR,#0xD853              
    4C3E: 74 FF       MOV A,#0xFF                   
    4C40: F0          MOVX @DPTR,A                  
    4C41: 90 D6 07    MOV DPTR,#0xD607              
    4C44: E0          MOVX A,@DPTR                  
    4C45: 90 7F E1    MOV DPTR,#0x7FE1              
    4C48: F0          MOVX @DPTR,A                  
    4C49: 90 D6 87    MOV DPTR,#0xD687              
    4C4C: E0          MOVX A,@DPTR                  
    4C4D: 90 7F E2    MOV DPTR,#0x7FE2              
    4C50: F0          MOVX @DPTR,A                  
    4C51: 90 D7 07    MOV DPTR,#0xD707              
    4C54: E0          MOVX A,@DPTR                  
    4C55: 90 7F E3    MOV DPTR,#0x7FE3              
    4C58: F0          MOVX @DPTR,A                  
    4C59: 90 D7 87    MOV DPTR,#0xD787              
    4C5C: E0          MOVX A,@DPTR                  
    4C5D: 90 7F E4    MOV DPTR,#0x7FE4              
    4C60: F0          MOVX @DPTR,A                  
    4C61: 90 D8 01    MOV DPTR,#0xD801              
    4C64: E4          CLR A                         
    4C65: F0          MOVX @DPTR,A                  
    4C66: 90 D8 10    MOV DPTR,#0xD810              
    4C69: 74 FF       MOV A,#0xFF                   
    4C6B: F0          MOVX @DPTR,A                  
    4C6C: 90 D8 0B    MOV DPTR,#0xD80B              
    4C6F: E4          CLR A                         
    4C70: F0          MOVX @DPTR,A                  
    4C71: 90 D8 0A    MOV DPTR,#0xD80A              
    4C74: F0          MOVX @DPTR,A                  
    4C75: 90 D8 04    MOV DPTR,#0xD804              
    4C78: F0          MOVX @DPTR,A                  
    4C79: 90 D8 5D    MOV DPTR,#0xD85D              
    4C7C: 74 AC       MOV A,#0xAC                   
    4C7E: F0          MOVX @DPTR,A                  
    4C7F: 90 D8 5E    MOV DPTR,#0xD85E              
    4C82: 74 0D       MOV A,#0x0D                   
    4C84: F0          MOVX @DPTR,A                  
    4C85: 75 50 01    MOV 0x50,#0x01                
    4C88: 75 51 1E    MOV 0x51,#0x1E                
    4C8B: 75 82 00    MOV DPL(0x82),#0x00           
    4C8E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4C91: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4C94: E4          CLR A                         
    4C95: F0          MOVX @DPTR,A                  
    4C96: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    4C99: F0          MOVX @DPTR,A                  
    4C9A: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    4C9D: E0          MOVX A,@DPTR                  
    4C9E: FB          MOV R3,A                      
    4C9F: 20 E0 03    JB ACC.0,0x4CA5                  ; -> loc_4CA5
    4CA2: 02 4D 36    LJMP 0x4D36                      ; -> loc_4D36

loc_4CA5:
    4CA5: 90 00 A7    MOV DPTR,#0x00A7              
    4CA8: E4          CLR A                         
    4CA9: 93          MOVC A,@A+DPTR                
    4CAA: FB          MOV R3,A                      
    4CAB: 30 E4 31    JNB ACC.4,0x4CDF                 ; -> 0x4CDF
    4CAE: 90 7F 84    MOV DPTR,#0x7F84              
    4CB1: E0          MOVX A,@DPTR                  
    4CB2: FB          MOV R3,A                      
    4CB3: 70 2A       JNZ 0x4CDF                       ; -> 0x4CDF
    4CB5: 75 50 20    MOV 0x50,#0x20                
    4CB8: 75 51 53    MOV 0x51,#0x53                
    4CBB: F5 82       MOV DPL(0x82),A               
    4CBD: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4CC0: 90 D2 54    MOV DPTR,#0xD254                 ; register block D252
    4CC3: 74 FF       MOV A,#0xFF                   
    4CC5: F0          MOVX @DPTR,A                  
    4CC6: 90 D2 55    MOV DPTR,#0xD255                 ; register block D252
    4CC9: 74 FF       MOV A,#0xFF                   
    4CCB: F0          MOVX @DPTR,A                  
    4CCC: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    4CCF: E0          MOVX A,@DPTR                  
    4CD0: FB          MOV R3,A                      
    4CD1: 53 03 DF    ANL 0x03,#0xDF                
    4CD4: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    4CD7: EB          MOV A,R3                      
    4CD8: F0          MOVX @DPTR,A                  
    4CD9: 90 D2 38    MOV DPTR,#0xD238              
    4CDC: 74 04       MOV A,#0x04                   
    4CDE: F0          MOVX @DPTR,A                  
    4CDF: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4CE2: E0          MOVX A,@DPTR                  
    4CE3: FB          MOV R3,A                      
    4CE4: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    4CE7: E0          MOVX A,@DPTR                  
    4CE8: FC          MOV R4,A                      
    4CE9: EB          MOV A,R3                      
    4CEA: B5 04 00    CJNE A,0x04,0x4CED               ; -> 0x4CED
    4CED: 40 AB       JC 0x4C9A                        ; -> 0x4C9A
    4CEF: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    4CF2: E0          MOVX A,@DPTR                  
    4CF3: FB          MOV R3,A                      
    4CF4: 0B          INC R3                        
    4CF5: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    4CF8: EB          MOV A,R3                      
    4CF9: F0          MOVX @DPTR,A                  
    4CFA: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4CFD: E4          CLR A                         
    4CFE: F0          MOVX @DPTR,A                  
    4CFF: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    4D02: E0          MOVX A,@DPTR                  
    4D03: FB          MOV R3,A                      
    4D04: BB 0A 0D    CJNE R3,#0x0A,0x4D14             ; -> 0x4D14
    4D07: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    4D0A: E0          MOVX A,@DPTR                  
    4D0B: FB          MOV R3,A                      
    4D0C: 53 03 FB    ANL 0x03,#0xFB                
    4D0F: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    4D12: EB          MOV A,R3                      
    4D13: F0          MOVX @DPTR,A                  
    4D14: 90 CC 90    MOV DPTR,#0xCC90                 ; register block CC00
    4D17: E0          MOVX A,@DPTR                  
    4D18: FB          MOV R3,A                      
    4D19: BB 64 02    CJNE R3,#0x64,0x4D1E             ; -> loc_4D1E
    4D1C: 80 03       SJMP 0x4D21                      ; -> loc_4D21

loc_4D1E:
    4D1E: 02 4C 9A    LJMP 0x4C9A                      ; -> 0x4C9A

loc_4D21:
    4D21: 90 00 A7    MOV DPTR,#0x00A7              
    4D24: E4          CLR A                         
    4D25: 93          MOVC A,@A+DPTR                
    4D26: FB          MOV R3,A                      
    4D27: 20 E0 03    JB ACC.0,0x4D2D                  ; -> loc_4D2D
    4D2A: 02 4C 9A    LJMP 0x4C9A                      ; -> 0x4C9A

loc_4D2D:
    4D2D: 75 82 FF    MOV DPL(0x82),#0xFF           
    4D30: 12 05 DB    LCALL 0x05DB                     ; -> sub_05DB
    4D33: 02 4C 9A    LJMP 0x4C9A                      ; -> 0x4C9A

loc_4D36:
    4D36: 75 50 01    MOV 0x50,#0x01                
    4D39: 75 51 2C    MOV 0x51,#0x2C                
    4D3C: 75 82 00    MOV DPL(0x82),#0x00           
    4D3F: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4D42: 90 00 A7    MOV DPTR,#0x00A7              
    4D45: E4          CLR A                         
    4D46: 93          MOVC A,@A+DPTR                
    4D47: FB          MOV R3,A                      
    4D48: 30 E0 06    JNB ACC.0,0x4D51                 ; -> 0x4D51
    4D4B: 75 82 00    MOV DPL(0x82),#0x00           
    4D4E: 12 05 DB    LCALL 0x05DB                     ; -> sub_05DB
    4D51: 90 00 A7    MOV DPTR,#0x00A7              
    4D54: E4          CLR A                         
    4D55: 93          MOVC A,@A+DPTR                
    4D56: FB          MOV R3,A                      
    4D57: 30 E7 03    JNB ACC.7,0x4D5D                 ; -> 0x4D5D
    4D5A: 12 05 6C    LCALL 0x056C                     ; -> sub_056C
    4D5D: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    4D60: E0          MOVX A,@DPTR                  
    4D61: FB          MOV R3,A                      
    4D62: 30 E0 0A    JNB ACC.0,0x4D6F                 ; -> 0x4D6F
    4D65: 90 CC 9B    MOV DPTR,#0xCC9B              
    4D68: E0          MOVX A,@DPTR                  
    4D69: FB          MOV R3,A                      
    4D6A: BB 0B 00    CJNE R3,#0x0B,0x4D6D             ; -> 0x4D6D
    4D6D: 40 08       JC 0x4D77                        ; -> 0x4D77
    4D6F: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    4D72: E0          MOVX A,@DPTR                  
    4D73: FB          MOV R3,A                      
    4D74: 30 E0 0E    JNB ACC.0,0x4D85                 ; -> loc_4D85
    4D77: 75 50 20    MOV 0x50,#0x20                
    4D7A: 75 51 41    MOV 0x51,#0x41                
    4D7D: 75 82 00    MOV DPL(0x82),#0x00           
    4D80: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4D83: 80 D8       SJMP 0x4D5D                      ; -> 0x4D5D

loc_4D85:
    4D85: 90 7F 7D    MOV DPTR,#0x7F7D              
    4D88: E4          CLR A                         
    4D89: F0          MOVX @DPTR,A                  
    4D8A: 90 7F FC    MOV DPTR,#0x7FFC              
    4D8D: F0          MOVX @DPTR,A                  
    4D8E: 90 7F BE    MOV DPTR,#0x7FBE              
    4D91: F0          MOVX @DPTR,A                  
    4D92: 90 7F BF    MOV DPTR,#0x7FBF              
    4D95: F0          MOVX @DPTR,A                  
    4D96: 90 7F BD    MOV DPTR,#0x7FBD              
    4D99: E4          CLR A                         
    4D9A: F0          MOVX @DPTR,A                  
    4D9B: 90 7F B5    MOV DPTR,#0x7FB5              
    4D9E: F0          MOVX @DPTR,A                  
    4D9F: 90 7F B4    MOV DPTR,#0x7FB4              
    4DA2: F0          MOVX @DPTR,A                  
    4DA3: 90 7E B9    MOV DPTR,#0x7EB9              
    4DA6: F0          MOVX @DPTR,A                  
    4DA7: 90 7F AB    MOV DPTR,#0x7FAB              
    4DAA: E4          CLR A                         
    4DAB: F0          MOVX @DPTR,A                  
    4DAC: 90 7F A9    MOV DPTR,#0x7FA9              
    4DAF: F0          MOVX @DPTR,A                  
    4DB0: 90 7F AA    MOV DPTR,#0x7FAA              
    4DB3: F0          MOVX @DPTR,A                  
    4DB4: 90 7F B3    MOV DPTR,#0x7FB3              
    4DB7: F0          MOVX @DPTR,A                  
    4DB8: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    4DBB: E0          MOVX A,@DPTR                  
    4DBC: FB          MOV R3,A                      
    4DBD: 43 03 02    ORL 0x03,#0x02                
    4DC0: 90 C8 07    MOV DPTR,#0xC807                 ; control + status register block
    4DC3: EB          MOV A,R3                      
    4DC4: F0          MOVX @DPTR,A                  
    4DC5: 90 C8 00    MOV DPTR,#0xC800                 ; control + status register block
    4DC8: E0          MOVX A,@DPTR                  
    4DC9: FB          MOV R3,A                      
    4DCA: 20 E0 03    JB ACC.0,0x4DD0                  ; -> loc_4DD0
    4DCD: 02 52 B7    LJMP 0x52B7                      ; -> loc_52B7

loc_4DD0:
    4DD0: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4DD3: E4          CLR A                         
    4DD4: F0          MOVX @DPTR,A                  
    4DD5: 75 50 01    MOV 0x50,#0x01                
    4DD8: 75 51 02    MOV 0x51,#0x02                
    4DDB: 75 82 00    MOV DPL(0x82),#0x00           
    4DDE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4DE1: E5 4D       MOV A,0x4D                    
    4DE3: 70 1F       JNZ 0x4E04                       ; -> 0x4E04
    4DE5: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    4DE8: E0          MOVX A,@DPTR                  
    4DE9: FB          MOV R3,A                      
    4DEA: 20 E2 0E    JB ACC.2,0x4DFB                  ; -> loc_4DFB
    4DED: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    4DF0: E0          MOVX A,@DPTR                  
    4DF1: F5 50       MOV 0x50,A                    
    4DF3: 75 82 01    MOV DPL(0x82),#0x01           
    4DF6: 12 23 89    LCALL 0x2389                     ; -> sub_2389
    4DF9: 80 09       SJMP 0x4E04                      ; -> 0x4E04

loc_4DFB:
    4DFB: 75 50 EB    MOV 0x50,#0xEB                
    4DFE: 75 82 01    MOV DPL(0x82),#0x01           
    4E01: 12 23 89    LCALL 0x2389                     ; -> sub_2389
    4E04: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    4E07: E0          MOVX A,@DPTR                  
    4E08: FB          MOV R3,A                      
    4E09: 43 03 04    ORL 0x03,#0x04                
    4E0C: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    4E0F: EB          MOV A,R3                      
    4E10: F0          MOVX @DPTR,A                  
    4E11: 75 4D 01    MOV 0x4D,#0x01                
    4E14: 90 CC 0C    MOV DPTR,#0xCC0C                 ; register block CC00
    4E17: 74 63       MOV A,#0x63                   
    4E19: F0          MOVX @DPTR,A                  
    4E1A: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    4E1D: 74 80       MOV A,#0x80                   
    4E1F: F0          MOVX @DPTR,A                  
    4E20: 90 CA 5A    MOV DPTR,#0xCA5A                 ; register block CA00
    4E23: E4          CLR A                         
    4E24: F0          MOVX @DPTR,A                  
    4E25: 90 CC 9A    MOV DPTR,#0xCC9A              
    4E28: E0          MOVX A,@DPTR                  
    4E29: FB          MOV R3,A                      
    4E2A: 43 03 04    ORL 0x03,#0x04                
    4E2D: 90 CC 9A    MOV DPTR,#0xCC9A              
    4E30: EB          MOV A,R3                      
    4E31: F0          MOVX @DPTR,A                  
    4E32: 90 7F 7E    MOV DPTR,#0x7F7E              
    4E35: 74 04       MOV A,#0x04                   
    4E37: F0          MOVX @DPTR,A                  
    4E38: 90 D8 36    MOV DPTR,#0xD836              
    4E3B: 74 08       MOV A,#0x08                   
    4E3D: F0          MOVX @DPTR,A                  
    4E3E: 12 11 E5    LCALL 0x11E5                     ; -> sub_11E5
    4E41: 90 CC 95    MOV DPTR,#0xCC95                 ; register block CC00
    4E44: E4          CLR A                         
    4E45: F0          MOVX @DPTR,A                  
    4E46: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    4E49: F0          MOVX @DPTR,A                  
    4E4A: 12 22 42    LCALL 0x2242                     ; -> sub_2242
    4E4D: 90 CC 95    MOV DPTR,#0xCC95                 ; register block CC00
    4E50: E0          MOVX A,@DPTR                  
    4E51: FB          MOV R3,A                      
    4E52: 0B          INC R3                        
    4E53: 90 CC 95    MOV DPTR,#0xCC95                 ; register block CC00
    4E56: EB          MOV A,R3                      
    4E57: F0          MOVX @DPTR,A                  
    4E58: 90 00 A6    MOV DPTR,#0x00A6              
    4E5B: E4          CLR A                         
    4E5C: 93          MOVC A,@A+DPTR                
    4E5D: FB          MOV R3,A                      
    4E5E: 20 E2 0C    JB ACC.2,0x4E6D                  ; -> 0x4E6D
    4E61: 90 CC 95    MOV DPTR,#0xCC95                 ; register block CC00
    4E64: E0          MOVX A,@DPTR                  
    4E65: FB          MOV R3,A                      
    4E66: 54 0F       ANL A,#0x0F                   
    4E68: 70 03       JNZ 0x4E6D                       ; -> 0x4E6D
    4E6A: 12 08 60    LCALL 0x0860                     ; -> sub_0860
    4E6D: 90 D6 02    MOV DPTR,#0xD602              
    4E70: 74 10       MOV A,#0x10                   
    4E72: F0          MOVX @DPTR,A                  
    4E73: 90 D6 03    MOV DPTR,#0xD603              
    4E76: 74 2B       MOV A,#0x2B                   
    4E78: F0          MOVX @DPTR,A                  
    4E79: 90 D6 82    MOV DPTR,#0xD682              
    4E7C: 74 10       MOV A,#0x10                   
    4E7E: F0          MOVX @DPTR,A                  
    4E7F: 90 D6 83    MOV DPTR,#0xD683              
    4E82: 74 2B       MOV A,#0x2B                   
    4E84: F0          MOVX @DPTR,A                  
    4E85: 90 D7 02    MOV DPTR,#0xD702              
    4E88: 74 10       MOV A,#0x10                   
    4E8A: F0          MOVX @DPTR,A                  
    4E8B: 90 D7 03    MOV DPTR,#0xD703              
    4E8E: 74 2B       MOV A,#0x2B                   
    4E90: F0          MOVX @DPTR,A                  
    4E91: 90 D7 82    MOV DPTR,#0xD782              
    4E94: 74 10       MOV A,#0x10                   
    4E96: F0          MOVX @DPTR,A                  
    4E97: 90 D7 83    MOV DPTR,#0xD783              
    4E9A: 74 2B       MOV A,#0x2B                   
    4E9C: F0          MOVX @DPTR,A                  
    4E9D: 75 50 02    MOV 0x50,#0x02                
    4EA0: 75 51 25    MOV 0x51,#0x25                
    4EA3: 75 82 00    MOV DPL(0x82),#0x00           
    4EA6: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4EA9: 90 D4 0F    MOV DPTR,#0xD40F                 ; register block D403
    4EAC: 74 03       MOV A,#0x03                   
    4EAE: F0          MOVX @DPTR,A                  
    4EAF: 90 D4 00    MOV DPTR,#0xD400              
    4EB2: E0          MOVX A,@DPTR                  
    4EB3: FB          MOV R3,A                      
    4EB4: 43 03 01    ORL 0x03,#0x01                
    4EB7: 90 D4 00    MOV DPTR,#0xD400              
    4EBA: EB          MOV A,R3                      
    4EBB: F0          MOVX @DPTR,A                  
    4EBC: E0          MOVX A,@DPTR                  
    4EBD: FB          MOV R3,A                      
    4EBE: 53 03 FE    ANL 0x03,#0xFE                
    4EC1: 90 D4 00    MOV DPTR,#0xD400              
    4EC4: EB          MOV A,R3                      
    4EC5: F0          MOVX @DPTR,A                  
    4EC6: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4EC9: E4          CLR A                         
    4ECA: F0          MOVX @DPTR,A                  
    4ECB: 90 7F E5    MOV DPTR,#0x7FE5              
    4ECE: F0          MOVX @DPTR,A                  
    4ECF: 90 D4 CC    MOV DPTR,#0xD4CC              
    4ED2: E0          MOVX A,@DPTR                  
    4ED3: FB          MOV R3,A                      
    4ED4: 20 E0 1E    JB ACC.0,0x4EF5                  ; -> loc_4EF5
    4ED7: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    4EDA: AB 82       MOV R3,0x82                   
    4EDC: BB 01 03    CJNE R3,#0x01,0x4EE2             ; -> loc_4EE2
    4EDF: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_4EE2:
    4EE2: BB 02 EA    CJNE R3,#0x02,0x4ECF             ; -> 0x4ECF
    4EE5: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    4EE8: E0          MOVX A,@DPTR                  
    4EE9: FB          MOV R3,A                      
    4EEA: 43 03 01    ORL 0x03,#0x01                
    4EED: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    4EF0: EB          MOV A,R3                      
    4EF1: F0          MOVX @DPTR,A                  
    4EF2: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_4EF5:
    4EF5: 90 D4 CC    MOV DPTR,#0xD4CC              
    4EF8: E0          MOVX A,@DPTR                  
    4EF9: FB          MOV R3,A                      
    4EFA: 30 E1 0A    JNB ACC.1,0x4F07                 ; -> loc_4F07
    4EFD: 90 D4 B6    MOV DPTR,#0xD4B6              
    4F00: E0          MOVX A,@DPTR                  
    4F01: FB          MOV R3,A                      
    4F02: BB 06 02    CJNE R3,#0x06,0x4F07             ; -> loc_4F07
    4F05: 80 10       SJMP 0x4F17                      ; -> loc_4F17

loc_4F07:
    4F07: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    4F0A: E0          MOVX A,@DPTR                  
    4F0B: FB          MOV R3,A                      
    4F0C: 43 03 02    ORL 0x03,#0x02                
    4F0F: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    4F12: EB          MOV A,R3                      
    4F13: F0          MOVX @DPTR,A                  
    4F14: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_4F17:
    4F17: 12 12 9A    LCALL 0x129A                     ; -> sub_129A
    4F1A: 90 D4 B5    MOV DPTR,#0xD4B5              
    4F1D: E0          MOVX A,@DPTR                  
    4F1E: FB          MOV R3,A                      
    4F1F: BB 09 00    CJNE R3,#0x09,0x4F22             ; -> 0x4F22
    4F22: 40 12       JC 0x4F36                        ; -> 0x4F36
    4F24: 90 D4 B5    MOV DPTR,#0xD4B5              
    4F27: E0          MOVX A,@DPTR                  
    4F28: FB          MOV R3,A                      
    4F29: BB 09 24    CJNE R3,#0x09,0x4F50             ; -> loc_4F50
    4F2C: 90 D4 B4    MOV DPTR,#0xD4B4              
    4F2F: E0          MOVX A,@DPTR                  
    4F30: FB          MOV R3,A                      
    4F31: BB C4 00    CJNE R3,#0xC4,0x4F34             ; -> 0x4F34
    4F34: 50 1A       JNC 0x4F50                       ; -> loc_4F50
    4F36: 90 D6 0C    MOV DPTR,#0xD60C              
    4F39: 74 02       MOV A,#0x02                   
    4F3B: F0          MOVX @DPTR,A                  
    4F3C: 90 D6 8C    MOV DPTR,#0xD68C              
    4F3F: 74 02       MOV A,#0x02                   
    4F41: F0          MOVX @DPTR,A                  
    4F42: 90 D7 0C    MOV DPTR,#0xD70C              
    4F45: 74 02       MOV A,#0x02                   
    4F47: F0          MOVX @DPTR,A                  
    4F48: 90 D7 8C    MOV DPTR,#0xD78C              
    4F4B: 74 02       MOV A,#0x02                   
    4F4D: F0          MOVX @DPTR,A                  
    4F4E: 80 47       SJMP 0x4F97                      ; -> 0x4F97

loc_4F50:
    4F50: 90 D4 B5    MOV DPTR,#0xD4B5              
    4F53: E0          MOVX A,@DPTR                  
    4F54: FB          MOV R3,A                      
    4F55: BB 13 00    CJNE R3,#0x13,0x4F58             ; -> 0x4F58
    4F58: 40 12       JC 0x4F6C                        ; -> 0x4F6C
    4F5A: 90 D4 B5    MOV DPTR,#0xD4B5              
    4F5D: E0          MOVX A,@DPTR                  
    4F5E: FB          MOV R3,A                      
    4F5F: BB 13 24    CJNE R3,#0x13,0x4F86             ; -> loc_4F86
    4F62: 90 D4 B4    MOV DPTR,#0xD4B4              
    4F65: E0          MOVX A,@DPTR                  
    4F66: FB          MOV R3,A                      
    4F67: BB 88 00    CJNE R3,#0x88,0x4F6A             ; -> 0x4F6A
    4F6A: 50 1A       JNC 0x4F86                       ; -> loc_4F86
    4F6C: 90 D6 0C    MOV DPTR,#0xD60C              
    4F6F: 74 01       MOV A,#0x01                   
    4F71: F0          MOVX @DPTR,A                  
    4F72: 90 D6 8C    MOV DPTR,#0xD68C              
    4F75: 74 01       MOV A,#0x01                   
    4F77: F0          MOVX @DPTR,A                  
    4F78: 90 D7 0C    MOV DPTR,#0xD70C              
    4F7B: 74 01       MOV A,#0x01                   
    4F7D: F0          MOVX @DPTR,A                  
    4F7E: 90 D7 8C    MOV DPTR,#0xD78C              
    4F81: 74 01       MOV A,#0x01                   
    4F83: F0          MOVX @DPTR,A                  
    4F84: 80 11       SJMP 0x4F97                      ; -> 0x4F97

loc_4F86:
    4F86: 90 D6 0C    MOV DPTR,#0xD60C              
    4F89: E4          CLR A                         
    4F8A: F0          MOVX @DPTR,A                  
    4F8B: 90 D6 8C    MOV DPTR,#0xD68C              
    4F8E: F0          MOVX @DPTR,A                  
    4F8F: 90 D7 0C    MOV DPTR,#0xD70C              
    4F92: F0          MOVX @DPTR,A                  
    4F93: 90 D7 8C    MOV DPTR,#0xD78C              
    4F96: F0          MOVX @DPTR,A                  
    4F97: 75 82 07    MOV DPL(0x82),#0x07           
    4F9A: 12 28 20    LCALL 0x2820                     ; -> sub_2820
    4F9D: 75 50 02    MOV 0x50,#0x02                
    4FA0: 75 51 14    MOV 0x51,#0x14                
    4FA3: 75 82 00    MOV DPL(0x82),#0x00           
    4FA6: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4FA9: 75 50 02    MOV 0x50,#0x02                
    4FAC: 75 51 68    MOV 0x51,#0x68                
    4FAF: 75 82 00    MOV DPL(0x82),#0x00           
    4FB2: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4FB5: 75 50 02    MOV 0x50,#0x02                
    4FB8: 75 51 02    MOV 0x51,#0x02                
    4FBB: 75 82 01    MOV DPL(0x82),#0x01           
    4FBE: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4FC1: 90 D4 B5    MOV DPTR,#0xD4B5              
    4FC4: E0          MOVX A,@DPTR                  
    4FC5: F5 51       MOV 0x51,A                    
    4FC7: 75 50 02    MOV 0x50,#0x02                
    4FCA: 75 82 01    MOV DPL(0x82),#0x01           
    4FCD: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4FD0: 90 D4 B4    MOV DPTR,#0xD4B4              
    4FD3: E0          MOVX A,@DPTR                  
    4FD4: F5 51       MOV 0x51,A                    
    4FD6: 75 50 02    MOV 0x50,#0x02                
    4FD9: 75 82 01    MOV DPL(0x82),#0x01           
    4FDC: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    4FDF: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    4FE2: E4          CLR A                         
    4FE3: F0          MOVX @DPTR,A                  
    4FE4: 90 7F E5    MOV DPTR,#0x7FE5              
    4FE7: F0          MOVX @DPTR,A                  
    4FE8: 90 D8 0D    MOV DPTR,#0xD80D              
    4FEB: E0          MOVX A,@DPTR                  
    4FEC: FB          MOV R3,A                      
    4FED: 90 7F ED    MOV DPTR,#0x7FED              
    4FF0: 74 07       MOV A,#0x07                   
    4FF2: 5B          ANL A,R3                      
    4FF3: F0          MOVX @DPTR,A                  
    4FF4: 90 7F ED    MOV DPTR,#0x7FED              
    4FF7: E0          MOVX A,@DPTR                  
    4FF8: FB          MOV R3,A                      
    4FF9: 53 03 07    ANL 0x03,#0x07                
    4FFC: BB 07 08    CJNE R3,#0x07,0x5007             ; -> 0x5007
    4FFF: 90 D4 CC    MOV DPTR,#0xD4CC              
    5002: E0          MOVX A,@DPTR                  
    5003: FB          MOV R3,A                      
    5004: 20 E0 1E    JB ACC.0,0x5025                  ; -> loc_5025
    5007: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    500A: AB 82       MOV R3,0x82                   
    500C: BB 01 03    CJNE R3,#0x01,0x5012             ; -> loc_5012
    500F: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_5012:
    5012: BB 02 D3    CJNE R3,#0x02,0x4FE8             ; -> 0x4FE8
    5015: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5018: E0          MOVX A,@DPTR                  
    5019: FB          MOV R3,A                      
    501A: 43 03 04    ORL 0x03,#0x04                
    501D: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5020: EB          MOV A,R3                      
    5021: F0          MOVX @DPTR,A                  
    5022: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_5025:
    5025: 90 CC 9B    MOV DPTR,#0xCC9B              
    5028: E0          MOVX A,@DPTR                  
    5029: FB          MOV R3,A                      
    502A: BB 01 0E    CJNE R3,#0x01,0x503B             ; -> loc_503B
    502D: 75 50 20    MOV 0x50,#0x20                
    5030: 75 51 42    MOV 0x51,#0x42                
    5033: 75 82 00    MOV DPL(0x82),#0x00           
    5036: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5039: 80 EA       SJMP 0x5025                      ; -> loc_5025

loc_503B:
    503B: 12 14 65    LCALL 0x1465                     ; -> sub_1465
    503E: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    5041: E4          CLR A                         
    5042: F0          MOVX @DPTR,A                  
    5043: 90 7F E5    MOV DPTR,#0x7FE5              
    5046: F0          MOVX @DPTR,A                  
    5047: 90 D8 19    MOV DPTR,#0xD819              
    504A: E0          MOVX A,@DPTR                  
    504B: FB          MOV R3,A                      
    504C: 53 03 F0    ANL 0x03,#0xF0                
    504F: 90 D8 68    MOV DPTR,#0xD868              
    5052: E0          MOVX A,@DPTR                  
    5053: FC          MOV R4,A                      
    5054: 53 04 F0    ANL 0x04,#0xF0                
    5057: EB          MOV A,R3                      
    5058: B5 04 02    CJNE A,0x04,0x505D               ; -> loc_505D
    505B: 80 21       SJMP 0x507E                      ; -> loc_507E

loc_505D:
    505D: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    5060: AB 82       MOV R3,0x82                   
    5062: BB 01 03    CJNE R3,#0x01,0x5068             ; -> loc_5068
    5065: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_5068:
    5068: BB 02 DC    CJNE R3,#0x02,0x5047             ; -> 0x5047
    506B: 12 15 C1    LCALL 0x15C1                     ; -> sub_15C1
    506E: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5071: E0          MOVX A,@DPTR                  
    5072: FB          MOV R3,A                      
    5073: 43 03 08    ORL 0x03,#0x08                
    5076: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5079: EB          MOV A,R3                      
    507A: F0          MOVX @DPTR,A                  
    507B: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_507E:
    507E: 12 15 C1    LCALL 0x15C1                     ; -> sub_15C1
    5081: 12 14 03    LCALL 0x1403                     ; -> sub_1403
    5084: 90 D8 04    MOV DPTR,#0xD804              
    5087: E0          MOVX A,@DPTR                  
    5088: 7C 00       MOV R4,#0x00                  
    508A: F4          CPL A                         
    508B: FB          MOV R3,A                      
    508C: EC          MOV A,R4                      
    508D: F4          CPL A                         
    508E: 53 03 F0    ANL 0x03,#0xF0                
    5091: E4          CLR A                         
    5092: FC          MOV R4,A                      
    5093: C4          SWAP A                        
    5094: CB          XCH A,R3                      
    5095: C4          SWAP A                        
    5096: 54 0F       ANL A,#0x0F                   
    5098: 6B          XRL A,R3                      
    5099: CB          XCH A,R3                      
    509A: 54 0F       ANL A,#0x0F                   
    509C: CB          XCH A,R3                      
    509D: 6B          XRL A,R3                      
    509E: CB          XCH A,R3                      
    509F: 30 E3 02    JNB ACC.3,0x50A4                 ; -> 0x50A4
    50A2: 44 F0       ORL A,#0xF0                   
    50A4: FC          MOV R4,A                      
    50A5: 90 7F ED    MOV DPTR,#0x7FED              
    50A8: EB          MOV A,R3                      
    50A9: F0          MOVX @DPTR,A                  
    50AA: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    50AD: E4          CLR A                         
    50AE: F0          MOVX @DPTR,A                  
    50AF: 90 7F E5    MOV DPTR,#0x7FE5              
    50B2: F0          MOVX @DPTR,A                  
    50B3: 90 D8 4E    MOV DPTR,#0xD84E              
    50B6: E0          MOVX A,@DPTR                  
    50B7: FB          MOV R3,A                      
    50B8: 90 7F ED    MOV DPTR,#0x7FED              
    50BB: E0          MOVX A,@DPTR                  
    50BC: 52 03       ANL 0x03,A                    
    50BE: 90 7F ED    MOV DPTR,#0x7FED              
    50C1: E0          MOVX A,@DPTR                  
    50C2: FC          MOV R4,A                      
    50C3: EB          MOV A,R3                      
    50C4: B5 04 02    CJNE A,0x04,0x50C9               ; -> loc_50C9
    50C7: 80 1E       SJMP 0x50E7                      ; -> loc_50E7

loc_50C9:
    50C9: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    50CC: AB 82       MOV R3,0x82                   
    50CE: BB 01 03    CJNE R3,#0x01,0x50D4             ; -> loc_50D4
    50D1: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_50D4:
    50D4: BB 02 DC    CJNE R3,#0x02,0x50B3             ; -> 0x50B3
    50D7: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    50DA: E0          MOVX A,@DPTR                  
    50DB: FB          MOV R3,A                      
    50DC: 43 03 10    ORL 0x03,#0x10                
    50DF: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    50E2: EB          MOV A,R3                      
    50E3: F0          MOVX @DPTR,A                  
    50E4: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_50E7:
    50E7: 90 00 A6    MOV DPTR,#0x00A6              
    50EA: E4          CLR A                         
    50EB: 93          MOVC A,@A+DPTR                
    50EC: FB          MOV R3,A                      
    50ED: 20 E1 23    JB ACC.1,0x5113                  ; -> 0x5113
    50F0: 90 7E AA    MOV DPTR,#0x7EAA              
    50F3: E0          MOVX A,@DPTR                  
    50F4: FB          MOV R3,A                      
    50F5: 70 1C       JNZ 0x5113                       ; -> 0x5113
    50F7: 90 D8 15    MOV DPTR,#0xD815              
    50FA: E0          MOVX A,@DPTR                  
    50FB: FB          MOV R3,A                      
    50FC: 53 03 F0    ANL 0x03,#0xF0                
    50FF: 90 D8 15    MOV DPTR,#0xD815              
    5102: EB          MOV A,R3                      
    5103: F0          MOVX @DPTR,A                  
    5104: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    5107: E4          CLR A                         
    5108: F0          MOVX @DPTR,A                  
    5109: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    510C: E0          MOVX A,@DPTR                  
    510D: FB          MOV R3,A                      
    510E: BB 01 00    CJNE R3,#0x01,0x5111             ; -> 0x5111
    5111: 40 F6       JC 0x5109                        ; -> 0x5109
    5113: 90 00 A9    MOV DPTR,#0x00A9              
    5116: E4          CLR A                         
    5117: 93          MOVC A,@A+DPTR                
    5118: FB          MOV R3,A                      
    5119: 30 E4 03    JNB ACC.4,0x511F                 ; -> 0x511F
    511C: 12 04 D0    LCALL 0x04D0                     ; -> sub_04D0
    511F: 90 CC 9B    MOV DPTR,#0xCC9B              
    5122: E0          MOVX A,@DPTR                  
    5123: FB          MOV R3,A                      
    5124: BB 02 0E    CJNE R3,#0x02,0x5135             ; -> loc_5135
    5127: 75 50 20    MOV 0x50,#0x20                
    512A: 75 51 43    MOV 0x51,#0x43                
    512D: 75 82 00    MOV DPL(0x82),#0x00           
    5130: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5133: 80 EA       SJMP 0x511F                      ; -> 0x511F

loc_5135:
    5135: 75 50 02    MOV 0x50,#0x02                
    5138: 75 51 26    MOV 0x51,#0x26                
    513B: 75 82 00    MOV DPL(0x82),#0x00           
    513E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5141: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    5144: E4          CLR A                         
    5145: F0          MOVX @DPTR,A                  
    5146: 90 7F E5    MOV DPTR,#0x7FE5              
    5149: F0          MOVX @DPTR,A                  
    514A: 90 D8 0D    MOV DPTR,#0xD80D              
    514D: E0          MOVX A,@DPTR                  
    514E: FB          MOV R3,A                      
    514F: 90 7F ED    MOV DPTR,#0x7FED              
    5152: 74 07       MOV A,#0x07                   
    5154: 5B          ANL A,R3                      
    5155: F0          MOVX @DPTR,A                  
    5156: 90 7F ED    MOV DPTR,#0x7FED              
    5159: E0          MOVX A,@DPTR                  
    515A: FB          MOV R3,A                      
    515B: 53 03 07    ANL 0x03,#0x07                
    515E: BB 07 16    CJNE R3,#0x07,0x5177             ; -> loc_5177
    5161: 90 D4 CC    MOV DPTR,#0xD4CC              
    5164: E0          MOVX A,@DPTR                  
    5165: FB          MOV R3,A                      
    5166: 30 E0 0E    JNB ACC.0,0x5177                 ; -> loc_5177
    5169: 90 C8 0F    MOV DPTR,#0xC80F                 ; control + status register block
    516C: E4          CLR A                         
    516D: F0          MOVX @DPTR,A                  
    516E: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    5171: F0          MOVX @DPTR,A                  
    5172: 12 22 6E    LCALL 0x226E                     ; -> sub_226E
    5175: 80 1E       SJMP 0x5195                      ; -> loc_5195

loc_5177:
    5177: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    517A: AB 82       MOV R3,0x82                   
    517C: BB 01 03    CJNE R3,#0x01,0x5182             ; -> loc_5182
    517F: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_5182:
    5182: BB 02 C5    CJNE R3,#0x02,0x514A             ; -> 0x514A
    5185: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5188: E0          MOVX A,@DPTR                  
    5189: FB          MOV R3,A                      
    518A: 43 03 20    ORL 0x03,#0x20                
    518D: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    5190: EB          MOV A,R3                      
    5191: F0          MOVX @DPTR,A                  
    5192: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_5195:
    5195: 75 50 02    MOV 0x50,#0x02                
    5198: 75 51 27    MOV 0x51,#0x27                
    519B: 75 82 00    MOV DPL(0x82),#0x00           
    519E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    51A1: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    51A4: E4          CLR A                         
    51A5: F0          MOVX @DPTR,A                  
    51A6: 90 7F E5    MOV DPTR,#0x7FE5              
    51A9: F0          MOVX @DPTR,A                  
    51AA: 90 C8 03    MOV DPTR,#0xC803                 ; control + status register block
    51AD: E0          MOVX A,@DPTR                  
    51AE: FB          MOV R3,A                      
    51AF: 90 7F ED    MOV DPTR,#0x7FED              
    51B2: 74 80       MOV A,#0x80                   
    51B4: 5B          ANL A,R3                      
    51B5: F0          MOVX @DPTR,A                  
    51B6: 90 7F ED    MOV DPTR,#0x7FED              
    51B9: E0          MOVX A,@DPTR                  
    51BA: FB          MOV R3,A                      
    51BB: 70 1E       JNZ 0x51DB                       ; -> loc_51DB
    51BD: 12 07 F4    LCALL 0x07F4                     ; -> sub_07F4
    51C0: AB 82       MOV R3,0x82                   
    51C2: BB 01 03    CJNE R3,#0x01,0x51C8             ; -> loc_51C8
    51C5: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_51C8:
    51C8: BB 02 DF    CJNE R3,#0x02,0x51AA             ; -> 0x51AA
    51CB: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    51CE: E0          MOVX A,@DPTR                  
    51CF: FB          MOV R3,A                      
    51D0: 43 03 40    ORL 0x03,#0x40                
    51D3: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    51D6: EB          MOV A,R3                      
    51D7: F0          MOVX @DPTR,A                  
    51D8: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_51DB:
    51DB: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    51DE: E4          CLR A                         
    51DF: F0          MOVX @DPTR,A                  
    51E0: 90 C8 49    MOV DPTR,#0xC849                 ; control + status register block
    51E3: E0          MOVX A,@DPTR                  
    51E4: 54 F0       ANL A,#0xF0                   
    51E6: C4          SWAP A                        
    51E7: 54 0F       ANL A,#0x0F                   
    51E9: FB          MOV R3,A                      
    51EA: 90 7F ED    MOV DPTR,#0x7FED              
    51ED: F0          MOVX @DPTR,A                  
    51EE: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    51F1: E0          MOVX A,@DPTR                  
    51F2: FB          MOV R3,A                      
    51F3: 90 7F ED    MOV DPTR,#0x7FED              
    51F6: E0          MOVX A,@DPTR                  
    51F7: FC          MOV R4,A                      
    51F8: EB          MOV A,R3                      
    51F9: B5 04 00    CJNE A,0x04,0x51FC               ; -> 0x51FC
    51FC: 40 F0       JC 0x51EE                        ; -> 0x51EE
    51FE: 90 D0 85    MOV DPTR,#0xD085              
    5201: E0          MOVX A,@DPTR                  
    5202: 90 7F ED    MOV DPTR,#0x7FED              
    5205: F0          MOVX @DPTR,A                  
    5206: 75 50 01    MOV 0x50,#0x01                
    5209: 75 51 03    MOV 0x51,#0x03                
    520C: 75 82 00    MOV DPL(0x82),#0x00           
    520F: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5212: 90 C8 49    MOV DPTR,#0xC849                 ; control + status register block
    5215: E0          MOVX A,@DPTR                  
    5216: FB          MOV R3,A                      
    5217: 90 7F ED    MOV DPTR,#0x7FED              
    521A: F0          MOVX @DPTR,A                  
    521B: 90 CC 9B    MOV DPTR,#0xCC9B              
    521E: E0          MOVX A,@DPTR                  
    521F: FB          MOV R3,A                      
    5220: BB 03 0E    CJNE R3,#0x03,0x5231             ; -> loc_5231
    5223: 75 50 20    MOV 0x50,#0x20                
    5226: 75 51 44    MOV 0x51,#0x44                
    5229: 75 82 00    MOV DPL(0x82),#0x00           
    522C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    522F: 80 EA       SJMP 0x521B                      ; -> 0x521B

loc_5231:
    5231: 12 23 69    LCALL 0x2369                     ; -> sub_2369
    5234: E5 82       MOV A,DPL(0x82)               
    5236: 60 03       JZ 0x523B                        ; -> loc_523B
    5238: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_523B:
    523B: 90 C8 03    MOV DPTR,#0xC803                 ; control + status register block
    523E: E0          MOVX A,@DPTR                  
    523F: FB          MOV R3,A                      
    5240: 53 03 0F    ANL 0x03,#0x0F                
    5243: 90 7F ED    MOV DPTR,#0x7FED              
    5246: E0          MOVX A,@DPTR                  
    5247: 54 01       ANL A,#0x01                   
    5249: FC          MOV R4,A                      
    524A: B4 01 00    CJNE A,#0x01,0x524D              ; -> 0x524D
    524D: E4          CLR A                         
    524E: 33          RLC A                         
    524F: FC          MOV R4,A                      
    5250: 5B          ANL A,R3                      
    5251: 70 51       JNZ 0x52A4                       ; -> loc_52A4
    5253: 90 C8 40    MOV DPTR,#0xC840                 ; control + status register block
    5256: E0          MOVX A,@DPTR                  
    5257: FB          MOV R3,A                      
    5258: 90 7F ED    MOV DPTR,#0x7FED              
    525B: E0          MOVX A,@DPTR                  
    525C: 54 02       ANL A,#0x02                   
    525E: FC          MOV R4,A                      
    525F: B4 01 00    CJNE A,#0x01,0x5262              ; -> 0x5262
    5262: E4          CLR A                         
    5263: 33          RLC A                         
    5264: FC          MOV R4,A                      
    5265: 5B          ANL A,R3                      
    5266: 70 3C       JNZ 0x52A4                       ; -> loc_52A4
    5268: 90 C8 41    MOV DPTR,#0xC841                 ; control + status register block
    526B: E0          MOVX A,@DPTR                  
    526C: FB          MOV R3,A                      
    526D: 53 03 03    ANL 0x03,#0x03                
    5270: 90 7F ED    MOV DPTR,#0x7FED              
    5273: E0          MOVX A,@DPTR                  
    5274: 54 04       ANL A,#0x04                   
    5276: FC          MOV R4,A                      
    5277: B4 01 00    CJNE A,#0x01,0x527A              ; -> 0x527A
    527A: E4          CLR A                         
    527B: 33          RLC A                         
    527C: FC          MOV R4,A                      
    527D: 5B          ANL A,R3                      
    527E: 70 24       JNZ 0x52A4                       ; -> loc_52A4
    5280: 90 D0 85    MOV DPTR,#0xD085              
    5283: E0          MOVX A,@DPTR                  
    5284: FB          MOV R3,A                      
    5285: E4          CLR A                         
    5286: BB 3F 01    CJNE R3,#0x3F,0x528A             ; -> 0x528A
    5289: 04          INC A                         
    528A: FB          MOV R3,A                      
    528B: B4 01 00    CJNE A,#0x01,0x528E              ; -> 0x528E
    528E: E4          CLR A                         
    528F: 33          RLC A                         
    5290: FB          MOV R3,A                      
    5291: 90 7F ED    MOV DPTR,#0x7FED              
    5294: E0          MOVX A,@DPTR                  
    5295: 54 08       ANL A,#0x08                   
    5297: FC          MOV R4,A                      
    5298: B4 01 00    CJNE A,#0x01,0x529B              ; -> 0x529B
    529B: E4          CLR A                         
    529C: 33          RLC A                         
    529D: FC          MOV R4,A                      
    529E: 5B          ANL A,R3                      
    529F: 70 03       JNZ 0x52A4                       ; -> loc_52A4
    52A1: 02 52 1B    LJMP 0x521B                      ; -> 0x521B

loc_52A4:
    52A4: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    52A7: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    52AA: E0          MOVX A,@DPTR                  
    52AB: FB          MOV R3,A                      
    52AC: 43 03 80    ORL 0x03,#0x80                
    52AF: 90 CC 96    MOV DPTR,#0xCC96                 ; register block CC00
    52B2: EB          MOV A,R3                      
    52B3: F0          MOVX @DPTR,A                  
    52B4: 02 4E 4A    LJMP 0x4E4A                      ; -> 0x4E4A

loc_52B7:
    52B7: 75 4D 00    MOV 0x4D,#0x00                
    52BA: 90 00 A7    MOV DPTR,#0x00A7              
    52BD: E4          CLR A                         
    52BE: 93          MOVC A,@A+DPTR                
    52BF: FB          MOV R3,A                      
    52C0: 20 E5 03    JB ACC.5,0x52C6                  ; -> loc_52C6
    52C3: 02 53 5A    LJMP 0x535A                      ; -> 0x535A

loc_52C6:
    52C6: 75 0A 00    MOV 0x0A,#0x00                
    52C9: 75 0B 00    MOV 0x0B,#0x00                
    52CC: 75 0C 00    MOV 0x0C,#0x00                
    52CF: 75 0D 00    MOV 0x0D,#0x00                
    52D2: 75 82 0C    MOV DPL(0x82),#0x0C           
    52D5: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    52D8: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    52DB: E4          CLR A                         
    52DC: F0          MOVX @DPTR,A                  
    52DD: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    52E0: E0          MOVX A,@DPTR                  
    52E1: FB          MOV R3,A                      
    52E2: 20 E2 0C    JB ACC.2,0x52F1                  ; -> 0x52F1
    52E5: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    52E8: E0          MOVX A,@DPTR                  
    52E9: FB          MOV R3,A                      
    52EA: 74 F0       MOV A,#0xF0                   
    52EC: B5 03 00    CJNE A,0x03,0x52EF               ; -> 0x52EF
    52EF: 50 EC       JNC 0x52DD                       ; -> 0x52DD
    52F1: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    52F4: E0          MOVX A,@DPTR                  
    52F5: FB          MOV R3,A                      
    52F6: 74 F0       MOV A,#0xF0                   
    52F8: B5 03 00    CJNE A,0x03,0x52FB               ; -> 0x52FB
    52FB: 50 07       JNC 0x5304                       ; -> loc_5304
    52FD: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    5300: E4          CLR A                         
    5301: F0          MOVX @DPTR,A                  
    5302: 80 56       SJMP 0x535A                      ; -> 0x535A

loc_5304:
    5304: 75 50 20    MOV 0x50,#0x20                
    5307: 75 51 06    MOV 0x51,#0x06                
    530A: 75 82 00    MOV DPL(0x82),#0x00           
    530D: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5310: 75 48 35    MOV 0x48,#0x35                
    5313: 75 49 CC    MOV 0x49,#0xCC                
    5316: 75 4A 00    MOV 0x4A,#0x00                
    5319: 74 02       MOV A,#0x02                   
    531B: 25 48       ADD A,0x48                    
    531D: FE          MOV R6,A                      
    531E: E4          CLR A                         
    531F: 35 49       ADDC A,0x49                   
    5321: FF          MOV R7,A                      
    5322: A8 4A       MOV R0,0x4A                   
    5324: 8E 82       MOV 0x82,R6                   
    5326: 8F 83       MOV 0x83,R7                   
    5328: 88 F0       MOV 0xF0,R0                   
    532A: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    532D: FE          MOV R6,A                      
    532E: E4          CLR A                         
    532F: BE 00 01    CJNE R6,#0x00,0x5333             ; -> 0x5333
    5332: 04          INC A                         
    5333: FE          MOV R6,A                      
    5334: B4 01 00    CJNE A,#0x01,0x5337              ; -> 0x5337
    5337: E4          CLR A                         
    5338: 33          RLC A                         
    5339: FE          MOV R6,A                      
    533A: 74 01       MOV A,#0x01                   
    533C: 25 48       ADD A,0x48                    
    533E: FF          MOV R7,A                      
    533F: E4          CLR A                         
    5340: 35 49       ADDC A,0x49                   
    5342: F8          MOV R0,A                      
    5343: A9 4A       MOV R1,0x4A                   
    5345: 8F 82       MOV 0x82,R7                   
    5347: 88 83       MOV 0x83,R0                   
    5349: 89 F0       MOV 0xF0,R1                   
    534B: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    534E: FF          MOV R7,A                      
    534F: 53 07 0F    ANL 0x07,#0x0F                
    5352: BF 0C 05    CJNE R7,#0x0C,0x535A             ; -> 0x535A
    5355: 90 01 20    MOV DPTR,#0x0120                 ; internal RAM counters
    5358: EE          MOV A,R6                      
    5359: F0          MOVX @DPTR,A                  
    535A: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    535D: E0          MOVX A,@DPTR                  
    535E: F8          MOV R0,A                      
    535F: 53 00 FB    ANL 0x00,#0xFB                
    5362: 90 CA 00    MOV DPTR,#0xCA00                 ; register block CA00
    5365: E8          MOV A,R0                      
    5366: F0          MOVX @DPTR,A                  
    5367: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    536A: E0          MOVX A,@DPTR                  
    536B: F8          MOV R0,A                      
    536C: 90 C8 48    MOV DPTR,#0xC848                 ; control + status register block
    536F: E0          MOVX A,@DPTR                  
    5370: F5 50       MOV 0x50,A                    
    5372: 88 82       MOV 0x82,R0                   
    5374: 12 23 89    LCALL 0x2389                     ; -> sub_2389
    5377: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    537A: E0          MOVX A,@DPTR                  
    537B: F8          MOV R0,A                      
    537C: 43 00 04    ORL 0x00,#0x04                
    537F: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    5382: E8          MOV A,R0                      
    5383: F0          MOVX @DPTR,A                  
    5384: 90 7F B6    MOV DPTR,#0x7FB6              
    5387: E4          CLR A                         
    5388: F0          MOVX @DPTR,A                  
    5389: 90 7F 84    MOV DPTR,#0x7F84              
    538C: E0          MOVX A,@DPTR                  
    538D: F8          MOV R0,A                      
    538E: 70 12       JNZ 0x53A2                       ; -> loc_53A2
    5390: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    5393: E0          MOVX A,@DPTR                  
    5394: F8          MOV R0,A                      
    5395: 53 00 0F    ANL 0x00,#0x0F                
    5398: 74 02       MOV A,#0x02                   
    539A: B5 00 00    CJNE A,0x00,0x539D               ; -> 0x539D
    539D: 40 03       JC 0x53A2                        ; -> loc_53A2
    539F: 02 54 30    LJMP 0x5430                      ; -> 0x5430

loc_53A2:
    53A2: 75 0A 00    MOV 0x0A,#0x00                
    53A5: 75 0B 00    MOV 0x0B,#0x00                
    53A8: 75 0C 00    MOV 0x0C,#0x00                
    53AB: 75 0D 00    MOV 0x0D,#0x00                
    53AE: 75 82 09    MOV DPL(0x82),#0x09           
    53B1: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    53B4: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    53B7: E4          CLR A                         
    53B8: F0          MOVX @DPTR,A                  
    53B9: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    53BC: E0          MOVX A,@DPTR                  
    53BD: F8          MOV R0,A                      
    53BE: 20 E2 0C    JB ACC.2,0x53CD                  ; -> 0x53CD
    53C1: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    53C4: E0          MOVX A,@DPTR                  
    53C5: F8          MOV R0,A                      
    53C6: 74 F0       MOV A,#0xF0                   
    53C8: B5 00 00    CJNE A,0x00,0x53CB               ; -> 0x53CB
    53CB: 50 EC       JNC 0x53B9                       ; -> 0x53B9
    53CD: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    53D0: E0          MOVX A,@DPTR                  
    53D1: F8          MOV R0,A                      
    53D2: 74 F0       MOV A,#0xF0                   
    53D4: B5 00 00    CJNE A,0x00,0x53D7               ; -> 0x53D7
    53D7: 50 07       JNC 0x53E0                       ; -> loc_53E0
    53D9: 90 7F E7    MOV DPTR,#0x7FE7              
    53DC: E4          CLR A                         
    53DD: F0          MOVX @DPTR,A                  
    53DE: 80 50       SJMP 0x5430                      ; -> 0x5430

loc_53E0:
    53E0: 75 48 35    MOV 0x48,#0x35                
    53E3: 75 49 CC    MOV 0x49,#0xCC                
    53E6: 75 4A 00    MOV 0x4A,#0x00                
    53E9: 74 01       MOV A,#0x01                   
    53EB: 25 48       ADD A,0x48                    
    53ED: F8          MOV R0,A                      
    53EE: E4          CLR A                         
    53EF: 35 49       ADDC A,0x49                   
    53F1: F9          MOV R1,A                      
    53F2: AA 4A       MOV R2,0x4A                   
    53F4: 88 82       MOV 0x82,R0                   
    53F6: 89 83       MOV 0x83,R1                   
    53F8: 8A F0       MOV 0xF0,R2                   
    53FA: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    53FD: F8          MOV R0,A                      
    53FE: 74 0F       MOV A,#0x0F                   
    5400: 58          ANL A,R0                      
    5401: FF          MOV R7,A                      
    5402: BF 09 26    CJNE R7,#0x09,0x542B             ; -> loc_542B
    5405: 74 02       MOV A,#0x02                   
    5407: 25 48       ADD A,0x48                    
    5409: FA          MOV R2,A                      
    540A: E4          CLR A                         
    540B: 35 49       ADDC A,0x49                   
    540D: F8          MOV R0,A                      
    540E: A9 4A       MOV R1,0x4A                   
    5410: 8A 82       MOV 0x82,R2                   
    5412: 88 83       MOV 0x83,R0                   
    5414: 89 F0       MOV 0xF0,R1                   
    5416: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    5419: FA          MOV R2,A                      
    541A: E4          CLR A                         
    541B: BA 00 01    CJNE R2,#0x00,0x541F             ; -> 0x541F
    541E: 04          INC A                         
    541F: FA          MOV R2,A                      
    5420: 90 7F E7    MOV DPTR,#0x7FE7              
    5423: B4 01 00    CJNE A,#0x01,0x5426              ; -> 0x5426
    5426: E4          CLR A                         
    5427: 33          RLC A                         
    5428: F0          MOVX @DPTR,A                  
    5429: 80 05       SJMP 0x5430                      ; -> 0x5430

loc_542B:
    542B: 90 7F E7    MOV DPTR,#0x7FE7              
    542E: E4          CLR A                         
    542F: F0          MOVX @DPTR,A                  
    5430: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    5433: E0          MOVX A,@DPTR                  
    5434: FA          MOV R2,A                      
    5435: 43 02 80    ORL 0x02,#0x80                
    5438: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    543B: EA          MOV A,R2                      
    543C: F0          MOVX @DPTR,A                  
    543D: 90 CC 0C    MOV DPTR,#0xCC0C                 ; register block CC00
    5440: 74 63       MOV A,#0x63                   
    5442: F0          MOVX @DPTR,A                  
    5443: 90 CA 5A    MOV DPTR,#0xCA5A                 ; register block CA00
    5446: E4          CLR A                         
    5447: F0          MOVX @DPTR,A                  
    5448: 75 50 01    MOV 0x50,#0x01                
    544B: 75 51 04    MOV 0x51,#0x04                
    544E: 75 82 00    MOV DPL(0x82),#0x00           
    5451: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5454: 75 0A 00    MOV 0x0A,#0x00                
    5457: 75 0B 00    MOV 0x0B,#0x00                
    545A: 75 0C 00    MOV 0x0C,#0x00                
    545D: 75 0D 01    MOV 0x0D,#0x01                
    5460: 75 82 08    MOV DPL(0x82),#0x08           
    5463: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    5466: 90 7F 84    MOV DPTR,#0x7F84              
    5469: E0          MOVX A,@DPTR                  
    546A: FA          MOV R2,A                      
    546B: 60 20       JZ 0x548D                        ; -> loc_548D
    546D: 90 7F 7F    MOV DPTR,#0x7F7F              
    5470: 74 10       MOV A,#0x10                   
    5472: F0          MOVX @DPTR,A                  
    5473: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    5476: E0          MOVX A,@DPTR                  
    5477: FA          MOV R2,A                      
    5478: 53 02 08    ANL 0x02,#0x08                
    547B: 90 7F FC    MOV DPTR,#0x7FFC              
    547E: E4          CLR A                         
    547F: BA 00 01    CJNE R2,#0x00,0x5483             ; -> 0x5483
    5482: 04          INC A                         
    5483: F0          MOVX @DPTR,A                  
    5484: 90 CA A5    MOV DPTR,#0xCAA5              
    5487: 74 02       MOV A,#0x02                   
    5489: F0          MOVX @DPTR,A                  
    548A: 02 55 59    LJMP 0x5559                      ; -> 0x5559

loc_548D:
    548D: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    5490: E0          MOVX A,@DPTR                  
    5491: FA          MOV R2,A                      
    5492: 20 E5 24    JB ACC.5,0x54B9                  ; -> 0x54B9
    5495: 90 D2 18    MOV DPTR,#0xD218                 ; register block D200
    5498: E0          MOVX A,@DPTR                  
    5499: FA          MOV R2,A                      
    549A: 30 E0 1C    JNB ACC.0,0x54B9                 ; -> 0x54B9
    549D: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    54A0: E0          MOVX A,@DPTR                  
    54A1: FA          MOV R2,A                      
    54A2: 53 02 0F    ANL 0x02,#0x0F                
    54A5: 74 01       MOV A,#0x01                   
    54A7: B5 02 00    CJNE A,0x02,0x54AA               ; -> 0x54AA
    54AA: 50 0D       JNC 0x54B9                       ; -> 0x54B9
    54AC: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    54AF: E0          MOVX A,@DPTR                  
    54B0: FA          MOV R2,A                      
    54B1: 53 02 FB    ANL 0x02,#0xFB                
    54B4: 90 C8 05    MOV DPTR,#0xC805                 ; control + status register block
    54B7: EA          MOV A,R2                      
    54B8: F0          MOVX @DPTR,A                  
    54B9: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    54BC: E0          MOVX A,@DPTR                  
    54BD: FA          MOV R2,A                      
    54BE: 54 0F       ANL A,#0x0F                   
    54C0: 60 0F       JZ 0x54D1                        ; -> loc_54D1
    54C2: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    54C5: E0          MOVX A,@DPTR                  
    54C6: FA          MOV R2,A                      
    54C7: 53 02 BF    ANL 0x02,#0xBF                
    54CA: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    54CD: EA          MOV A,R2                      
    54CE: F0          MOVX @DPTR,A                  
    54CF: 80 0D       SJMP 0x54DE                      ; -> 0x54DE

loc_54D1:
    54D1: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    54D4: E0          MOVX A,@DPTR                  
    54D5: FA          MOV R2,A                      
    54D6: 43 02 40    ORL 0x02,#0x40                
    54D9: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    54DC: EA          MOV A,R2                      
    54DD: F0          MOVX @DPTR,A                  
    54DE: 90 D2 5D    MOV DPTR,#0xD25D              
    54E1: E0          MOVX A,@DPTR                  
    54E2: FA          MOV R2,A                      
    54E3: 74 0F       MOV A,#0x0F                   
    54E5: 5A          ANL A,R2                      
    54E6: F5 82       MOV DPL(0x82),A               
    54E8: 12 22 D9    LCALL 0x22D9                     ; -> sub_22D9
    54EB: E5 82       MOV A,DPL(0x82)               
    54ED: 90 7F 7F    MOV DPTR,#0x7F7F              
    54F0: F0          MOVX @DPTR,A                  
    54F1: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    54F4: E0          MOVX A,@DPTR                  
    54F5: FA          MOV R2,A                      
    54F6: 20 E5 38    JB ACC.5,0x5531                  ; -> loc_5531
    54F9: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    54FC: E0          MOVX A,@DPTR                  
    54FD: FA          MOV R2,A                      
    54FE: 54 0F       ANL A,#0x0F                   
    5500: 70 08       JNZ 0x550A                       ; -> 0x550A
    5502: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    5505: E0          MOVX A,@DPTR                  
    5506: FA          MOV R2,A                      
    5507: 20 E3 11    JB ACC.3,0x551B                  ; -> 0x551B
    550A: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    550D: E0          MOVX A,@DPTR                  
    550E: FA          MOV R2,A                      
    550F: 54 0F       ANL A,#0x0F                   
    5511: 60 1E       JZ 0x5531                        ; -> loc_5531
    5513: 90 D2 52    MOV DPTR,#0xD252                 ; register block D252
    5516: E0          MOVX A,@DPTR                  
    5517: FA          MOV R2,A                      
    5518: 30 E2 16    JNB ACC.2,0x5531                 ; -> loc_5531
    551B: 90 7F FC    MOV DPTR,#0x7FFC              
    551E: 74 01       MOV A,#0x01                   
    5520: F0          MOVX @DPTR,A                  
    5521: 90 D2 5D    MOV DPTR,#0xD25D              
    5524: E0          MOVX A,@DPTR                  
    5525: FA          MOV R2,A                      
    5526: 30 E7 0D    JNB ACC.7,0x5536                 ; -> 0x5536
    5529: 90 CA A5    MOV DPTR,#0xCAA5              
    552C: 74 02       MOV A,#0x02                   
    552E: F0          MOVX @DPTR,A                  
    552F: 80 05       SJMP 0x5536                      ; -> 0x5536

loc_5531:
    5531: 90 7F FC    MOV DPTR,#0x7FFC              
    5534: E4          CLR A                         
    5535: F0          MOVX @DPTR,A                  
    5536: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    5539: E0          MOVX A,@DPTR                  
    553A: FA          MOV R2,A                      
    553B: 54 0F       ANL A,#0x0F                   
    553D: 60 15       JZ 0x5554                        ; -> loc_5554
    553F: 90 CA A3    MOV DPTR,#0xCAA3              
    5542: 74 07       MOV A,#0x07                   
    5544: F0          MOVX @DPTR,A                  
    5545: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    5548: E0          MOVX A,@DPTR                  
    5549: FA          MOV R2,A                      
    554A: 43 02 20    ORL 0x02,#0x20                
    554D: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    5550: EA          MOV A,R2                      
    5551: F0          MOVX @DPTR,A                  
    5552: 80 05       SJMP 0x5559                      ; -> 0x5559

loc_5554:
    5554: 90 CA A3    MOV DPTR,#0xCAA3              
    5557: E4          CLR A                         
    5558: F0          MOVX @DPTR,A                  
    5559: 90 CA A2    MOV DPTR,#0xCAA2              
    555C: E0          MOVX A,@DPTR                  
    555D: FA          MOV R2,A                      
    555E: 43 02 40    ORL 0x02,#0x40                
    5561: 90 CA A2    MOV DPTR,#0xCAA2              
    5564: EA          MOV A,R2                      
    5565: F0          MOVX @DPTR,A                  
    5566: 90 CA A6    MOV DPTR,#0xCAA6              
    5569: E0          MOVX A,@DPTR                  
    556A: FA          MOV R2,A                      
    556B: 43 02 80    ORL 0x02,#0x80                
    556E: 90 CA A6    MOV DPTR,#0xCAA6              
    5571: EA          MOV A,R2                      
    5572: F0          MOVX @DPTR,A                  
    5573: 90 CA A5    MOV DPTR,#0xCAA5              
    5576: E0          MOVX A,@DPTR                  
    5577: FA          MOV R2,A                      
    5578: 43 02 01    ORL 0x02,#0x01                
    557B: 90 CA A5    MOV DPTR,#0xCAA5              
    557E: EA          MOV A,R2                      
    557F: F0          MOVX @DPTR,A                  
    5580: 90 CA AA    MOV DPTR,#0xCAAA              
    5583: E0          MOVX A,@DPTR                  
    5584: FA          MOV R2,A                      
    5585: 43 02 10    ORL 0x02,#0x10                
    5588: 90 CA AA    MOV DPTR,#0xCAAA              
    558B: EA          MOV A,R2                      
    558C: F0          MOVX @DPTR,A                  
    558D: 90 7F FC    MOV DPTR,#0x7FFC              
    5590: E0          MOVX A,@DPTR                  
    5591: FA          MOV R2,A                      
    5592: 60 30       JZ 0x55C4                        ; -> 0x55C4
    5594: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    5597: E0          MOVX A,@DPTR                  
    5598: FA          MOV R2,A                      
    5599: 53 02 FE    ANL 0x02,#0xFE                
    559C: 90 C8 06    MOV DPTR,#0xC806                 ; control + status register block
    559F: EA          MOV A,R2                      
    55A0: F0          MOVX @DPTR,A                  
    55A1: 90 CA A6    MOV DPTR,#0xCAA6              
    55A4: E0          MOVX A,@DPTR                  
    55A5: FA          MOV R2,A                      
    55A6: 43 02 78    ORL 0x02,#0x78                
    55A9: 90 CA A6    MOV DPTR,#0xCAA6              
    55AC: EA          MOV A,R2                      
    55AD: F0          MOVX @DPTR,A                  
    55AE: 90 7F 84    MOV DPTR,#0x7F84              
    55B1: E0          MOVX A,@DPTR                  
    55B2: FA          MOV R2,A                      
    55B3: 70 0F       JNZ 0x55C4                       ; -> 0x55C4
    55B5: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    55B8: E0          MOVX A,@DPTR                  
    55B9: FA          MOV R2,A                      
    55BA: 74 04       MOV A,#0x04                   
    55BC: 4A          ORL A,R2                      
    55BD: 54 F7       ANL A,#0xF7                   
    55BF: FA          MOV R2,A                      
    55C0: 90 D2 08    MOV DPTR,#0xD208                 ; register block D200
    55C3: F0          MOVX @DPTR,A                  
    55C4: 90 7F A2    MOV DPTR,#0x7FA2              
    55C7: E4          CLR A                         
    55C8: F0          MOVX @DPTR,A                  
    55C9: 90 7F 76    MOV DPTR,#0x7F76              
    55CC: F0          MOVX @DPTR,A                  
    55CD: 90 7F 77    MOV DPTR,#0x7F77              
    55D0: F0          MOVX @DPTR,A                  
    55D1: 90 7F 78    MOV DPTR,#0x7F78              
    55D4: F0          MOVX @DPTR,A                  
    55D5: 90 7F 79    MOV DPTR,#0x7F79              
    55D8: E4          CLR A                         
    55D9: F0          MOVX @DPTR,A                  
    55DA: 90 7F 7A    MOV DPTR,#0x7F7A              
    55DD: F0          MOVX @DPTR,A                  
    55DE: 90 7F 7B    MOV DPTR,#0x7F7B              
    55E1: F0          MOVX @DPTR,A                  
    55E2: 90 7F 83    MOV DPTR,#0x7F83              
    55E5: F0          MOVX @DPTR,A                  
    55E6: 90 7F 82    MOV DPTR,#0x7F82              
    55E9: E4          CLR A                         
    55EA: F0          MOVX @DPTR,A                  
    55EB: 90 7F 81    MOV DPTR,#0x7F81              
    55EE: F0          MOVX @DPTR,A                  
    55EF: 90 7F 80    MOV DPTR,#0x7F80              
    55F2: F0          MOVX @DPTR,A                  
    55F3: 90 7F FA    MOV DPTR,#0x7FFA              
    55F6: F0          MOVX @DPTR,A                  
    55F7: 90 7F 86    MOV DPTR,#0x7F86              
    55FA: E4          CLR A                         
    55FB: F0          MOVX @DPTR,A                  
    55FC: 90 7F 87    MOV DPTR,#0x7F87              
    55FF: F0          MOVX @DPTR,A                  
    5600: 90 7F 7E    MOV DPTR,#0x7F7E              
    5603: F0          MOVX @DPTR,A                  
    5604: 90 7F 7C    MOV DPTR,#0x7F7C              
    5607: F0          MOVX @DPTR,A                  
    5608: 90 7F 8F    MOV DPTR,#0x7F8F              
    560B: E4          CLR A                         
    560C: F0          MOVX @DPTR,A                  
    560D: 90 7F 8E    MOV DPTR,#0x7F8E              
    5610: F0          MOVX @DPTR,A                  
    5611: 90 7F 91    MOV DPTR,#0x7F91              
    5614: F0          MOVX @DPTR,A                  
    5615: 90 7F 90    MOV DPTR,#0x7F90              
    5618: F0          MOVX @DPTR,A                  
    5619: 90 7F 92    MOV DPTR,#0x7F92              
    561C: E4          CLR A                         
    561D: F0          MOVX @DPTR,A                  
    561E: 90 7F 93    MOV DPTR,#0x7F93              
    5621: 74 E7       MOV A,#0xE7                   
    5623: F0          MOVX @DPTR,A                  
    5624: E0          MOVX A,@DPTR                  
    5625: FA          MOV R2,A                      
    5626: 90 7F 99    MOV DPTR,#0x7F99              
    5629: E4          CLR A                         
    562A: F0          MOVX @DPTR,A                  
    562B: 90 7F 9A    MOV DPTR,#0x7F9A              
    562E: F0          MOVX @DPTR,A                  
    562F: 90 7F 9B    MOV DPTR,#0x7F9B              
    5632: F0          MOVX @DPTR,A                  
    5633: 90 7F 9D    MOV DPTR,#0x7F9D              
    5636: F0          MOVX @DPTR,A                  
    5637: 90 7F 9C    MOV DPTR,#0x7F9C              
    563A: E4          CLR A                         
    563B: F0          MOVX @DPTR,A                  
    563C: 90 7F 85    MOV DPTR,#0x7F85              
    563F: F0          MOVX @DPTR,A                  
    5640: 90 7F 9E    MOV DPTR,#0x7F9E              
    5643: F0          MOVX @DPTR,A                  
    5644: 90 7F 9F    MOV DPTR,#0x7F9F              
    5647: F0          MOVX @DPTR,A                  
    5648: 90 7F A0    MOV DPTR,#0x7FA0              
    564B: E4          CLR A                         
    564C: F0          MOVX @DPTR,A                  
    564D: 90 7F A1    MOV DPTR,#0x7FA1              
    5650: F0          MOVX @DPTR,A                  
    5651: 90 7F BC    MOV DPTR,#0x7FBC              
    5654: F0          MOVX @DPTR,A                  
    5655: 90 7F E0    MOV DPTR,#0x7FE0              
    5658: F0          MOVX @DPTR,A                  
    5659: 90 7F A3    MOV DPTR,#0x7FA3              
    565C: E4          CLR A                         
    565D: F0          MOVX @DPTR,A                  
    565E: 90 7F B8    MOV DPTR,#0x7FB8              
    5661: F0          MOVX @DPTR,A                  
    5662: 90 7F EC    MOV DPTR,#0x7FEC              
    5665: F0          MOVX @DPTR,A                  
    5666: E4          CLR A                         
    5667: F5 08       MOV 0x08,A                    
    5669: F5 09       MOV 0x09,A                    
    566B: 90 7F F2    MOV DPTR,#0x7FF2              
    566E: E4          CLR A                         
    566F: F0          MOVX @DPTR,A                  
    5670: 90 7F F3    MOV DPTR,#0x7FF3              
    5673: F0          MOVX @DPTR,A                  
    5674: 90 7F F4    MOV DPTR,#0x7FF4              
    5677: F0          MOVX @DPTR,A                  
    5678: 90 7F FB    MOV DPTR,#0x7FFB              
    567B: F0          MOVX @DPTR,A                  
    567C: 90 7F F9    MOV DPTR,#0x7FF9              
    567F: E4          CLR A                         
    5680: F0          MOVX @DPTR,A                  
    5681: 90 7F FF    MOV DPTR,#0x7FFF              
    5684: F0          MOVX @DPTR,A                  
    5685: 90 7F F1    MOV DPTR,#0x7FF1              
    5688: F0          MOVX @DPTR,A                  
    5689: 90 7F DD    MOV DPTR,#0x7FDD              
    568C: F0          MOVX @DPTR,A                  
    568D: 90 7F B7    MOV DPTR,#0x7FB7              
    5690: E4          CLR A                         
    5691: F0          MOVX @DPTR,A                  
    5692: 90 7E AB    MOV DPTR,#0x7EAB              
    5695: F0          MOVX @DPTR,A                  
    5696: 90 7E AC    MOV DPTR,#0x7EAC              
    5699: F0          MOVX @DPTR,A                  
    569A: 90 7E AD    MOV DPTR,#0x7EAD              
    569D: F0          MOVX @DPTR,A                  
    569E: 90 7E A6    MOV DPTR,#0x7EA6              
    56A1: E4          CLR A                         
    56A2: F0          MOVX @DPTR,A                  
    56A3: 90 7E A7    MOV DPTR,#0x7EA7              
    56A6: F0          MOVX @DPTR,A                  
    56A7: C0 02       PUSH 0x02                     
    56A9: 12 1F 5C    LCALL 0x1F5C                     ; -> sub_1F5C
    56AC: D0 02       POP 0x02                      
    56AE: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    56B1: E0          MOVX A,@DPTR                  
    56B2: F8          MOV R0,A                      
    56B3: 53 00 20    ANL 0x00,#0x20                
    56B6: 90 7F B9    MOV DPTR,#0x7FB9              
    56B9: E4          CLR A                         
    56BA: B8 00 01    CJNE R0,#0x00,0x56BE             ; -> 0x56BE
    56BD: 04          INC A                         
    56BE: F0          MOVX @DPTR,A                  
    56BF: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    56C2: E0          MOVX A,@DPTR                  
    56C3: F8          MOV R0,A                      
    56C4: 53 00 10    ANL 0x00,#0x10                
    56C7: 90 7F BA    MOV DPTR,#0x7FBA              
    56CA: E4          CLR A                         
    56CB: B8 00 01    CJNE R0,#0x00,0x56CF             ; -> 0x56CF
    56CE: 04          INC A                         
    56CF: F0          MOVX @DPTR,A                  
    56D0: 90 C8 4A    MOV DPTR,#0xC84A                 ; control + status register block
    56D3: E0          MOVX A,@DPTR                  
    56D4: F8          MOV R0,A                      
    56D5: 53 00 40    ANL 0x00,#0x40                
    56D8: E4          CLR A                         
    56D9: B8 00 01    CJNE R0,#0x00,0x56DD             ; -> 0x56DD
    56DC: 04          INC A                         
    56DD: F8          MOV R0,A                      
    56DE: 90 7F BB    MOV DPTR,#0x7FBB              
    56E1: B4 01 00    CJNE A,#0x01,0x56E4              ; -> 0x56E4
    56E4: E4          CLR A                         
    56E5: 33          RLC A                         
    56E6: F0          MOVX @DPTR,A                  
    56E7: 90 CC 8E    MOV DPTR,#0xCC8E                 ; register block CC00
    56EA: E0          MOVX A,@DPTR                  
    56EB: F8          MOV R0,A                      
    56EC: 90 7F 75    MOV DPTR,#0x7F75              
    56EF: 74 01       MOV A,#0x01                   
    56F1: 58          ANL A,R0                      
    56F2: F0          MOVX @DPTR,A                  
    56F3: 90 7F 75    MOV DPTR,#0x7F75              
    56F6: E0          MOVX A,@DPTR                  
    56F7: F8          MOV R0,A                      
    56F8: 60 08       JZ 0x5702                        ; -> loc_5702
    56FA: 90 CA A9    MOV DPTR,#0xCAA9              
    56FD: 74 FF       MOV A,#0xFF                   
    56FF: F0          MOVX @DPTR,A                  
    5700: 80 05       SJMP 0x5707                      ; -> 0x5707

loc_5702:
    5702: 90 CA A9    MOV DPTR,#0xCAA9              
    5705: E4          CLR A                         
    5706: F0          MOVX @DPTR,A                  
    5707: 90 CC 9B    MOV DPTR,#0xCC9B              
    570A: E0          MOVX A,@DPTR                  
    570B: F8          MOV R0,A                      
    570C: B8 01 02    CJNE R0,#0x01,0x5711             ; -> loc_5711
    570F: 80 08       SJMP 0x5719                      ; -> 0x5719

loc_5711:
    5711: 90 C8 08    MOV DPTR,#0xC808                 ; control + status register block
    5714: E0          MOVX A,@DPTR                  
    5715: F8          MOV R0,A                      
    5716: 30 E0 12    JNB ACC.0,0x572B                 ; -> loc_572B
    5719: 75 50 20    MOV 0x50,#0x20                
    571C: 75 51 45    MOV 0x51,#0x45                
    571F: 75 82 00    MOV DPL(0x82),#0x00           
    5722: C0 02       PUSH 0x02                     
    5724: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5727: D0 02       POP 0x02                      
    5729: 80 DC       SJMP 0x5707                      ; -> 0x5707

loc_572B:
    572B: 90 CC 07    MOV DPTR,#0xCC07                 ; register block CC00
    572E: E0          MOVX A,@DPTR                  
    572F: F8          MOV R0,A                      
    5730: 90 7F 93    MOV DPTR,#0x7F93              
    5733: E0          MOVX A,@DPTR                  
    5734: 58          ANL A,R0                      
    5735: 5A          ANL A,R2                      
    5736: F5 47       MOV 0x47,A                    
    5738: 90 7F 93    MOV DPTR,#0x7F93              
    573B: E0          MOVX A,@DPTR                  
    573C: FA          MOV R2,A                      
    573D: 90 CA 40    MOV DPTR,#0xCA40                 ; register block CA00
    5740: E0          MOVX A,@DPTR                  
    5741: 90 7F FD    MOV DPTR,#0x7FFD              
    5744: F0          MOVX @DPTR,A                  
    5745: 90 CA 41    MOV DPTR,#0xCA41                 ; register block CA00
    5748: E0          MOVX A,@DPTR                  
    5749: 90 7F FE    MOV DPTR,#0x7FFE              
    574C: F0          MOVX @DPTR,A                  
    574D: 90 D8 04    MOV DPTR,#0xD804              
    5750: E0          MOVX A,@DPTR                  
    5751: 78 00       MOV R0,#0x00                  
    5753: F4          CPL A                         
    5754: F9          MOV R1,A                      
    5755: E8          MOV A,R0                      
    5756: F4          CPL A                         
    5757: 53 01 F0    ANL 0x01,#0xF0                
    575A: E4          CLR A                         
    575B: F8          MOV R0,A                      
    575C: C4          SWAP A                        
    575D: C9          XCH A,R1                      
    575E: C4          SWAP A                        
    575F: 54 0F       ANL A,#0x0F                   
    5761: 69          XRL A,R1                      
    5762: C9          XCH A,R1                      
    5763: 54 0F       ANL A,#0x0F                   
    5765: C9          XCH A,R1                      
    5766: 69          XRL A,R1                      
    5767: C9          XCH A,R1                      
    5768: 30 E3 02    JNB ACC.3,0x576D                 ; -> 0x576D
    576B: 44 F0       ORL A,#0xF0                   
    576D: 90 7F ED    MOV DPTR,#0x7FED              
    5770: E9          MOV A,R1                      
    5771: F0          MOVX @DPTR,A                  
    5772: 90 7F B4    MOV DPTR,#0x7FB4              
    5775: E0          MOVX A,@DPTR                  
    5776: F8          MOV R0,A                      
    5777: 70 03       JNZ 0x577C                       ; -> loc_577C
    5779: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_577C:
    577C: 90 D8 4E    MOV DPTR,#0xD84E              
    577F: E0          MOVX A,@DPTR                  
    5780: F8          MOV R0,A                      
    5781: 90 7F ED    MOV DPTR,#0x7FED              
    5784: E0          MOVX A,@DPTR                  
    5785: 52 00       ANL 0x00,A                    
    5787: 90 7F ED    MOV DPTR,#0x7FED              
    578A: E0          MOVX A,@DPTR                  
    578B: F9          MOV R1,A                      
    578C: E8          MOV A,R0                      
    578D: B5 01 02    CJNE A,0x01,0x5792               ; -> loc_5792
    5790: 80 03       SJMP 0x5795                      ; -> loc_5795

loc_5792:
    5792: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_5795:
    5795: 90 00 A6    MOV DPTR,#0x00A6              
    5798: E4          CLR A                         
    5799: 93          MOVC A,@A+DPTR                
    579A: F8          MOV R0,A                      
    579B: 30 E1 03    JNB ACC.1,0x57A1                 ; -> loc_57A1
    579E: 02 59 7C    LJMP 0x597C                      ; -> 0x597C

loc_57A1:
    57A1: 90 7E AA    MOV DPTR,#0x7EAA              
    57A4: E0          MOVX A,@DPTR                  
    57A5: F8          MOV R0,A                      
    57A6: 60 03       JZ 0x57AB                        ; -> loc_57AB
    57A8: 02 59 7C    LJMP 0x597C                      ; -> 0x597C

loc_57AB:
    57AB: 90 7E B8    MOV DPTR,#0x7EB8              
    57AE: E0          MOVX A,@DPTR                  
    57AF: 24 01       ADD A,#0x01                   
    57B1: F0          MOVX @DPTR,A                  
    57B2: 90 7E B8    MOV DPTR,#0x7EB8              
    57B5: E0          MOVX A,@DPTR                  
    57B6: F8          MOV R0,A                      
    57B7: 74 02       MOV A,#0x02                   
    57B9: B5 00 00    CJNE A,0x00,0x57BC               ; -> 0x57BC
    57BC: 40 03       JC 0x57C1                        ; -> loc_57C1
    57BE: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_57C1:
    57C1: 90 7E B9    MOV DPTR,#0x7EB9              
    57C4: E0          MOVX A,@DPTR                  
    57C5: F8          MOV R0,A                      
    57C6: 74 05       MOV A,#0x05                   
    57C8: B5 00 00    CJNE A,0x00,0x57CB               ; -> 0x57CB
    57CB: 50 03       JNC 0x57D0                       ; -> loc_57D0
    57CD: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_57D0:
    57D0: E8          MOV A,R0                      
    57D1: 28          ADD A,R0                      
    57D2: 28          ADD A,R0                      
    57D3: 90 57 D7    MOV DPTR,#0x57D7              
    57D6: 73          JMP @A+DPTR                   
    57D7: 02 57 E9    LJMP 0x57E9                      ; -> 0x57E9
    57DA: 02          DB 0x02                       ; data
    57DB: 58          DB 0x58                       ; data
    57DC: 1E          DB 0x1E                       ; data
    57DD: 02          DB 0x02                       ; data
    57DE: 58          DB 0x58                       ; data
    57DF: 6A          DB 0x6A                       ; data
    57E0: 02          DB 0x02                       ; data
    57E1: 58          DB 0x58                       ; data
    57E2: AF          DB 0xAF                       ; data
    57E3: 02          DB 0x02                       ; data
    57E4: 58          DB 0x58                       ; data
    57E5: F0          DB 0xF0                       ; data
    57E6: 02          DB 0x02                       ; data
    57E7: 59          DB 0x59                       ; data
    57E8: 30          DB 0x30                       ; data
    57E9: 75 50 04    MOV 0x50,#0x04                
    57EC: 75 51 50    MOV 0x51,#0x50                
    57EF: 75 82 00    MOV DPL(0x82),#0x00           
    57F2: C0 02       PUSH 0x02                     
    57F4: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    57F7: D0 02       POP 0x02                      
    57F9: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    57FC: 74 01       MOV A,#0x01                   
    57FE: F0          MOVX @DPTR,A                  
    57FF: 90 D8 0B    MOV DPTR,#0xD80B              
    5802: E4          CLR A                         
    5803: F0          MOVX @DPTR,A                  
    5804: 90 D8 0A    MOV DPTR,#0xD80A              
    5807: F0          MOVX @DPTR,A                  
    5808: 90 D8 15    MOV DPTR,#0xD815              
    580B: F0          MOVX @DPTR,A                  
    580C: 90 D8 04    MOV DPTR,#0xD804              
    580F: F0          MOVX @DPTR,A                  
    5810: 90 7E B9    MOV DPTR,#0x7EB9              
    5813: 74 01       MOV A,#0x01                   
    5815: F0          MOVX @DPTR,A                  
    5816: 90 7E B8    MOV DPTR,#0x7EB8              
    5819: E4          CLR A                         
    581A: F0          MOVX @DPTR,A                  
    581B: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_581E:
    581E: 90 7F 7E    MOV DPTR,#0x7F7E              
    5821: E0          MOVX A,@DPTR                  
    5822: F8          MOV R0,A                      
    5823: 88 F0       MOV 0xF0,R0                   
    5825: 05 F0       INC B(0xF0)                   
    5827: 74 01       MOV A,#0x01                   
    5829: 80 02       SJMP 0x582D                      ; -> 0x582D

loc_582B:
    582B: 25 E0       ADD A,ACC(0xE0)               
    582D: D5 F0 FB    DJNZ B(0xF0),0x582B              ; -> loc_582B
    5830: 14          DEC A                         
    5831: 90 7F ED    MOV DPTR,#0x7FED              
    5834: F0          MOVX @DPTR,A                  
    5835: 90 7F ED    MOV DPTR,#0x7FED              
    5838: E0          MOVX A,@DPTR                  
    5839: F8          MOV R0,A                      
    583A: 53 00 0F    ANL 0x00,#0x0F                
    583D: 90 D8 04    MOV DPTR,#0xD804              
    5840: E8          MOV A,R0                      
    5841: F0          MOVX @DPTR,A                  
    5842: 90 7F ED    MOV DPTR,#0x7FED              
    5845: E0          MOVX A,@DPTR                  
    5846: F8          MOV R0,A                      
    5847: 53 00 0F    ANL 0x00,#0x0F                
    584A: 90 D8 0A    MOV DPTR,#0xD80A              
    584D: E8          MOV A,R0                      
    584E: F0          MOVX @DPTR,A                  
    584F: 90 7F ED    MOV DPTR,#0x7FED              
    5852: E0          MOVX A,@DPTR                  
    5853: F8          MOV R0,A                      
    5854: 53 00 0F    ANL 0x00,#0x0F                
    5857: 90 D8 0B    MOV DPTR,#0xD80B              
    585A: E8          MOV A,R0                      
    585B: F0          MOVX @DPTR,A                  
    585C: 90 7E B9    MOV DPTR,#0x7EB9              
    585F: 74 02       MOV A,#0x02                   
    5861: F0          MOVX @DPTR,A                  
    5862: 90 7E B8    MOV DPTR,#0x7EB8              
    5865: E4          CLR A                         
    5866: F0          MOVX @DPTR,A                  
    5867: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_586A:
    586A: 90 7E B8    MOV DPTR,#0x7EB8              
    586D: E0          MOVX A,@DPTR                  
    586E: F8          MOV R0,A                      
    586F: 74 64       MOV A,#0x64                   
    5871: B5 00 00    CJNE A,0x00,0x5874               ; -> 0x5874
    5874: 40 03       JC 0x5879                        ; -> loc_5879
    5876: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_5879:
    5879: 90 D8 04    MOV DPTR,#0xD804              
    587C: E0          MOVX A,@DPTR                  
    587D: F8          MOV R0,A                      
    587E: 90 7F ED    MOV DPTR,#0x7FED              
    5881: 74 0F       MOV A,#0x0F                   
    5883: 58          ANL A,R0                      
    5884: F0          MOVX @DPTR,A                  
    5885: 90 D8 0D    MOV DPTR,#0xD80D              
    5888: E0          MOVX A,@DPTR                  
    5889: F8          MOV R0,A                      
    588A: 53 00 0F    ANL 0x00,#0x0F                
    588D: 90 7F ED    MOV DPTR,#0x7FED              
    5890: E0          MOVX A,@DPTR                  
    5891: 52 00       ANL 0x00,A                    
    5893: 90 7F ED    MOV DPTR,#0x7FED              
    5896: E0          MOVX A,@DPTR                  
    5897: F9          MOV R1,A                      
    5898: E8          MOV A,R0                      
    5899: B5 01 02    CJNE A,0x01,0x589E               ; -> loc_589E
    589C: 80 03       SJMP 0x58A1                      ; -> loc_58A1

loc_589E:
    589E: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3

loc_58A1:
    58A1: 90 7E B9    MOV DPTR,#0x7EB9              
    58A4: 74 03       MOV A,#0x03                   
    58A6: F0          MOVX @DPTR,A                  
    58A7: 90 7E B8    MOV DPTR,#0x7EB8              
    58AA: E4          CLR A                         
    58AB: F0          MOVX @DPTR,A                  
    58AC: 02 59 E3    LJMP 0x59E3                      ; -> 0x59E3
    58AF: 75          DB 0x75                       ; data
    58B0: 50          DB 0x50                       ; data
    58B1: 04          DB 0x04                       ; data
    58B2: 75          DB 0x75                       ; data
    58B3: 51          DB 0x51                       ; data
    58B4: 51          DB 0x51                       ; data
    58B5: 75          DB 0x75                       ; data
    58B6: 82          DB 0x82                       ; data
    58B7: 00          DB 0x00                       ; data
    58B8: C0          DB 0xC0                       ; data
    58B9: 02          DB 0x02                       ; data
    58BA: 12          DB 0x12                       ; data
    58BB: 04          DB 0x04                       ; data
    58BC: 4F          DB 0x4F                       ; data
    58BD: D0          DB 0xD0                       ; data
    58BE: 02          DB 0x02                       ; data
    58BF: 90          DB 0x90                       ; data
    58C0: D8          DB 0xD8                       ; data
    58C1: 0B          DB 0x0B                       ; data
    58C2: E4          DB 0xE4                       ; data
    58C3: F0          DB 0xF0                       ; data
    58C4: 90          DB 0x90                       ; data
    58C5: D8          DB 0xD8                       ; data
    58C6: 04          DB 0x04                       ; data
    58C7: E0          DB 0xE0                       ; data
    58C8: F8          DB 0xF8                       ; data
    58C9: 90          DB 0x90                       ; data
    58CA: 7F          DB 0x7F                       ; data
    58CB: ED          DB 0xED                       ; data
    58CC: 74          DB 0x74                       ; data
    58CD: 0F          DB 0x0F                       ; data
    58CE: 58          DB 0x58                       ; data
    58CF: F0          DB 0xF0                       ; data
    58D0: 90          DB 0x90                       ; data
    58D1: 7F          DB 0x7F                       ; data
    58D2: ED          DB 0xED                       ; data
    58D3: E0          DB 0xE0                       ; data
    58D4: F8          DB 0xF8                       ; data
    58D5: 53          DB 0x53                       ; data
    58D6: 00          DB 0x00                       ; data
    58D7: 0F          DB 0x0F                       ; data
    58D8: 90          DB 0x90                       ; data
    58D9: D8          DB 0xD8                       ; data
    58DA: 0B          DB 0x0B                       ; data
    58DB: E8          DB 0xE8                       ; data
    58DC: F0          DB 0xF0                       ; data
    58DD: 90          DB 0x90                       ; data
    58DE: CC          DB 0xCC                       ; data
    58DF: 00          DB 0x00                       ; data
    58E0: E4          DB 0xE4                       ; data
    58E1: F0          DB 0xF0                       ; data
    58E2: 90          DB 0x90                       ; data
    58E3: 7E          DB 0x7E                       ; data
    58E4: B9          DB 0xB9                       ; data
    58E5: 74          DB 0x74                       ; data
    58E6: 04          DB 0x04                       ; data
    58E7: F0          DB 0xF0                       ; data
    58E8: 90          DB 0x90                       ; data
    58E9: 7E          DB 0x7E                       ; data
    58EA: B8          DB 0xB8                       ; data
    58EB: E4          DB 0xE4                       ; data
    58EC: F0          DB 0xF0                       ; data
    58ED: 02          DB 0x02                       ; data
    58EE: 59          DB 0x59                       ; data
    58EF: E3          DB 0xE3                       ; data
    58F0: 90          DB 0x90                       ; data
    58F1: D8          DB 0xD8                       ; data
    58F2: 04          DB 0x04                       ; data
    58F3: E0          DB 0xE0                       ; data
    58F4: F8          DB 0xF8                       ; data
    58F5: 90          DB 0x90                       ; data
    58F6: 7F          DB 0x7F                       ; data
    58F7: ED          DB 0xED                       ; data
    58F8: 74          DB 0x74                       ; data
    58F9: 0F          DB 0x0F                       ; data
    58FA: 58          DB 0x58                       ; data
    58FB: F0          DB 0xF0                       ; data
    58FC: 90          DB 0x90                       ; data
    58FD: C6          DB 0xC6                       ; data
    58FE: 06          DB 0x06                       ; data
    58FF: E0          DB 0xE0                       ; data
    5900: F8          DB 0xF8                       ; data
    5901: 53          DB 0x53                       ; data
    5902: 00          DB 0x00                       ; data
    5903: 0F          DB 0x0F                       ; data
    5904: 90          DB 0x90                       ; data
    5905: 7F          DB 0x7F                       ; data
    5906: ED          DB 0xED                       ; data
    5907: E0          DB 0xE0                       ; data
    5908: 52          DB 0x52                       ; data
    5909: 00          DB 0x00                       ; data
    590A: 90          DB 0x90                       ; data
    590B: 7F          DB 0x7F                       ; data
    590C: ED          DB 0xED                       ; data
    590D: E0          DB 0xE0                       ; data
    590E: F9          DB 0xF9                       ; data
    590F: E8          DB 0xE8                       ; data
    5910: B5          DB 0xB5                       ; data
    5911: 01          DB 0x01                       ; data
    5912: 10          DB 0x10                       ; data
    5913: 90          DB 0x90                       ; data
    5914: C6          DB 0xC6                       ; data
    5915: 06          DB 0x06                       ; data
    5916: E0          DB 0xE0                       ; data
    5917: F8          DB 0xF8                       ; data
    5918: 30          DB 0x30                       ; data
    5919: E4          DB 0xE4                       ; data
    591A: 08          DB 0x08                       ; data
    591B: 90          DB 0x90                       ; data
    591C: 7E          DB 0x7E                       ; data
    591D: B9          DB 0xB9                       ; data
    591E: 74          DB 0x74                       ; data
    591F: 05          DB 0x05                       ; data
    5920: F0          DB 0xF0                       ; data
    5921: 80          DB 0x80                       ; data
    5922: 05          DB 0x05                       ; data
    5923: 90          DB 0x90                       ; data
    5924: 7E          DB 0x7E                       ; data
    5925: B9          DB 0xB9                       ; data
    5926: E4          DB 0xE4                       ; data
    5927: F0          DB 0xF0                       ; data
    5928: 90          DB 0x90                       ; data
    5929: 7E          DB 0x7E                       ; data
    592A: B8          DB 0xB8                       ; data
    592B: E4          DB 0xE4                       ; data
    592C: F0          DB 0xF0                       ; data
    592D: 02          DB 0x02                       ; data
    592E: 59          DB 0x59                       ; data
    592F: E3          DB 0xE3                       ; data
    5930: 75          DB 0x75                       ; data
    5931: 50          DB 0x50                       ; data
    5932: 04          DB 0x04                       ; data
    5933: 75          DB 0x75                       ; data
    5934: 51          DB 0x51                       ; data
    5935: 52          DB 0x52                       ; data
    5936: 75          DB 0x75                       ; data
    5937: 82          DB 0x82                       ; data
    5938: 00          DB 0x00                       ; data
    5939: C0          DB 0xC0                       ; data
    593A: 02          DB 0x02                       ; data
    593B: 12          DB 0x12                       ; data
    593C: 04          DB 0x04                       ; data
    593D: 4F          DB 0x4F                       ; data
    593E: 90          DB 0x90                       ; data
    593F: 7F          DB 0x7F                       ; data
    5940: B4          DB 0xB4                       ; data
    5941: E4          DB 0xE4                       ; data
    5942: F0          DB 0xF0                       ; data
    5943: 90          DB 0x90                       ; data
    5944: 7F          DB 0x7F                       ; data
    5945: AB          DB 0xAB                       ; data
    5946: 74          DB 0x74                       ; data
    5947: 01          DB 0x01                       ; data
    5948: F0          DB 0xF0                       ; data
    5949: 90          DB 0x90                       ; data
    594A: 7F          DB 0x7F                       ; data
    594B: A9          DB 0xA9                       ; data
    594C: 74          DB 0x74                       ; data
    594D: 01          DB 0x01                       ; data
    594E: F0          DB 0xF0                       ; data
    594F: 90          DB 0x90                       ; data
    5950: 7F          DB 0x7F                       ; data
    5951: AA          DB 0xAA                       ; data
    5952: E4          DB 0xE4                       ; data
    5953: F0          DB 0xF0                       ; data
    5954: 90          DB 0x90                       ; data
    5955: 7F          DB 0x7F                       ; data
    5956: 7E          DB 0x7E                       ; data
    5957: E0          DB 0xE0                       ; data
    5958: F5          DB 0xF5                       ; data
    5959: 0A          DB 0x0A                       ; data
    595A: 90          DB 0x90                       ; data
    595B: 7F          DB 0x7F                       ; data
    595C: 7D          DB 0x7D                       ; data
    595D: E0          DB 0xE0                       ; data
    595E: F5          DB 0xF5                       ; data
    595F: 0B          DB 0x0B                       ; data
    5960: 90          DB 0x90                       ; data
    5961: 7F          DB 0x7F                       ; data
    5962: 7C          DB 0x7C                       ; data
    5963: E0          DB 0xE0                       ; data
    5964: F5          DB 0xF5                       ; data
    5965: 0C          DB 0x0C                       ; data
    5966: 75          DB 0x75                       ; data
    5967: 0D          DB 0x0D                       ; data
    5968: 00          DB 0x00                       ; data
    5969: 75          DB 0x75                       ; data
    596A: 82          DB 0x82                       ; data
    596B: 01          DB 0x01                       ; data
    596C: 12          DB 0x12                       ; data
    596D: 26          DB 0x26                       ; data
    596E: BE          DB 0xBE                       ; data
    596F: D0          DB 0xD0                       ; data
    5970: 02          DB 0x02                       ; data
    5971: 90          DB 0x90                       ; data
    5972: 7E          DB 0x7E                       ; data
    5973: B9          DB 0xB9                       ; data
    5974: E4          DB 0xE4                       ; data
    5975: F0          DB 0xF0                       ; data
    5976: 90          DB 0x90                       ; data
    5977: 7E          DB 0x7E                       ; data
    5978: B8          DB 0xB8                       ; data
    5979: F0          DB 0xF0                       ; data
    597A: 80          DB 0x80                       ; data
    597B: 67          DB 0x67                       ; data
    597C: 90 7F B4    MOV DPTR,#0x7FB4              
    597F: E4          CLR A                         
    5980: F0          MOVX @DPTR,A                  
    5981: 90 D8 0B    MOV DPTR,#0xD80B              
    5984: F0          MOVX @DPTR,A                  
    5985: 90 D8 04    MOV DPTR,#0xD804              
    5988: E0          MOVX A,@DPTR                  
    5989: F8          MOV R0,A                      
    598A: 90 7F ED    MOV DPTR,#0x7FED              
    598D: 74 0F       MOV A,#0x0F                   
    598F: 58          ANL A,R0                      
    5990: F0          MOVX @DPTR,A                  
    5991: 90 7F ED    MOV DPTR,#0x7FED              
    5994: E0          MOVX A,@DPTR                  
    5995: F8          MOV R0,A                      
    5996: 53 00 0F    ANL 0x00,#0x0F                
    5999: 90 D8 0B    MOV DPTR,#0xD80B              
    599C: E8          MOV A,R0                      
    599D: F0          MOVX @DPTR,A                  
    599E: 90 CC 00    MOV DPTR,#0xCC00                 ; register block CC00
    59A1: E4          CLR A                         
    59A2: F0          MOVX @DPTR,A                  
    59A3: 90 7F AB    MOV DPTR,#0x7FAB              
    59A6: 74 01       MOV A,#0x01                   
    59A8: F0          MOVX @DPTR,A                  
    59A9: 90 7F A9    MOV DPTR,#0x7FA9              
    59AC: 74 01       MOV A,#0x01                   
    59AE: F0          MOVX @DPTR,A                  
    59AF: 90 7F AA    MOV DPTR,#0x7FAA              
    59B2: E4          CLR A                         
    59B3: F0          MOVX @DPTR,A                  
    59B4: 90 7F 7E    MOV DPTR,#0x7F7E              
    59B7: E0          MOVX A,@DPTR                  
    59B8: F5 0A       MOV 0x0A,A                    
    59BA: 90 7F 7D    MOV DPTR,#0x7F7D              
    59BD: E0          MOVX A,@DPTR                  
    59BE: F5 0B       MOV 0x0B,A                    
    59C0: 90 7F 7C    MOV DPTR,#0x7F7C              
    59C3: E0          MOVX A,@DPTR                  
    59C4: F5 0C       MOV 0x0C,A                    
    59C6: 75 0D 00    MOV 0x0D,#0x00                
    59C9: 75 82 01    MOV DPL(0x82),#0x01           
    59CC: C0 02       PUSH 0x02                     
    59CE: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    59D1: D0 02       POP 0x02                      
    59D3: 90 00 A9    MOV DPTR,#0x00A9              
    59D6: E4          CLR A                         
    59D7: 93          MOVC A,@A+DPTR                
    59D8: F8          MOV R0,A                      
    59D9: 30 E4 07    JNB ACC.4,0x59E3                 ; -> 0x59E3
    59DC: C0 02       PUSH 0x02                     
    59DE: 12 04 D0    LCALL 0x04D0                     ; -> sub_04D0
    59E1: D0 02       POP 0x02                      
    59E3: 90 7F B5    MOV DPTR,#0x7FB5              
    59E6: E0          MOVX A,@DPTR                  
    59E7: F8          MOV R0,A                      
    59E8: 60 44       JZ 0x5A2E                        ; -> 0x5A2E
    59EA: C0 02       PUSH 0x02                     
    59EC: 90 D8 19    MOV DPTR,#0xD819              
    59EF: E0          MOVX A,@DPTR                  
    59F0: F8          MOV R0,A                      
    59F1: 53 00 F0    ANL 0x00,#0xF0                
    59F4: 90 D8 04    MOV DPTR,#0xD804              
    59F7: E0          MOVX A,@DPTR                  
    59F8: F4          CPL A                         
    59F9: F9          MOV R1,A                      
    59FA: 74 F0       MOV A,#0xF0                   
    59FC: 59          ANL A,R1                      
    59FD: 90 7F ED    MOV DPTR,#0x7FED              
    5A00: 58          ANL A,R0                      
    5A01: F0          MOVX @DPTR,A                  
    5A02: 90 D8 04    MOV DPTR,#0xD804              
    5A05: E0          MOVX A,@DPTR                  
    5A06: 79 00       MOV R1,#0x00                  
    5A08: F4          CPL A                         
    5A09: F8          MOV R0,A                      
    5A0A: E9          MOV A,R1                      
    5A0B: F4          CPL A                         
    5A0C: F9          MOV R1,A                      
    5A0D: 74 F0       MOV A,#0xF0                   
    5A0F: 58          ANL A,R0                      
    5A10: F5 4E       MOV 0x4E,A                    
    5A12: 75 4F 00    MOV 0x4F,#0x00                
    5A15: 90 7F ED    MOV DPTR,#0x7FED              
    5A18: E0          MOVX A,@DPTR                  
    5A19: FA          MOV R2,A                      
    5A1A: 78 00       MOV R0,#0x00                  
    5A1C: B5 4E 06    CJNE A,0x4E,0x5A25               ; -> loc_5A25
    5A1F: E8          MOV A,R0                      
    5A20: B5 4F 02    CJNE A,0x4F,0x5A25               ; -> loc_5A25
    5A23: 80 04       SJMP 0x5A29                      ; -> loc_5A29

loc_5A25:
    5A25: D0 02       POP 0x02                      
    5A27: 80 05       SJMP 0x5A2E                      ; -> 0x5A2E

loc_5A29:
    5A29: 12 15 C1    LCALL 0x15C1                     ; -> sub_15C1
    5A2C: D0 02       POP 0x02                      
    5A2E: 90 7F BE    MOV DPTR,#0x7FBE              
    5A31: E0          MOVX A,@DPTR                  
    5A32: F8          MOV R0,A                      
    5A33: 60 6C       JZ 0x5AA1                        ; -> 0x5AA1
    5A35: 90 00 AC    MOV DPTR,#0x00AC              
    5A38: E4          CLR A                         
    5A39: 93          MOVC A,@A+DPTR                
    5A3A: F8          MOV R0,A                      
    5A3B: 60 0D       JZ 0x5A4A                        ; -> 0x5A4A
    5A3D: 90 7E A7    MOV DPTR,#0x7EA7              
    5A40: E0          MOVX A,@DPTR                  
    5A41: F8          MOV R0,A                      
    5A42: 70 06       JNZ 0x5A4A                       ; -> 0x5A4A
    5A44: 90 7E A7    MOV DPTR,#0x7EA7              
    5A47: 74 01       MOV A,#0x01                   
    5A49: F0          MOVX @DPTR,A                  
    5A4A: 90 7E A7    MOV DPTR,#0x7EA7              
    5A4D: E0          MOVX A,@DPTR                  
    5A4E: F8          MOV R0,A                      
    5A4F: 60 07       JZ 0x5A58                        ; -> 0x5A58
    5A51: 90 7E A6    MOV DPTR,#0x7EA6              
    5A54: E0          MOVX A,@DPTR                  
    5A55: 24 01       ADD A,#0x01                   
    5A57: F0          MOVX @DPTR,A                  
    5A58: 90 7F 9D    MOV DPTR,#0x7F9D              
    5A5B: E0          MOVX A,@DPTR                  
    5A5C: F8          MOV R0,A                      
    5A5D: 70 0E       JNZ 0x5A6D                       ; -> 0x5A6D
    5A5F: 90 7F 78    MOV DPTR,#0x7F78              
    5A62: E0          MOVX A,@DPTR                  
    5A63: F8          MOV R0,A                      
    5A64: 70 07       JNZ 0x5A6D                       ; -> 0x5A6D
    5A66: 90 7F BD    MOV DPTR,#0x7FBD              
    5A69: E0          MOVX A,@DPTR                  
    5A6A: F8          MOV R0,A                      
    5A6B: 60 19       JZ 0x5A86                        ; -> 0x5A86
    5A6D: 90 00 AB    MOV DPTR,#0x00AB              
    5A70: E4          CLR A                         
    5A71: 93          MOVC A,@A+DPTR                
    5A72: F8          MOV R0,A                      
    5A73: 20 E6 10    JB ACC.6,0x5A86                  ; -> 0x5A86
    5A76: 90 7E A6    MOV DPTR,#0x7EA6              
    5A79: E0          MOVX A,@DPTR                  
    5A7A: F8          MOV R0,A                      
    5A7B: 90 00 AC    MOV DPTR,#0x00AC              
    5A7E: E4          CLR A                         
    5A7F: 93          MOVC A,@A+DPTR                
    5A80: F9          MOV R1,A                      
    5A81: B5 00 00    CJNE A,0x00,0x5A84               ; -> 0x5A84
    5A84: 50 1B       JNC 0x5AA1                       ; -> 0x5AA1
    5A86: 75 82 46    MOV DPL(0x82),#0x46           
    5A89: C0 02       PUSH 0x02                     
    5A8B: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    5A8E: D0 02       POP 0x02                      
    5A90: 90 7F BE    MOV DPTR,#0x7FBE              
    5A93: E4          CLR A                         
    5A94: F0          MOVX @DPTR,A                  
    5A95: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    5A98: F0          MOVX @DPTR,A                  
    5A99: 90 7E A7    MOV DPTR,#0x7EA7              
    5A9C: F0          MOVX @DPTR,A                  
    5A9D: 90 7E A6    MOV DPTR,#0x7EA6              
    5AA0: F0          MOVX @DPTR,A                  
    5AA1: E5 47       MOV A,0x47                    
    5AA3: 70 0A       JNZ 0x5AAF                       ; -> loc_5AAF
    5AA5: 90 7F FD    MOV DPTR,#0x7FFD              
    5AA8: E0          MOVX A,@DPTR                  
    5AA9: F8          MOV R0,A                      
    5AAA: 70 03       JNZ 0x5AAF                       ; -> loc_5AAF
    5AAC: 02 64 54    LJMP 0x6454                      ; -> loc_6454

loc_5AAF:
    5AAF: E5 47       MOV A,0x47                    
    5AB1: 30 E0 06    JNB ACC.0,0x5ABA                 ; -> loc_5ABA
    5AB4: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    5AB7: 02 48 8A    LJMP 0x488A                      ; -> 0x488A

loc_5ABA:
    5ABA: 90 7F FD    MOV DPTR,#0x7FFD              
    5ABD: E0          MOVX A,@DPTR                  
    5ABE: F8          MOV R0,A                      
    5ABF: 20 E4 03    JB ACC.4,0x5AC5                  ; -> loc_5AC5
    5AC2: 02 5B 42    LJMP 0x5B42                      ; -> 0x5B42

loc_5AC5:
    5AC5: 90 7F E0    MOV DPTR,#0x7FE0              
    5AC8: E0          MOVX A,@DPTR                  
    5AC9: F8          MOV R0,A                      
    5ACA: 60 4F       JZ 0x5B1B                        ; -> loc_5B1B
    5ACC: 90 7F F3    MOV DPTR,#0x7FF3              
    5ACF: E0          MOVX A,@DPTR                  
    5AD0: F8          MOV R0,A                      
    5AD1: 60 2B       JZ 0x5AFE                        ; -> loc_5AFE
    5AD3: 90 7F F2    MOV DPTR,#0x7FF2              
    5AD6: E4          CLR A                         
    5AD7: F0          MOVX @DPTR,A                  
    5AD8: 90 7F F3    MOV DPTR,#0x7FF3              
    5ADB: F0          MOVX @DPTR,A                  
    5ADC: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    5ADF: 74 02       MOV A,#0x02                   
    5AE1: F0          MOVX @DPTR,A                  
    5AE2: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    5AE5: 74 01       MOV A,#0x01                   
    5AE7: F0          MOVX @DPTR,A                  
    5AE8: 90 CA 22    MOV DPTR,#0xCA22                 ; register block CA00
    5AEB: E4          CLR A                         
    5AEC: F0          MOVX @DPTR,A                  
    5AED: 90 CA 23    MOV DPTR,#0xCA23                 ; register block CA00
    5AF0: F0          MOVX @DPTR,A                  
    5AF1: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    5AF4: 74 01       MOV A,#0x01                   
    5AF6: F0          MOVX @DPTR,A                  
    5AF7: 90 7F 9D    MOV DPTR,#0x7F9D              
    5AFA: E4          CLR A                         
    5AFB: F0          MOVX @DPTR,A                  
    5AFC: 80 31       SJMP 0x5B2F                      ; -> 0x5B2F

loc_5AFE:
    5AFE: 90 7F E0    MOV DPTR,#0x7FE0              
    5B01: E4          CLR A                         
    5B02: F0          MOVX @DPTR,A                  
    5B03: 90 CA 20    MOV DPTR,#0xCA20                 ; register block CA00
    5B06: 74 01       MOV A,#0x01                   
    5B08: F0          MOVX @DPTR,A                  
    5B09: 90 CA 21    MOV DPTR,#0xCA21                 ; register block CA00
    5B0C: E4          CLR A                         
    5B0D: F0          MOVX @DPTR,A                  
    5B0E: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    5B11: 74 01       MOV A,#0x01                   
    5B13: F0          MOVX @DPTR,A                  
    5B14: 90 7F 9D    MOV DPTR,#0x7F9D              
    5B17: E4          CLR A                         
    5B18: F0          MOVX @DPTR,A                  
    5B19: 80 14       SJMP 0x5B2F                      ; -> 0x5B2F

loc_5B1B:
    5B1B: C0 02       PUSH 0x02                     
    5B1D: 12 41 F1    LCALL 0x41F1                     ; -> sub_41F1
    5B20: D0 02       POP 0x02                      
    5B22: 90 7F 79    MOV DPTR,#0x7F79              
    5B25: E0          MOVX A,@DPTR                  
    5B26: F8          MOV R0,A                      
    5B27: 60 06       JZ 0x5B2F                        ; -> 0x5B2F
    5B29: 90 7F 77    MOV DPTR,#0x7F77              
    5B2C: 74 01       MOV A,#0x01                   
    5B2E: F0          MOVX @DPTR,A                  
    5B2F: 90 CA 0E    MOV DPTR,#0xCA0E                 ; register block CA00
    5B32: 74 01       MOV A,#0x01                   
    5B34: F0          MOVX @DPTR,A                  
    5B35: 90 7F 78    MOV DPTR,#0x7F78              
    5B38: E4          CLR A                         
    5B39: F0          MOVX @DPTR,A                  
    5B3A: 90 7F FD    MOV DPTR,#0x7FFD              
    5B3D: E0          MOVX A,@DPTR                  
    5B3E: F8          MOV R0,A                      
    5B3F: 54 FE       ANL A,#0xFE                   
    5B41: F0          MOVX @DPTR,A                  
    5B42: 90 7F FD    MOV DPTR,#0x7FFD              
    5B45: E0          MOVX A,@DPTR                  
    5B46: F8          MOV R0,A                      
    5B47: 20 E3 03    JB ACC.3,0x5B4D                  ; -> loc_5B4D
    5B4A: 02 5C B0    LJMP 0x5CB0                      ; -> 0x5CB0

loc_5B4D:
    5B4D: 90 7F F4    MOV DPTR,#0x7FF4              
    5B50: 74 01       MOV A,#0x01                   
    5B52: F0          MOVX @DPTR,A                  
    5B53: 90 7F BD    MOV DPTR,#0x7FBD              
    5B56: E4          CLR A                         
    5B57: F0          MOVX @DPTR,A                  
    5B58: 90 7F F3    MOV DPTR,#0x7FF3              
    5B5B: E0          MOVX A,@DPTR                  
    5B5C: F8          MOV R0,A                      
    5B5D: B4 01 00    CJNE A,#0x01,0x5B60              ; -> 0x5B60
    5B60: E4          CLR A                         
    5B61: 33          RLC A                         
    5B62: F8          MOV R0,A                      
    5B63: 90 7F F2    MOV DPTR,#0x7FF2              
    5B66: E0          MOVX A,@DPTR                  
    5B67: F9          MOV R1,A                      
    5B68: E8          MOV A,R0                      
    5B69: 59          ANL A,R1                      
    5B6A: 60 1E       JZ 0x5B8A                        ; -> loc_5B8A
    5B6C: 90 7F F2    MOV DPTR,#0x7FF2              
    5B6F: E4          CLR A                         
    5B70: F0          MOVX @DPTR,A                  
    5B71: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5B74: E0          MOVX A,@DPTR                  
    5B75: F8          MOV R0,A                      
    5B76: B8 01 09    CJNE R0,#0x01,0x5B82             ; -> loc_5B82
    5B79: 90 7F F3    MOV DPTR,#0x7FF3              
    5B7C: 74 01       MOV A,#0x01                   
    5B7E: F0          MOVX @DPTR,A                  
    5B7F: 02 5C B0    LJMP 0x5CB0                      ; -> 0x5CB0

loc_5B82:
    5B82: 90 7F F3    MOV DPTR,#0x7FF3              
    5B85: E4          CLR A                         
    5B86: F0          MOVX @DPTR,A                  
    5B87: 02 5C B0    LJMP 0x5CB0                      ; -> 0x5CB0

loc_5B8A:
    5B8A: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5B8D: E0          MOVX A,@DPTR                  
    5B8E: F8          MOV R0,A                      
    5B8F: B8 02 03    CJNE R0,#0x02,0x5B95             ; -> loc_5B95
    5B92: 02 5C 80    LJMP 0x5C80                      ; -> loc_5C80

loc_5B95:
    5B95: 90 7F BF    MOV DPTR,#0x7FBF              
    5B98: E0          MOVX A,@DPTR                  
    5B99: F8          MOV R0,A                      
    5B9A: 60 1C       JZ 0x5BB8                        ; -> 0x5BB8
    5B9C: 90 7F BF    MOV DPTR,#0x7FBF              
    5B9F: E4          CLR A                         
    5BA0: F0          MOVX @DPTR,A                  
    5BA1: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    5BA4: E0          MOVX A,@DPTR                  
    5BA5: F8          MOV R0,A                      
    5BA6: 20 E6 0F    JB ACC.6,0x5BB8                  ; -> 0x5BB8
    5BA9: 90 CA 83    MOV DPTR,#0xCA83                 ; register block CA00
    5BAC: E0          MOVX A,@DPTR                  
    5BAD: F8          MOV R0,A                      
    5BAE: 30 E2 07    JNB ACC.2,0x5BB8                 ; -> 0x5BB8
    5BB1: C0 02       PUSH 0x02                     
    5BB3: 12 1F 5C    LCALL 0x1F5C                     ; -> sub_1F5C
    5BB6: D0 02       POP 0x02                      
    5BB8: 90 7F 78    MOV DPTR,#0x7F78              
    5BBB: E0          MOVX A,@DPTR                  
    5BBC: F8          MOV R0,A                      
    5BBD: 70 03       JNZ 0x5BC2                       ; -> loc_5BC2
    5BBF: 02 5C 72    LJMP 0x5C72                      ; -> loc_5C72

loc_5BC2:
    5BC2: 90 7F 9F    MOV DPTR,#0x7F9F              
    5BC5: E0          MOVX A,@DPTR                  
    5BC6: F8          MOV R0,A                      
    5BC7: 60 03       JZ 0x5BCC                        ; -> loc_5BCC
    5BC9: 02 5C B0    LJMP 0x5CB0                      ; -> 0x5CB0

loc_5BCC:
    5BCC: 90 7F 79    MOV DPTR,#0x7F79              
    5BCF: E0          MOVX A,@DPTR                  
    5BD0: F8          MOV R0,A                      
    5BD1: 60 62       JZ 0x5C35                        ; -> loc_5C35
    5BD3: E5 08       MOV A,0x08                    
    5BD5: 45 09       ORL A,0x09                    
    5BD7: 60 07       JZ 0x5BE0                        ; -> 0x5BE0
    5BD9: C0 02       PUSH 0x02                     
    5BDB: 12 24 02    LCALL 0x2402                     ; -> sub_2402
    5BDE: D0 02       POP 0x02                      
    5BE0: 90 7F EE    MOV DPTR,#0x7FEE              
    5BE3: E0          MOVX A,@DPTR                  
    5BE4: F8          MOV R0,A                      
    5BE5: 60 11       JZ 0x5BF8                        ; -> 0x5BF8
    5BE7: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5BEA: E0          MOVX A,@DPTR                  
    5BEB: F8          MOV R0,A                      
    5BEC: B8 01 02    CJNE R0,#0x01,0x5BF1             ; -> loc_5BF1
    5BEF: 80 07       SJMP 0x5BF8                      ; -> 0x5BF8

loc_5BF1:
    5BF1: C0 02       PUSH 0x02                     
    5BF3: 12 1F 9B    LCALL 0x1F9B                     ; -> sub_1F9B
    5BF6: D0 02       POP 0x02                      
    5BF8: 90 7F EE    MOV DPTR,#0x7FEE              
    5BFB: E4          CLR A                         
    5BFC: F0          MOVX @DPTR,A                  
    5BFD: 90 7F 79    MOV DPTR,#0x7F79              
    5C00: F0          MOVX @DPTR,A                  
    5C01: 75 50 20    MOV 0x50,#0x20                
    5C04: 75 51 32    MOV 0x51,#0x32                
    5C07: 75 82 00    MOV DPL(0x82),#0x00           
    5C0A: C0 02       PUSH 0x02                     
    5C0C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5C0F: D0 02       POP 0x02                      
    5C11: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5C14: E0          MOVX A,@DPTR                  
    5C15: F8          MOV R0,A                      
    5C16: B8 01 02    CJNE R0,#0x01,0x5C1B             ; -> loc_5C1B
    5C19: 80 0D       SJMP 0x5C28                      ; -> 0x5C28

loc_5C1B:
    5C1B: 90 7F 7A    MOV DPTR,#0x7F7A              
    5C1E: E0          MOVX A,@DPTR                  
    5C1F: F8          MOV R0,A                      
    5C20: 60 06       JZ 0x5C28                        ; -> 0x5C28
    5C22: 90 CA D0    MOV DPTR,#0xCAD0              
    5C25: 74 02       MOV A,#0x02                   
    5C27: F0          MOVX @DPTR,A                  
    5C28: 90 7F 7A    MOV DPTR,#0x7F7A              
    5C2B: E4          CLR A                         
    5C2C: F0          MOVX @DPTR,A                  
    5C2D: 90 CA 09    MOV DPTR,#0xCA09                 ; register block CA00
    5C30: 74 01       MOV A,#0x01                   
    5C32: F0          MOVX @DPTR,A                  
    5C33: 80 2C       SJMP 0x5C61                      ; -> 0x5C61

loc_5C35:
    5C35: E5 08       MOV A,0x08                    
    5C37: 45 09       ORL A,0x09                    
    5C39: 60 07       JZ 0x5C42                        ; -> 0x5C42
    5C3B: C0 02       PUSH 0x02                     
    5C3D: 12 24 02    LCALL 0x2402                     ; -> sub_2402
    5C40: D0 02       POP 0x02                      
    5C42: 90 7F EC    MOV DPTR,#0x7FEC              
    5C45: E0          MOVX A,@DPTR                  
    5C46: F8          MOV R0,A                      
    5C47: 30 E0 08    JNB ACC.0,0x5C52                 ; -> loc_5C52
    5C4A: 90 7F ED    MOV DPTR,#0x7FED              
    5C4D: 74 02       MOV A,#0x02                   
    5C4F: F0          MOVX @DPTR,A                  
    5C50: 80 06       SJMP 0x5C58                      ; -> 0x5C58

loc_5C52:
    5C52: 90 7F ED    MOV DPTR,#0x7FED              
    5C55: 74 01       MOV A,#0x01                   
    5C57: F0          MOVX @DPTR,A                  
    5C58: 90 7F ED    MOV DPTR,#0x7FED              
    5C5B: E0          MOVX A,@DPTR                  
    5C5C: F8          MOV R0,A                      
    5C5D: 90 CA 09    MOV DPTR,#0xCA09                 ; register block CA00
    5C60: F0          MOVX @DPTR,A                  
    5C61: 90 7F 9D    MOV DPTR,#0x7F9D              
    5C64: E4          CLR A                         
    5C65: F0          MOVX @DPTR,A                  
    5C66: 90 7F 78    MOV DPTR,#0x7F78              
    5C69: F0          MOVX @DPTR,A                  
    5C6A: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    5C6D: 74 0F       MOV A,#0x0F                   
    5C6F: F0          MOVX @DPTR,A                  
    5C70: 80 3E       SJMP 0x5CB0                      ; -> 0x5CB0

loc_5C72:
    5C72: 90 CA 0D    MOV DPTR,#0xCA0D                 ; register block CA00
    5C75: 74 01       MOV A,#0x01                   
    5C77: F0          MOVX @DPTR,A                  
    5C78: 90 7F 76    MOV DPTR,#0x7F76              
    5C7B: 74 01       MOV A,#0x01                   
    5C7D: F0          MOVX @DPTR,A                  
    5C7E: 80 30       SJMP 0x5CB0                      ; -> 0x5CB0

loc_5C80:
    5C80: 90 CA 0D    MOV DPTR,#0xCA0D                 ; register block CA00
    5C83: 74 01       MOV A,#0x01                   
    5C85: F0          MOVX @DPTR,A                  
    5C86: 90 7F 9D    MOV DPTR,#0x7F9D              
    5C89: E4          CLR A                         
    5C8A: F0          MOVX @DPTR,A                  
    5C8B: 90 7F BF    MOV DPTR,#0x7FBF              
    5C8E: F0          MOVX @DPTR,A                  
    5C8F: 90 7F 78    MOV DPTR,#0x7F78              
    5C92: E0          MOVX A,@DPTR                  
    5C93: F8          MOV R0,A                      
    5C94: 90 7F 76    MOV DPTR,#0x7F76              
    5C97: B4 01 00    CJNE A,#0x01,0x5C9A              ; -> 0x5C9A
    5C9A: E4          CLR A                         
    5C9B: 33          RLC A                         
    5C9C: F0          MOVX @DPTR,A                  
    5C9D: 90 7F BD    MOV DPTR,#0x7FBD              
    5CA0: 74 01       MOV A,#0x01                   
    5CA2: F0          MOVX @DPTR,A                  
    5CA3: 90 7F 78    MOV DPTR,#0x7F78              
    5CA6: E0          MOVX A,@DPTR                  
    5CA7: F8          MOV R0,A                      
    5CA8: 60 06       JZ 0x5CB0                        ; -> 0x5CB0
    5CAA: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    5CAD: 74 0F       MOV A,#0x0F                   
    5CAF: F0          MOVX @DPTR,A                  
    5CB0: 90 7F FD    MOV DPTR,#0x7FFD              
    5CB3: E0          MOVX A,@DPTR                  
    5CB4: 90 7F FD    MOV DPTR,#0x7FFD              
    5CB7: F0          MOVX @DPTR,A                  
    5CB8: 90 7F 9F    MOV DPTR,#0x7F9F              
    5CBB: E0          MOVX A,@DPTR                  
    5CBC: F8          MOV R0,A                      
    5CBD: B4 01 00    CJNE A,#0x01,0x5CC0              ; -> 0x5CC0
    5CC0: E4          CLR A                         
    5CC1: 33          RLC A                         
    5CC2: F8          MOV R0,A                      
    5CC3: 90 7F FD    MOV DPTR,#0x7FFD              
    5CC6: E0          MOVX A,@DPTR                  
    5CC7: 58          ANL A,R0                      
    5CC8: 54 01       ANL A,#0x01                   
    5CCA: F8          MOV R0,A                      
    5CCB: 90 7F FB    MOV DPTR,#0x7FFB              
    5CCE: E0          MOVX A,@DPTR                  
    5CCF: F9          MOV R1,A                      
    5CD0: B4 01 00    CJNE A,#0x01,0x5CD3              ; -> 0x5CD3
    5CD3: E4          CLR A                         
    5CD4: 33          RLC A                         
    5CD5: F9          MOV R1,A                      
    5CD6: 58          ANL A,R0                      
    5CD7: 70 03       JNZ 0x5CDC                       ; -> loc_5CDC
    5CD9: 02 5F 1D    LJMP 0x5F1D                      ; -> 0x5F1D

loc_5CDC:
    5CDC: 78 00       MOV R0,#0x00                  
    5CDE: 90 CB 4A    MOV DPTR,#0xCB4A              
    5CE1: E0          MOVX A,@DPTR                  
    5CE2: F9          MOV R1,A                      
    5CE3: 20 E4 0F    JB ACC.4,0x5CF5                  ; -> 0x5CF5
    5CE6: 90 7F F2    MOV DPTR,#0x7FF2              
    5CE9: E0          MOVX A,@DPTR                  
    5CEA: F9          MOV R1,A                      
    5CEB: 60 08       JZ 0x5CF5                        ; -> 0x5CF5
    5CED: 90 CA 9F    MOV DPTR,#0xCA9F              
    5CF0: E0          MOVX A,@DPTR                  
    5CF1: F9          MOV R1,A                      
    5CF2: 30 E0 12    JNB ACC.0,0x5D07                 ; -> 0x5D07
    5CF5: 90 C8 50    MOV DPTR,#0xC850                 ; control + status register block
    5CF8: E0          MOVX A,@DPTR                  
    5CF9: F9          MOV R1,A                      
    5CFA: 20 E1 1B    JB ACC.1,0x5D18                  ; -> loc_5D18
    5CFD: 90 CC 09    MOV DPTR,#0xCC09                 ; register block CC00
    5D00: E0          MOVX A,@DPTR                  
    5D01: F9          MOV R1,A                      
    5D02: B9 04 00    CJNE R1,#0x04,0x5D05             ; -> 0x5D05
    5D05: 50 11       JNC 0x5D18                       ; -> loc_5D18
    5D07: 78 01       MOV R0,#0x01                  
    5D09: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    5D0C: 74 01       MOV A,#0x01                   
    5D0E: F0          MOVX @DPTR,A                  
    5D0F: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    5D12: 74 0F       MOV A,#0x0F                   
    5D14: F0          MOVX @DPTR,A                  
    5D15: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5D18:
    5D18: 90 7F FE    MOV DPTR,#0x7FFE              
    5D1B: E0          MOVX A,@DPTR                  
    5D1C: F9          MOV R1,A                      
    5D1D: 20 E1 03    JB ACC.1,0x5D23                  ; -> loc_5D23
    5D20: 02 5E A5    LJMP 0x5EA5                      ; -> loc_5EA5

loc_5D23:
    5D23: 90 7F A0    MOV DPTR,#0x7FA0              
    5D26: E0          MOVX A,@DPTR                  
    5D27: F9          MOV R1,A                      
    5D28: 60 03       JZ 0x5D2D                        ; -> loc_5D2D
    5D2A: 02 5E A5    LJMP 0x5EA5                      ; -> loc_5EA5

loc_5D2D:
    5D2D: 78 01       MOV R0,#0x01                  
    5D2F: 90 7F 76    MOV DPTR,#0x7F76              
    5D32: E0          MOVX A,@DPTR                  
    5D33: F9          MOV R1,A                      
    5D34: 70 03       JNZ 0x5D39                       ; -> loc_5D39
    5D36: 02 5E 08    LJMP 0x5E08                      ; -> loc_5E08

loc_5D39:
    5D39: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5D3C: E0          MOVX A,@DPTR                  
    5D3D: F9          MOV R1,A                      
    5D3E: B9 02 03    CJNE R1,#0x02,0x5D44             ; -> loc_5D44
    5D41: 02 5D FD    LJMP 0x5DFD                      ; -> loc_5DFD

loc_5D44:
    5D44: 90 7F 79    MOV DPTR,#0x7F79              
    5D47: E0          MOVX A,@DPTR                  
    5D48: F9          MOV R1,A                      
    5D49: 60 6E       JZ 0x5DB9                        ; -> loc_5DB9
    5D4B: E5 08       MOV A,0x08                    
    5D4D: 45 09       ORL A,0x09                    
    5D4F: 60 0B       JZ 0x5D5C                        ; -> 0x5D5C
    5D51: C0 02       PUSH 0x02                     
    5D53: C0 00       PUSH 0x00                     
    5D55: 12 24 02    LCALL 0x2402                     ; -> sub_2402
    5D58: D0 00       POP 0x00                      
    5D5A: D0 02       POP 0x02                      
    5D5C: 90 7F EE    MOV DPTR,#0x7FEE              
    5D5F: E0          MOVX A,@DPTR                  
    5D60: F9          MOV R1,A                      
    5D61: 60 15       JZ 0x5D78                        ; -> 0x5D78
    5D63: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5D66: E0          MOVX A,@DPTR                  
    5D67: F9          MOV R1,A                      
    5D68: B9 01 02    CJNE R1,#0x01,0x5D6D             ; -> loc_5D6D
    5D6B: 80 0B       SJMP 0x5D78                      ; -> 0x5D78

loc_5D6D:
    5D6D: C0 02       PUSH 0x02                     
    5D6F: C0 00       PUSH 0x00                     
    5D71: 12 1F 9B    LCALL 0x1F9B                     ; -> sub_1F9B
    5D74: D0 00       POP 0x00                      
    5D76: D0 02       POP 0x02                      
    5D78: 90 7F EE    MOV DPTR,#0x7FEE              
    5D7B: E4          CLR A                         
    5D7C: F0          MOVX @DPTR,A                  
    5D7D: 90 7F 79    MOV DPTR,#0x7F79              
    5D80: F0          MOVX @DPTR,A                  
    5D81: 75 50 20    MOV 0x50,#0x20                
    5D84: 75 51 32    MOV 0x51,#0x32                
    5D87: 75 82 00    MOV DPL(0x82),#0x00           
    5D8A: C0 02       PUSH 0x02                     
    5D8C: C0 00       PUSH 0x00                     
    5D8E: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5D91: D0 00       POP 0x00                      
    5D93: D0 02       POP 0x02                      
    5D95: 90 CA 81    MOV DPTR,#0xCA81                 ; register block CA00
    5D98: E0          MOVX A,@DPTR                  
    5D99: F9          MOV R1,A                      
    5D9A: B9 01 02    CJNE R1,#0x01,0x5D9F             ; -> loc_5D9F
    5D9D: 80 0D       SJMP 0x5DAC                      ; -> 0x5DAC

loc_5D9F:
    5D9F: 90 7F 7A    MOV DPTR,#0x7F7A              
    5DA2: E0          MOVX A,@DPTR                  
    5DA3: F9          MOV R1,A                      
    5DA4: 60 06       JZ 0x5DAC                        ; -> 0x5DAC
    5DA6: 90 CA D0    MOV DPTR,#0xCAD0              
    5DA9: 74 02       MOV A,#0x02                   
    5DAB: F0          MOVX @DPTR,A                  
    5DAC: 90 7F 7A    MOV DPTR,#0x7F7A              
    5DAF: E4          CLR A                         
    5DB0: F0          MOVX @DPTR,A                  
    5DB1: 90 CA 09    MOV DPTR,#0xCA09                 ; register block CA00
    5DB4: 74 01       MOV A,#0x01                   
    5DB6: F0          MOVX @DPTR,A                  
    5DB7: 80 30       SJMP 0x5DE9                      ; -> 0x5DE9

loc_5DB9:
    5DB9: E5 08       MOV A,0x08                    
    5DBB: 45 09       ORL A,0x09                    
    5DBD: 60 0B       JZ 0x5DCA                        ; -> 0x5DCA
    5DBF: C0 02       PUSH 0x02                     
    5DC1: C0 00       PUSH 0x00                     
    5DC3: 12 24 02    LCALL 0x2402                     ; -> sub_2402
    5DC6: D0 00       POP 0x00                      
    5DC8: D0 02       POP 0x02                      
    5DCA: 90 7F EC    MOV DPTR,#0x7FEC              
    5DCD: E0          MOVX A,@DPTR                  
    5DCE: F9          MOV R1,A                      
    5DCF: 30 E0 08    JNB ACC.0,0x5DDA                 ; -> loc_5DDA
    5DD2: 90 7F ED    MOV DPTR,#0x7FED              
    5DD5: 74 02       MOV A,#0x02                   
    5DD7: F0          MOVX @DPTR,A                  
    5DD8: 80 06       SJMP 0x5DE0                      ; -> 0x5DE0

loc_5DDA:
    5DDA: 90 7F ED    MOV DPTR,#0x7FED              
    5DDD: 74 01       MOV A,#0x01                   
    5DDF: F0          MOVX @DPTR,A                  
    5DE0: 90 7F ED    MOV DPTR,#0x7FED              
    5DE3: E0          MOVX A,@DPTR                  
    5DE4: F9          MOV R1,A                      
    5DE5: 90 CA 09    MOV DPTR,#0xCA09                 ; register block CA00
    5DE8: F0          MOVX @DPTR,A                  
    5DE9: 90 7F 9D    MOV DPTR,#0x7F9D              
    5DEC: E4          CLR A                         
    5DED: F0          MOVX @DPTR,A                  
    5DEE: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    5DF1: 74 0F       MOV A,#0x0F                   
    5DF3: F0          MOVX @DPTR,A                  
    5DF4: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    5DF7: 74 01       MOV A,#0x01                   
    5DF9: F0          MOVX @DPTR,A                  
    5DFA: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5DFD:
    5DFD: 90 7F 78    MOV DPTR,#0x7F78              
    5E00: 74 01       MOV A,#0x01                   
    5E02: F0          MOVX @DPTR,A                  
    5E03: 78 00       MOV R0,#0x00                  
    5E05: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5E08:
    5E08: 90 7F EC    MOV DPTR,#0x7FEC              
    5E0B: E0          MOVX A,@DPTR                  
    5E0C: F9          MOV R1,A                      
    5E0D: B9 01 02    CJNE R1,#0x01,0x5E12             ; -> loc_5E12
    5E10: 80 42       SJMP 0x5E54                      ; -> loc_5E54

loc_5E12:
    5E12: 90 7F 9D    MOV DPTR,#0x7F9D              
    5E15: E0          MOVX A,@DPTR                  
    5E16: F9          MOV R1,A                      
    5E17: B9 03 00    CJNE R1,#0x03,0x5E1A             ; -> 0x5E1A
    5E1A: 40 29       JC 0x5E45                        ; -> loc_5E45
    5E1C: 78 00       MOV R0,#0x00                  
    5E1E: 90 7F 78    MOV DPTR,#0x7F78              
    5E21: E4          CLR A                         
    5E22: F0          MOVX @DPTR,A                  
    5E23: 90 7F 79    MOV DPTR,#0x7F79              
    5E26: F0          MOVX @DPTR,A                  
    5E27: 90 7F FB    MOV DPTR,#0x7FFB              
    5E2A: F0          MOVX @DPTR,A                  
    5E2B: 90 7F 7A    MOV DPTR,#0x7F7A              
    5E2E: F0          MOVX @DPTR,A                  
    5E2F: 90 7F 76    MOV DPTR,#0x7F76              
    5E32: E4          CLR A                         
    5E33: F0          MOVX @DPTR,A                  
    5E34: 90 7F 9D    MOV DPTR,#0x7F9D              
    5E37: F0          MOVX @DPTR,A                  
    5E38: 90 7F F2    MOV DPTR,#0x7FF2              
    5E3B: F0          MOVX @DPTR,A                  
    5E3C: 90 CA D1    MOV DPTR,#0xCAD1              
    5E3F: 74 01       MOV A,#0x01                   
    5E41: F0          MOVX @DPTR,A                  
    5E42: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5E45:
    5E45: 90 7F 78    MOV DPTR,#0x7F78              
    5E48: 74 01       MOV A,#0x01                   
    5E4A: F0          MOVX @DPTR,A                  
    5E4B: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    5E4E: 74 01       MOV A,#0x01                   
    5E50: F0          MOVX @DPTR,A                  
    5E51: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5E54:
    5E54: 90 7F 77    MOV DPTR,#0x7F77              
    5E57: E0          MOVX A,@DPTR                  
    5E58: F9          MOV R1,A                      
    5E59: 60 1F       JZ 0x5E7A                        ; -> loc_5E7A
    5E5B: 90 7F EC    MOV DPTR,#0x7FEC              
    5E5E: E0          MOVX A,@DPTR                  
    5E5F: F9          MOV R1,A                      
    5E60: B9 01 17    CJNE R1,#0x01,0x5E7A             ; -> loc_5E7A
    5E63: 90 7F 79    MOV DPTR,#0x7F79              
    5E66: E0          MOVX A,@DPTR                  
    5E67: F9          MOV R1,A                      
    5E68: 60 03       JZ 0x5E6D                        ; -> loc_5E6D
    5E6A: 02 5E F2    LJMP 0x5EF2                      ; -> 0x5EF2

loc_5E6D:
    5E6D: 90 CA 08    MOV DPTR,#0xCA08                 ; register block CA00
    5E70: 74 01       MOV A,#0x01                   
    5E72: F0          MOVX @DPTR,A                  
    5E73: 90 7F 9D    MOV DPTR,#0x7F9D              
    5E76: E4          CLR A                         
    5E77: F0          MOVX @DPTR,A                  
    5E78: 80 78       SJMP 0x5EF2                      ; -> 0x5EF2

loc_5E7A:
    5E7A: 90 7F 79    MOV DPTR,#0x7F79              
    5E7D: E0          MOVX A,@DPTR                  
    5E7E: F9          MOV R1,A                      
    5E7F: 60 0A       JZ 0x5E8B                        ; -> 0x5E8B
    5E81: 90 7F 9D    MOV DPTR,#0x7F9D              
    5E84: E0          MOVX A,@DPTR                  
    5E85: F9          MOV R1,A                      
    5E86: B9 03 00    CJNE R1,#0x03,0x5E89             ; -> 0x5E89
    5E89: 40 67       JC 0x5EF2                        ; -> 0x5EF2
    5E8B: 78 00       MOV R0,#0x00                  
    5E8D: 90 7F 78    MOV DPTR,#0x7F78              
    5E90: E4          CLR A                         
    5E91: F0          MOVX @DPTR,A                  
    5E92: 90 7F 79    MOV DPTR,#0x7F79              
    5E95: F0          MOVX @DPTR,A                  
    5E96: 90 7F FB    MOV DPTR,#0x7FFB              
    5E99: F0          MOVX @DPTR,A                  
    5E9A: 90 7F 76    MOV DPTR,#0x7F76              
    5E9D: F0          MOVX @DPTR,A                  
    5E9E: 90 7F 9D    MOV DPTR,#0x7F9D              
    5EA1: E4          CLR A                         
    5EA2: F0          MOVX @DPTR,A                  
    5EA3: 80 4D       SJMP 0x5EF2                      ; -> 0x5EF2

loc_5EA5:
    5EA5: 90 CB 4A    MOV DPTR,#0xCB4A              
    5EA8: E0          MOVX A,@DPTR                  
    5EA9: F9          MOV R1,A                      
    5EAA: 20 E3 40    JB ACC.3,0x5EED                  ; -> loc_5EED
    5EAD: 90 7F 9D    MOV DPTR,#0x7F9D              
    5EB0: E0          MOVX A,@DPTR                  
    5EB1: F9          MOV R1,A                      
    5EB2: 60 39       JZ 0x5EED                        ; -> loc_5EED
    5EB4: 90 7F 9D    MOV DPTR,#0x7F9D              
    5EB7: E0          MOVX A,@DPTR                  
    5EB8: F9          MOV R1,A                      
    5EB9: B9 03 00    CJNE R1,#0x03,0x5EBC             ; -> 0x5EBC
    5EBC: 50 2F       JNC 0x5EED                       ; -> loc_5EED
    5EBE: 90 7F F4    MOV DPTR,#0x7FF4              
    5EC1: E0          MOVX A,@DPTR                  
    5EC2: F9          MOV R1,A                      
    5EC3: 70 28       JNZ 0x5EED                       ; -> loc_5EED
    5EC5: 90 CA 9F    MOV DPTR,#0xCA9F              
    5EC8: E0          MOVX A,@DPTR                  
    5EC9: F9          MOV R1,A                      
    5ECA: 20 E0 20    JB ACC.0,0x5EED                  ; -> loc_5EED
    5ECD: 75 50 20    MOV 0x50,#0x20                
    5ED0: 75 51 1D    MOV 0x51,#0x1D                
    5ED3: 75 82 00    MOV DPL(0x82),#0x00           
    5ED6: C0 02       PUSH 0x02                     
    5ED8: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5EDB: D0 02       POP 0x02                      
    5EDD: 90 CA 0C    MOV DPTR,#0xCA0C                 ; register block CA00
    5EE0: 74 01       MOV A,#0x01                   
    5EE2: F0          MOVX @DPTR,A                  
    5EE3: 90 CA 61    MOV DPTR,#0xCA61                 ; register block CA00
    5EE6: 74 0F       MOV A,#0x0F                   
    5EE8: F0          MOVX @DPTR,A                  
    5EE9: 78 01       MOV R0,#0x01                  
    5EEB: 80 05       SJMP 0x5EF2                      ; -> 0x5EF2

loc_5EED:
    5EED: 90 7F 9D    MOV DPTR,#0x7F9D              
    5EF0: E4          CLR A                         
    5EF1: F0          MOVX @DPTR,A                  
    5EF2: 90 7F 77    MOV DPTR,#0x7F77              
    5EF5: E4          CLR A                         
    5EF6: F0          MOVX @DPTR,A                  
    5EF7: E8          MOV A,R0                      
    5EF8: B4 01 00    CJNE A,#0x01,0x5EFB              ; -> 0x5EFB
    5EFB: E4          CLR A                         
    5EFC: 33          RLC A                         
    5EFD: F8          MOV R0,A                      
    5EFE: 90 7F B6    MOV DPTR,#0x7FB6              
    5F01: E0          MOVX A,@DPTR                  
    5F02: F9          MOV R1,A                      
    5F03: B4 01 00    CJNE A,#0x01,0x5F06              ; -> 0x5F06
    5F06: E4          CLR A                         
    5F07: 33          RLC A                         
    5F08: F9          MOV R1,A                      
    5F09: 58          ANL A,R0                      
    5F0A: 60 0C       JZ 0x5F18                        ; -> 0x5F18
    5F0C: 90 7F A0    MOV DPTR,#0x7FA0              
    5F0F: E4          CLR A                         
    5F10: F0          MOVX @DPTR,A                  
    5F11: C0 02       PUSH 0x02                     
    5F13: 12 42 B8    LCALL 0x42B8                     ; -> sub_42B8
    5F16: D0 02       POP 0x02                      
    5F18: 90 7F 76    MOV DPTR,#0x7F76              
    5F1B: E4          CLR A                         
    5F1C: F0          MOVX @DPTR,A                  
    5F1D: 75 48 35    MOV 0x48,#0x35                
    5F20: 75 49 CC    MOV 0x49,#0xCC                
    5F23: 75 4A 00    MOV 0x4A,#0x00                
    5F26: E5 47       MOV A,0x47                    
    5F28: 20 E2 03    JB ACC.2,0x5F2E                  ; -> loc_5F2E
    5F2B: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_5F2E:
    5F2E: 75 50 20    MOV 0x50,#0x20                
    5F31: 75 51 06    MOV 0x51,#0x06                
    5F34: 75 82 00    MOV DPL(0x82),#0x00           
    5F37: C0 02       PUSH 0x02                     
    5F39: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5F3C: D0 02       POP 0x02                      
    5F3E: 85 48 82    MOV DPL(0x82),0x48            
    5F41: 85 49 83    MOV DPH(0x83),0x49            
    5F44: 85 4A F0    MOV B(0xF0),0x4A              
    5F47: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    5F4A: F8          MOV R0,A                      
    5F4B: 74 07       MOV A,#0x07                   
    5F4D: 58          ANL A,R0                      
    5F4E: F5 4B       MOV 0x4B,A                    
    5F50: 74 18       MOV A,#0x18                   
    5F52: 58          ANL A,R0                      
    5F53: F5 4C       MOV 0x4C,A                    
    5F55: 74 01       MOV A,#0x01                   
    5F57: 25 48       ADD A,0x48                    
    5F59: F8          MOV R0,A                      
    5F5A: E4          CLR A                         
    5F5B: 35 49       ADDC A,0x49                   
    5F5D: F9          MOV R1,A                      
    5F5E: AB 4A       MOV R3,0x4A                   
    5F60: 88 82       MOV 0x82,R0                   
    5F62: 89 83       MOV 0x83,R1                   
    5F64: 8B F0       MOV 0xF0,R3                   
    5F66: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    5F69: FF          MOV R7,A                      
    5F6A: 74 02       MOV A,#0x02                   
    5F6C: 25 48       ADD A,0x48                    
    5F6E: FB          MOV R3,A                      
    5F6F: E4          CLR A                         
    5F70: 35 49       ADDC A,0x49                   
    5F72: FC          MOV R4,A                      
    5F73: AD 4A       MOV R5,0x4A                   
    5F75: 8B 82       MOV 0x82,R3                   
    5F77: 8C 83       MOV 0x83,R4                   
    5F79: 8D F0       MOV 0xF0,R5                   
    5F7B: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    5F7E: FE          MOV R6,A                      
    5F7F: 74 0F       MOV A,#0x0F                   
    5F81: B5 07 00    CJNE A,0x07,0x5F84               ; -> 0x5F84
    5F84: 50 03       JNC 0x5F89                       ; -> loc_5F89
    5F86: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_5F89:
    5F89: EF          MOV A,R7                      
    5F8A: 2F          ADD A,R7                      
    5F8B: 2F          ADD A,R7                      
    5F8C: 90 5F 90    MOV DPTR,#0x5F90              
    5F8F: 73          JMP @A+DPTR                   
    5F90: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_5F93:
    5F93: 02 5F D1    LJMP 0x5FD1                      ; -> 0x5FD1
    5F96: 02          DB 0x02                       ; data
    5F97: 60          DB 0x60                       ; data
    5F98: C7          DB 0xC7                       ; data
    5F99: 02          DB 0x02                       ; data
    5F9A: 60          DB 0x60                       ; data
    5F9B: 51          DB 0x51                       ; data
    5F9C: 02          DB 0x02                       ; data
    5F9D: 61          DB 0x61                       ; data
    5F9E: 34          DB 0x34                       ; data
    5F9F: 02          DB 0x02                       ; data
    5FA0: 63          DB 0x63                       ; data
    5FA1: CB          DB 0xCB                       ; data
    5FA2: 02          DB 0x02                       ; data
    5FA3: 61          DB 0x61                       ; data
    5FA4: 61          DB 0x61                       ; data
    5FA5: 02          DB 0x02                       ; data
    5FA6: 63          DB 0x63                       ; data
    5FA7: CB          DB 0xCB                       ; data
    5FA8: 02          DB 0x02                       ; data
    5FA9: 63          DB 0x63                       ; data
    5FAA: CB          DB 0xCB                       ; data
    5FAB: 02          DB 0x02                       ; data
    5FAC: 63          DB 0x63                       ; data
    5FAD: CB          DB 0xCB                       ; data
    5FAE: 02          DB 0x02                       ; data
    5FAF: 63          DB 0x63                       ; data
    5FB0: CB          DB 0xCB                       ; data
    5FB1: 02          DB 0x02                       ; data
    5FB2: 63          DB 0x63                       ; data
    5FB3: CB          DB 0xCB                       ; data
    5FB4: 02          DB 0x02                       ; data
    5FB5: 5F          DB 0x5F                       ; data
    5FB6: C0          DB 0xC0                       ; data
    5FB7: 02          DB 0x02                       ; data
    5FB8: 5F          DB 0x5F                       ; data
    5FB9: C8          DB 0xC8                       ; data
    5FBA: 02          DB 0x02                       ; data
    5FBB: 61          DB 0x61                       ; data
    5FBC: 6B          DB 0x6B                       ; data
    5FBD: 02          DB 0x02                       ; data
    5FBE: 63          DB 0x63                       ; data
    5FBF: 5C          DB 0x5C                       ; data
    5FC0: 90          DB 0x90                       ; data
    5FC1: 01          DB 0x01                       ; data
    5FC2: 20          DB 0x20                       ; data
    5FC3: EE          DB 0xEE                       ; data
    5FC4: F0          DB 0xF0                       ; data
    5FC5: 02          DB 0x02                       ; data
    5FC6: 63          DB 0x63                       ; data
    5FC7: CB          DB 0xCB                       ; data
    5FC8: 90          DB 0x90                       ; data
    5FC9: 7F          DB 0x7F                       ; data
    5FCA: BE          DB 0xBE                       ; data
    5FCB: 74          DB 0x74                       ; data
    5FCC: 01          DB 0x01                       ; data
    5FCD: F0          DB 0xF0                       ; data
    5FCE: 02          DB 0x02                       ; data
    5FCF: 63          DB 0x63                       ; data
    5FD0: CB          DB 0xCB                       ; data
    5FD1: 90 7F 7D    MOV DPTR,#0x7F7D              
    5FD4: E0          MOVX A,@DPTR                  
    5FD5: FF          MOV R7,A                      
    5FD6: B5 4C 02    CJNE A,0x4C,0x5FDB               ; -> loc_5FDB
    5FD9: 80 03       SJMP 0x5FDE                      ; -> loc_5FDE

loc_5FDB:
    5FDB: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_5FDE:
    5FDE: 90 7F 7E    MOV DPTR,#0x7F7E              
    5FE1: E0          MOVX A,@DPTR                  
    5FE2: FF          MOV R7,A                      
    5FE3: B5 4B 02    CJNE A,0x4B,0x5FE8               ; -> loc_5FE8
    5FE6: 80 03       SJMP 0x5FEB                      ; -> loc_5FEB

loc_5FE8:
    5FE8: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_5FEB:
    5FEB: 90 D8 68    MOV DPTR,#0xD868              
    5FEE: 74 04       MOV A,#0x04                   
    5FF0: F0          MOVX @DPTR,A                  
    5FF1: 75 50 01    MOV 0x50,#0x01                
    5FF4: 75 51 09    MOV 0x51,#0x09                
    5FF7: 75 82 00    MOV DPL(0x82),#0x00           
    5FFA: C0 02       PUSH 0x02                     
    5FFC: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    5FFF: D0 02       POP 0x02                      
    6001: 90 CC 9A    MOV DPTR,#0xCC9A              
    6004: E0          MOVX A,@DPTR                  
    6005: FF          MOV R7,A                      
    6006: 43 07 08    ORL 0x07,#0x08                
    6009: 90 CC 9A    MOV DPTR,#0xCC9A              
    600C: EF          MOV A,R7                      
    600D: F0          MOVX @DPTR,A                  
    600E: 90 7F A2    MOV DPTR,#0x7FA2              
    6011: E0          MOVX A,@DPTR                  
    6012: FF          MOV R7,A                      
    6013: BF 05 2C    CJNE R7,#0x05,0x6042             ; -> 0x6042
    6016: 90 7F A2    MOV DPTR,#0x7FA2              
    6019: 74 06       MOV A,#0x06                   
    601B: F0          MOVX @DPTR,A                  
    601C: 90 C8 04    MOV DPTR,#0xC804                 ; control + status register block
    601F: 74 84       MOV A,#0x84                   
    6021: F0          MOVX @DPTR,A                  
    6022: 90 7F 84    MOV DPTR,#0x7F84              
    6025: E0          MOVX A,@DPTR                  
    6026: FF          MOV R7,A                      
    6027: 70 0D       JNZ 0x6036                       ; -> 0x6036
    6029: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    602C: E0          MOVX A,@DPTR                  
    602D: FF          MOV R7,A                      
    602E: 43 07 20    ORL 0x07,#0x20                
    6031: 90 D2 00    MOV DPTR,#0xD200                 ; register block D200
    6034: EF          MOV A,R7                      
    6035: F0          MOVX @DPTR,A                  
    6036: C0 02       PUSH 0x02                     
    6038: 12 22 6E    LCALL 0x226E                     ; -> sub_226E
    603B: D0 02       POP 0x02                      
    603D: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    6040: E4          CLR A                         
    6041: F0          MOVX @DPTR,A                  
    6042: 90 7F AB    MOV DPTR,#0x7FAB              
    6045: E4          CLR A                         
    6046: F0          MOVX @DPTR,A                  
    6047: 90 7E AB    MOV DPTR,#0x7EAB              
    604A: F0          MOVX @DPTR,A                  
    604B: 74 04       MOV A,#0x04                   
    604D: F0          MOVX @DPTR,A                  
    604E: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_6051:
    6051: 75 50 01    MOV 0x50,#0x01                
    6054: 75 51 60    MOV 0x51,#0x60                
    6057: 75 82 00    MOV DPL(0x82),#0x00           
    605A: C0 02       PUSH 0x02                     
    605C: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    605F: D0 02       POP 0x02                      
    6061: 90 7F A2    MOV DPTR,#0x7FA2              
    6064: E0          MOVX A,@DPTR                  
    6065: FF          MOV R7,A                      
    6066: BF 03 02    CJNE R7,#0x03,0x606B             ; -> loc_606B
    6069: 80 08       SJMP 0x6073                      ; -> 0x6073

loc_606B:
    606B: 90 7F A2    MOV DPTR,#0x7FA2              
    606E: E0          MOVX A,@DPTR                  
    606F: FF          MOV R7,A                      
    6070: BF 04 1C    CJNE R7,#0x04,0x608F             ; -> loc_608F
    6073: 90 00 AB    MOV DPTR,#0x00AB              
    6076: E4          CLR A                         
    6077: 93          MOVC A,@A+DPTR                
    6078: FF          MOV R7,A                      
    6079: 30 E5 13    JNB ACC.5,0x608F                 ; -> loc_608F
    607C: 75 50 01    MOV 0x50,#0x01                
    607F: 75 51 5F    MOV 0x51,#0x5F                
    6082: 75 82 00    MOV DPL(0x82),#0x00           
    6085: C0 02       PUSH 0x02                     
    6087: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    608A: D0 02       POP 0x02                      
    608C: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_608F:
    608F: 90 D8 68    MOV DPTR,#0xD868              
    6092: 74 06       MOV A,#0x06                   
    6094: F0          MOVX @DPTR,A                  
    6095: C0 02       PUSH 0x02                     
    6097: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    609A: D0 02       POP 0x02                      
    609C: 90 7F A7    MOV DPTR,#0x7FA7              
    609F: E0          MOVX A,@DPTR                  
    60A0: FF          MOV R7,A                      
    60A1: BF 02 03    CJNE R7,#0x02,0x60A7             ; -> loc_60A7
    60A4: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_60A7:
    60A7: 90 7F A7    MOV DPTR,#0x7FA7              
    60AA: E0          MOVX A,@DPTR                  
    60AB: FF          MOV R7,A                      
    60AC: BF 05 03    CJNE R7,#0x05,0x60B2             ; -> loc_60B2
    60AF: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_60B2:
    60B2: 75 82 47    MOV DPL(0x82),#0x47           
    60B5: C0 02       PUSH 0x02                     
    60B7: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    60BA: D0 02       POP 0x02                      
    60BC: 90 7E AB    MOV DPTR,#0x7EAB              
    60BF: E4          CLR A                         
    60C0: F0          MOVX @DPTR,A                  
    60C1: 74 40       MOV A,#0x40                   
    60C3: F0          MOVX @DPTR,A                  
    60C4: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_60C7:
    60C7: 75 50 01    MOV 0x50,#0x01                
    60CA: 75 51 61    MOV 0x51,#0x61                
    60CD: 75 82 00    MOV DPL(0x82),#0x00           
    60D0: C0 02       PUSH 0x02                     
    60D2: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    60D5: D0 02       POP 0x02                      
    60D7: 90 7F 84    MOV DPTR,#0x7F84              
    60DA: E0          MOVX A,@DPTR                  
    60DB: FF          MOV R7,A                      
    60DC: 70 09       JNZ 0x60E7                       ; -> 0x60E7
    60DE: 90 D2 5C    MOV DPTR,#0xD25C                 ; register block D252
    60E1: E0          MOVX A,@DPTR                  
    60E2: FF          MOV R7,A                      
    60E3: 54 0F       ANL A,#0x0F                   
    60E5: 60 35       JZ 0x611C                        ; -> loc_611C
    60E7: 90 7F 7D    MOV DPTR,#0x7F7D              
    60EA: E0          MOVX A,@DPTR                  
    60EB: FF          MOV R7,A                      
    60EC: 60 1F       JZ 0x610D                        ; -> loc_610D
    60EE: 90 CA A3    MOV DPTR,#0xCAA3              
    60F1: E0          MOVX A,@DPTR                  
    60F2: FF          MOV R7,A                      
    60F3: 43 07 02    ORL 0x07,#0x02                
    60F6: 90 CA A3    MOV DPTR,#0xCAA3              
    60F9: EF          MOV A,R7                      
    60FA: F0          MOVX @DPTR,A                  
    60FB: 90 7F 89    MOV DPTR,#0x7F89              
    60FE: 74 40       MOV A,#0x40                   
    6100: F0          MOVX @DPTR,A                  
    6101: C0 02       PUSH 0x02                     
    6103: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    6106: 12 42 7B    LCALL 0x427B                     ; -> sub_427B
    6109: D0 02       POP 0x02                      
    610B: 80 1C       SJMP 0x6129                      ; -> 0x6129

loc_610D:
    610D: C0 02       PUSH 0x02                     
    610F: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    6112: 75 82 48    MOV DPL(0x82),#0x48           
    6115: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    6118: D0 02       POP 0x02                      
    611A: 80 0D       SJMP 0x6129                      ; -> 0x6129

loc_611C:
    611C: C0 02       PUSH 0x02                     
    611E: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    6121: 75 82 49    MOV DPL(0x82),#0x49           
    6124: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    6127: D0 02       POP 0x02                      
    6129: 90 7E AB    MOV DPTR,#0x7EAB              
    612C: E4          CLR A                         
    612D: F0          MOVX @DPTR,A                  
    612E: 74 10       MOV A,#0x10                   
    6130: F0          MOVX @DPTR,A                  
    6131: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_6134:
    6134: 90 C6 06    MOV DPTR,#0xC606              
    6137: E0          MOVX A,@DPTR                  
    6138: FF          MOV R7,A                      
    6139: 30 E4 04    JNB ACC.4,0x6140                 ; -> loc_6140
    613C: 7F 01       MOV R7,#0x01                  
    613E: 80 02       SJMP 0x6142                      ; -> 0x6142

loc_6140:
    6140: 7F 00       MOV R7,#0x00                  
    6142: 8B 82       MOV 0x82,R3                   
    6144: 8C 83       MOV 0x83,R4                   
    6146: 8D F0       MOV 0xF0,R5                   
    6148: 12 67 D0    LCALL 0x67D0                     ; -> sub_67D0
    614B: FB          MOV R3,A                      
    614C: 74 FE       MOV A,#0xFE                   
    614E: 5B          ANL A,R3                      
    614F: 90 7F 88    MOV DPTR,#0x7F88              
    6152: 4F          ORL A,R7                      
    6153: F0          MOVX @DPTR,A                  
    6154: 75 82 4A    MOV DPL(0x82),#0x4A           
    6157: C0 02       PUSH 0x02                     
    6159: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    615C: D0 02       POP 0x02                      
    615E: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_6161:
    6161: C0 02       PUSH 0x02                     
    6163: 12 22 6E    LCALL 0x226E                     ; -> sub_226E
    6166: D0 02       POP 0x02                      
    6168: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_616B:
    616B: 75 82 01    MOV DPL(0x82),#0x01           
    616E: C0 02       PUSH 0x02                     
    6170: C0 06       PUSH 0x06                     
    6172: 12 22 11    LCALL 0x2211                     ; -> sub_2211
    6175: D0 06       POP 0x06                      
    6177: D0 02       POP 0x02                      
    6179: 90 7F FB    MOV DPTR,#0x7FFB              
    617C: E4          CLR A                         
    617D: F0          MOVX @DPTR,A                  
    617E: EE          MOV A,R6                      
    617F: 60 03       JZ 0x6184                        ; -> loc_6184
    6181: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_6184:
    6184: 90 7F FF    MOV DPTR,#0x7FFF              
    6187: 74 01       MOV A,#0x01                   
    6189: F0          MOVX @DPTR,A                  
    618A: 90 7F ED    MOV DPTR,#0x7FED              
    618D: E4          CLR A                         
    618E: F0          MOVX @DPTR,A                  
    618F: 90 7F ED    MOV DPTR,#0x7FED              
    6192: E0          MOVX A,@DPTR                  
    6193: FB          MOV R3,A                      
    6194: BB 04 00    CJNE R3,#0x04,0x6197             ; -> 0x6197
    6197: 40 03       JC 0x619C                        ; -> loc_619C
    6199: 02 63 CB    LJMP 0x63CB                      ; -> 0x63CB

loc_619C:
    619C: 90 7F ED    MOV DPTR,#0x7FED              
    619F: E0          MOVX A,@DPTR                  
    61A0: 24 F5       ADD A,#0xF5                   
    61A2: F5 82       MOV DPL(0x82),A               
    61A4: E4          CLR A                         
    61A5: 34 7F       ADDC A,#0x7F                  
    61A7: F5 83       MOV DPH(0x83),A               
    61A9: E0          MOVX A,@DPTR                  
    61AA: FB          MOV R3,A                      
    61AB: 20 E7 03    JB ACC.7,0x61B1                  ; -> loc_61B1
    61AE: 02 63 4F    LJMP 0x634F                      ; -> 0x634F

loc_61B1:
    61B1: 90 7F 93    MOV DPTR,#0x7F93              
    61B4: E0          MOVX A,@DPTR                  
    61B5: 54 F7       ANL A,#0xF7                   
    61B7: F0          MOVX @DPTR,A                  
    61B8: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    61BB: E0          MOVX A,@DPTR                  
    61BC: FB          MOV R3,A                      
    61BD: 43 03 10    ORL 0x03,#0x10                
    61C0: 90 C8 63    MOV DPTR,#0xC863                 ; control + status register block
    61C3: EB          MOV A,R3                      
    61C4: F0          MOVX @DPTR,A                  
    61C5: 90 7F ED    MOV DPTR,#0x7FED              
    61C8: E0          MOVX A,@DPTR                  
    61C9: 24 F5       ADD A,#0xF5                   
    61CB: F5 82       MOV DPL(0x82),A               
    61CD: E4          CLR A                         
    61CE: 34 7F       ADDC A,#0x7F                  
    61D0: F5 83       MOV DPH(0x83),A               
    61D2: E0          MOVX A,@DPTR                  
    61D3: FB          MOV R3,A                      
    61D4: 53 03 07    ANL 0x03,#0x07                
    61D7: BB 00 02    CJNE R3,#0x00,0x61DC             ; -> loc_61DC
    61DA: 80 14       SJMP 0x61F0                      ; -> loc_61F0

loc_61DC:
    61DC: BB 02 02    CJNE R3,#0x02,0x61E1             ; -> loc_61E1
    61DF: 80 2E       SJMP 0x620F                      ; -> loc_620F

loc_61E1:
    61E1: BB 03 03    CJNE R3,#0x03,0x61E7             ; -> loc_61E7
    61E4: 02 62 87    LJMP 0x6287                      ; -> loc_6287

loc_61E7:
    61E7: BB 05 03    CJNE R3,#0x05,0x61ED             ; -> loc_61ED
    61EA: 02 62 CA    LJMP 0x62CA                      ; -> loc_62CA

loc_61ED:
    61ED: 02 63 2C    LJMP 0x632C                      ; -> 0x632C

loc_61F0:
    61F0: 90 7F F9    MOV DPTR,#0x7FF9              
    61F3: E0          MOVX A,@DPTR                  
    61F4: FB          MOV R3,A                      
    61F5: 70 08       JNZ 0x61FF                       ; -> 0x61FF
    61F7: 90 7F 93    MOV DPTR,#0x7F93              
    61FA: E0          MOVX A,@DPTR                  
    61FB: FB          MOV R3,A                      
    61FC: 44 08       ORL A,#0x08                   
    61FE: F0          MOVX @DPTR,A                  
    61FF: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    6202: E0          MOVX A,@DPTR                  
    6203: FB          MOV R3,A                      
    6204: 53 03 7F    ANL 0x03,#0x7F                
    6207: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    620A: EB          MOV A,R3                      
    620B: F0          MOVX @DPTR,A                  
    620C: 02 63 2C    LJMP 0x632C                      ; -> 0x632C

loc_620F:
    620F: 90 C8 4B    MOV DPTR,#0xC84B                 ; control + status register block
    6212: E0          MOVX A,@DPTR                  
    6213: FB          MOV R3,A                      
    6214: 30 E0 56    JNB ACC.0,0x626D                 ; -> loc_626D
    6217: 90 C8 7D    MOV DPTR,#0xC87D                 ; control + status register block
    621A: 74 20       MOV A,#0x20                   
    621C: F0          MOVX @DPTR,A                  
    621D: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    6220: 74 FF       MOV A,#0xFF                   
    6222: F0          MOVX @DPTR,A                  
    6223: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    6226: 74 01       MOV A,#0x01                   
    6228: F0          MOVX @DPTR,A                  
    6229: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    622C: E0          MOVX A,@DPTR                  
    622D: FB          MOV R3,A                      
    622E: 90 7F ED    MOV DPTR,#0x7FED              
    6231: E0          MOVX A,@DPTR                  
    6232: FC          MOV R4,A                      
    6233: 8C F0       MOV 0xF0,R4                   
    6235: 05 F0       INC B(0xF0)                   
    6237: 74 01       MOV A,#0x01                   
    6239: 80 02       SJMP 0x623D                      ; -> 0x623D

loc_623B:
    623B: 25 E0       ADD A,ACC(0xE0)               
    623D: D5 F0 FB    DJNZ B(0xF0),0x623B              ; -> loc_623B
    6240: 54 0F       ANL A,#0x0F                   
    6242: 42 03       ORL 0x03,A                    
    6244: 90 7F ED    MOV DPTR,#0x7FED              
    6247: E0          MOVX A,@DPTR                  
    6248: FC          MOV R4,A                      
    6249: 8C F0       MOV 0xF0,R4                   
    624B: 05 F0       INC B(0xF0)                   
    624D: 74 01       MOV A,#0x01                   
    624F: 80 02       SJMP 0x6253                      ; -> 0x6253

loc_6251:
    6251: 25 E0       ADD A,ACC(0xE0)               
    6253: D5 F0 FB    DJNZ B(0xF0),0x6251              ; -> loc_6251
    6256: 54 0F       ANL A,#0x0F                   
    6258: C4          SWAP A                        
    6259: 54 F0       ANL A,#0xF0                   
    625B: F4          CPL A                         
    625C: FC          MOV R4,A                      
    625D: 52 03       ANL 0x03,A                    
    625F: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    6262: EB          MOV A,R3                      
    6263: F0          MOVX @DPTR,A                  
    6264: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    6267: 74 80       MOV A,#0x80                   
    6269: F0          MOVX @DPTR,A                  
    626A: 02 63 2C    LJMP 0x632C                      ; -> 0x632C

loc_626D:
    626D: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    6270: E0          MOVX A,@DPTR                  
    6271: FB          MOV R3,A                      
    6272: 53 03 0F    ANL 0x03,#0x0F                
    6275: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    6278: EB          MOV A,R3                      
    6279: F0          MOVX @DPTR,A                  
    627A: E0          MOVX A,@DPTR                  
    627B: FB          MOV R3,A                      
    627C: 43 03 70    ORL 0x03,#0x70                
    627F: 90 CC 5E    MOV DPTR,#0xCC5E                 ; register block CC00
    6282: EB          MOV A,R3                      
    6283: F0          MOVX @DPTR,A                  
    6284: 02 63 2C    LJMP 0x632C                      ; -> 0x632C

loc_6287:
    6287: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    628A: E0          MOVX A,@DPTR                  
    628B: FB          MOV R3,A                      
    628C: 90 7F ED    MOV DPTR,#0x7FED              
    628F: E0          MOVX A,@DPTR                  
    6290: FC          MOV R4,A                      
    6291: 8C F0       MOV 0xF0,R4                   
    6293: 05 F0       INC B(0xF0)                   
    6295: 74 01       MOV A,#0x01                   
    6297: 80 02       SJMP 0x629B                      ; -> 0x629B

loc_6299:
    6299: 25 E0       ADD A,ACC(0xE0)               
    629B: D5 F0 FB    DJNZ B(0xF0),0x6299              ; -> loc_6299
    629E: 54 0F       ANL A,#0x0F                   
    62A0: C4          SWAP A                        
    62A1: 54 F0       ANL A,#0xF0                   
    62A3: 42 03       ORL 0x03,A                    
    62A5: 90 7F ED    MOV DPTR,#0x7FED              
    62A8: E0          MOVX A,@DPTR                  
    62A9: FC          MOV R4,A                      
    62AA: 8C F0       MOV 0xF0,R4                   
    62AC: 05 F0       INC B(0xF0)                   
    62AE: 74 01       MOV A,#0x01                   
    62B0: 80 02       SJMP 0x62B4                      ; -> 0x62B4

loc_62B2:
    62B2: 25 E0       ADD A,ACC(0xE0)               
    62B4: D5 F0 FB    DJNZ B(0xF0),0x62B2              ; -> loc_62B2
    62B7: 54 0F       ANL A,#0x0F                   
    62B9: F4          CPL A                         
    62BA: FC          MOV R4,A                      
    62BB: 52 03       ANL 0x03,A                    
    62BD: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    62C0: EB          MOV A,R3                      
    62C1: F0          MOVX @DPTR,A                  
    62C2: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    62C5: 74 80       MOV A,#0x80                   
    62C7: F0          MOVX @DPTR,A                  
    62C8: 80 62       SJMP 0x632C                      ; -> 0x632C

loc_62CA:
    62CA: 90 C8 7D    MOV DPTR,#0xC87D                 ; control + status register block
    62CD: E4          CLR A                         
    62CE: F0          MOVX @DPTR,A                  
    62CF: 90 C8 7E    MOV DPTR,#0xC87E                 ; control + status register block
    62D2: F0          MOVX @DPTR,A                  
    62D3: 90 C8 7F    MOV DPTR,#0xC87F                 ; control + status register block
    62D6: F0          MOVX @DPTR,A                  
    62D7: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    62DA: E0          MOVX A,@DPTR                  
    62DB: FB          MOV R3,A                      
    62DC: 43 03 01    ORL 0x03,#0x01                
    62DF: 90 C8 72    MOV DPTR,#0xC872                 ; control + status register block
    62E2: EB          MOV A,R3                      
    62E3: F0          MOVX @DPTR,A                  
    62E4: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    62E7: E0          MOVX A,@DPTR                  
    62E8: FB          MOV R3,A                      
    62E9: 90 7F ED    MOV DPTR,#0x7FED              
    62EC: E0          MOVX A,@DPTR                  
    62ED: FC          MOV R4,A                      
    62EE: 8C F0       MOV 0xF0,R4                   
    62F0: 05 F0       INC B(0xF0)                   
    62F2: 74 01       MOV A,#0x01                   
    62F4: 80 02       SJMP 0x62F8                      ; -> 0x62F8

loc_62F6:
    62F6: 25 E0       ADD A,ACC(0xE0)               
    62F8: D5 F0 FB    DJNZ B(0xF0),0x62F6              ; -> loc_62F6
    62FB: 54 0F       ANL A,#0x0F                   
    62FD: 42 03       ORL 0x03,A                    
    62FF: 90 7F ED    MOV DPTR,#0x7FED              
    6302: E0          MOVX A,@DPTR                  
    6303: FC          MOV R4,A                      
    6304: 8C F0       MOV 0xF0,R4                   
    6306: 05 F0       INC B(0xF0)                   
    6308: 74 01       MOV A,#0x01                   
    630A: 80 02       SJMP 0x630E                      ; -> 0x630E

loc_630C:
    630C: 25 E0       ADD A,ACC(0xE0)               
    630E: D5 F0 FB    DJNZ B(0xF0),0x630C              ; -> loc_630C
    6311: 54 0F       ANL A,#0x0F                   
    6313: C4          SWAP A                        
    6314: 54 F0       ANL A,#0xF0                   
    6316: F4          CPL A                         
    6317: FC          MOV R4,A                      
    6318: 52 03       ANL 0x03,A                    
    631A: 90 C8 70    MOV DPTR,#0xC870                 ; control + status register block
    631D: EB          MOV A,R3                      
    631E: F0          MOVX @DPTR,A                  
    631F: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    6322: E0          MOVX A,@DPTR                  
    6323: FB          MOV R3,A                      
    6324: 43 03 80    ORL 0x03,#0x80                
    6327: 90 C8 71    MOV DPTR,#0xC871                 ; control + status register block
    632A: EB          MOV A,R3                      
    632B: F0          MOVX @DPTR,A                  
    632C: 90 7F ED    MOV DPTR,#0x7FED              
    632F: E0          MOVX A,@DPTR                  
    6330: 24 F5       ADD A,#0xF5                   
    6332: FB          MOV R3,A                      
    6333: E4          CLR A                         
    6334: 34 7F       ADDC A,#0x7F                  
    6336: FC          MOV R4,A                      
    6337: 90 7F ED    MOV DPTR,#0x7FED              
    633A: E0          MOVX A,@DPTR                  
    633B: 24 F5       ADD A,#0xF5                   
    633D: F5 82       MOV DPL(0x82),A               
    633F: E4          CLR A                         
    6340: 34 7F       ADDC A,#0x7F                  
    6342: F5 83       MOV DPH(0x83),A               
    6344: E0          MOVX A,@DPTR                  
    6345: FD          MOV R5,A                      
    6346: 53 05 7F    ANL 0x05,#0x7F                
    6349: 8B 82       MOV 0x82,R3                   
    634B: 8C 83       MOV 0x83,R4                   
    634D: ED          MOV A,R5                      
    634E: F0          MOVX @DPTR,A                  
    634F: 90 7F ED    MOV DPTR,#0x7FED              
    6352: E0          MOVX A,@DPTR                  
    6353: FB          MOV R3,A                      
    6354: 90 7F ED    MOV DPTR,#0x7FED              
    6357: 04          INC A                         
    6358: F0          MOVX @DPTR,A                  
    6359: 02 61 8F    LJMP 0x618F                      ; -> 0x618F
    635C: 75          DB 0x75                       ; data
    635D: 82          DB 0x82                       ; data
    635E: 01          DB 0x01                       ; data
    635F: C0          DB 0xC0                       ; data
    6360: 02          DB 0x02                       ; data
    6361: 12          DB 0x12                       ; data
    6362: 22          DB 0x22                       ; data
    6363: 11          DB 0x11                       ; data
    6364: D0          DB 0xD0                       ; data
    6365: 02          DB 0x02                       ; data
    6366: 90          DB 0x90                       ; data
    6367: D2          DB 0xD2                       ; data
    6368: 00          DB 0x00                       ; data
    6369: E0          DB 0xE0                       ; data
    636A: FB          DB 0xFB                       ; data
    636B: 53          DB 0x53                       ; data
    636C: 03          DB 0x03                       ; data
    636D: FC          DB 0xFC                       ; data
    636E: 90          DB 0x90                       ; data
    636F: D2          DB 0xD2                       ; data
    6370: 00          DB 0x00                       ; data
    6371: EB          DB 0xEB                       ; data
    6372: F0          DB 0xF0                       ; data
    6373: 90          DB 0x90                       ; data
    6374: 7F          DB 0x7F                       ; data
    6375: 84          DB 0x84                       ; data
    6376: E0          DB 0xE0                       ; data
    6377: FB          DB 0xFB                       ; data
    6378: 70          DB 0x70                       ; data
    6379: 51          DB 0x51                       ; data
    637A: 90          DB 0x90                       ; data
    637B: 7F          DB 0x7F                       ; data
    637C: F1          DB 0xF1                       ; data
    637D: E0          DB 0xE0                       ; data
    637E: FB          DB 0xFB                       ; data
    637F: 60          DB 0x60                       ; data
    6380: 26          DB 0x26                       ; data
    6381: 90          DB 0x90                       ; data
    6382: D2          DB 0xD2                       ; data
    6383: 08          DB 0x08                       ; data
    6384: E0          DB 0xE0                       ; data
    6385: FB          DB 0xFB                       ; data
    6386: 43          DB 0x43                       ; data
    6387: 03          DB 0x03                       ; data
    6388: 08          DB 0x08                       ; data
    6389: 90          DB 0x90                       ; data
    638A: D2          DB 0xD2                       ; data
    638B: 08          DB 0x08                       ; data
    638C: EB          DB 0xEB                       ; data
    638D: F0          DB 0xF0                       ; data
    638E: 90          DB 0x90                       ; data
    638F: 7F          DB 0x7F                       ; data
    6390: A2          DB 0xA2                       ; data
    6391: E0          DB 0xE0                       ; data
    6392: FB          DB 0xFB                       ; data
    6393: BB          DB 0xBB                       ; data
    6394: 05          DB 0x05                       ; data
    6395: 00          DB 0x00                       ; data
    6396: 40          DB 0x40                       ; data
    6397: 33          DB 0x33                       ; data
    6398: 90          DB 0x90                       ; data
    6399: D2          DB 0xD2                       ; data
    639A: 00          DB 0x00                       ; data
    639B: E0          DB 0xE0                       ; data
    639C: FB          DB 0xFB                       ; data
    639D: 43          DB 0x43                       ; data
    639E: 03          DB 0x03                       ; data
    639F: 02          DB 0x02                       ; data
    63A0: 90          DB 0x90                       ; data
    63A1: D2          DB 0xD2                       ; data
    63A2: 00          DB 0x00                       ; data
    63A3: EB          DB 0xEB                       ; data
    63A4: F0          DB 0xF0                       ; data
    63A5: 80          DB 0x80                       ; data
    63A6: 24          DB 0x24                       ; data
    63A7: 90          DB 0x90                       ; data
    63A8: D2          DB 0xD2                       ; data
    63A9: 08          DB 0x08                       ; data
    63AA: E0          DB 0xE0                       ; data
    63AB: FB          DB 0xFB                       ; data
    63AC: 53          DB 0x53                       ; data
    63AD: 03          DB 0x03                       ; data
    63AE: F7          DB 0xF7                       ; data
    63AF: 90          DB 0x90                       ; data
    63B0: D2          DB 0xD2                       ; data
    63B1: 08          DB 0x08                       ; data
    63B2: EB          DB 0xEB                       ; data
    63B3: F0          DB 0xF0                       ; data
    63B4: 90          DB 0x90                       ; data
    63B5: 7F          DB 0x7F                       ; data
    63B6: A2          DB 0xA2                       ; data
    63B7: E0          DB 0xE0                       ; data
    63B8: FB          DB 0xFB                       ; data
    63B9: BB          DB 0xBB                       ; data
    63BA: 05          DB 0x05                       ; data
    63BB: 00          DB 0x00                       ; data
    63BC: 40          DB 0x40                       ; data
    63BD: 0D          DB 0x0D                       ; data
    63BE: 90          DB 0x90                       ; data
    63BF: D2          DB 0xD2                       ; data
    63C0: 00          DB 0x00                       ; data
    63C1: E0          DB 0xE0                       ; data
    63C2: FB          DB 0xFB                       ; data
    63C3: 43          DB 0x43                       ; data
    63C4: 03          DB 0x03                       ; data
    63C5: 01          DB 0x01                       ; data
    63C6: 90          DB 0x90                       ; data
    63C7: D2          DB 0xD2                       ; data
    63C8: 00          DB 0x00                       ; data
    63C9: EB          DB 0xEB                       ; data
    63CA: F0          DB 0xF0                       ; data
    63CB: E5 47       MOV A,0x47                    
    63CD: 54 28       ANL A,#0x28                   
    63CF: 70 03       JNZ 0x63D4                       ; -> loc_63D4
    63D1: 02 57 07    LJMP 0x5707                      ; -> 0x5707

loc_63D4:
    63D4: 75 50 01    MOV 0x50,#0x01                
    63D7: 75 51 10    MOV 0x51,#0x10                
    63DA: 75 82 00    MOV DPL(0x82),#0x00           
    63DD: C0 02       PUSH 0x02                     
    63DF: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    63E2: 75 50 01    MOV 0x50,#0x01                
    63E5: 75 51 68    MOV 0x51,#0x68                
    63E8: 75 82 00    MOV DPL(0x82),#0x00           
    63EB: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    63EE: 75 50 01    MOV 0x50,#0x01                
    63F1: 75 51 01    MOV 0x51,#0x01                
    63F4: 75 82 01    MOV DPL(0x82),#0x01           
    63F7: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    63FA: 75 50 01    MOV 0x50,#0x01                
    63FD: 85 47 51    MOV 0x51,0x47                 
    6400: 75 82 01    MOV DPL(0x82),#0x01           
    6403: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    6406: 12 27 0E    LCALL 0x270E                     ; -> sub_270E
    6409: D0 02       POP 0x02                      
    640B: 90 7F A7    MOV DPTR,#0x7FA7              
    640E: E0          MOVX A,@DPTR                  
    640F: FB          MOV R3,A                      
    6410: BB 02 02    CJNE R3,#0x02,0x6415             ; -> loc_6415
    6413: 80 14       SJMP 0x6429                      ; -> 0x6429

loc_6415:
    6415: 90 7F A7    MOV DPTR,#0x7FA7              
    6418: E0          MOVX A,@DPTR                  
    6419: FB          MOV R3,A                      
    641A: BB 05 02    CJNE R3,#0x05,0x641F             ; -> loc_641F
    641D: 80 0A       SJMP 0x6429                      ; -> 0x6429

loc_641F:
    641F: 75 82 4B    MOV DPL(0x82),#0x4B           
    6422: C0 02       PUSH 0x02                     
    6424: 12 42 1D    LCALL 0x421D                     ; -> sub_421D
    6427: D0 02       POP 0x02                      
    6429: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    642C: E4          CLR A                         
    642D: F0          MOVX @DPTR,A                  
    642E: 90 CC 0B    MOV DPTR,#0xCC0B                 ; register block CC00
    6431: E0          MOVX A,@DPTR                  
    6432: FB          MOV R3,A                      
    6433: BB 01 00    CJNE R3,#0x01,0x6436             ; -> 0x6436
    6436: 40 F6       JC 0x642E                        ; -> 0x642E
    6438: 90 7F 7C    MOV DPTR,#0x7F7C              
    643B: E0          MOVX A,@DPTR                  
    643C: F5 0C       MOV 0x0C,A                    
    643E: 75 0A 00    MOV 0x0A,#0x00                
    6441: 75 0B 00    MOV 0x0B,#0x00                
    6444: 75 0D 00    MOV 0x0D,#0x00                
    6447: 75 82 01    MOV DPL(0x82),#0x01           
    644A: C0 02       PUSH 0x02                     
    644C: 12 26 BE    LCALL 0x26BE                     ; -> sub_26BE
    644F: D0 02       POP 0x02                      
    6451: 02 57 07    LJMP 0x5707                      ; -> 0x5707

loc_6454:
    6454: 90 7F A3    MOV DPTR,#0x7FA3              
    6457: E0          MOVX A,@DPTR                  
    6458: FB          MOV R3,A                      
    6459: 70 03       JNZ 0x645E                       ; -> loc_645E
    645B: 02 67 BC    LJMP 0x67BC                      ; -> 0x67BC

loc_645E:
    645E: 90 7F A2    MOV DPTR,#0x7FA2              
    6461: E0          MOVX A,@DPTR                  
    6462: FB          MOV R3,A                      
    6463: BB 03 02    CJNE R3,#0x03,0x6468             ; -> loc_6468
    6466: 80 0D       SJMP 0x6475                      ; -> loc_6475

loc_6468:
    6468: 90 7F A2    MOV DPTR,#0x7FA2              
    646B: E0          MOVX A,@DPTR                  
    646C: FB          MOV R3,A                      
    646D: BB 04 02    CJNE R3,#0x04,0x6472             ; -> loc_6472
    6470: 80 03       SJMP 0x6475                      ; -> loc_6475

loc_6472:
    6472: 02 67 BC    LJMP 0x67BC                      ; -> 0x67BC

loc_6475:
    6475: 75 50 04    MOV 0x50,#0x04                
    6478: 75 51 1B    MOV 0x51,#0x1B                
    647B: 75 82 00    MOV DPL(0x82),#0x00           
    647E: C0 02       PUSH 0x02                     
    6480: 12 04 4F    LCALL 0x044F                     ; -> sub_044F
    6483: D0 02       POP 0x02                      
    6485: 90 7F 87    MOV DPTR,#0x7F87              
    6488: E0          MOVX A,@DPTR                  
    6489: FB          MOV R3,A                      
    648A: 70 03       JNZ 0x648F                       ; -> loc_648F
    648C: 02 66 BE    LJMP 0x66BE                      ; -> 0x66BE

loc_648F:
    648F: 90 7F E1    MOV DPTR,#0x7FE1              
    6492: 74 01       MOV A,#0x01                   
    6494: F0          MOVX @DPTR,A                  
    6495: 90 7F E2    MOV DPTR,#0x7FE2              
    6498: 74 01       MOV A,#0x01                   
    649A: F0          MOVX @DPTR,A                  
    649B: 90 7F E3    MOV DPTR,#0x7FE3              
    649E: 74 01       MOV A,#0x01                   
    64A0: F0          MOVX @DPTR,A                  
    64A1: 90 7F E4    MOV DPTR,#0x7FE4              
    64A4: 74 01       MOV A,#0x01                   
    64A6: F0          MOVX @DPTR,A                  
    64A7: 90 7F FA    MOV DPTR,#0x7FFA              
    64AA: 74 01       MOV A,#0x01                   
    64AC: F0          MOVX @DPTR,A                  
    64AD: 7B 00       MOV R3,#0x00                  
    64AF: 90 7F 7E    MOV DPTR,#0x7F7E              
    64B2: E0          MOVX A,@DPTR                  
    64B3: FC          MOV R4,A                      
    64B4: EB          MOV A,R3                      
    64B5: B5 04 00    CJNE A,0x04,0x64B8               ; -> 0x64B8
    64B8: 50 2B       JNC 0x64E5                       ; -> loc_64E5
    64BA: EB          MOV A,R3                      
    64BB: 24 E1       ADD A,#0xE1                   
    64BD: FC          MOV R4,A                      
    64BE: E4          CLR A                         
    64BF: 34 7F       ADDC A,#0x7F                  
    64C1: FD          MOV R5,A                      
    64C2: EB          MOV A,R3                      
    64C3: 24 80       ADD A,#0x80                   
    64C5: F5 82       MOV DPL(0x82),A               
    64C7: E4          CLR A                         
    64C8: 34 7F       ADDC A,#0x7F                  
    64CA: F5 83       MOV DPH(0x83),A               
    64CC: E0          MOVX A,@DPTR                  
    64CD: FE          MOV R6,A                      
    64CE: 53 06 04    ANL 0x06,#0x04                
    64D1: E4          CLR A                         
    64D2: BE 00 01    CJNE R6,#0x00,0x64D6             ; -> 0x64D6
    64D5: 04          INC A                         
    64D6: FE          MOV R6,A                      
    64D7: B4 01 00    CJNE A,#0x01,0x64DA              ; -> 0x64DA
    64DA: E4          CLR A                         
    64DB: 33          RLC A                         
    64DC: FE          MOV R6,A                      
    64DD: 8C 82       MOV 0x82,R4                   
    64DF: 8D 83       MOV 0x83,R5                   
    64E1: F0          MOVX @DPTR,A                  
    64E2: 0B          INC R3                        
    64E3: 80 CA       SJMP 0x64AF                      ; -> 0x64AF

loc_64E5:
    64E5: 90 7F E1    MOV DPTR,#0x7FE1              
    64E8: E0          MOVX A,@DPTR                  
    64E9: 60 06       JZ 0x64F1                        ; -> 0x64F1
    64EB: 90 7F E2    MOV DPTR,#0x7FE2              
    64EE: E0          MOVX A,@DPTR                  
    64EF: 70 04       JNZ 0x64F5                       ; -> loc_64F5
    64F1: 7B 00       MOV R3,#0x00                  
    64F3: 80 02       SJMP 0x64F7                      ; -> 0x64F7

loc_64F5:
    64F5: 7B 01       MOV R3,#0x01                  
    64F7: EB          MOV A,R3                      
    64F8: 60 06       JZ 0x6500                        ; -> 0x6500
    64FA: 90 7F E3    MOV DPTR,#0x7FE3              
    64FD: E0          MOVX A,@DPTR                  
    64FE: 70 04       JNZ 0x6504                       ; -> loc_6504
    6500: 7B 00       MOV R3,#0x00                  
    6502: 80 02       SJMP 0x6506                      ; -> 0x6506

loc_6504:
    6504: 7B 01       MOV R3,#0x01                  
    6506: EB          MOV A,R3                      
    6507: 60 06       JZ 0x650F                        ; -> 0x650F
    6509: 90 7F E4    MOV DPTR,#0x7FE4              
    650C: E0          MOVX A,@DPTR                  
    650D: 70 04       JNZ 0x6513                       ; -> loc_6513
    650F: 7B 00       MOV R3,#0x00                  
    6511: 80 02       SJMP 0x6515                      ; -> 0x6515

loc_6513:
    6513: 7B 01       MOV R3,#0x01                  
    6515: 90 7F E3    MOV DPTR,#0x7FE3              
    6518: EB          MOV A,R3                      
    6519: F0          MOVX @DPTR,A                  
    651A: 90 7F 7D    MOV DPTR,#0x7F7D              
    651D: E0          MOVX A,@DPTR                  
    651E: FB          MOV R3,A                      
    651F: BB 10 04    CJNE R3,#0x10,0x6526             ; -> loc_6526
    6522: 7B 02       MOV R3,#0x02                  
    6524: 80 0B       SJMP 0x6531                      ; -> 0x6531

loc_6526:
    6526: 90 7F 7D    MOV DPTR,#0x7F7D              
    6529: E0          MOVX A,@DPTR                  
    652A: FC          MOV R4,A                      
    652B: E4          CLR A                         
    652C: BC 08 01    CJNE R4,#0x08,0x6530             ; -> 0x6530
    652F: 04          INC A                         
    6530: FB          MOV R3,A                      
    6531: 90 7F E2    MOV DPTR,#0x7FE2              
    6534: EB          MOV A,R3                      
    6535: F0          MOVX @DPTR,A                  
    6536: 90 7F 80    MOV DPTR,#0x7F80              
    6539: E0          MOVX A,@DPTR                  
    653A: FB          MOV R3,A                      
    653B: 90 7F ED    MOV DPTR,#0x7FED              
    653E: 74 03       MOV A,#0x03                   
    6540: 5B          ANL A,R3                      
    6541: F0          MOVX @DPTR,A                  
    6542: 90 7F E2    MOV DPTR,#0x7FE2              
    6545: E0          MOVX A,@DPTR                  
    6546: 24 96       ADD A,#0x96                   
    6548: F5 82       MOV DPL(0x82),A               
    654A: E4          CLR A                         
    654B: 34 7F       ADDC A,#0x7F                  
    654D: F5 83       MOV DPH(0x83),A               
    654F: E0          MOVX A,@DPTR                  
    6550: FB          MOV R3,A                      
    6551: 90 7F E4    MOV DPTR,#0x7FE4              
    6554: 74 03       MOV A,#0x03                   
    6556: 5B          ANL A,R3                      
    6557: F0          MOVX @DPTR,A                  
    6558: 90 7F E4    MOV DPTR,#0x7FE4              
    655B: E0          MOVX A,@DPTR                  
    655C: FB          MOV R3,A                      
    655D: 90 7F ED    MOV DPTR,#0x7FED              
    6560: E0          MOVX A,@DPTR                  
    6561: FC          MOV R4,A                      
    6562: B5 03 00    CJNE A,0x03,0x6565               ; -> 0x6565
    6565: 50 0A       JNC 0x6571                       ; -> loc_6571
    6567: 90 7F E3    MOV DPTR,#0x7FE3              
    656A: E0          MOVX A,@DPTR                  
    656B: FB          MOV R3,A                      
    656C: BB 01 02    CJNE R3,#0x01,0x6571             ; -> loc_6571
    656F: 80 0E       SJMP 0x657F                      ; -> 0x657F

loc_6571:
    6571: 90 7F E4    MOV DPTR,#0x7FE4              
    6574: E0          MOVX A,@DPTR                  
    6575: FB          MOV R3,A                      
    6576: 90 7F ED    MOV DPTR,#0x7FED              
    6579: E0          MOVX A,@DPTR                  
    657A: FC          MOV R4,A                      
    657B: EB          MOV A,R3                      
    657C: B5 04 15    CJNE A,0x04,0x6594               ; -> loc_6594
    657F: 90 7F ED    MOV DPTR,#0x7FED              
    6582: E0          MOVX A,@DPTR                  
    6583: C4          SWAP A                        
    6584: 54 F0       ANL A,#0xF0                   
    6586: FB          MOV R3,A                      
    6587: 90 7F ED    MOV DPTR,#0x7FED              
    658A: E0          MOVX A,@DPTR                  
    658B: FC          MOV R4,A                      
    658C: 90 7F 9A    MOV DPTR,#0x7F9A              
    658F: EB          MOV A,R3                      
    6590: 4C          ORL A,R4                      
    6591: F0          MOVX @DPTR,A                  
    6592: 80 18       SJMP 0x65AC                      ; -> 0x65AC

loc_6594:
    6594: 90 7F FA    MOV DPTR,#0x7FFA              
    6597: E4          CLR A                         
    6598: F0          MOVX @DPTR,A                  
    6599: 90 7F E4    MOV DPTR,#0x7FE4              
    659C: E0          MOVX A,@DPTR                  
    659D: C4          SWAP A                        
    659E: 54 F0       ANL A,#0xF0                   
    65A0: FB          MOV R3,A                      
    65A1: 90 7F E4    MOV DPTR,#0x7FE4              
    65A4: E0          MOVX A,@DPTR                  
    65A5: FC          MOV R4,A                      
    65A6: 90 7F 9A    MOV DPTR,#0x7F9A              
    65A9: EB          MOV A,R3                      
    65AA: 4C          ORL A,R4                      
    65AB: F0          MOVX @DPTR,A                  
    65AC: 90 7F E1    MOV DPTR,#0x7FE1              
    65AF: 74 01       MOV A,#0x01                   
    65B1: F0          MOVX @DPTR,A                  
    65B2: 90 7F E2    MOV DPTR,#0x7FE2              
    65B5: 74 01       MOV A,#0x01                   
    65B7: F0          MOVX @DPTR,A                  
    65B8: 90 7F E3    MOV DPTR,#0x7FE3              
    65BB: 74 01       MOV A,#0x01                   
    65BD: F0          MOVX @DPTR,A                  
    65BE: 90 7F E4    MOV DPTR,#0x7FE4              
    65C1: 74 01       MOV A,#0x01                   
    65C3: F0          MOVX @DPTR,A                  
    65C4: 7B 00       MOV R3,#0x00                  
    65C6: 90 7F 7E    MOV DPTR,#0x7F7E              
    65C9: E0          MOVX A,@DPTR                  
    65CA: FC          MOV R4,A                      
    65CB: EB          MOV A,R3                      
    65CC: B5 04 00    CJNE A,0x04,0x65CF               ; -> 0x65CF
    65CF: 50 2B       JNC 0x65FC                       ; -> loc_65FC
    65D1: EB          MOV A,R3                      
    65D2: 24 E1       ADD A,#0xE1                   
    65D4: FC          MOV R4,A                      
    65D5: E4          CLR A                         
    65D6: 34 7F       ADDC A,#0x7F                  
    65D8: FD          MOV R5,A                      
    65D9: EB          MOV A,R3                      
    65DA: 24 80       ADD A,#0x80                   
    65DC: F5 82       MOV DPL(0x82),A               
    65DE: E4          CLR A                         
    65DF: 34 7F       ADDC A,#0x7F                  
    65E1: F5 83       MOV DPH(0x83),A               
    65E3: E0          MOVX A,@DPTR                  
    65E4: FE          MOV R6,A                      
    65E5: 53 06 20    ANL 0x06,#0x20                
    65E8: E4          CLR A                         
    65E9: BE 00 01    CJNE R6,#0x00,0x65ED             ; -> 0x65ED
    65EC: 04          INC A                         
    65ED: FE          MOV R6,A                      
    65EE: B4 01 00    CJNE A,#0x01,0x65F1              ; -> 0x65F1
    65F1: E4          CLR A                         
    65F2: 33          RLC A                         
    65F3: FE          MOV R6,A                      
    65F4: 8C 82       MOV 0x82,R4                   
    65F6: 8D 83       MOV 0x83,R5                   
    65F8: F0          MOVX @DPTR,A                  
    65F9: 0B          INC R3                        
    65FA: 80 CA       SJMP 0x65C6                      ; -> 0x65C6

loc_65FC:
    65FC: 90 7F E1    MOV DPTR,#0x7FE1              
    65FF: E0          MOVX A,@DPTR                  
    6600: 60 06       JZ 0x6608                        ; -> 0x6608
    6602: 90 7F E2    MOV DPTR,#0x7FE2              
    6605: E0          MOVX A,@DPTR                  
    6606: 70 04       JNZ 0x660C                       ; -> loc_660C
    6608: 7B 00       MOV R3,#0x00                  
    660A: 80 02       SJMP 0x660E                      ; -> 0x660E

loc_660C:
    660C: 7B 01       MOV R3,#0x01                  
    660E: EB          MOV A,R3                      
    660F: 60 06       JZ 0x6617                        ; -> 0x6617
    6611: 90 7F E3    MOV DPTR,#0x7FE3              
    6614: E0          MOVX A,@DPTR                  
    6615: 70 04       JNZ 0x661B                       ; -> loc_661B
    6617: 7B 00       MOV R3,#0x00                  
    6619: 80 02       SJMP 0x661D                      ; -> 0x661D

loc_661B:
    661B: 7B 01       MOV R3,#0x01                  
    661D: EB          MOV A,R3                      
    661E: 60 06       JZ 0x6626                        ; -> 0x6626
    6620: 90 7F E4    MOV DPTR,#0x7FE4              
    6623: E0          MOVX A,@DPTR                  
    6624: 70 04       JNZ 0x662A                       ; -> loc_662A
    6626: 7B 00       MOV R3,#0x00                  
    6628: 80 02       SJMP 0x662C                      ; -> 0x662C

loc_662A:
    662A: 7B 01       MOV R3,#0x01                  
    662C: 90 7F E3    MOV DPTR,#0x7FE3              
    662F: EB          MOV A,R3                      
    6630: F0          MOVX @DPTR,A                  
    6631: 90 7F 80    MOV DPTR,#0x7F80              
    6634: E0          MOVX A,@DPTR                  
    6635: 54 18       ANL A,#0x18                   
    6637: C3          CLR C                         
    6638: 13          RRC A                         
    6639: 90 7F ED    MOV DPTR,#0x7FED              
    663C: F0          MOVX @DPTR,A                  
    663D: 90 7F E2    MOV DPTR,#0x7FE2              
    6640: E0          MOVX A,@DPTR                  
    6641: 24 96       ADD A,#0x96                   
    6643: F5 82       MOV DPL(0x82),A               
    6645: E4          CLR A                         
    6646: 34 7F       ADDC A,#0x7F                  
    6648: F5 83       MOV DPH(0x83),A               
    664A: E0          MOVX A,@DPTR                  
    664B: FB          MOV R3,A                      
    664C: 90 7F E4    MOV DPTR,#0x7FE4              
    664F: 74 0C       MOV A,#0x0C                   
    6651: 5B          ANL A,R3                      
    6652: F0          MOVX @DPTR,A                  
    6653: 90 7F E4    MOV DPTR,#0x7FE4              
    6656: E0          MOVX A,@DPTR                  
    6657: FB          MOV R3,A                      
    6658: 90 7F ED    MOV DPTR,#0x7FED              
    665B: E0          MOVX A,@DPTR                  
    665C: FC          MOV R4,A                      
    665D: B5 03 00    CJNE A,0x03,0x6660               ; -> 0x6660
    6660: 50 0A       JNC 0x666C                       ; -> loc_666C
    6662: 90 7F E3    MOV DPTR,#0x7FE3              
    6665: E0          MOVX A,@DPTR                  
    6666: FB          MOV R3,A                      
    6667: BB 01 02    CJNE R3,#0x01,0x666C             ; -> loc_666C
    666A: 80 0E       SJMP 0x667A                      ; -> 0x667A

loc_666C:
    666C: 90 7F E4    MOV DPTR,#0x7FE4              
    666F: E0          MOVX A,@DPTR                  
    6670: FB          MOV R3,A                      
    6671: 90 7F ED    MOV DPTR,#0x7FED              
    6674: E0          MOVX A,@DPTR                  
    6675: FC          MOV R4,A                      
    6676: EB          MOV A,R3                      
    6677: B5 04 1A    CJNE A,0x04,0x6694               ; -> loc_6694
    667A: 90 7F ED    MOV DPTR,#0x7FED              
    667D: E0          MOVX A,@DPTR                  
    667E: FB          MOV R3,A                      
    667F: 90 7F 9A    MOV DPTR,#0x7F9A              
    6682: E0          MOVX A,@DPTR                  
    6683: 42 03       ORL 0x03,A                    
    6685: 90 7F ED    MOV DPTR,#0x7FED              
    6688: E0          MOVX A,@DPTR                  
    6689: C4          SWAP A                        
    668A: 54 F0       ANL A,#0xF0                   
    668C: FC          MOV R4,A                      
    668D: 90 7F 9A    MOV DPTR,#0x7F9A              
    6690: 4B          ORL A,R3                      
    6691: F0          MOVX @DPTR,A                  
    6692: 80 1D       SJMP 0x66B1                      ; -> 0x66B1

loc_6694:
    6694: 90 7F FA    MOV DPTR,#0x7FFA              
    6697: E4          CLR A                         
    6698: F0          MOVX @DPTR,A                  
    6699: 90 7F E4    MOV DPTR,#0x7FE4              
    669C: E0          MOVX A,@DPTR                  
    669D: FB          MOV R3,A                      
    669E: 90 7F 9A    MOV DPTR,#0x7F9A              
    66A1: E0          MOVX A,@DPTR                  
    66A2: 42 03       ORL 0x03,A                    
    66A4: 90 7F E4    MOV DPTR,#0x7FE4              
    66A7: E0          MOVX A,@DPTR                  
    66A8: C4          SWAP A                        
    66A9: 54 F0       ANL A,#0xF0                   
    66AB: FC          MOV R4,A                      
    66AC: 90 7F 9A    MOV DPTR,#0x7F9A              
    66AF: 4B          ORL A,R3                      
    66B0: F0          MOVX @DPTR,A                  
    66B1: 90 7F FA    MOV DPTR,#0x7FFA              
    66B4: E0          MOVX A,@DPTR                  
    66B5: FB          MOV R3,A                      
    66B6: 70 06       JNZ 0x66BE                       ; -> 0x66BE
    66B8: 90 7F 85    MOV DPTR,#0x7F85              
    66BB: 74 01       MOV A,#0x01                   
    66BD: F0          MOVX @DPTR,A                  
    66BE: 90 7F A2    MOV DPTR,#0x7FA2              
    66C1: E0          MOVX A,@DPTR                  
    66C2: FB          MOV R3,A                      
    66C3: BB 04 02    CJNE R3,#0x04,0x66C8             ; -> loc_66C8
    66C6: 80 03       SJMP 0x66CB                      ; -> loc_66CB

loc_66C8:
    66C8: 02 67 B3    LJMP 0x67B3                      ; -> 0x67B3

loc_66CB:
    66CB: 90 7F 80    MOV DPTR,#0x7F80              
    66CE: E0          MOVX A,@DPTR                  
    66CF: 90 7F E2    MOV DPTR,#0x7FE2              
    66D2: F0          MOVX @DPTR,A                  
    66D3: 90 7F E2    MOV DPTR,#0x7FE2              
    66D6: E0          MOVX A,@DPTR                  
    66D7: FB          MOV R3,A                      
    66D8: 53 03 04    ANL 0x03,#0x04                
    66DB: 90 7F E2    MOV DPTR,#0x7FE2              
    66DE: E0          MOVX A,@DPTR                  
    66DF: FC          MOV R4,A                      
    66E0: 53 04 20    ANL 0x04,#0x20                
    66E3: 90 7F E2    MOV DPTR,#0x7FE2              
    66E6: E0          MOVX A,@DPTR                  
    66E7: FD          MOV R5,A                      
    66E8: 53 05 03    ANL 0x05,#0x03                
    66EB: 90 7F E2    MOV DPTR,#0x7FE2              
    66EE: E0          MOVX A,@DPTR                  
    66EF: 54 18       ANL A,#0x18                   
    66F1: C4          SWAP A                        
    66F2: 23          RL A                          
    66F3: 54 1F       ANL A,#0x1F                   
    66F5: FE          MOV R6,A                      
    66F6: 90 7F B8    MOV DPTR,#0x7FB8              
    66F9: E4          CLR A                         
    66FA: F0          MOVX @DPTR,A                  
    66FB: 90 7F BA    MOV DPTR,#0x7FBA              
    66FE: E0          MOVX A,@DPTR                  
    66FF: FF          MOV R7,A                      
    6700: 60 0C       JZ 0x670E                        ; -> loc_670E
    6702: EB          MOV A,R3                      
    6703: 70 09       JNZ 0x670E                       ; -> loc_670E
    6705: 0D          INC R5                        
    6706: 90 7F B8    MOV DPTR,#0x7FB8              
    6709: 74 01       MOV A,#0x01                   
    670B: F0          MOVX @DPTR,A                  
    670C: 80 32       SJMP 0x6740                      ; -> 0x6740

loc_670E:
    670E: 90 7F 87    MOV DPTR,#0x7F87              
    6711: E0          MOVX A,@DPTR                  
    6712: FB          MOV R3,A                      
    6713: 70 2B       JNZ 0x6740                       ; -> 0x6740
    6715: 90 7F 80    MOV DPTR,#0x7F80              
    6718: E0          MOVX A,@DPTR                  
    6719: FB          MOV R3,A                      
    671A: 90 7F ED    MOV DPTR,#0x7FED              
    671D: 74 03       MOV A,#0x03                   
    671F: 5B          ANL A,R3                      
    6720: F0          MOVX @DPTR,A                  
    6721: 90 7F 9A    MOV DPTR,#0x7F9A              
    6724: E0          MOVX A,@DPTR                  
    6725: 54 CC       ANL A,#0xCC                   
    6727: F0          MOVX @DPTR,A                  
    6728: 90 7F ED    MOV DPTR,#0x7FED              
    672B: E0          MOVX A,@DPTR                  
    672C: FB          MOV R3,A                      
    672D: 90 7F 9A    MOV DPTR,#0x7F9A              
    6730: E0          MOVX A,@DPTR                  
    6731: 42 03       ORL 0x03,A                    
    6733: 90 7F ED    MOV DPTR,#0x7FED              
    6736: E0          MOVX A,@DPTR                  
    6737: C4          SWAP A                        
    6738: 54 F0       ANL A,#0xF0                   
    673A: FF          MOV R7,A                      
    673B: 90 7F 9A    MOV DPTR,#0x7F9A              
    673E: 4B          ORL A,R3                      
    673F: F0          MOVX @DPTR,A                  
    6740: 90 7F B9    MOV DPTR,#0x7FB9              
    6743: E0          MOVX A,@DPTR                  
    6744: FB          MOV R3,A                      
    6745: 60 21       JZ 0x6768                        ; -> loc_6768
    6747: EC          MOV A,R4                      
    6748: 70 1E       JNZ 0x6768                       ; -> loc_6768
    674A: 90 7F BB    MOV DPTR,#0x7FBB              
    674D: E0          MOVX A,@DPTR                  
    674E: FB          MOV R3,A                      
    674F: 70 0E       JNZ 0x675F                       ; -> 0x675F
    6751: 90 7F BC    MOV DPTR,#0x7FBC              
    6754: E0          MOVX A,@DPTR                  
    6755: FB          MOV R3,A                      
    6756: 70 07       JNZ 0x675F                       ; -> 0x675F
    6758: 90 7F B8    MOV DPTR,#0x7FB8              
    675B: E0          MOVX A,@DPTR                  
    675C: FB          MOV R3,A                      
    675D: 70 09       JNZ 0x6768                       ; -> loc_6768
    675F: 0E          INC R6                        
    6760: 90 7F B8    MOV DPTR,#0x7FB8              
    6763: 74 01       MOV A,#0x01                   
    6765: F0          MOVX @DPTR,A                  
    6766: 80 32       SJMP 0x679A                      ; -> 0x679A

loc_6768:
    6768: 90 7F 87    MOV DPTR,#0x7F87              
    676B: E0          MOVX A,@DPTR                  
    676C: FB          MOV R3,A                      
    676D: 70 2B       JNZ 0x679A                       ; -> 0x679A
    676F: 90 7F 80    MOV DPTR,#0x7F80              
    6772: E0          MOVX A,@DPTR                  
    6773: 54 18       ANL A,#0x18                   
    6775: C3          CLR C                         
    6776: 13          RRC A                         
    6777: 90 7F ED    MOV DPTR,#0x7FED              
    677A: F0          MOVX @DPTR,A                  
    677B: 90 7F 9A    MOV DPTR,#0x7F9A              
    677E: E0          MOVX A,@DPTR                  
    677F: 54 33       ANL A,#0x33                   
    6781: F0          MOVX @DPTR,A                  
    6782: 90 7F ED    MOV DPTR,#0x7FED              
    6785: E0          MOVX A,@DPTR                  
    6786: FB          MOV R3,A                      
    6787: 90 7F 9A    MOV DPTR,#0x7F9A              
    678A: E0          MOVX A,@DPTR                  
    678B: 42 03       ORL 0x03,A                    
    678D: 90 7F ED    MOV DPTR,#0x7FED              
    6790: E0          MOVX A,@DPTR                  
    6791: C4          SWAP A                        
    6792: 54 F0       ANL A,#0xF0                   
    6794: FC          MOV R4,A                      
    6795: 90 7F 9A    MOV DPTR,#0x7F9A              
    6798: 4B          ORL A,R3                      
    6799: F0          MOVX @DPTR,A                  
    679A: EE          MOV A,R6                      
    679B: 2E          ADD A,R6                      
    679C: 25 E0       ADD A,ACC(0xE0)               
    679E: FE          MOV R6,A                      
    679F: 90 7F 9B    MOV DPTR,#0x7F9B              
    67A2: 4D          ORL A,R5                      
    67A3: F0          MOVX @DPTR,A                  
    67A4: 90 7F 9B    MOV DPTR,#0x7F9B              
    67A7: E0          MOVX A,@DPTR                  
    67A8: C4          SWAP A                        
    67A9: 54 F0       ANL A,#0xF0                   
    67AB: FB          MOV R3,A                      
    67AC: 90 7F 9B    MOV DPTR,#0x7F9B              
    67AF: E0          MOVX A,@DPTR                  
    67B0: FC          MOV R4,A                      
    67B1: 4B          ORL A,R3                      
    67B2: F0          MOVX @DPTR,A                  
    67B3: 90 7F A3    MOV DPTR,#0x7FA3              
    67B6: E4          CLR A                         
    67B7: F0          MOVX @DPTR,A                  
    67B8: 90 7F 87    MOV DPTR,#0x7F87              
    67BB: F0          MOVX @DPTR,A                  
    67BC: 90 CC 2D    MOV DPTR,#0xCC2D                 ; register block CC00
    67BF: 74 FE       MOV A,#0xFE                   
    67C1: F0          MOVX @DPTR,A                  
    67C2: 02 57 07    LJMP 0x5707                      ; -> 0x5707
    67C5: 90          DB 0x90                       ; data
    67C6: 00          DB 0x00                       ; data
    67C7: 00          DB 0x00                       ; data
    67C8: 22          DB 0x22                       ; data
    67C9: 90          DB 0x90                       ; data
    67CA: 00          DB 0x00                       ; data
    67CB: 00          DB 0x00                       ; data
    67CC: 22          DB 0x22                       ; data

sub_67CD:
    67CD: 02 48 68    LJMP 0x4868                      ; -> loc_4868

sub_67D0:
    67D0: 20 F7 14    JB B.7,0x67E7                    ; -> loc_67E7
    67D3: 30 F6 14    JNB B.6,0x67EA                   ; -> loc_67EA
    67D6: 88 83       MOV 0x83,R0                   
    67D8: A8 82       MOV R0,0x82                   
    67DA: 20 F5 07    JB B.5,0x67E4                    ; -> loc_67E4
    67DD: E6          MOV A,@R0                     
    67DE: A8 83       MOV R0,0x83                   
    67E0: 75 83 00    MOV DPH(0x83),#0x00           
    67E3: 22          RET                           

loc_67E4:
    67E4: E2          MOVX A,@R0                    
    67E5: 80 F7       SJMP 0x67DE                      ; -> 0x67DE

loc_67E7:
    67E7: E4          CLR A                         
    67E8: 93          MOVC A,@A+DPTR                
    67E9: 22          RET                           

loc_67EA:
    67EA: E0          MOVX A,@DPTR                  
    67EB: 22          RET                           

sub_67EC:
    67EC: 75 82 00    MOV DPL(0x82),#0x00           
    67EF: 22          RET                           
    67F0: 02          DB 0x02                       ; data
    67F1: 01          DB 0x01                       ; data
