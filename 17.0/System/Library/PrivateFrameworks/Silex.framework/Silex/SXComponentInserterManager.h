@class NSArray, NSMutableArray, NSString;

@interface SXComponentInserterManager : NSObject <SXComponentInserterManager>

@property (readonly, nonatomic) NSMutableArray *mutableInserters;
@property (readonly, nonatomic) NSArray *inserters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
