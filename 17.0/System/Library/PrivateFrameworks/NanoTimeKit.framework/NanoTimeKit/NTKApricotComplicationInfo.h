@class NSString;

@interface NTKApricotComplicationInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *localizedDisplayName;
@property (retain, nonatomic) NSString *localizedAppName;

- (id)_init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppName:(id)a0 displayName:(id)a1;

@end
