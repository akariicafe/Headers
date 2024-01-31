@class NSString, UIImage;
@protocol NSCopying;

@interface PKPayLaterImageRow : NSObject <PKPayLaterCollectionViewRow> {
    UIImage *_image;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentEdgeInsets;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;

@end
