@interface CMDiagramPointListItemL1Mapper : CMDiagramPointMapper {
    unsigned long long mListIndex;
}

- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 listIndex:(unsigned long long)a3 parent:(id)a4;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
