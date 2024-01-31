@class DDUIApplicationInfo;

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo;

- (id)initWithApplicationInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;

@end
