@interface WebScriptObjectPrivate : NSObject {
    void *imp;
    void *rootObject;
    void *originRootObject;
    BOOL isCreatedByDOMWrapper;
}

@end
