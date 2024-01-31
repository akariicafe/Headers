@class NSString;
@protocol GEOMapItemPhoto;

@interface GEOTooltip : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *actionLink;
@property (readonly, nonatomic) id<GEOMapItemPhoto> photo;

- (void).cxx_destruct;
- (id)initWithPDTooltip:(id)a0;

@end
