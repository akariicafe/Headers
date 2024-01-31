@class JFXARMetadataMediaReader, JFXDepthDataMediaReader;
@protocol JFXPlayableElement;

@interface JFXSharedMediaDataReaderManager : NSObject

@property (retain, nonatomic) id<JFXPlayableElement> playableElement;
@property (weak, nonatomic) JFXARMetadataMediaReader *weakSharedARMetadataReader;
@property (weak, nonatomic) JFXDepthDataMediaReader *weakSharedDepthDataReader;
@property (readonly, nonatomic) JFXARMetadataMediaReader *sharedARMetadataReader;
@property (readonly, nonatomic) JFXDepthDataMediaReader *sharedDepthDataReader;

- (void).cxx_destruct;
- (id)initWithPlayableElement:(id)a0;

@end
