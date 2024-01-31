@class NSURL;

@interface _QuickLook_SwiftUI.QLPreviewItemContainer : NSObject <QLPreviewItem> {
    void /* unknown type, empty encoding */ previewItemURL;
}

@property (nonatomic, copy) NSURL *previewItemURL;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
