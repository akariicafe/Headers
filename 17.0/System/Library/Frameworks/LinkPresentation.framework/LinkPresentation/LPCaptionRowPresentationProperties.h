@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}

@property (readonly, nonatomic) BOOL hasAnyContent;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *leading;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;

- (id)left;
- (id)init;
- (id)right;
- (void).cxx_destruct;
- (void)applyToAllCaptions:(id /* block */)a0;

@end
