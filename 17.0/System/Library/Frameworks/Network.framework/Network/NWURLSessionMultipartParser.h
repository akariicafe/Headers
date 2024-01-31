@class NWURLSessionMultipartPartBoundarySuffixRecognizer, NSString, NSMutableDictionary, NWURLSessionMultipartBoundaryRecognizer, NWURLSessionMultipartHeaderRecognizer, NSMutableArray, NSObject;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data, OS_dispatch_queue;

@interface NWURLSessionMultipartParser : NSObject {
    BOOL _isFirstBoundary;
    BOOL _didDeliverComplete;
    int _parserState;
    int _dispositionState;
    NSString *_boundary;
    id<NWURLSessionResponseConsumer> _responseConsumer;
    NSObject<OS_dispatch_data> *_data;
    NSMutableArray *_parts;
    NWURLSessionMultipartBoundaryRecognizer *_boundaryRecognizer;
    NWURLSessionMultipartHeaderRecognizer *_headerRecognizer;
    NWURLSessionMultipartPartBoundarySuffixRecognizer *_boundarySuffixRecognizer;
    NSMutableDictionary *_headers;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _boundaryPatternSize;
}

- (void).cxx_destruct;

@end
