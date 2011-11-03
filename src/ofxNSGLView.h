#pragma once

#import <Cocoa/Cocoa.h>
#import <QuartzCore/CVDisplayLink.h>

@interface ofxNSGLView : NSOpenGLView {
	CVDisplayLinkRef displayLink;
}

- (void)setup;
- (void)update;
- (void)draw;
- (void)exit;

- (void)onKeyPressed:(int)key;
- (void)onKeyReleased:(int)key;
- (void)onMouseMoved:(NSPoint)p;
- (void)onMouseDragged:(NSPoint)p button:(int)button;
- (void)onMousePressed:(NSPoint)p button:(int)button;
- (void)onMouseReleased:(NSPoint)p button:(int)button;
- (void)onWindowResized:(NSSize)size;

@end
