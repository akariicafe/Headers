@class NSString;

@interface TCFontName : NSObject

@property (readonly, nonatomic) NSString *styleName;
@property (readonly, nonatomic) NSString *fullName;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)equivalentDictionary;
- (id)initWithStyleName:(id)a0 fullName:(id)a1;

@end
