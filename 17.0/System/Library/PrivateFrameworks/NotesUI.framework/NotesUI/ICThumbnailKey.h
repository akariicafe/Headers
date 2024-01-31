@class NSString, NSURL;

@interface ICThumbnailKey : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ accountId;
    void /* unknown type, empty encoding */ objectId;
    void /* unknown type, empty encoding */ thumbnailId;
}

@property (class, nonatomic, readonly) NSString *recentObjectId;

@property (nonatomic, readonly) NSString *accountId;
@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) NSString *thumbnailId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSURL *containerUrl;
@property (nonatomic, readonly) NSURL *descriptionUrl;
@property (nonatomic, readonly) NSURL *imageUrl;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithType:(long long)a0 accountId:(id)a1 objectId:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(unsigned long long)a5;
- (id)initWithAccountId:(id)a0 objectId:(id)a1;
- (id)initWithAccountId:(id)a0 objectId:(id)a1 thumbnailId:(id)a2;
- (id)initWithType:(long long)a0 accountId:(id)a1 objectId:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(unsigned long long)a5 isRTL:(BOOL)a6 contentSizeCategory:(id)a7 hasBoldText:(BOOL)a8 hasButtonShapes:(BOOL)a9 hasDarkerSystemColors:(BOOL)a10 hasBorder:(BOOL)a11;
- (id)initWithType:(long long)a0 accountId:(id)a1 objectId:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 traitCollection:(id)a4;

@end
