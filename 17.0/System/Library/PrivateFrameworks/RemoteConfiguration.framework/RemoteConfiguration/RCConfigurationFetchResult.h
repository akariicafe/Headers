@class NSString, NSDictionary, NSArray, NSError;

@interface RCConfigurationFetchResult : NSObject

@property (retain, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) NSDictionary *configurationDataByRequestKey;
@property (retain, nonatomic) NSArray *treatmentIDs;
@property (retain, nonatomic) NSArray *segmentSetIDs;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 configurationDataByRequestKey:(id)a1 treatmentIDs:(id)a2 segmentSetIDs:(id)a3 error:(id)a4;

@end
