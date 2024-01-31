@class NSString;
@protocol IKJSDataObserving;

@interface _IKJSDataObserverRecord : NSObject {
    struct { BOOL hasDidChangePropertyPath; } _observerFlags;
}

@property (readonly, weak, nonatomic) id<IKJSDataObserving> observer;
@property (readonly, nonatomic) NSString *observerHash;
@property (readonly, nonatomic) NSString *pathString;

+ (id)hashForObserver:(id)a0;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 pathString:(id)a1;
- (BOOL)isAffectedByPropertyPathWithString:(id)a0 subpathString:(id *)a1;

@end
