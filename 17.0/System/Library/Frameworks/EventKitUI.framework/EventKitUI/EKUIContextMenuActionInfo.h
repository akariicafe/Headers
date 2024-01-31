@interface EKUIContextMenuActionInfo : NSObject {
    id /* block */ _selectionStateBlock;
}

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) BOOL showsInEditMenu;
@property (readonly, nonatomic) unsigned long long group;
@property (readonly, nonatomic) unsigned long long positionInGroup;
@property (readonly, nonatomic) id /* block */ shouldShowBlock;
@property (readonly, nonatomic) id /* block */ configureUIActionBlock;
@property (readonly, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id)initCalendarMenuPlaceholderInGroup:(unsigned long long)a0 positionInGroup:(unsigned long long)a1;
- (id)initWithAction:(unsigned long long)a0 showsInEditMenu:(BOOL)a1 group:(unsigned long long)a2 positionInGroup:(unsigned long long)a3 shouldShowBlock:(id /* block */)a4 configureUIActionBlock:(id /* block */)a5 actionBlock:(id /* block */)a6;

@end
