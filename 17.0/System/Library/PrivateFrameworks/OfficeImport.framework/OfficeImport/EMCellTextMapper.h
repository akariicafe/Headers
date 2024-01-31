@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper {
    EDString *edString;
    EDStyle *edStyle;
}

+ (double)contentWidthForString:(id)a0 style:(id)a1;

- (void).cxx_destruct;
- (double)contentWidth;
- (id)initWithEDString:(id)a0 style:(id)a1 parent:(id)a2;
- (void)mapAt:(id)a0 withState:(id)a1 columnWidth:(double)a2 height:(double)a3 spreadLeft:(BOOL)a4;
- (void)mapTextRunsAt:(id)a0;
- (void)mapVerticalTextAt:(id)a0 withState:(id)a1 width:(double)a2 height:(double)a3;

@end
