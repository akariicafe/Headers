@interface PRPosterEnvironmentContext : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, nonatomic) unsigned long long previewContent;
@property (readonly, nonatomic, getter=isSnapshot) BOOL snapshot;

- (id)initWithSettings:(id)a0;
- (id)initWithMode:(long long)a0 isPreview:(BOOL)a1 previewContent:(unsigned long long)a2 isSnapshot:(BOOL)a3;

@end
