@class NSString, NSMutableDictionary;

@interface OKAction : NSObject <OKActionExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL shouldPropagate;
@property (nonatomic) BOOL shouldCancelCouchPotato;
@property (nonatomic) BOOL isInstantaneous;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long touchCount;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, retain, nonatomic) NSMutableDictionary *context;

+ (id)createContext;
+ (id)action;
+ (unsigned long long)directionFromPoint:(struct CGPoint { double x0; double x1; })a0;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)convertFromResponder:(id)a0 toResponder:(id)a1;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1 context:(id)a2;
- (id)initWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 context:(id)a3;
- (void)setContextObject:(id)a0 forKey:(id)a1;

@end
