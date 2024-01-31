@class NSString;

@interface WLKGenre : NSObject

@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)genresWithDictionaries:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
