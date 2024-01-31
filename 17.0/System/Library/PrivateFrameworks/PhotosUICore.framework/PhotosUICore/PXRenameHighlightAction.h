@class NSString, PHPhotosHighlight, PHObjectPlaceholder;

@interface PXRenameHighlightAction : PXPhotosAction

@property (readonly, nonatomic) PHPhotosHighlight *originalHighlight;
@property (readonly, copy, nonatomic) NSString *redoVerboseSmartDescription;
@property (readonly, copy, nonatomic) NSString *undoVerboseSmartDescription;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithHighlight:(id)a0 verboseSmartDescription:(id)a1;
- (void)performUndo:(id /* block */)a0;

@end
