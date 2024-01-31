@class BMStreamBase, NSString, BMSource, BMPruner;

@interface _WBSBiomeStream : NSObject {
    BMStreamBase *_stream;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMSource *source;
@property (readonly, nonatomic) BMPruner *pruner;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_fetchStream;

@end
