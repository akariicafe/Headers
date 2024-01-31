@class NSString;

@interface _UICommandMenuDeletion : _UICommandChange

@property (readonly, nonatomic) NSString *anchor;

+ (id)deletionWithAnchor:(id)a0;

- (id)initWithAnchor:(id)a0;
- (BOOL)acceptBoolItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (void)acceptItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;

@end
