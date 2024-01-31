@class NSMutableSet;
@protocol _UINavigationBarTitleRenamerDelegate;

@interface _UINavigationBarTitleRenamer : NSObject {
    struct { unsigned char allowsMultipleSessions : 1; } _flags;
}

@property (readonly, nonatomic) NSMutableSet *trackedSessions;
@property (weak, nonatomic) id<_UINavigationBarTitleRenamerDelegate> delegate;

+ (id)renameServer;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)endSession:(id)a0;
- (id)sessionWithIdentifier:(id)a0;
- (void)_sessionTextFieldDidEndEditing:(id)a0;
- (void)_session:(id)a0 fileRenameDidEnd:(id)a1;
- (void)_session:(id)a0 fileRenameDidFail:(id)a1;
- (BOOL)_session:(id)a0 textFieldShouldEndRenamingWithTitle:(id)a1;
- (id)_session:(id)a0 textFieldWillBeginRenamingWithTitle:(id)a1 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)_sessionDidCancel:(id)a0;
- (void)sceneWillDeactivateNotification:(id)a0;
- (void)startSession:(id)a0;

@end
