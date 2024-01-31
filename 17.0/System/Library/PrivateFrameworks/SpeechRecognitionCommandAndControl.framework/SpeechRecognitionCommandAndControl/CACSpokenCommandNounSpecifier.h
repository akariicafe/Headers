@class NSArray;

@interface CACSpokenCommandNounSpecifier : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSArray *items;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 items:(id)a1;
- (id)initWithType:(unsigned int)a0 item:(id)a1;

@end
