@interface RUIScriptingStaticValue : NSObject

@property (nonatomic) const char *identifier;
@property (nonatomic) void /* function */ *getter;
@property (nonatomic) void /* function */ *setter;
@property (nonatomic) int JSPropertyAttributes;

- (id)description;

@end
