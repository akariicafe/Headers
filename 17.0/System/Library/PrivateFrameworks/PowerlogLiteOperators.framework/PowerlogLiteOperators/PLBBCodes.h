@class NSArray;

@interface PLBBCodes : NSObject

@property (retain) NSArray *allMav_LogCodes;
@property (retain) NSArray *Mav5_7_LogCodes;
@property (retain) NSArray *Mav5_7_Lite_LogCodes;
@property (retain) NSArray *Mav7_LogCodes;

- (id)init;
- (void).cxx_destruct;
- (id)getEventCodesForMav:(id)a0 AndType:(id)a1;
- (id)getLogCodesForMav:(id)a0 AndType:(id)a1;

@end
