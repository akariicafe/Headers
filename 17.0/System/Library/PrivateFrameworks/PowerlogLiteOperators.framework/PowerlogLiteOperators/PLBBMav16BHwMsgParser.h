@interface PLBBMav16BHwMsgParser : PLBBMav13HwMsgParser

@property (nonatomic) struct { unsigned int x0[8]; } *mav16BAppsPerf;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[2][3]; unsigned int x3[2][4]; unsigned int x4[2]; unsigned int x5[4]; unsigned int x6[4]; unsigned int x7[12]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } *rfEnhWCDMAMav16B;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; int x2; unsigned int x3[17]; unsigned int x4[12]; unsigned int x5[10]; unsigned int x6[3]; unsigned int x7[6]; unsigned int x8[2][7]; unsigned int x9[2][6]; unsigned int x10[2][6]; unsigned int x11[3]; unsigned int x12[4]; unsigned int x13[4][2]; unsigned int x14[4][3]; unsigned int x15; unsigned int x16[4]; struct { unsigned char x0; unsigned char x1; unsigned char x2[3]; unsigned char x3[3]; } x17; } *rfEnhLTEMav16B;
@property (nonatomic) struct { unsigned int x0[4]; } *mav16BAppsSleepVeto;
@property (nonatomic) struct { unsigned int x0[21]; } *mav16BMpssSleepVeto;
@property (nonatomic) struct { unsigned int x0[11]; } *mav16BQdspSpeed;
@property (nonatomic) struct { unsigned int x0[14]; } *mcpmSleepVetoMav16B;

- (void)logWithLogger:(id)a0;
- (void)logMav16BAppsPerfWithLogger:(id)a0;
- (void)logMav16BHwRFEnhLTEWithLogger:(id)a0;
- (BOOL)parseData:(id)a0;
- (void)logMav16BMPSSWithLogger:(id)a0;
- (void)logMav16HwRFEnhWCDMAWithLogger:(id)a0;

@end
