@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}

- (BOOL)isInverted;
- (void)setIsInverted:(BOOL)a0;
- (BOOL)isContent;
- (void)setIsContent:(BOOL)a0;

@end
