@interface HealthExperienceUI.HealthImageActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ thumbnailImage;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;

@end
