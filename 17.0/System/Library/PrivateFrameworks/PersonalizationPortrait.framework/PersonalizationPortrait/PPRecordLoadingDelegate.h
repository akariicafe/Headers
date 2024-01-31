@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

- (unsigned char)recentRecordLoadingSetup;
- (void)recentRecordLoadingCompletion;
- (void)recordLoadingCompletion;
- (id)initWithName:(id)a0;
- (id)description;
- (void)resetRecordData;
- (void).cxx_destruct;
- (unsigned char)recordLoadingHandler:(id)a0;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;

@end
