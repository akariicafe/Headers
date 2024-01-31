@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}

- (void).cxx_destruct;
- (id)connectionLineLayout;
- (void)updateFromLayout;
- (BOOL)shouldSetPathSourceWhenChangingInfoGeometry;

@end
