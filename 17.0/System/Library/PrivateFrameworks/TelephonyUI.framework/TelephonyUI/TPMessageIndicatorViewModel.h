@class TUHandle, NSString, NSUUID, NSURL;

@interface TPMessageIndicatorViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *mediaURL;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) TUHandle *fromHandle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } indicatorImageSize;
@property (readonly, nonatomic) NSUUID *messageUUID;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indicatorImageWithDefaultTintColor:(id)a0;
- (id)initWithDuration:(double)a0 identifier:(id)a1 mediaURL:(id)a2 thumbnailURL:(id)a3 isRead:(BOOL)a4 isSensitive:(BOOL)a5 isVideo:(BOOL)a6 fromHandle:(id)a7;

@end
