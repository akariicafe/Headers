@class NSString, VKImageSourceKey;

@interface VKLabelMarkerShield : NSObject {
    VKImageSourceKey *_imageKey;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } color;

- (void).cxx_destruct;
- (id)initWithImageKey:(id)a0;

@end
