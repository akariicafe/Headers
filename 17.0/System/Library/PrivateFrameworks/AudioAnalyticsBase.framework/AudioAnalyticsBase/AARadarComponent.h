@class NSString;

@interface AARadarComponent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long identifier;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(id)a1 identifier:(long long)a2;
- (id)asRadarDraft;

@end
