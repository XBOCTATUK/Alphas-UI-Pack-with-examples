#include <Geode/Geode.hpp>
#include "API.hpp"

using namespace geode::prelude;
using namespace alpha::prelude;

CursorManager* CursorManager::get() {
    static auto instance = new CursorManager();
    return instance;
}

bool CursorManager::isMouseInWindow() {
    return false;
}

void CursorManager::init() {

}

void CursorManager::setCursor(Cursor cursor) {

}

void CursorManager::resetCursor() {

}

void CursorManager::update(float dt) {

}