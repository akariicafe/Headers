@class _SWCollaborationButtonView, SFCollaborationUnifiedBarItemView;

@interface SFCollaborationUnifiedBarItem : SFUnifiedBarItem {
    SFCollaborationUnifiedBarItemView *_view;
}

@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;

- (id)init;
- (id)view;
- (void).cxx_destruct;

@end
