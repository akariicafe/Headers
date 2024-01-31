@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
    BOOL mPlaceholder;
    BOOL mHomePlate;
}

- (void)setIsPlaceholder:(BOOL)a0;
- (void)setIsHomePlate:(BOOL)a0;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
