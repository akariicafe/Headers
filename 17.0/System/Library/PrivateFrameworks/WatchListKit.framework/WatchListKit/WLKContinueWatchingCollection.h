@class NSString, NSArray;

@interface WLKContinueWatchingCollection : NSObject

@property (readonly, copy, nonatomic) NSString *collectionID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
