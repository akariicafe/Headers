@class NSSet, NSString;

@interface THAController : NSObject

@property (retain, nonatomic) NSSet *selectedButtons;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int identifier;
@property (nonatomic) unsigned long long ticksPerSecond;
@property (nonatomic) BOOL supportsSiri;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL selected;

+ (id)selectButtonConfiguration:(id)a0 supportsSiri:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)dispatchButtonEvent:(id)a0;
- (id)initWithName:(id)a0 identifier:(unsigned int)a1 ticksPerSecond:(unsigned long long)a2 supportedButtons:(id)a3 supportsSiri:(BOOL)a4;
- (void)updateSelectedButtons:(id)a0;

@end
