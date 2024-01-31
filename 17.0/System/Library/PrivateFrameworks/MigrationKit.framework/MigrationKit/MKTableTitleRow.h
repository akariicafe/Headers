@class NSString;

@interface MKTableTitleRow : MKTableRow {
    NSString *_title;
}

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)asciiRepresentationUsingColumns:(id)a0;
- (id)csvRepresentation;

@end
