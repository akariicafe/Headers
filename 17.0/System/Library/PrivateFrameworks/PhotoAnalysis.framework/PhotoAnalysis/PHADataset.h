@class NSArray, NSString;

@interface PHADataset : NSObject <ETDataProvider>

@property (readonly, nonatomic) NSArray *labeledDataSamples;
@property (readonly, nonatomic) NSString *inputName;
@property (readonly, nonatomic) NSString *labelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
