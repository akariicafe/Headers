@class NSString;
@protocol PKAddPassesViewControllerDelegate;

@interface PKRemoteAddPassesViewController : _UIRemoteViewController <PKRemoteAddPassesViewControllerProtocol> {
    BOOL _finished;
}

@property (weak, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

@end
