@class NSData, NSString;
@protocol VIImageContent;

@interface VIUserFeedback : NSObject <NSCopying>

@property (readonly, nonatomic) id<VIImageContent> image;
@property (readonly, copy, nonatomic) NSData *userFeedbackPayload;
@property (readonly, copy, nonatomic) NSData *sfReportData;
@property (readonly, copy, nonatomic) NSString *reportIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 userFeedbackPayload:(id)a1 sfReportData:(id)a2 reportIdentifier:(id)a3;
- (id)initWithImage:(id)a0 payload:(id)a1 reportIdentifier:(id)a2;

@end
