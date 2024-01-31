@class NSString, NSData, QLItem;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {
    NSData *_data;
}

@property (readonly, nonatomic) QLItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideDataForItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 contentType:(id)a1 previewTitle:(id)a2;

@end
