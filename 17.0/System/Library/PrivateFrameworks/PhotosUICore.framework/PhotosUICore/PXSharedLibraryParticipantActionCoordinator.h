@class UIViewController;
@protocol PXSharedLibraryParticipant, PXSharedLibrary;

@interface PXSharedLibraryParticipantActionCoordinator : NSObject {
    id<PXSharedLibrary> _sharedLibrary;
    UIViewController *_actionViewController;
}

@property (readonly, nonatomic) id<PXSharedLibraryParticipant> participant;
@property (readonly, nonatomic) UIViewController *actionViewController;

- (void).cxx_destruct;
- (void)_removeParticipant:(id)a0;
- (void)_resendInvitation:(id)a0;
- (id)initWithParticipant:(id)a0 sharedLibrary:(id)a1;

@end
