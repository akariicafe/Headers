@class NSString;

@interface SBDisplayPowerLogEntry : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long windowingMode;
@property (nonatomic) unsigned long long zoomLevel;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } nativeSize;

+ (id)forDisplay:(id)a0 mode:(unsigned long long)a1 zoom:(unsigned long long)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)logPayload;

@end
