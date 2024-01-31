@class NSCache, NSArray;

@interface CKDateFormatterHelper : NSObject

@property (retain) NSCache *dateFormatterContainer;
@property (retain) NSArray *lockList;

+ (id)sharedInstance;

- (id)init;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)_createDateFormatterFor:(long long)a0;
- (id)_createRelativeStandaloneDateFormatter;
- (id)_createShortDateNoTimeInSentenceDateFormatter;
- (id)_keyForDateFormatterType:(long long)a0;
- (id)_templateStringForFormatterType:(long long)a0;
- (id)getDateFormatterFor:(long long)a0;

@end
