@class PKInk, NSString;

@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKInkChooserUserInterfaceItem>

@property (retain, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
