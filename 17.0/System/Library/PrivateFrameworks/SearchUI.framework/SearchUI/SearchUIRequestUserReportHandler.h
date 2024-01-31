@interface SearchUIRequestUserReportHandler : SearchUICommandHandler

+ (id)createUserReportViewControllerWith:(id)a0 rowModel:(id)a1 environment:(id)a2;
+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)contextMenu;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (BOOL)prefersContextMenu;
- (BOOL)prefersModalPresentation;

@end
