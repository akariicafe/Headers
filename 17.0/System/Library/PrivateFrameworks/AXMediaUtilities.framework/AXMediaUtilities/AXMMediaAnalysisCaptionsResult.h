@class NSArray;

@interface AXMMediaAnalysisCaptionsResult : NSObject <NSSecureCoding> {
    NSArray *_imageCaptionResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *imageCaptionResults;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setImageCaptionResults:(id)a0;

@end
