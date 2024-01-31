@class NSError, NSString, NSMutableIndexSet;

@interface ECFlagChangeMessageActionResultsBuilder : NSObject <ECFlagChangeMessageActionResultsBuilder>

@property (readonly, copy, nonatomic) NSMutableIndexSet *completedUIDs;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
