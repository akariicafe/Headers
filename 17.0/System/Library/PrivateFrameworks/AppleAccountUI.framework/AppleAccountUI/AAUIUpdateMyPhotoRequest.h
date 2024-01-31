@class UIImage, NSValue, ACAccount;

@interface AAUIUpdateMyPhotoRequest : AARequest {
    ACAccount *_account;
}

@property (readonly, nonatomic) UIImage *photo;
@property (readonly, nonatomic) NSValue *cropRect;

+ (id)_downsampleImage:(id)a0 fromStartingQuality:(double)a1 toEndingQuality:(double)a2 increment:(double)a3 maxLength:(unsigned long long)a4;
+ (id)_fullScreen2ImageFromImage:(id)a0 cropRect:(id)a1 fullScreenCropRect:(id *)a2;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 photo:(id)a1 cropRect:(id)a2;

@end
